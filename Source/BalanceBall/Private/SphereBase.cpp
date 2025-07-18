// Fill out your copyright notice in the Description page of Project Settings.


#include "SphereBase.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Engine.h"

// Sets default values
ASphereBase::ASphereBase()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SphereMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMesh"));
	SphereMeshComp->SetSimulatePhysics(true);
	SphereMeshComp->SetAngularDamping(0.1f);
	SphereMeshComp->SetLinearDamping(0.1f);
	SphereMeshComp->BodyInstance.bOverrideMaxAngularVelocity = true;
	SphereMeshComp->BodyInstance.MaxAngularVelocity = 400.f;
	RootComponent = SphereMeshComp;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(SphereMeshComp);
	SpringArmComp->bDoCollisionTest = false;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp);
	RollTorque = 10000000.f;
	SpeedMultiplier = 1.0f;
}

// Called when the game starts or when spawned
void ASphereBase::BeginPlay()
{
	Super::BeginPlay();
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		ULocalPlayer* LocalPlayer = PlayerController->GetLocalPlayer();
		if (UEnhancedInputLocalPlayerSubsystem* InputSystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			InputSystem->AddMappingContext(InputMapping, 0);
		}
	}
}

void ASphereBase::Move(const FInputActionValue& Value)
{
	FVector2D MoveVector = Value.Get<FVector2D>();
	SphereMeshComp->AddTorqueInRadians(FVector(-1 * MoveVector.X * RollTorque * SpeedMultiplier, MoveVector.Y * RollTorque * SpeedMultiplier, 0));
}

void ASphereBase::SpeedUp()
{
	SphereMeshComp->BodyInstance.SetMaxAngularVelocityInRadians(FMath::DegreesToRadians(800), false, true);
	SpeedMultiplier = 2.f;
}

void ASphereBase::SpeedDown()
{
	SphereMeshComp->BodyInstance.SetMaxAngularVelocityInRadians(FMath::DegreesToRadians(400), false, true);
	SpeedMultiplier = 1.f;
}

void ASphereBase::ResetVelocity()
{
	SphereMeshComp->SetPhysicsLinearVelocity(FVector(0, 0, 0));
	SphereMeshComp->SetPhysicsAngularVelocityInRadians(FVector(0, 0, 0));
}
// Called every frame
void ASphereBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Black, FString::FromInt(SphereMeshComp->BodyInstance.GetMaxAngularVelocityInRadians()));

}

// Called to bind functionality to input
void ASphereBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ASphereBase::Move);
		EnhancedInputComponent->BindAction(SpeedUpAction, ETriggerEvent::Triggered, this, &ASphereBase::SpeedUp);
		EnhancedInputComponent->BindAction(SpeedUpAction, ETriggerEvent::Completed, this, &ASphereBase::SpeedDown);
	}
}
