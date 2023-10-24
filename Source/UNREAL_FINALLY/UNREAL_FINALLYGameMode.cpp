// Copyright Epic Games, Inc. All Rights Reserved.

#include "UNREAL_FINALLYGameMode.h"
#include "UNREAL_FINALLYCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUNREAL_FINALLYGameMode::AUNREAL_FINALLYGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
