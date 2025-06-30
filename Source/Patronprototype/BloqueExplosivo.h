// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueExplosivo.generated.h"

/**
 * 
 */
UCLASS()
class PATRONPROTOTYPE_API ABloqueExplosivo : public ABloque
{
	GENERATED_BODY()
private:
	// Efecto visual previo a la explosión
	UPROPERTY()
	UParticleSystemComponent* ExplosionPreview;

	// Partícula que representa la explosión final
	UPROPERTY()
	UParticleSystem* ExplosionFinal;

public:
	// Constructor
	ABloqueExplosivo();

	// Radio de la explosión
	UPROPERTY(EditAnywhere, Category = "Explosivo")
	float RadioExplosion;

	// Implementación del método Clonar (Prototype)
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
};
