// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BatteryCollecterGameMode.generated.h"

UCLASS(minimalapi)
class ABatteryCollecterGameMode : public AGameModeBase
{
	GENERATED_BODY()

	virtual void BeginPlay();
	virtual void Tick(float DeltaTime);

public:
	ABatteryCollecterGameMode();
	
};



