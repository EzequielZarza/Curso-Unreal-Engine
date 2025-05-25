#include "BaseEnemy.h"
#include "TimerManager.h"

void ABaseEnemy::BeginPlay()
{
	GetWorldTimerManager().SetTImer(timerHandle, this, &ABaseEnemy::Timer, time, true);

	PrimaryActorTick.bCanEverTick = true;
	Super::BeginPlay();
}

void ABaseEnemy::Timer() {
	AddActorLocalRotation(rotationSpeed, true);
}