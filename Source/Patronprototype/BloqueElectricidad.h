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
	// Sistema de partículas para efectos visuales eléctricos
	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* ParticleSystem;

public:
	// Constructor
	ABloqueElectricidad();

	// Voltaje del bloque eléctrico
	UPROPERTY(EditAnywhere, Category = "Electricidad")
	float Voltaje;

	// Clonación basada en el patrón Prototype
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
};
