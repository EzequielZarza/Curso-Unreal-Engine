// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseEnemy.generated.h"

UCLASS()
class TP_PREENTREGA_API ABaseEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	FTimerHandle timerHandle;

	UPROPERTY(EditAnywhere) TSubclassOf<AActor> blueprintToSpawn;
	UPROPERTY(EditAnywhere) FRotator rotationSpeed;
	UPROPERTY(EditAnywhere) float time;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void Timer();

};
