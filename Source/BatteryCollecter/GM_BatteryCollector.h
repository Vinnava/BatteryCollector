// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GM_BatteryCollector.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTER_API AGM_BatteryCollector : public AGameMode
{
	GENERATED_BODY()
	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	float Spawn_Z = 500.0f;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<APawn> PlayerRechage;

	UPROPERTY(EditAnywhere)
	float Spawn_Y_Min;

	UPROPERTY(EditAnywhere)
	float Spawn_Y_Max;

	UPROPERTY(EditAnywhere)
	float Spawn_X_Min;

	UPROPERTY(EditAnywhere)
	float Spawn_X_Max;

	void SpawnPlayerRechage();
	
};
