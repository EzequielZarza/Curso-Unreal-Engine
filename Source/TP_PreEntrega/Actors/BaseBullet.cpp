// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseBullet.h"
#include "TimerManager.h"

// Called every frame
void ABaseBullet::Tick(float deltaSeconds)
{
	AddActorLocalOffset(speed, true);
}

// Called when the game starts or when spawned
void ABaseBullet::BeginPlay()
{
	GetWorldTimerManager().SetTimer(timer, this, &ABaseBullet::EjemploTimer, 1, true);

	GetWorldTimerManager().SetTimer(destroyTimerHandle, this, &ABaseBullet::DestroyTimer, 3, true);

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Super::BeginPlay();
	
}

void ABaseBullet::NotifyActorBeginOverlap(AActor* OtherActor) {
	OtherActor->Destroy();
}

void ABaseBullet::EjemploTimer() {

}

void ABaseBullet::DestroyTimer() {
	Destroy();
}
