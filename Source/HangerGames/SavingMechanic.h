// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SavingMechanic.generated.h"

/**
 * 
 */
UCLASS()
class HANGERGAMES_API USavingMechanic : public USaveGame
{
	GENERATED_BODY()
	
public:

	UPROPERTY(VisibleAnywhere, Category = "SaveInfo")
		FString PlayerName;

	UPROPERTY(VisibleAnywhere, Category = "SaveInfo")
		FString SaveSlotName;
	UPROPERTY(VisibleAnywhere, Category = "SaveInfo")
		uint32 UserIndex;

	UPROPERTY(VisibleAnywhere, Category = "SaveInfo")
		uint32 Money;

	USavingMechanic();
	
	
};
