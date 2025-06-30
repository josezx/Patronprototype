// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueToxico.generated.h"

/**
 * 
 */
UCLASS()
class PATRONPROTOTYPE_API ABloqueToxico : public ABloque
{
	GENERATED_BODY()
protected:
	// Sistema de partículas para representar toxicidad visualmente
	UPROPERTY(VisibleAnywhere, Category = "Toxico")
	class UParticleSystemComponent* SistemaParticulas;

public:
	// Constructor
	ABloqueToxico();

	// Nivel de toxicidad (puede afectar al jugador si se implementa)
	UPROPERTY(EditAnywhere, Category = "Toxico")
	float NivelToxicidad;

	// Método Prototype para clonar el bloque
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
};
