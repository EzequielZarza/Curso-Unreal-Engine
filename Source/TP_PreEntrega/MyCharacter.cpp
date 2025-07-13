// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "Components/InputComponent.h"

void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();

}

void AMyCharacter::VerticalMovementAxis(float value = 5)
{
	float deltaSeconds = GetWorld()->GetDeltaSeconds();
	FVector movement = GetActorForwardVector() * movementSpeed * deltaSeconds * value;
	AddMovementInput(movement);
}

void AMyCharacter::HorizontalMovementAxis(float value = 5) {
	float deltaSeconds = GetWorld()->GetDeltaSeconds();
	FVector movement = GetActorRightVector() * movementSpeed * deltaSeconds * value;
	AddMovementInput(movement);
}

void AMyCharacter::HorizontalLookAxis(float value = 5) {
	float deltaSeconds = GetWorld()->GetDeltaSeconds();

	AddControllerYawInput(rotationSpeed * deltaSeconds * value);
}

void AMyCharacter::VerticalLookAxis(float value = 5) {
	float deltaSeconds = GetWorld()->GetDeltaSeconds();

	AddControllerPitchInput(rotationSpeed * deltaSeconds * value);
}

void AMyCharacter::StartJump() {
	Jump();
}

void AMyCharacter::EndJump() {
	StopJumping();
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAxis("VerticalMovement", this, &AMyCharacter::VerticalMovementAxis);
	PlayerInputComponent->BindAxis("VerticalLookMovement", this, &AMyCharacter::VerticalLookAxis);
	PlayerInputComponent->BindAxis("HorizontalMovement", this, &AMyCharacter::HorizontalMovementAxis);
	PlayerInputComponent->BindAxis("HorizontalLookMovement", this, &AMyCharacter::HorizontalLookAxis);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AMyCharacter::EndJump);
}

