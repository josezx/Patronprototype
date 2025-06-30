	// Fill out your copyright notice in the Description page of Project Settings.

	#pragma once

	#include "CoreMinimal.h"
	#include "GameFramework/Actor.h"
	#include "Cloneable.h"
	#include "Bloque.generated.h"
	UCLASS()
	class PATRONPROTOTYPE_API ABloque : public AActor,public ICloneable
	{
		GENERATED_BODY()
	
	public:	
		// Sets default values for this actor's properties
		ABloque();

	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

	public:	
		// Called every frame
		virtual void Tick(float DeltaTime) override;
		// Implementación del método Clonar del patrón Prototype
		virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;

		// Getter para el componente de malla
		UStaticMeshComponent* GetMesh() const { return Mesh; }

	protected:
		// Componente de malla visual
		UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* Mesh;

		// Escala editable del bloque
		UPROPERTY(EditAnywhere, Category = "Bloque")
		FVector Escala = FVector(10.0f);
	};
