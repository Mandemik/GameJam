// Fill out your copyright notice in the Description page of Project Settings.

#include "PickableComponent.h"
#include "Engine/World.h"
#include "GameFramework/Controller.h"



// Sets default values for this component's properties
UPickableComponent::UPickableComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPickableComponent::BeginPlay()
{
	Super::BeginPlay();
	player = GetWorld()->GetFirstPlayerController()->GetPawn();
	inventory = player->FindComponentByClass<UPlayerInventory>();
	// ...
	
}


// Called every frame
void UPickableComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (pickUpZone->IsOverlappingActor(player))
	{
		inventory->GrabObject();
		pickUpZone->Destroy();
		GetOwner()->Destroy();
		UE_LOG(LogTemp, Error, TEXT("Wlazles W trigger"));
	}

	// ...
}

