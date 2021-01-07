// Copyright Epic Games, Inc. All Rights Reserved.

#include "MythologyGameMode.h"
#include "MythologyPlayerController.h"
#include "MythologyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMythologyGameMode::AMythologyGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMythologyPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}