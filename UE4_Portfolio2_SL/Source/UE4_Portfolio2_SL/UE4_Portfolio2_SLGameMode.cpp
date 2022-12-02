// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4_Portfolio2_SLGameMode.h"
#include "UE4_Portfolio2_SLCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4_Portfolio2_SLGameMode::AUE4_Portfolio2_SLGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("Blueprint'/Game/MyFolder/PlayerCharacter/BP_PlayerCharacter.BP_PlayerCharacter_C'"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
