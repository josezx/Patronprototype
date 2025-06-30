// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueAcero.generated.h"

/**
 * 
 */
UCLASS()
class PATRONPROTOTYPE_API ABloqueAcero : public ABloque
{
	GENERATED_BODY()
protected:
	UParticleSystemComponent* ParticleSystem;

public:
	//constructor
	ABloqueAcero();

	// propiedades
	UPROPERTY(EditAnywhere, Category = "Acero")
	float Resistencia;

	// Método para clonar este bloque (patrón Prototype)
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
};
