// Copyright Epic Games, Inc. All Rights Reserved.

#include "ggj21gameGameMode.h"
#include "ggj21gameCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aggj21gameGameMode::Aggj21gameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
