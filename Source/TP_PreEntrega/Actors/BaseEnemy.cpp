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

	
	if (bulletsShot < bulletsToShoot && GetActorRotation().Yaw > 0 && GetActorRotation().Yaw < 45) {
		//GetWorldTimerManager().ClearTimer(timerHandle);

		GetWorld()->SpawnActor<AActor>(blueprintToSpawn.Get(), GetActorLocation(), GetActorRotation());
		bulletsShot++;

	}
}

void ABaseEnemy::Tick(float deltaSeconds) {
	if (life <= 0) {
		/*AMyGameModeBase* mode = Cast<AMyGameModeBase>(GetWorld()->GetAuthGameMode());
		if (mode != nullptr) {
			mode->currentScore += scoreToAdd;
		}*/
		Destroy();
	}
}
