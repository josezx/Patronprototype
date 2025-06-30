// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Cloneable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UCloneable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PATRONPROTOTYPE_API ICloneable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const = 0;
};
