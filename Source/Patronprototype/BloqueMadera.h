// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueMadera.generated.h"

/**
 * 
 */
UCLASS()
class PATRONPROTOTYPE_API ABloqueMadera : public ABloque
{
	GENERATED_BODY()
protected:
	// Componente opcional para part�culas (no usado actualmente)
	UPROPERTY()
	UParticleSystemComponent* ParticleSystem;

public:
	// Constructor
	ABloqueMadera();

	// Resistencia del bloque de madera
	UPROPERTY(EditAnywhere, Category = "Madera")
	float Resistencia;

	// M�todo Prototype para clonar el bloque
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
};
