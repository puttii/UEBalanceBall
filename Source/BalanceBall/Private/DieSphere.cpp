// Fill out your copyright notice in the Description page of Project Settings.


#include "DieSphere.h"
#include "SphereBase.h"
#include "Engine.h"
#include "GameMode/BalanceBallGameMode.h"

void ADieSphere::OnHitSphere(ASphereBase* Sphere)
{
	ABalanceBallGameMode* BalanceBallGameMode = Cast<ABalanceBallGameMode>(GetWorld()->GetAuthGameMode());
	BalanceBallGameMode->SetPlayerLocation();
	BalanceBallGameMode->PlayerDeathNum++;
}
