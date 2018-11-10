// Fill out your copyright notice in the Description page of Project Settings.

#include "Czernia.h"
#include "Engine/World.h"
#include "GameFramework/Controller.h"


// Sets default values for this component's properties
UCzernia::UCzernia()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCzernia::BeginPlay()
{
	Super::BeginPlay();

	player = GetWorld()->GetFirstPlayerController()->GetPawn();
	inventory = player->FindComponentByClass<UPlayerInventory>();
	// ...
	
}


// Called every frame
void UCzernia::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (dropZone->IsOverlappingActor(player))
	{
		inventory->DropObject();
	}

}

