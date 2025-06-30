// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
// Sets default values
ABloque::ABloque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    RootComponent = Mesh;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
    if (MeshAsset.Succeeded())
    {
        Mesh->SetStaticMesh(MeshAsset.Object);
    }
}

// Called when the game starts or when spawned
void ABloque::BeginPlay()
{
	Super::BeginPlay();
    SetActorScale3D(Escala);
}

// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AActor* ABloque::Clonar(UWorld* Mundo, const FVector& Posicion) const
{
    FActorSpawnParameters Params;
    ABloque* Clon = Mundo->SpawnActor<ABloque>(GetClass(), Posicion, FRotator::ZeroRotator, Params);
    if (Clon)
    {
        Clon->Escala = Escala;
        Clon->SetActorScale3D(Escala);
        Clon->GetMesh()->SetStaticMesh(Mesh->GetStaticMesh());
    }
    return Clon;
}