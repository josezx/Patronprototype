// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueAcero.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"

ABloqueAcero::ABloqueAcero()
{
	// Valor por defecto de resistencia
	Resistencia = 1000.0f;

	// Cargar malla del bloque (cubo)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshBloqueAcero(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMeshBloqueAcero.Succeeded())
	{
		Mesh->SetStaticMesh(ObjetoMeshBloqueAcero.Object);
		Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

	// Cargar material del bloque (metal)
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoBloqueAceroMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Panel.M_Tech_Panel'"));
	if (ObjetoBloqueAceroMaterial.Succeeded())
	{
		Mesh->SetMaterial(0, ObjetoBloqueAceroMaterial.Object);
	}
}
AActor* ABloqueAcero::Clonar(UWorld* Mundo, const FVector& Posicion) const
{
	FActorSpawnParameters Params;
	ABloqueAcero* Clon = Mundo->SpawnActor<ABloqueAcero>(GetClass(), Posicion, FRotator::ZeroRotator, Params);

	if (Clon)
	{
		// Copiar propiedades clave del original al clon
		Clon->Resistencia = Resistencia;
		Clon->Escala = Escala;
		Clon->SetActorScale3D(Escala);
		Clon->GetMesh()->SetStaticMesh(Mesh->GetStaticMesh());
		Clon->GetMesh()->SetMaterial(0, Mesh->GetMaterial(0));
	}

	return Clon;
}