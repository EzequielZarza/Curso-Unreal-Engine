// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

UCLASS()
class TP_PREENTREGA_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMyGameModeBase();
	void Tick(float deltaSeconds) override;

	UPROPERTY(EditAnywhere) int currentScore;
	UPROPERTY(EditAnywhere) int targetScore;
	UPROPERTY(EditANywhere) FString nextLevel;
	
};
