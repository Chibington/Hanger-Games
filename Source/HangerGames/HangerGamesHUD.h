// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "HangerGamesHUD.generated.h"

UCLASS()
class AHangerGamesHUD : public AHUD
{
	GENERATED_BODY()

public:
	AHangerGamesHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

