// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "ObservadorBomba.h"
#include "EscudoCaracter.h"
#include "Particles/ParticleSystemComponent.h"
#include "PatronprototypeCharacter.generated.h"
class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class APatronprototypeCharacter : public ACharacter, public IObservadorBomba
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

public:
	APatronprototypeCharacter();
	

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
////////////////////////////////////// Adicionales//////////////////////////
public:
	UPROPERTY(EditAnywhere, Category = "Sonidos")
	USoundBase* SonidoAdvertencia;

	UPROPERTY(EditAnywhere, Category = "Sonidos")
	USoundBase* SonidoPeligroInminente;
	UPROPERTY(VisibleAnywhere, Category = "Efecto")
	UParticleSystemComponent* EfectoEscudo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Salud")
	float Salud = 200.0f;
public:
	virtual void actualizar(float Distancia) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Estado")
	bool bArmaduraActiva = false;
	FTimerHandle TemporizadorArmadura;

	void ActivarArmaduraTemporal();
	void DesactivarArmadura();
	void RecibirDanio(float Cantidad);
	void ReiniciarNivel();
private:
	bool bAdvertenciaSonada = false;
	bool bPeligroSonado = false;
	float UltimoTiempoAlerta = 0.0f;
	bool bDentroRango10 = false;
	bool bDentroRango3 = false;
	float UltimoTiempoAdvertencia = 0.0f;
	float UltimoTiempoPeligro = 0.0f;
	AEscudoCaracter* Escudo;
};

