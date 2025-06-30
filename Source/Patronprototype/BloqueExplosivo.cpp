// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueExplosivo.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"

ABloqueExplosivo::ABloqueExplosivo()
{
	// Configuración inicial
	RadioExplosion = 500.0f;

	// Malla básica del bloque
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
	}

	// Material de roca para simular explosividad
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Rock_Basalt.M_Rock_Basalt"));
	if (MaterialAsset.Succeeded())
	{
		Mesh->SetMaterial(0, MaterialAsset.Object);
	}

	// Componente de partículas de previsualización
	ExplosionPreview = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PreviewEffect"));
	ExplosionPreview->SetupAttachment(RootComponent);

	// Cargar partícula de humo (pre-explosión)
	static ConstructorHelpers::FObjectFinder<UParticleSystem> PreviewAsset(TEXT("/Game/StarterContent/Particles/P_Smoke.P_Smoke"));
	if (PreviewAsset.Succeeded())
	{
		ExplosionPreview->SetTemplate(PreviewAsset.Object);
		ExplosionPreview->SetWorldScale3D(FVector(0.3f));
	}

	// Cargar partícula de explosión final
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ExplosionAsset(TEXT("/Game/StarterContent/Particles/P_Explosion.P_Explosion"));
	if (ExplosionAsset.Succeeded())
	{
		ExplosionFinal = ExplosionAsset.Object;
		ExplosionPreview->SetWorldScale3D(FVector(1.0f)); // Mostrar a mayor escala si quieres que se note más
	}
}

AActor* ABloqueExplosivo::Clonar(UWorld* Mundo, const FVector& Posicion) const
{
	ABloqueExplosivo* Clon = Mundo->SpawnActor<ABloqueExplosivo>(GetClass(), Posicion, FRotator::ZeroRotator);
	if (Clon)
	{
		// Copiar atributos del original
		Clon->RadioExplosion = RadioExplosion;
		// Aplicar escala y apariencia
		Clon->Escala = Escala;
		Clon->SetActorScale3D(Escala);
		Clon->GetMesh()->SetStaticMesh(Mesh->GetStaticMesh());
		Clon->GetMesh()->SetMaterial(0, Mesh->GetMaterial(0));
	}
	return Clon;
}