// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Hometask1Actor.h"

// Sets default values
AHometask1Actor::AHometask1Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHometask1Actor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHometask1Actor::PrintEnumValue(const int EnumValue) const
{
	GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Blue, FString::Printf(L"EnvEditAnywhere enum value: %i", EnumValue));
}

// Called every frame
void AHometask1Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

