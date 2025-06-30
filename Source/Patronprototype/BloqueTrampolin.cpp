// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueTrampolin.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"
#include "Particles/ParticleSystem.h"

ABloqueTrampolin::ABloqueTrampolin()
{
	// Valor de rebote por defecto
	Rebote = 3.5f;

	// Asignar malla (forma de cubo)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
		Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f)); // Corregir para evitar que aparezca enterrado
	}

	// Asignar material metálico pulido
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel"));
	if (MaterialAsset.Succeeded())
	{
		Mesh->SetMaterial(0, MaterialAsset.Object);
	}

	// Crear sistema de partículas (explosión visual al rebotar)
	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Explosion.P_Explosion"));
	if (ParticleAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleAsset.Object);
		ParticleSystem->SetWorldScale3D(FVector(1.0f));
	}
}

/*AActor* ABloqueTrampolin::Clonar(UWorld* Mundo, const FVector& Posicion) const
{
	ABloqueTrampolin* Clon = Mundo->SpawnActor<ABloqueTrampolin>(GetClass(), Posicion + FVector(0, 0, 50.0f), FRotator::ZeroRotator);
	if (Clon)
	{
		// Copiar atributos
		Clon->Rebote = Rebote;
		// Copiar escala
		Clon->Escala = Escala;
		Clon->SetActorScale3D(Escala);

		// Copiar apariencia
		Clon->GetMesh()->SetStaticMesh(GetMesh()->GetStaticMesh());
		Clon->GetMesh()->SetMaterial(0, Mesh->GetMaterial(0));
	}
	return Clon;
}*/