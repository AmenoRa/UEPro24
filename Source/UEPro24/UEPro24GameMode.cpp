// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEPro24GameMode.h"
#include "UEPro24Character.h"
#include "UObject/ConstructorHelpers.h"

AUEPro24GameMode::AUEPro24GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
