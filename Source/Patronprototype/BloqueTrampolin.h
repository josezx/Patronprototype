// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueTrampolin.generated.h"

/**
 * 
 */
UCLASS()
class PATRONPROTOTYPE_API ABloqueTrampolin : public ABloque
{
	GENERATED_BODY()
protected:
	// Sistema de partículas para representar efecto visual de rebote
	UPROPERTY(VisibleAnywhere, Category = "Trampolin")
	UParticleSystemComponent* ParticleSystem;

public:
	// Constructor
	ABloqueTrampolin();

	// Potencia de rebote que aplica el trampolín
	UPROPERTY(EditAnywhere, Category = "Trampolin")
	float Rebote;

	// Método Prototype para clonar el bloque
	//virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
};
