// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/LightComponent.h"
#include "Engine/TriggerVolume.h"
#include "PlayerInventory.h"
#include "LightSwitch.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class THENEGATYW_API ULightSwitch : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	ULightSwitch();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	UPROPERTY(EditAnywhere)
		float lightDamage = 10.f;

	UPROPERTY(EditAnywhere)
		bool SwitingLight = true;

	UPROPERTY(EditAnywhere)
		bool isOn = true;

	UPROPERTY(EditAnywhere)
		bool movableObject = false;

	UPROPERTY(EditAnywhere)
		float timeLightOn = 5.f;

	UPROPERTY(EditAnywhere)
		float timeLightOf = 2.f;

	UPROPERTY(EditAnywhere)
		float lightIntenisty = 0.f;

	ULightComponent *lightCompnent = nullptr;

	UPROPERTY(EditAnywhere)
		ATriggerVolume *damageZone = nullptr;

	float timeFromLastSwitch = 0.f;

	UPROPERTY(EditAnywhere)
	AActor *owner = nullptr;

	AActor *player = nullptr;

	void SetupLightComponent();

	UPROPERTY(EditAnywhere)
		float speedMoveX;

	UPROPERTY(EditAnywhere)
		float speedMoveY;

	UPROPERTY(EditAnywhere)
		bool moveLeft = true;

	UPROPERTY(EditAnywhere)
		float PositionMaxY; 
	UPROPERTY(EditAnywhere)
		float PositionMinY;

	UPROPERTY(EditAnywhere)
		bool moveUp = true;

	UPROPERTY(EditAnywhere)
		float PositionMaxX;
	UPROPERTY(EditAnywhere)
		float PositionMinX;

};
