// Fill out your copyright notice in the Description page of Project Settings.


#include "GM_BatteryCollector.h"

/*AGM_BatteryCollector::ABatteryCollecterGameMode()
{
	PrimaryActorTick.bCanEverTick = true;

}*/


void AGM_BatteryCollector::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle UnusedTimerHandle;
	GetWorldTimerManager().SetTimer(UnusedTimerHandle, this, &AGM_BatteryCollector::SpawnPlayerRechage,
		FMath::RandRange(2,5), true);
	
}

void AGM_BatteryCollector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}


void AGM_BatteryCollector::SpawnPlayerRechage()
{
	float RandX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector SpawnPosition(RandX, RandY,Spawn_Y_Min);
	FRotator SpawnRotation(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(PlayerRechage, &SpawnPosition, &SpawnRotation);
	
}