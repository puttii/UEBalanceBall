// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BalanceBallGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BALANCEBALL_API ABalanceBallGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ABalanceBallGameMode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerPawn")
	class ASphereBase* PlayerPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurrentStart")
	FVector CurrentStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PlayerDeathNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isEnd;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SetPlayerLocation();

	UFUNCTION(BlueprintCallable)
	void SetCurrentStart(FVector Location);

	UFUNCTION(BlueprintCallable)
	void SetGameInputGameAndUI();

	UFUNCTION(BlueprintCallable)
	void SetGameInputUIOnly();
	};
