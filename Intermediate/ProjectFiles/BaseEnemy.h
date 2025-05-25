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
	UPROPERTY(EditAnywhere) FRotator rotationSpeed;
	UPROPERTY(EditAnywhere) float time;

protected:
	void BeginPlay() override;
	void Timer();
};