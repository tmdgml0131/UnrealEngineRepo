// Copyright Epic Games, Inc. All Rights Reserved.

#include "Animation_RetargetGameMode.h"
#include "Animation_RetargetCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnimation_RetargetGameMode::AAnimation_RetargetGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
