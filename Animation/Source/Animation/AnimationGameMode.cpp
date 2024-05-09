// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimationGameMode.h"
#include "AnimationCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnimationGameMode::AAnimationGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
