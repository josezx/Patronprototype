// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueElectricidad.generated.h"

/**
 * 
 */
UCLASS()
class PATRONPROTOTYPE_API ABloqueElectricidad : public ABloque
{
	GENERATED_BODY()
protected:
	// Sistema de part�culas para efectos visuales el�ctricos
	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* ParticleSystem;

public:
	// Constructor
	ABloqueElectricidad();

	// Voltaje del bloque el�ctrico
	UPROPERTY(EditAnywhere, Category = "Electricidad")
	float Voltaje;

	// Clonaci�n basada en el patr�n Prototype
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
};
