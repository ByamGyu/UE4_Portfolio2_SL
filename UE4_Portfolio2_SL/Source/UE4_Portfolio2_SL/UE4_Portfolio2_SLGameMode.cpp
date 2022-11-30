// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4_Portfolio2_SLGameMode.h"
#include "UE4_Portfolio2_SLCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4_Portfolio2_SLGameMode::AUE4_Portfolio2_SLGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
