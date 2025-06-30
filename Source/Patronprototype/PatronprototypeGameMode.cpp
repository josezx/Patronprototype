// Copyright Epic Games, Inc. All Rights Reserved.

#include "PatronprototypeGameMode.h"
#include "PatronprototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "GestorDePrototipos.h"
#include "BloqueFuego.h"
#include "BloqueElectricidad.h"
#include "BloqueExplosivo.h"
#include "BloqueHielo.h"
#include "BloqueTrampolin.h"
#include "BloqueMadera.h"
#include "BloqueLadrillo.h"
#include "BloqueConcreto.h"
#include "BloqueToxico.h"
#include "BloqueCamuflada.h"
#include "BloqueAcero.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "DrawDebugHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"


APatronprototypeGameMode::APatronprototypeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
void APatronprototypeGameMode::BeginPlay()
{
	Super::BeginPlay();

	ObtenerMapa();
	ObtenerLaberinto();
	Gestor = GetWorld()->SpawnActor<AGestorDePrototipos>();
	InicializarPrototype();
	ClonarBloques(TFilas, TColumnas);

	// suscripcion del character  como observador a los bloques camuflados
	APawn* Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (Jugador)
	{
		IObservadorBomba* Observador = Cast<IObservadorBomba>(Jugador);
		for (ABloque* Bloque : BloquesA)
		{
			ABloqueCamuflada* Camuflada = Cast<ABloqueCamuflada>(Bloque);
			if (Camuflada && Observador)
			{
				Camuflada->Suscribir(Observador);
			}
		}
	}

	GetWorld()->GetTimerManager().SetTimer(TimerPosicion, this, &APatronprototypeGameMode::PosicionarJugadorAleatoriamente, 0.1f, false);
}

void APatronprototypeGameMode::ObtenerMapa()
{
	int Columnas = 50;
	int Filas = 50;

	TColumnas = Columnas + 1;
	TFilas = Filas + 1;

	MapaLaberinto.SetNum(TFilas);
	for (int Y = 0; Y < TFilas; Y++)
	{
		MapaLaberinto[Y].SetNum(TColumnas);
		for (int X = 0; X < TColumnas; X++)
		{
			int Mitad = TColumnas / 2;
			if (X >= Mitad)
			{
				if (X == Mitad || X == TColumnas - 1 || Y == 0 || Y == TFilas - 1)
				{
					MapaLaberinto[Y][X] = 1;
				}
				else
				{
					MapaLaberinto[Y][X] = -1;
				}
			}
			else
			{
				MapaLaberinto[Y][X] = -2;
			}
		}
	}

	TSet<FIntPoint> Visitadas;
	TArray<FIntPoint> Pila;
	auto Direcciones = { FIntPoint(0, -2), FIntPoint(0, 2), FIntPoint(-2, 0), FIntPoint(2, 0) };
	auto Valido = [&](int X, int Y) -> bool
		{
			return X > Columnas / 2 && Y > 0 && X < Columnas && Y < Filas;
		};

	FIntPoint Inicio(Columnas / 2 + 1, 1);
	Pila.Push(Inicio);
	MapaLaberinto[Inicio.Y][Inicio.X] = 0;
	Visitadas.Add(Inicio);

	while (Pila.Num() > 0)
	{
		FIntPoint Actual = Pila.Top();
		TArray<FIntPoint> Vecinos;

		for (FIntPoint Dir : Direcciones)
		{
			FIntPoint Nuevo = Actual + Dir;
			if (Valido(Nuevo.X, Nuevo.Y) && !Visitadas.Contains(Nuevo))
			{
				Vecinos.Add(Nuevo);
			}
		}

		if (Vecinos.Num() > 0)
		{
			FIntPoint Elegido = Vecinos[FMath::RandRange(0, Vecinos.Num() - 1)];
			int MidX = (Actual.X + Elegido.X) / 2;
			int MidY = (Actual.Y + Elegido.Y) / 2;

			MapaLaberinto[Elegido.Y][Elegido.X] = 0;
			MapaLaberinto[MidY][MidX] = 0;

			Pila.Push(Elegido);
			Visitadas.Add(Elegido);
		}
		else
		{
			Pila.Pop();
		}
	}

	for (int Y = 1; Y < TFilas - 1; Y++)
	{
		for (int X = Columnas / 2 + 1; X < TColumnas - 1; X++)
		{
			if (MapaLaberinto[Y][X] == -1)
			{
				MapaLaberinto[Y][X] = FMath::RandRange(1, 10);
			}
		}
	}

	MapaLaberinto[1][Columnas / 2] = 0;
	MapaLaberinto[TFilas - 2][TColumnas - 2] = 0;
}

void APatronprototypeGameMode::ObtenerLaberinto()
{
	float Espaciado = 1000.0f;

	for (int Y = 0; Y < MapaLaberinto.Num(); ++Y)
	{
		for (int X = TColumnas / 2; X < MapaLaberinto[Y].Num(); ++X)
		{
			int Tipo = MapaLaberinto[Y][X];

			if (Tipo == 0)
			{
				FVector PosicionLibre = FVector(X * Espaciado, Y * Espaciado, 0.0f);
				PuntosPatrullaLibres.Add(PosicionLibre);
				continue;
			}

			FVector Posicion = FVector(X * Espaciado, Y * Espaciado, 0.0f);
			FRotator Rotacion = FRotator::ZeroRotator;
			TSubclassOf<AActor> ClaseBloque = nullptr;

			switch (Tipo)
			{
			case 1: ClaseBloque = ABloqueAcero::StaticClass(); break;
			case 2: ClaseBloque = ABloqueLadrillo::StaticClass(); break;
			case 3: ClaseBloque = ABloqueConcreto::StaticClass(); break;
			case 4: ClaseBloque = ABloqueMadera::StaticClass(); break;
			case 5: ClaseBloque = ABloqueFuego::StaticClass(); break;
			case 6: ClaseBloque = ABloqueHielo::StaticClass(); break;
			case 7: ClaseBloque = ABloqueElectricidad::StaticClass(); break;
			case 8: ClaseBloque = ABloqueTrampolin::StaticClass(); break;
			case 9: ClaseBloque = ABloqueExplosivo::StaticClass(); break;
			case 10: ClaseBloque = ABloqueToxico::StaticClass(); break;


			default: break;
			}

			if (ClaseBloque)
			{
				ABloque* BloqueSpawned = GetWorld()->SpawnActor<ABloque>(ClaseBloque, Posicion, Rotacion);

				if (BloqueSpawned)
				{
					bool EsAcero = BloqueSpawned->IsA(ABloqueAcero::StaticClass());
					bool EsCamuflada = FMath::RandRange(0, 100) < 10; // 10% probabilidad

					if (!EsAcero && EsCamuflada)
					{
						ABloqueCamuflada* BloqueCamuflada = GetWorld()->SpawnActor<ABloqueCamuflada>(ABloqueCamuflada::StaticClass(), Posicion, Rotacion);
						if (BloqueCamuflada)
						{
							BloqueCamuflada->IniciarDecoracion(BloqueSpawned);
							BloqueSpawned->Destroy();
							BloquesA.Add(BloqueCamuflada);
						}
					}
					else
					{
						BloquesA.Add(BloqueSpawned);
					}
				}
			}
		}
	}
}

void APatronprototypeGameMode::InicializarPrototype()
{
	auto RegistrarPrototipo = [&](int Tipo, TSubclassOf<AActor> Clase)
		{
			TArray<AActor*> Resultados;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), Clase, Resultados);
			if (Resultados.Num() > 0)
			{
				ICloneable* Interfaz = Cast<ICloneable>(Resultados[0]);
				if (Interfaz)
				{
					Gestor->RegistrarPrototipo(Tipo, Interfaz);
				}
			}
		};

	RegistrarPrototipo(1, ABloqueAcero::StaticClass());
	RegistrarPrototipo(2, ABloqueLadrillo::StaticClass());
	RegistrarPrototipo(3, ABloqueConcreto::StaticClass());
	RegistrarPrototipo(4, ABloqueMadera::StaticClass());
	RegistrarPrototipo(5, ABloqueFuego::StaticClass());
	RegistrarPrototipo(6, ABloqueHielo::StaticClass());
	RegistrarPrototipo(7, ABloqueElectricidad::StaticClass());
	RegistrarPrototipo(8, ABloqueTrampolin::StaticClass());
	RegistrarPrototipo(9, ABloqueExplosivo::StaticClass());
	RegistrarPrototipo(10, ABloqueToxico::StaticClass());
}
void APatronprototypeGameMode::ClonarBloques(int InTFilas, int InTColumnas)
{
	float TamanioCelda = 1000.f;
	int Mitad = TColumnas / 2;

	// Clonar bloques sólidos (valores 1 a 10)
	for (int Y = 0; Y < InTFilas; Y++)
	{
		for (int X = Mitad; X < InTColumnas; X++)
		{
			int TipoBloque = MapaLaberinto[Y][X];
			if (TipoBloque <= 0) continue; // Ignora celdas vacías o borde

			int XReflejado = Mitad - (X - Mitad);
			FVector PosClonada = FVector(XReflejado * TamanioCelda, Y * TamanioCelda, 40.f);

			if (Gestor)
			{
				AActor* Clon = Gestor->ClonarPrototipo(TipoBloque, GetWorld(), PosClonada);
				if (Clon)
				{
					MapaLaberinto[Y][XReflejado] = TipoBloque;
					UE_LOG(LogTemp, Warning, TEXT("Clonado bloque tipo %d en X:%d Y:%d"), TipoBloque, XReflejado, Y);
				}
			}
		}
	}

	// Reflejo de celdas vacías (valor 0) para permitir posicionar al jugador
	for (int Y = 0; Y < InTFilas; Y++)
	{
		for (int X = Mitad; X < InTColumnas; X++)
		{
			if (MapaLaberinto[Y][X] == 0)
			{
				int XReflejado = Mitad - (X - Mitad);
				MapaLaberinto[Y][XReflejado] = 0;
				FVector PosClonada = FVector(XReflejado * TamanioCelda, Y * TamanioCelda, 0.f);
				PuntosPatrullaLibres.Add(PosClonada);
			}
		}
	}
}
void APatronprototypeGameMode::PosicionarJugadorAleatoriamente()
{
	TArray<FVector> PosicionesOriginal;
	TArray<FVector> PosicionesClonadas;

	float Espaciado = 1000.0f;
	int NumFilas = MapaLaberinto.Num();
	int NumColumnas = MapaLaberinto[0].Num();
	int Mitad = NumColumnas / 2;

	// Recorrer toda la matriz
	for (int Y = 1; Y < NumFilas - 1; ++Y)
	{
		for (int X = 1; X < NumColumnas - 1; ++X)
		{
			if (MapaLaberinto[Y][X] == 0)
			{
				FVector Pos = FVector(X * Espaciado, Y * Espaciado, 150.0f);

				if (X < Mitad)  // Lado izquierdo (clonado)
					PosicionesClonadas.Add(Pos);
				else            // Lado derecho (original)
					PosicionesOriginal.Add(Pos);
			}
		}
	}

	TArray<FVector>* Seleccionadas = nullptr;

	// Decidir aleatoriamente de qué lado elegir (50/50)
	if (FMath::RandBool())
		Seleccionadas = &PosicionesOriginal;
	else
		Seleccionadas = &PosicionesClonadas;

	if (Seleccionadas && Seleccionadas->Num() > 0)
	{
		FVector PosicionElegida = (*Seleccionadas)[FMath::RandRange(0, Seleccionadas->Num() - 1)];

		APawn* Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		if (Jugador)
		{
			ACharacter* JugadorChar = Cast<ACharacter>(Jugador);
			if (JugadorChar && JugadorChar->GetCapsuleComponent())
			{
				PosicionElegida.Z = JugadorChar->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
			}

			Jugador->SetActorLocation(PosicionElegida);

			FString Lado = (Seleccionadas == &PosicionesOriginal) ? TEXT("original (derecha)") : TEXT("clonado (izquierda)");
			UE_LOG(LogTemp, Warning, TEXT("Jugador posicionado en el lado %s en: %s"), *Lado, *PosicionElegida.ToString());
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Jugador en lado %s"), *Lado));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No hay posiciones válidas en el lado seleccionado."));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No hay posiciones válidas para el jugador."));
	}
}