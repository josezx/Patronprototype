#include "EscudoCaracter.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"

AEscudoCaracter::AEscudoCaracter()
{
    PrimaryActorTick.bCanEverTick = false;

    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscudoMesh"));
    RootComponent = MeshComponent;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
    if (MeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(MeshAsset.Object);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No se pudo encontrar la malla en /Game/StarterContent/Shapes/Shape_Sphere"));
    }
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"));
    if (MaterialAsset.Succeeded())
    {
        MeshComponent->SetMaterial(0, MaterialAsset.Object);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No se pudo encontrar el material en /Game/StarterContent/Materials/M_Water_Lake"));
    }

    MeshComponent->SetWorldScale3D(FVector(5.0f, 5.0f, 5.0f));
}

void AEscudoCaracter::BeginPlay()
{
    Super::BeginPlay();
}

void AEscudoCaracter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AEscudoCaracter::moverEscudo(FVector posicion)
{
    SetActorLocation(posicion);
}
