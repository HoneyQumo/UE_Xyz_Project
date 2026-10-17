// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstLessonGameInstance.h"

const FColor& UFirstLessonGameInstance::GetPlayerColor()
{
	while (PlayerColor == FColor::Black)
	{
		PlayerColor = FColor::MakeRandomColor();
	}
	
	return PlayerColor;
}
