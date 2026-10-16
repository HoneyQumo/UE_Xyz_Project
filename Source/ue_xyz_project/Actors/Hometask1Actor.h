// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Hometask1Actor.generated.h"

UENUM(BlueprintType)
enum class EHometask1 : uint8
{
	None = 0,
	One,
	Two,
	Three
};

USTRUCT(BlueprintType)
struct FHomeTaskStruct
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, Category = "Hometask1")
	float EnvEditDefaultsOnly = 2.f;
	
	UPROPERTY(EditInstanceOnly, Category = "Hometask1")
	float EnvEditInstanceOnly = 5.f;
};

UCLASS()
class UE_XYZ_PROJECT_API AHometask1Actor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHometask1Actor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintCallable)
	void PrintEnumValue(int EnumValue) const;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hometask1")
	EHometask1 EnvEditAnywhere = EHometask1::None;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
