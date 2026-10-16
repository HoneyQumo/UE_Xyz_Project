// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GeneratorActor.generated.h"

// DECLARE_DELEGATE_OneParam(FOnGeneratorToggledSignature, bool);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnGeneratorToggledSignature, bool);

UENUM(BlueprintType)
enum class EGeneratorType : uint8
{
	Basic = 0,
	Advanced,
	Ultra
};

USTRUCT(BlueprintType)
struct FGeneratorSettingsRow : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float RotationSpeed = 120.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float CooldownTime = 5.f;
};

UCLASS()
class UE_XYZ_PROJECT_API AGeneratorActor : public AActor
{
	GENERATED_BODY()

public:
	FOnGeneratorToggledSignature OnGeneratorToggled;

protected:
	UFUNCTION(BlueprintCallable)
	void ToggleGenerator();

	UFUNCTION(BlueprintCallable)
	float GetCooldownFromRate(float InRotationRate) const;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Generator settings")
	EGeneratorType GeneratorType = EGeneratorType::Basic;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Generator settings")
	class UGeneratorPropsDataAsset* PropSettings;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Generator settings")
	UCurveFloat* CooldownCurve;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Generator state")
	bool bIsOn = true;
};
