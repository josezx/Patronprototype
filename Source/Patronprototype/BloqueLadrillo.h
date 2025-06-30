// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueLadrillo.generated.h"

/**
 * 
 */
UCLASS()
class PATRONPROTOTYPE_API ABloqueLadrillo : public ABloque
{
	GENERATED_BODY()
public:
	// Constructor
	ABloqueLadrillo();

	// Efecto visual de part�culas de polvo
	UPROPERTY(VisibleAnywhere, Category = "Ladrillo")
	UParticleSystemComponent* ParticulasPolvo;

	// Resistencia del ladrillo (puede usarse para destrucci�n condicional)
	UPROPERTY(EditAnywhere, Category = "Ladrillo")
	int Resistencia;

	// Clonaci�n basada en patr�n Prototype
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
};
