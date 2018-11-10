// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "PlayerInventory.h"
#include "Czernia.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THENEGATYW_API UCzernia : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCzernia();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere)
		ATriggerVolume *dropZone = nullptr;

	UPROPERTY(EditAnywhere)
		AActor *player = nullptr;

	UPROPERTY(EditAnywhere)
		UPlayerInventory *inventory = nullptr;

	
};
