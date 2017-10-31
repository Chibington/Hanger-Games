// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "HangerGamesGameMode.h"
#include "HangerGamesHUD.h"
#include "HangerGamesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHangerGamesGameMode::AHangerGamesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHangerGamesHUD::StaticClass();
}
