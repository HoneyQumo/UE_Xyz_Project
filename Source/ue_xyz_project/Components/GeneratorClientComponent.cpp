// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/GeneratorClientComponent.h"
#include "../Actors/GeneratorActor.h"


void UGeneratorClientComponent::OnGeneratorToggled(bool bIsOn)
{
	FString OnOffString = bIsOn ? L"On" : L"OFF";
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, FString::Printf(L"OnGeneratorToggled for %s generator is %s", *GetOwner()->GetName(), *OnOffString));
	if (GeneratorClientOnToggled.IsBound())
	{
		GeneratorClientOnToggled.Broadcast(bIsOn);
	}
}

// Called when the game starts
void UGeneratorClientComponent::BeginPlay()
{
	Super::BeginPlay();
	if (IsValid(Generator))
	{
		Generator->OnGeneratorToggled.AddUObject(this, &UGeneratorClientComponent::OnGeneratorToggled);
	}
}
