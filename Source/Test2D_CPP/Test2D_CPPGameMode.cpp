// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test2D_CPPGameMode.h"
#include "Test2D_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATest2D_CPPGameMode::ATest2D_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
