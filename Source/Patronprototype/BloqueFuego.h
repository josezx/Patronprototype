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
	// Part�culas de fuego
	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* ParticleSystem;

	// Contador est�tico para controlar el tiempo de destrucci�n en clones
	static int ContadorInstancias;

	// Tiempo acumulado desde la activaci�n (para destrucci�n)
	float TiempoAcumulado = 0.0f;

	// Tiempo �nico hasta autodestruirse
	float TiempoHastaDestruccion = 0.0f;

public:
	// Constructor
	ABloqueFuego();

	// Da�o que inflige este bloque
	UPROPERTY(EditAnywhere, Category = "Fuego")
	float Danio;

	// Tiempo de vida activa (solo en clones)
	UPROPERTY(EditAnywhere, Category = "Bloque Fuego Extra")
	float TiempoDeVida;

	// Reacci�n al contacto con el jugador
	UFUNCTION()
	void AlSuperponer(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	// Clonaci�n tipo Prototype
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;

	// L�gica en cada frame
	virtual void Tick(float DeltaTime) override;
};
