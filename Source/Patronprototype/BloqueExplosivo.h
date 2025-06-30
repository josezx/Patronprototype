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
	// Efecto visual previo a la explosi�n
	UPROPERTY()
	UParticleSystemComponent* ExplosionPreview;

	// Part�cula que representa la explosi�n final
	UPROPERTY()
	UParticleSystem* ExplosionFinal;

public:
	// Constructor
	ABloqueExplosivo();

	// Radio de la explosi�n
	UPROPERTY(EditAnywhere, Category = "Explosivo")
	float RadioExplosion;

	// Implementaci�n del m�todo Clonar (Prototype)
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
};
