// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void MovePlatform(float DeltaTime);

	UPROPERTY(VisibleAnywhere)
	float DistanceMoved = 0.0f;


	FVector StartLocation;



	UPROPERTY(EditAnywhere)
	FVector PlatformVector = FVector(220.0f, -150.0f, 390.0f);

	UPROPERTY(EditAnywhere)
	FVector PlatformVelocity = FVector(0.0f, 0.0f, 0.0f);



	UPROPERTY(EditAnywhere)
	int TimeSpeed = 120;

	bool IsMovingLeft = true;

	bool IsPlatformStill = false;
	float PausePlatform = 0.0f;

};
