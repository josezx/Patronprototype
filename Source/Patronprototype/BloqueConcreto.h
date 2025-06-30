// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueConcreto.generated.h"

/**
 * 
 */
UCLASS()
class PATRONPROTOTYPE_API ABloqueConcreto : public ABloque
{
	GENERATED_BODY()
public:
	// Constructor
	ABloqueConcreto();

	// Propiedades del bloque de concreto
	UPROPERTY(EditAnywhere, Category = "Concreto")
	float Dureza;

	UPROPERTY(EditAnywhere, Category = "Concreto")
	float Peso;

	// Implementación del método Clonar (patrón Prototype)
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
};
