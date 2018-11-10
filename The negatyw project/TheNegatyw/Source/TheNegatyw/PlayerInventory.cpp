    
// Fill out your copyright notice in the Description page of Project Settings.
#include "Engine/World.h"
#include "GameFramework/Controller.h"
#include "Components/AudioComponent.h"
#include "PlayerInventory.h"


// Sets default values for this component's properties
UPlayerInventory::UPlayerInventory()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	if (audio == nullptr)
	{
		audio = CreateDefaultSubobject<UAudioComponent>(TEXT("PlayerSound"));
	}
	// ...
}


// Called when the game starts
void UPlayerInventory::BeginPlay()
{
	Super::BeginPlay();
	if (audio == nullptr)
	{
		FString ActorName = GetOwner()->GetName();
		UE_LOG(LogTemp, Error, TEXT("Nie znaleziono UAudioComponent w  w %s"), *ActorName);
	}
	
}


void UPlayerInventory::GrabObject()
{
	clipHP = 100.f;
	GrabbingObject = true;
}

void UPlayerInventory::DropObject()
{
	GrabbingObject = false;
}

void UPlayerInventory::TakeDamage(float dmg)
{
	if (GrabbingObject && clipHP > 0.f)
	{
		audio->SetSound(damageClip);
		audio->Play();
		clipHP -= dmg;
	}
}

// Called every frame
void UPlayerInventory::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

