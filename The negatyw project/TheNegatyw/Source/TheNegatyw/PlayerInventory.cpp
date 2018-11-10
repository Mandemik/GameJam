    
// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerInventory.h"
#include "Engine/World.h"
#include "GameFramework/Controller.h"
#include "Components/ActorComponent.h"
#include "Components/AudioComponent.h"



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

	player = GetWorld()->GetFirstPlayerController()->GetPawn();

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
	if (GrabbingObject)
	{
		GrabbingObject = false;
		UE_LOG(LogTemp, Error, TEXT("Upusciles tasme"));
	}
}

void UPlayerInventory::TakeDamage(float dmg)
{
	if (GrabbingObject && clipHP > 0.f)
	{
		audio->SetSound(damageClip);
		if (!audio->IsPlaying())
		{
			audio->Play();
		}
		clipHP -= dmg;
		FString clipHPString = FString::SanitizeFloat(clipHP);
		UE_LOG(LogTemp, Error, TEXT("Dostales w pierdol, zostalo ci  %s zycia"), *clipHPString);
	}
}

// Called every frame
void UPlayerInventory::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

