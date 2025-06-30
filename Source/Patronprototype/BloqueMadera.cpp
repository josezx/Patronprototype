// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueMadera.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"
#include "Particles/ParticleSystemComponent.h"

ABloqueMadera::ABloqueMadera()
{
	// Valor inicial de resistencia
	Resistencia = 100.0f;

	// Cargar malla del cubo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshBloqueMadera(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (ObjetoMeshBloqueMadera.Succeeded())
	{
		Mesh->SetStaticMesh(ObjetoMeshBloqueMadera.Object);
		Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f)); // Para evitar que aparezca medio enterrado
	}

	// Cargar material de madera
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoBloqueMaderaMaterial(TEXT("/Game/StarterContent/Materials/M_Wood_Oak.M_Wood_Oak"));
	if (ObjetoBloqueMaderaMaterial.Succeeded())
	{
		Mesh->SetMaterial(0, ObjetoBloqueMaderaMaterial.Object);
	}
}

AActor* ABloqueMadera::Clonar(UWorld* Mundo, const FVector& Posicion) const
{
	ABloqueMadera* Clon = Mundo->SpawnActor<ABloqueMadera>(GetClass(), Posicion + FVector(0, 0, 50), FRotator::ZeroRotator);
	if (Clon)
	{
		// Clonar atributos básicos
		Clon->Resistencia = Resistencia;
		// Clonar escala
		Clon->Escala = Escala;
		Clon->SetActorScale3D(Escala);

		// Copiar apariencia
		Clon->GetMesh()->SetStaticMesh(GetMesh()->GetStaticMesh());
		Clon->GetMesh()->SetMaterial(0, Mesh->GetMaterial(0));
	}
	return Clon;
}