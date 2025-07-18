// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveLocation.h"
#include "SphereBase.h"
#include "Components/BoxComponent.h"
#include "GameMode/BalanceBallGameMode.h"
#include "Components/StaticMeshComponent.h"

ASaveLocation::ASaveLocation()
{
	SaveMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = SaveMeshComp;
	BoxHitComp->SetupAttachment(RootComponent);
}

void ASaveLocation::OnHitSphere(ASphereBase* Sphere)
{
	ABalanceBallGameMode* BalanceBallGameMode = Cast<ABalanceBallGameMode>(GetWorld()->GetAuthGameMode());
	BalanceBallGameMode->SetCurrentStart(BoxHitComp->GetComponentLocation());
}
