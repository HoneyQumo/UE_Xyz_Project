// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/GeneratorActor.h"

void AGeneratorActor::ToggleGenerator()
{
	bIsOn = !bIsOn;
	if (OnGeneratorToggled.IsBound())
	{
		OnGeneratorToggled.Broadcast(bIsOn);
	}
}

float AGeneratorActor::GetCooldownFromRate(float InRotationRate) const
{
	float Result = 0.f;
	
	if (IsValid(CooldownCurve))
	{
		Result = CooldownCurve->GetFloatValue(InRotationRate);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta, FString::Printf(L"AGeneratorActor::GetCooldownFromRate. Rate: %f, Cooldown: %f", InRotationRate, Result));
	}
	
	return Result;
}
