// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueConcreto.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"

ABloqueConcreto::ABloqueConcreto()
{
	// Atributos por defecto del bloque concreto
	Dureza = 700.0f;
	Peso = 1200.0f;

	// Asignar malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
	}

	// Asignar material de concreto rugoso
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> Material(TEXT("/Game/StarterContent/Materials/M_CobbleStone_Rough.M_CobbleStone_Rough"));
	if (Material.Succeeded())
	{
		Mesh->SetMaterial(0, Material.Object);
	}
}

AActor* ABloqueConcreto::Clonar(UWorld* Mundo, const FVector& Posicion) const
{
	FActorSpawnParameters Params;

	ABloqueConcreto* Clon = Mundo->SpawnActor<ABloqueConcreto>(GetClass(), Posicion, FRotator::ZeroRotator, Params);
	if (Clon)
	{
		// Clonar atributos
		Clon->Dureza = Dureza;
		Clon->Peso = Peso;
		Clon->Escala = Escala;

		// Aplicar escala y apariencia
		Clon->SetActorScale3D(Escala);
		Clon->GetMesh()->SetStaticMesh(Mesh->GetStaticMesh());
		Clon->GetMesh()->SetMaterial(0, Mesh->GetMaterial(0));
	}

	return Clon;
}