// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueHielo.generated.h"

/**
 * 
 */
UCLASS()
class PATRONPROTOTYPE_API ABloqueHielo : public ABloque
{
	GENERATED_BODY()
protected:
	// Partículas de vapor estilo hielo
	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* ParticleSystem;

public:
	// Constructor
	ABloqueHielo();

	// Nivel de congelamiento aplicado al jugador u objeto
	UPROPERTY(EditAnywhere, Category = "Hielo")
	float Congelamiento;

	// Método para clonar el bloque (Prototype)
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
};
