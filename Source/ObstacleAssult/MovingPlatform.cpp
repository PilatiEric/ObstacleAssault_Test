// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	SetActorLocation(PlatformVector);
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (!IsPlatformStill)
	{
		if (IsMovingLeft)
		{
			PlatformVector.X -= 1;

			//Determine if the platform has reached the end of its path
			if (FMath::IsNearlyEqual(PlatformVector.X, -410.0f))
			{ 
				IsMovingLeft = false; 
				IsPlatformStill = true;
			}
		}
		else
		{
			PlatformVector.X += 1;

			//Determine if the platform has reached the end of its path
			if (FMath::IsNearlyEqual(PlatformVector.X, 220.0f))
			{ 
				IsMovingLeft = true;
				IsPlatformStill = true;
			}
		}

		SetActorLocation(PlatformVector);
	}
	else
	{
		PausePlatform += 1.0f;

		//Determine if time platform has paused is up
		if (FMath::IsNearlyEqual(PausePlatform, 150.0f))
		{
			PausePlatform = 0.0f;
			IsPlatformStill = false;
		}
	}
}

