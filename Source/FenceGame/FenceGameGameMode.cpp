// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FenceGameGameMode.h"
#include "FenceGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFenceGameGameMode::AFenceGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
