// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueLadrillo.h"
#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "Particles/ParticleSystem.h"
#include "Materials/MaterialInterface.h"

ABloqueLadrillo::ABloqueLadrillo()
{
	//atributos
	Resistencia = 100;

	// Asignar malla (forma de cubo)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
	}

	// Asignar material tipo ladrillo
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New"));
	if (MaterialAsset.Succeeded())
	{
		Mesh->SetMaterial(0, MaterialAsset.Object);
	}

	// Crear componente de partículas (polvo)
	ParticulasPolvo = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticulasPolvo"));
	ParticulasPolvo->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Dust.P_Dust"));
	if (ParticleAsset.Succeeded())
	{
		ParticulasPolvo->SetTemplate(ParticleAsset.Object);
		ParticulasPolvo->SetWorldScale3D(FVector(4.0f));
	}
}

AActor* ABloqueLadrillo::Clonar(UWorld* Mundo, const FVector& Posicion) const
{
	ABloqueLadrillo* Clon = Mundo->SpawnActor<ABloqueLadrillo>(GetClass(), Posicion, FRotator::ZeroRotator);
	if (Clon)
	{
		// Copiar atributos
		Clon->Resistencia = Resistencia;
		// Copiar escala
		Clon->Escala = Escala;
		Clon->SetActorScale3D(Escala);

		// Copiar apariencia
		Clon->GetMesh()->SetStaticMesh(Mesh->GetStaticMesh());
		Clon->GetMesh()->SetMaterial(0, Mesh->GetMaterial(0));
	}
	return Clon;
}