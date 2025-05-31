// Fill out your copyright notice in the Description page of Project Settings.


#include "Engine/World.h"
#include "MyGameModeBase.h"

AMyGameModeBase::AMyGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMyGameModeBase::Tick(float deltaSeconds)
{
	if (currentScore >= targetScore)
	{
		GetWorld()->ServerTravel(nextLevel);
	}
}