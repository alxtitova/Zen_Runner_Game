// Copyright Epic Games, Inc. All Rights Reserved.

#include "Running_ManGameMode.h"
#include "Running_ManCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARunning_ManGameMode::ARunning_ManGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
