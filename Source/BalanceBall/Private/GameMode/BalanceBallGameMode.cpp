// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/BalanceBallGameMode.h"
#include "Engine.h"
#include "SphereBase.h"

ABalanceBallGameMode::ABalanceBallGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	isEnd = false;
	PlayerDeathNum = 0;
}

void ABalanceBallGameMode::BeginPlay()
{
	Super::BeginPlay();
	ASphereBase* Pawn = Cast<ASphereBase>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (Pawn)
	{
		PlayerPawn = Pawn;
		CurrentStart = PlayerPawn->GetActorLocation();
	}
}

void ABalanceBallGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABalanceBallGameMode::SetPlayerLocation()
{
	PlayerPawn->SetActorLocation(CurrentStart);
	PlayerPawn->ResetVelocity();
}

void ABalanceBallGameMode::SetCurrentStart(FVector Location)
{
	CurrentStart = Location;
}

void ABalanceBallGameMode::SetGameInputGameAndUI()
{
	GetWorld()->GetFirstPlayerController()->SetInputMode(FInputModeGameAndUI());
}

void ABalanceBallGameMode::SetGameInputUIOnly()
{
	GetWorld()->GetFirstPlayerController()->SetInputMode(FInputModeUIOnly());
}
