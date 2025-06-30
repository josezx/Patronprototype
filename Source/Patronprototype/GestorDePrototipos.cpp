// Fill out your copyright notice in the Description page of Project Settings.


#include "GestorDePrototipos.h"

// Sets default values
AGestorDePrototipos::AGestorDePrototipos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGestorDePrototipos::BeginPlay()
{
	Super::BeginPlay();
	
}
void AGestorDePrototipos::RegistrarPrototipo(int Clave, ICloneable* Prototipo)
{
	if (Prototipo)
	{
		MapaDePrototipos.Add(Clave, Prototipo);
	}
}

AActor* AGestorDePrototipos::ClonarPrototipo(int Clave, UWorld* Mundo, const FVector& Posicion)
{
	if (MapaDePrototipos.Contains(Clave))
	{
		return MapaDePrototipos[Clave]->Clonar(Mundo, Posicion);
	}
	return nullptr;
}
