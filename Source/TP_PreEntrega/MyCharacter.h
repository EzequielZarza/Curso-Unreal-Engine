// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class TP_PREENTREGA_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere) float movementSpeed;
	UPROPERTY(EditAnywhere) float rotationSpeed;

	void StartJump();
	void EndJump();
	void VerticalMovementAxis(float value);
	void VerticalLookAxis(float value);
	void HorizontalMovementAxis(float value);
	void HorizontalLookAxis(float value);
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
