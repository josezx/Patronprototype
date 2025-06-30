#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EscudoCaracter.generated.h"

UCLASS()
class PATRONPROTOTYPE_API AEscudoCaracter : public AActor
{
    GENERATED_BODY()

public:
    AEscudoCaracter();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

public:
    void moverEscudo(FVector posicion);

protected:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* MeshComponent;
};
