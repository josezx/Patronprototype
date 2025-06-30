// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cloneable.h"
#include "GestorDePrototipos.generated.h"
UCLASS()
class PATRONPROTOTYPE_API AGestorDePrototipos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGestorDePrototipos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	TMap<int, ICloneable*> MapaDePrototipos;

public:
	void RegistrarPrototipo(int Clave, ICloneable* Prototipo);
	AActor* ClonarPrototipo(int Clave, UWorld* Mundo, const FVector& Posicion);
};
