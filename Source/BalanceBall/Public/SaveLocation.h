// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HitBoxBase.h"
#include "SaveLocation.generated.h"

/**
 * 
 */
UCLASS()
class BALANCEBALL_API ASaveLocation : public AHitBoxBase
{
	GENERATED_BODY()
	
public:
	ASaveLocation();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class UStaticMeshComponent* SaveMeshComp;
public:
	virtual void OnHitSphere(class ASphereBase* Sphere) override;

};
