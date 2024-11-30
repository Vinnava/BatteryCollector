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


void ABatteryCollecterGameMode::SpawnPlayerRechage()
{
	float RandX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector SpawnPosition(RandX, RandY,Spawn_Y_Min);
	FRotator SpawnRotation(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(PlayerRechage, &SpawnPosition, &SpawnRotation);
	
}
