// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyFirstActor.generated.h"

UCLASS()
class UE_XYZ_PROJECT_API AMyFirstActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyFirstActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintCallable)
	void SetRandomRotationSpeed();
	
	UPROPERTY(EditAnywhere)
	int MyFirstProperty = 100;
	
	UPROPERTY(EditAnywhere)
	float MinRotationSpeed = 30.f;
	UPROPERTY(EditAnywhere)
	float MaxRotationSpeed = 360.f;
	
	
	UPROPERTY(EditAnywhere)
	FColor TextColor = FColor::Red;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
private:
	float CurrentRotationSpeed = 0.f;

};
