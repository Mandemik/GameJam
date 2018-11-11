// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"	
#include "Components/ActorComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/AudioComponent.h"
#include "PlayerInventory.generated.h"



UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class THENEGATYW_API UPlayerInventory : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UPlayerInventory();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere)
		UPawnMovementComponent *movment = nullptr;

	UPROPERTY(EditAnywhere)
		AActor * player = nullptr;

	UPROPERTY(EditAnywhere)
		UAudioComponent *audio = nullptr;

	UPROPERTY(EditAnywhere)
		USoundBase *damageClip = nullptr;

	UPROPERTY(EditAnywhere)
		USoundBase *pickUpClip = nullptr;

	UPROPERTY(EditAnywhere)
		USoundBase *GameOverClip = nullptr;

	UPROPERTY(EditAnywhere)
		USoundBase *GameVinClip = nullptr;


	UPROPERTY(EditAnywhere)
		float clipHP = 100.f;


	void GrabObject();

	void DropObject();

	void TakeDamage(float dmg);

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	UPROPERTY(EditAnywhere)
		bool GrabbingObject = false;

	bool playerLive = true;
};
