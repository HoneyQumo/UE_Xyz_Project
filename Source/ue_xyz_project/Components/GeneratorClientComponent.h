// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GeneratorClientComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGeneratorClientOnToggledSignature, bool, bIsOn);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_XYZ_PROJECT_API UGeneratorClientComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditInstanceOnly)
	class AGeneratorActor* Generator;
	
	UPROPERTY(BlueprintAssignable, Category="Generator client")
	FGeneratorClientOnToggledSignature GeneratorClientOnToggled;
	
	UFUNCTION()
	void OnGeneratorToggled(bool bIsOn);
	
	// Called when the game starts
	virtual void BeginPlay() override;
	
		
};
