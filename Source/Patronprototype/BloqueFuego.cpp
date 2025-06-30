// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueFuego.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Particles/ParticleSystem.h"
#include "PatronprototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"
#include "Engine/Engine.h"

int ABloqueFuego::ContadorInstancias = 0;

ABloqueFuego::ABloqueFuego()
{
	// Atributos iniciales
	Danio = 50.0f;
	TiempoDeVida = 0.0f;
	TiempoAcumulado = 0.0f;

	// Malla del cubo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
	}

	// Material visual de fuego
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/Fire.Fire'"));
	if (MaterialAsset.Succeeded())
	{
		Mesh->SetMaterial(0, MaterialAsset.Object);
		Mesh->SetGenerateOverlapEvents(true);
		Mesh->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
		Mesh->OnComponentBeginOverlap.AddDynamic(this, &ABloqueFuego::AlSuperponer);
	}

	// Sistema de partículas (fuego)
	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Fire.P_Fire"));
	if (ParticleAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleAsset.Object);
		ParticleSystem->SetWorldScale3D(FVector(1.0f));
	}
}

void ABloqueFuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Movimiento vertical tipo flotación
	float MovimientoZ = FMath::Sin(GetWorld()->TimeSeconds * 2.0f) * 20.0f;
	FVector NuevaPos = GetActorLocation();
	NuevaPos.Z += MovimientoZ * DeltaTime;
	SetActorLocation(NuevaPos);

	// Lógica de destrucción para clones
	if (TiempoDeVida > 0.0f)
	{
		TiempoAcumulado += DeltaTime;
		if (TiempoAcumulado >= TiempoHastaDestruccion)
		{
			Destroy();
		}
	}
}

void ABloqueFuego::AlSuperponer(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	// Verificar si el actor es el personaje
	APatronprototypeCharacter* Personaje = Cast<APatronprototypeCharacter>(OtherActor);
	if (Personaje)
	{
		Personaje->RecibirDanio(Danio);

		// Mensaje distinto para clon u original
		if (TiempoDeVida > 0.0f)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Orange, TEXT("¡Clon de fuego infligió daño extra!"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("Fuego original infligió daño normal."));
		}
	}
}

AActor* ABloqueFuego::Clonar(UWorld* Mundo, const FVector& Posicion) const
{
	ABloqueFuego* Clon = Mundo->SpawnActor<ABloqueFuego>(GetClass(), Posicion, FRotator::ZeroRotator);
	if (Clon)
	{
		// Copiar atributos básicos y potenciar el daño
		Clon->Danio = Danio + 20.0f;
		Clon->Escala = Escala;
		Clon->SetActorScale3D(Escala);

		// Activar destrucción secuencial
		Clon->TiempoDeVida = 1.0f;
		Clon->TiempoAcumulado = 0.0f;
		++ContadorInstancias;
		Clon->TiempoHastaDestruccion = 10.0f * ContadorInstancias;

		// Aplicar apariencia
		Clon->GetMesh()->SetStaticMesh(GetMesh()->GetStaticMesh());
		Clon->GetMesh()->SetMaterial(0, Mesh->GetMaterial(0));
	}
	return Clon;
}