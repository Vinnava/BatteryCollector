// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BatteryCollecterGameMode.generated.h"

UCLASS(minimalapi)
class ABatteryCollecterGameMode : public AGameModeBase
{
	GENERATED_BODY()

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

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

public:
	ABatteryCollecterGameMode();
};



