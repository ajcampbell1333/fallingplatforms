// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPerson01GameMode.h"
#include "ThirdPerson01Character.h"
#include "UObject/ConstructorHelpers.h"

AThirdPerson01GameMode::AThirdPerson01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
