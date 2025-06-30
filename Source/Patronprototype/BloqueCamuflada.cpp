	// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueCamuflada.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"

#include "BloqueAcero.h"
#include "BloqueHielo.h"
#include "BloqueFuego.h"
#include "BloqueElectricidad.h"
#include "BloqueTrampolin.h"

ABloqueCamuflada::ABloqueCamuflada()
{
	PrimaryActorTick.bCanEverTick = true;

	// Cargar partícula de explosión
	static ConstructorHelpers::FObjectFinder<UParticleSystem> FX(TEXT("/Game/StarterContent/Particles/P_Explosion.P_Explosion"));
	if (FX.Succeeded()) FXExplosion = FX.Object;

	// Cargar sonido
	static ConstructorHelpers::FObjectFinder<USoundBase> Sonido(TEXT("/Game/StarterContent/Audio/Explosion_-_Sound_Effect.Explosion_-_Sound_Effect"));
	if (Sonido.Succeeded()) SonidoExplosion = Sonido.Object;

	// Configurar colisión
	Mesh->SetGenerateOverlapEvents(true);
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Mesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	Mesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	Mesh->OnComponentBeginOverlap.AddDynamic(this, &ABloqueCamuflada::AlColisionar);

	// Luz sospechosa (desactivada por defecto si quieres)
	LuzSospechosa = CreateDefaultSubobject<UPointLightComponent>(TEXT("LuzSospechosa"));
	LuzSospechosa->SetupAttachment(Mesh);
	LuzSospechosa->SetIntensity(500.0f);
	LuzSospechosa->SetLightColor(FLinearColor::Red);
	LuzSospechosa->SetAttenuationRadius(200.f);
	LuzSospechosa->SetVisibility(true);

	// Texto flotante
	TextoCamuflado = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextoCamuflado"));
	TextoCamuflado->SetupAttachment(RootComponent);
	TextoCamuflado->SetText(FText::FromString("Bloque Camuflado"));
	TextoCamuflado->SetTextRenderColor(FColor::Red);
	TextoCamuflado->SetHorizontalAlignment(EHTA_Center);
	TextoCamuflado->SetWorldSize(20.0f);
	TextoCamuflado->SetRelativeLocation(FVector(0.0f, 0.0f, 150.0f));
	TextoCamuflado->SetVisibility(true);
}

void ABloqueCamuflada::BeginPlay()
{
	Super::BeginPlay();
}

void ABloqueCamuflada::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	for (IObservadorBomba* Obs : Observadores)
	{
		AActor* Actor = Cast<AActor>(Obs);
		if (!Actor) continue;

		FVector posJugador = Actor->GetActorLocation();
		FVector posBloque = GetActorLocation();

		// Conversión a coordenadas de celda
		int celdaJugadorX = FMath::RoundToInt(posJugador.X / 1000.f);
		int celdaJugadorY = FMath::RoundToInt(posJugador.Y / 1000.f);
		int celdaBloqueX = FMath::RoundToInt(posBloque.X / 1000.f);
		int celdaBloqueY = FMath::RoundToInt(posBloque.Y / 1000.f);

		int distanciaCeldas = FMath::Abs(celdaJugadorX - celdaBloqueX) + FMath::Abs(celdaJugadorY - celdaBloqueY);
		NotificarTodos((float)distanciaCeldas);

		// Mostrar alerta visual si está cerca
		if (distanciaCeldas <= 10)
		{
			FColor colorTexto = FColor::Green;
			if (distanciaCeldas <= 3) colorTexto = FColor::Red;
			else if (distanciaCeldas <= 7) colorTexto = FColor::Yellow;

			FString Mensaje = FString::Printf(TEXT("🔍 Distancia al bloque bomba: %d celdas"), distanciaCeldas);
			FVector PosTexto = posBloque + FVector(0, 0, 150);

			DrawDebugString(GetWorld(), PosTexto, Mensaje, nullptr, colorTexto, 0.1f, false, 0.7f);
		}
	}
}

void ABloqueCamuflada::AlColisionar(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		if (APawn* Jugador = Cast<APawn>(OtherActor))
		{
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("¡Oh! Has activado un bloque bomba, ¡JAJA!"));
			Detonar();
		}
	}
}

void ABloqueCamuflada::Suscribir(IObservadorBomba* NuevoObservador)
{
	if (NuevoObservador && !Observadores.Contains(NuevoObservador))
	{
		Observadores.Add(NuevoObservador);
	}
}

void ABloqueCamuflada::NotificarTodos(float Distancia)
{
	for (IObservadorBomba* Obs : Observadores)
	{
		if (Obs)
		{
			Obs->actualizar(Distancia);
		}
	}
}

void ABloqueCamuflada::IniciarDecoracion(ABloque* BloqueOriginal)
{
	BloqueDecorado = BloqueOriginal;
	if (!BloqueDecorado) return;

	SetActorTransform(BloqueDecorado->GetActorTransform());
	SetActorScale3D(BloqueDecorado->GetActorScale3D());
	Mesh->SetStaticMesh(BloqueDecorado->GetMesh()->GetStaticMesh());
	Mesh->SetMaterial(0, BloqueDecorado->GetMesh()->GetMaterial(0));

	// Copiar atributos según tipo
	if (Cast<ABloqueAcero>(BloqueOriginal)) { Destroy(); return; }

	if (ABloqueHielo* H = Cast<ABloqueHielo>(BloqueOriginal)) Congelamiento = H->Congelamiento;
	else if (ABloqueFuego* F = Cast<ABloqueFuego>(BloqueOriginal)) Danio = F->Danio;
	else if (ABloqueElectricidad* E = Cast<ABloqueElectricidad>(BloqueOriginal)) Voltaje = E->Voltaje;
	else if (ABloqueTrampolin* T = Cast<ABloqueTrampolin>(BloqueOriginal)) Rebote = T->Rebote;
}

void ABloqueCamuflada::Detonar()
{
	if (FXExplosion) UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), FXExplosion, GetActorLocation());
	if (SonidoExplosion) UGameplayStatics::PlaySoundAtLocation(GetWorld(), SonidoExplosion, GetActorLocation());

	Destroy();
}
AActor* ABloqueCamuflada::Clonar(UWorld* Mundo, const FVector& Posicion) const
{
	ABloqueCamuflada* Clon = Mundo->SpawnActor<ABloqueCamuflada>(GetClass(), Posicion, FRotator::ZeroRotator);
	if (Clon && BloqueDecorado)
	{
		Clon->IniciarDecoracion(BloqueDecorado);
	}
	return Clon;
}