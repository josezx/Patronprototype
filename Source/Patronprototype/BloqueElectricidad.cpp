// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueElectricidad.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"

ABloqueElectricidad::ABloqueElectricidad()
{
	// Valor por defecto
	Voltaje = 220.0f;

	// Cargar malla (cubo básico)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
	}

	// Cargar material eléctrico
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse"));
	if (MaterialAsset.Succeeded())
	{
		Mesh->SetMaterial(0, MaterialAsset.Object);
	}

	// Crear sistema de partículas para chispas
	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Sparks.P_Sparks"));
	if (ParticleAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleAsset.Object);
		ParticleSystem->SetWorldScale3D(FVector(5.0f));
	}
}

AActor* ABloqueElectricidad::Clonar(UWorld* Mundo, const FVector& Posicion) const
{
	ABloqueElectricidad* Clon = Mundo->SpawnActor<ABloqueElectricidad>(GetClass(), Posicion, FRotator::ZeroRotator);
	if (Clon)
	{
		// Copiar atributos del original
		Clon->Voltaje = Voltaje;
		Clon->Escala = Escala;
		// Aplicar escala y apariencia
		Clon->SetActorScale3D(Escala);
		Clon->GetMesh()->SetStaticMesh(Mesh->GetStaticMesh());
		Clon->GetMesh()->SetMaterial(0, Mesh->GetMaterial(0));
	}
	return Clon;
}