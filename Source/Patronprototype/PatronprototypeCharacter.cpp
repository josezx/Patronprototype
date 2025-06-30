// Copyright Epic Games, Inc. All Rights Reserved.

#include "PatronprototypeCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "PatronprototypeGameMode.h"

#include "Kismet/GameplayStatics.h"
DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// APatronprototypeCharacter

APatronprototypeCharacter::APatronprototypeCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	GetWorld()->GetTimeSeconds(); 

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
	// Cargar sonidos
	static ConstructorHelpers::FObjectFinder<USoundBase> Sonido1(TEXT("/Game/StarterContent/Audio/Alert2.Alert2"));
	if (Sonido1.Succeeded())
	{
		SonidoAdvertencia = Sonido1.Object;
	}

	static ConstructorHelpers::FObjectFinder<USoundBase> Sonido2(TEXT("/Game/StarterContent/Audio/AirHorn.AirHorn"));
	if (Sonido2.Succeeded())
	{
		SonidoPeligroInminente = Sonido2.Object;
	}
	EfectoEscudo = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EfectoEscudo"));
	EfectoEscudo->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticulaShield(TEXT("/Game/StarterContent/Particles/P_Shield.P_Shield"));
	if (ParticulaShield.Succeeded())
	{
		EfectoEscudo->SetTemplate(ParticulaShield.Object);
		EfectoEscudo->bAutoActivate = false; // Activamos manualmente
	}

	Escudo = nullptr;
	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void APatronprototypeCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	// Mostrar mensaje en pantalla
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, TEXT("Jugador inicia con 200 de salud"));
}

//////////////////////////////////////////////////////////////////////////
// Input

void APatronprototypeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APatronprototypeCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &APatronprototypeCharacter::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void APatronprototypeCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
		if (Escudo) {
			FVector posicion = GetActorLocation();
			Escudo->moverEscudo(posicion);
		}
	}
}

void APatronprototypeCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}
/////////funciones del character de colisiones/////////////////
void APatronprototypeCharacter::RecibirDanio(float Cantidad)
{
	Salud -= Cantidad;
	
	if (bArmaduraActiva)
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, TEXT("Daño bloqueado por armadura."));
		return; // No se aplica daño
	}
	if (GEngine)
	{
		FString TextoSalud = FString::Printf(TEXT("Salud restante: %.0f"), Salud);
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TextoSalud);
	}

	if (bArmaduraActiva)
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, TEXT("Daño bloqueado por armadura."));
		return; // No se aplica daño
	}
	if (Salud <= 0)
	{
		Salud = 0;

	
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("END GAME"), true, FVector2D(5.0f, 5.0f));

		// Desactivar movimiento o control del jugador (opcional)
		AController* Controlador = GetController();
		if (Controlador)
		{
			Controlador->SetIgnoreMoveInput(true);
			Controlador->SetIgnoreLookInput(true);
		}

		// Reiniciar el nivel tras 5 segundos
		FTimerHandle TimerHandle;
		GetWorldTimerManager().SetTimer(TimerHandle, this, &APatronprototypeCharacter::ReiniciarNivel, 5.0f, false);
	}	
}
void APatronprototypeCharacter::ReiniciarNivel()
{
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}
void APatronprototypeCharacter::actualizar(float distanciaEnCeldas)
{
	constexpr float RANGO_ARMADURA = 2.0f; // distancia en celdas para activar armadura
	constexpr float RANGO_PELIGRO = 3.0f; // distancia en celdas para peligro inminente
	constexpr float RANGO_ADVERTENCIA = 10.0f;// distancia en celdas para advertencia

	float tiempoActual = GetWorld()->GetTimeSeconds();
	//donde dibuje con lineas debug para visualizar los rangos de advertencia y peligro
	DrawDebugSphere(GetWorld(), GetActorLocation(), RANGO_ADVERTENCIA * 1000.0f, 16, FColor::Yellow, false, 0.1f);
	DrawDebugSphere(GetWorld(), GetActorLocation(), RANGO_PELIGRO * 1000.0f, 16, FColor::Red, false, 0.1f);

	if (distanciaEnCeldas <= RANGO_ARMADURA)
	{
		ActivarArmaduraTemporal();
	}

	// 🔴 Peligro inminente a menos de 3 bloques
	if (distanciaEnCeldas <= RANGO_PELIGRO)
	{
		if (!bPeligroSonado && tiempoActual - UltimoTiempoPeligro > 3.0f)
		{
			if (SonidoPeligroInminente)
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), SonidoPeligroInminente, GetActorLocation());

			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("¡PELIGRO! Estás a menos de 3 bloques de un muro bomba."));

			bPeligroSonado = true;
			UltimoTiempoPeligro = tiempoActual;
		}
	}
	else
	{
		bPeligroSonado = false;
	}

	// 🟡 Advertencia a menos de 10 bloques
	if (distanciaEnCeldas <= RANGO_ADVERTENCIA)
	{
		if (!bAdvertenciaSonada && tiempoActual - UltimoTiempoAdvertencia > 3.0f)
		{
			if (SonidoAdvertencia)
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), SonidoAdvertencia, GetActorLocation());

			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Yellow, TEXT("Advertencia: muro bomba cercano (menos de 10 bloques)."));

			bAdvertenciaSonada = true;
			UltimoTiempoAdvertencia = tiempoActual;
		}
	}
	else
	{
		bAdvertenciaSonada = false;
	}
}

void APatronprototypeCharacter::ActivarArmaduraTemporal()
{
	if (!bArmaduraActiva)
	{
		bArmaduraActiva = true;
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, TEXT("Armadura activada temporalmente."));
		if (!Escudo)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			Escudo = GetWorld()->SpawnActor<AEscudoCaracter>(AEscudoCaracter::StaticClass(), GetActorLocation(), FRotator::ZeroRotator, SpawnParams);
		}


		if (Escudo)
		{
			Escudo->AttachToComponent(RootComponent, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
			EfectoEscudo->Activate();
		}
		GetWorldTimerManager().SetTimer(TemporizadorArmadura, this, &APatronprototypeCharacter::DesactivarArmadura, 5.0f, false);
	}
}

void APatronprototypeCharacter::DesactivarArmadura()
{
	bArmaduraActiva = false;

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, TEXT("Armadura desactivada."));

	if (Escudo) {
		Escudo->Destroy();
		Escudo = nullptr;
	}
}