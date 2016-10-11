// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "OculusHorror.h"
#include "OculusHorrorGameMode.h"
#include "OculusHorrorHUD.h"
#include "OculusHorrorCharacter.h"

AOculusHorrorGameMode::AOculusHorrorGameMode()
	: Super()
{
	/* set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
	*/

	// use our custom HUD class
	HUDClass = AOculusHorrorHUD::StaticClass();
}
