// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseBullet.generated.h"

UCLASS()
class TP_PREENTREGA_API ABaseBullet : public AActor
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	FTimerHandle timer;
	FTimerHandle destroyTimerHandle;

	void Tick(float deltaSeconds) override;
	void NotifyActorBeginOverlap(AActor* OtherActor) override;
	void EjemploTimer();
	void DestroyTimer();

	UPROPERTY(EditAnywhere) FVector speed;
	UPROPERTY(EditAnywhere) float duration;
	UPROPERTY(EditAnywhere) float damage;
	UPROPERTY(EditAnywhere) bool destroyOnContact;

};
