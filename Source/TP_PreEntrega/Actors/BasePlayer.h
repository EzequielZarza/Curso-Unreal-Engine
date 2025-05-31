// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePlayer.generated.h"

UCLASS()
class TP_PREENTREGA_API ABasePlayer : public APawn
{
	GENERATED_BODY()

public:	
	UPROPERTY(EditAnywhere) TSubclassOf<AActor> bulletBlueprint;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void Shoot();

};
