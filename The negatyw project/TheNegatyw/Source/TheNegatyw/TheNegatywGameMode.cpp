// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TheNegatywGameMode.h"
#include "TheNegatywCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheNegatywGameMode::ATheNegatywGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
