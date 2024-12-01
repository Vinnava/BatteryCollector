// Copyright Epic Games, Inc. All Rights Reserved.

#include "BatteryCollecterGameMode.h"
#include "BatteryCollecterCharacter.h"
#include "UObject/ConstructorHelpers.h"


ABatteryCollecterGameMode::ABatteryCollecterGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}


void ABatteryCollecterGameMode::BeginPlay()
{
	Super::BeginPlay();
	
}


void ABatteryCollecterGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}
