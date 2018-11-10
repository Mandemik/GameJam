// Fill out your copyright notice in the Description page of Project Settings.

#include "LightSwitch.h"
#include "Engine/World.h"
#include "Components/LightComponent.h"

// Sets default values for this component's properties
ULightSwitch::ULightSwitch()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULightSwitch::BeginPlay()
{
	Super::BeginPlay();

	SetupLightComponent();

	player = GetWorld()->GetFirstPlayerController()->GetPawn();

	timeFromLastSwitch = GetWorld()->GetTimeSeconds();
	// ...

}


// Called every frame
void ULightSwitch::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{

	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (SwitingLight) 
	{
		if (!isOn && GetWorld()->GetTimeSeconds() > timeFromLastSwitch + timeLightOf)
		{
			if (GetWorld()->GetTimeSeconds() > timeFromLastSwitch + timeLightOf)
			{
				isOn = true;
				lightCompnent->SetIntensity(lightIntenisty);
				timeFromLastSwitch = GetWorld()->GetTimeSeconds();
			}
		}
		else if (isOn)
		{
			if (damageZone->IsOverlappingActor(player))
			{
				player->FindComponentByClass<UPlayerInventory>()->TakeDamage(lightDamage*DeltaTime);
			}
			if (GetWorld()->GetTimeSeconds() > timeLightOn + timeFromLastSwitch)
			{
				isOn = false;
				lightCompnent->SetIntensity(0.f);
				timeFromLastSwitch = GetWorld()->GetTimeSeconds();
			}
		}

	}


	if (movableObject)
	{
		FVector lightPos = owner->GetActorLocation();
		if (moveLeft && lightPos.Y > PositionMaxY)
		{
			moveLeft = false;
			speedMoveY = -speedMoveY;
		}
		else if (!moveLeft && lightPos.Y < PositionMinY)
		{
			moveLeft = true;
			speedMoveY = -speedMoveY;
		}

		if (moveUp && lightPos.X > PositionMaxX)
		{
			moveUp = false;
			speedMoveX = -speedMoveX;
		}
		else if (!moveUp && lightPos.X < PositionMinX)
		{
			moveUp = true;
			speedMoveX = -speedMoveX;
		}
		FVector newPos = lightPos + FVector(speedMoveX * DeltaTime, speedMoveY * DeltaTime, 0.f);
		/*UE_LOG(LogTemp, Error, TEXT("Twoja pozycja to  w %s"), *newPos.ToString());*/
		owner->SetActorLocation(newPos);
	}
}

void ULightSwitch::SetupLightComponent()
{
	lightCompnent = GetOwner()->FindComponentByClass<ULightComponent>();
	if (lightCompnent == nullptr)
	{
		FString ActorName = GetOwner()->GetName();
		UE_LOG(LogTemp, Error, TEXT("Nie znaleziono UlightComponent w  w %s"), *ActorName);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Odnaleziono Light Component"));
	}
}



