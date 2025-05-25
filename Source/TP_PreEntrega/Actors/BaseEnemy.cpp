// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"


// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	GetWorldTimerManager().SetTimer(timerHandle, this, &ABaseEnemy::Timer, time, true);
	PrimaryActorTick.bCanEverTick = true;
	Super::BeginPlay();
	
}

// Called every frame
void ABaseEnemy::Timer()
{
	AddActorLocalRotation(rotationSpeed, true);

	GetWorld()->SpawnActor<AActor>(blueprintToSpawn.Get(), GetActorLocation(), GetActorRotation());
}

