// Fill out your copyright notice in the Description page of Project Settings.


#include "EndLocation.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "GameMode/BalanceBallGameMode.h"

AEndLocation::AEndLocation()
{
	EndMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndMesh"));
	RootComponent = EndMeshComp;
	BoxHitComp->SetupAttachment(RootComponent);

	FlagpoleMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Flagpole"));
	FlagpoleMeshComp->SetupAttachment(RootComponent);

	FlagMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Flag"));
	FlagMeshComp->SetupAttachment(FlagpoleMeshComp);
}

void AEndLocation::OnHitSphere(ASphereBase* Sphere)
{
	ABalanceBallGameMode* BalanceBallGameMode = Cast<ABalanceBallGameMode>(GetWorld()->GetAuthGameMode());
	BalanceBallGameMode->SetGameInputUIOnly();
	BalanceBallGameMode->isEnd = true;
}
