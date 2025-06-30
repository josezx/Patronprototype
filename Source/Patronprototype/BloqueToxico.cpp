// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueToxico.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"
#include "Particles/ParticleSystemComponent.h"
#include "Particles/ParticleSystem.h"

ABloqueToxico::ABloqueToxico()
{
	// Nivel de toxicidad predeterminado
	NivelToxicidad = 85.0f;

	// Asignar malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);

		// Ajuste para evitar que aparezca enterrado
		Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f));
	}

	// Asignar material visual (verde, tóxico)
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/Toxico.Toxico"));
	if (MaterialAsset.Succeeded())
	{
		Mesh->SetMaterial(0, MaterialAsset.Object);
	}

	// Crear sistema de partículas (humo tóxico)
	SistemaParticulas = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ToxicParticles"));
	SistemaParticulas->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Smoke.P_Smoke"));
	if (ParticleAsset.Succeeded())
	{
		SistemaParticulas->SetTemplate(ParticleAsset.Object);
		SistemaParticulas->SetWorldScale3D(FVector(1.0f));
	}
}

AActor* ABloqueToxico::Clonar(UWorld* Mundo, const FVector& Posicion) const
{
	ABloqueToxico* Clon = Mundo->SpawnActor<ABloqueToxico>(GetClass(), Posicion + FVector(0, 0, 50.0f), FRotator::ZeroRotator);
	if (Clon)
	{
		// Copiar atributos
		Clon->NivelToxicidad = NivelToxicidad;
		// Copiar escala
		Clon->Escala = Escala;
		Clon->SetActorScale3D(Escala);

		// Copiar apariencia
		Clon->GetMesh()->SetStaticMesh(Mesh->GetStaticMesh());
		Clon->GetMesh()->SetMaterial(0, Mesh->GetMaterial(0));
	}
	return Clon;
}