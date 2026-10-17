// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FirstLessonGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UE_XYZ_PROJECT_API UFirstLessonGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	const FColor& GetPlayerColor();
	
private:
	FColor PlayerColor = FColor::Black;
};
