    
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
	movment = player->FindComponentByClass<UPawnMovementComponent>();

	if (audio == nullptr)
	{
		FString ActorName = GetOwner()->GetName();
		UE_LOG(LogTemp, Error, TEXT("Nie znaleziono UAudioComponent w  w %s"), *ActorName);
	}
	
}


void UPlayerInventory::GrabObject()
{
	if (!GrabbingObject)
	{
		clipHP = 100.f;
		GrabbingObject = true;
		audio->SetSound(pickUpClip);
		audio->Play();
	}
}

void UPlayerInventory::DropObject()
{
	if (GrabbingObject)
	{
		GrabbingObject = false;
		audio->SetSound(GameVinClip);
		audio->Play();
		UE_LOG(LogTemp, Error, TEXT("Upusciles tasme"));
	}
}

void UPlayerInventory::TakeDamage(float dmg)
{
	if (GrabbingObject && clipHP > 0.f)
	{
		if (audio->IsPlaying() == false)
		{
			audio->SetSound(damageClip);
			audio->Play();
			UE_LOG(LogTemp, Error, TEXT("PlayDamage"));
		}
		clipHP -= dmg;
		FString clipHPString = FString::SanitizeFloat(clipHP);
		UE_LOG(LogTemp, Error, TEXT("Dostales w pierdol, zostalo ci  %s zycia"), *clipHPString);
	}
	else if(GrabbingObject && clipHP < 0.f)
	{
		if (playerLive)
		{
			playerLive = false;
			movment->DestroyComponent();
			audio->SetSound(GameOverClip);
			audio->Play();
		}
	}
}

// Called every frame
void UPlayerInventory::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

