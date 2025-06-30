// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueFuego.generated.h"

/**
 * 
 */
UCLASS()
class PATRONPROTOTYPE_API ABloqueFuego : public ABloque
{
	GENERATED_BODY()
protected:
	// Partículas de fuego
	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* ParticleSystem;

	// Contador estático para controlar el tiempo de destrucción en clones
	static int ContadorInstancias;

	// Tiempo acumulado desde la activación (para destrucción)
	float TiempoAcumulado = 0.0f;

	// Tiempo único hasta autodestruirse
	float TiempoHastaDestruccion = 0.0f;

public:
	// Constructor
	ABloqueFuego();

	// Daño que inflige este bloque
	UPROPERTY(EditAnywhere, Category = "Fuego")
	float Danio;

	// Tiempo de vida activa (solo en clones)
	UPROPERTY(EditAnywhere, Category = "Bloque Fuego Extra")
	float TiempoDeVida;

	// Reacción al contacto con el jugador
	UFUNCTION()
	void AlSuperponer(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	// Clonación tipo Prototype
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;

	// Lógica en cada frame
	virtual void Tick(float DeltaTime) override;
};
