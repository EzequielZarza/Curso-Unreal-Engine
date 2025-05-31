// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlayer.h"
#include "Engine/World.h"
#include "Components/InputComponent.h"


void ABasePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ABasePlayer::Shoot);
}

void ABasePlayer::Shoot()
{
	GetWorld()->SpawnActor<AActor>(bulletBlueprint.Get(), GetActorLocation(), GetActorRotation());
}

