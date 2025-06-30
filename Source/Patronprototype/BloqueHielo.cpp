// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueHielo.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"

ABloqueHielo::ABloqueHielo()
{
	// atributos
	Congelamiento = 80.0f;

	// Cargar malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);

		// ⚠️ Importante: levantar el cubo medio bloque para que no quede enterrado
		Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f)); // Asume que el cubo tiene 100 de alto
	}

	// Cargar material tipo hielo
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Glass.M_Glass"));
	if (MaterialAsset.Succeeded())
	{
		Mesh->SetMaterial(0, MaterialAsset.Object);
	}

	// Crear sistema de partículas (vapor frío)
	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Steam_Lit.P_Steam_Lit"));
	if (ParticleAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleAsset.Object);
		ParticleSystem->SetWorldScale3D(FVector(1.0f));
	}
}

AActor* ABloqueHielo::Clonar(UWorld* Mundo, const FVector& Posicion) const
{
	ABloqueHielo* Clon = Mundo->SpawnActor<ABloqueHielo>(GetClass(), Posicion + FVector(0, 0, 50.0f), FRotator::ZeroRotator);
	if (Clon)
	{
		// Copiar atributos
		Clon->Congelamiento = Congelamiento;
		// copiar escala
		Clon->Escala = Escala;
		Clon->SetActorScale3D(Escala);

		// Copiar apariencia
		Clon->GetMesh()->SetStaticMesh(Mesh->GetStaticMesh());
		Clon->GetMesh()->SetMaterial(0, Mesh->GetMaterial(0));
	}
	return Clon;
}