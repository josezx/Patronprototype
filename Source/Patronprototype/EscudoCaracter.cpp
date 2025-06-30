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
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Glass.M_Glass"));
    if (MaterialAsset.Succeeded())
    {
        MeshComponent->SetMaterial(0, MaterialAsset.Object);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No se pudo encontrar el material en /Game/StarterContent/Materials/M_Glass.M_Glass"));
    }

    // 🔧 Escala normal
    MeshComponent->SetWorldScale3D(FVector(1.0f)); // Tamaño suficientemente grande

    // Este valor está ajustado para que la esfera envuelva correctamente desde los pies a la cabeza
    MeshComponent->SetRelativeLocation(FVector(-220.0f,-220.0f, -220.0f)); // Baja justo el radio de la cápsula
    // ✅ Desactivar colisión para que no bloquee al jugador
    MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
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
