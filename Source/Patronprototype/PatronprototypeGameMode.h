// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Bloque.h"
#include "GestorDePrototipos.h"
#include "PatronprototypeGameMode.generated.h"
UCLASS(minimalapi)
class APatronprototypeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APatronprototypeGameMode();
	void BeginPlay();
public:

	// =========================
	// LABERINTO
	// =========================

	// Dimensiones del mapa
	int TColumnas;
	int TFilas;

	// Representación lógica del laberinto
	TArray<TArray<int>> MapaLaberinto;

	// Referencias a los bloques generados
	UPROPERTY()
	TArray<ABloque*> BloquesA;

	// Mapa que asocia tipos de bloques con sus prototipos (para clonado)
	UPROPERTY()
	TMap<int, AActor*> MapaPrototipos;

	// Gestor de prototipos (Prototype Pattern)
	UPROPERTY()
	AGestorDePrototipos* Gestor;

	// Funciones del sistema de laberinto
	void ObtenerMapa();
	void ObtenerLaberinto();
	void InicializarPrototype();
	void ClonarBloques(int InTFilas, int InTColumnas);
	// =========================
		// POSICION DEL JUGADOR
		// =========================

		// Celdas vacías útiles para colocar al jugador 
	TArray<FVector> PuntosPatrullaLibres;

	// Posiciona al jugador en una celda válida aleatoriamente 
	void PosicionarJugadorAleatoriamente();

	//Temporizador para esperar a que el mapa esté listo antes de colocar al jugador 
	FTimerHandle TimerPosicion;
public:
	const TArray<FVector>& GetPuntosPatrulla() const { return PuntosPatrullaLibres; }
};



