// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "ObservadorBomba.h"
#include "DrawDebugHelpers.h"
#include "Components/PointLightComponent.h"
#include "Components/TextRenderComponent.h"
#include "BloqueCamuflada.generated.h"
/**
 * 
 */
UCLASS()
class PATRONPROTOTYPE_API ABloqueCamuflada : public ABloque
{
	GENERATED_BODY()
private:
	// Bloque base decorado
	UPROPERTY()
	ABloque* BloqueDecorado;

	// Lista de observadores
	TArray<IObservadorBomba*> Observadores;

	// Efecto de explosión
	UPROPERTY()
	UParticleSystem* FXExplosion;

public:
	// Constructor
	ABloqueCamuflada();

	// Atributos posibles decorados según tipo de bloque
	UPROPERTY(EditAnywhere, Category = "Atributos")
	float Resistencia = 0.f;

	UPROPERTY(EditAnywhere, Category = "Atributos")
	float Congelamiento = 0.f;

	UPROPERTY(EditAnywhere, Category = "Atributos")
	float Danio = 0.f;

	UPROPERTY(EditAnywhere, Category = "Atributos")
	float Voltaje = 0.f;

	UPROPERTY(EditAnywhere, Category = "Atributos")
	float Rebote = 0.f;

	// Sonido al detonar
	UPROPERTY(EditDefaultsOnly, Category = "FX")
	USoundBase* SonidoExplosion;

	// Luz indicadora camuflada
	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* LuzSospechosa;

	// Texto flotante
	UPROPERTY(VisibleAnywhere)
	UTextRenderComponent* TextoCamuflado;

	// Métodos básicos
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;

	// Decorator
	void IniciarDecoracion(ABloque* BloqueOriginal);

	// Explosión
	void Detonar();

	// Colisión
	UFUNCTION()
	void AlColisionar(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	// Observer
	void Suscribir(IObservadorBomba* NuevoObservador);
	void NotificarTodos(float Distancia);
};
