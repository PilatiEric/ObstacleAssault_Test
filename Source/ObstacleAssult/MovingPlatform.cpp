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

	FVector CurrentLocation = GetActorLocation();

	
	if (!IsPlatformStill)
	{
		if (IsMovingLeft)
		{
			CurrentLocation.X -= (MovementSpeed * DeltaTime);

			//Determine if the platform has reached the end of its path
			if (FMath::IsWithin(CurrentLocation.X, -420.0f, -410.0f))
			{
				IsMovingLeft = false; 
				IsPlatformStill = true;
			}
		}
		else
		{
			CurrentLocation.X += (MovementSpeed * DeltaTime);

			//Determine if the platform has reached the end of its path
			if (FMath::IsWithin(CurrentLocation.X, 220.0f, 230.0f))
			{ 
				IsMovingLeft = true;
				IsPlatformStill = true;
			}
		}

		SetActorLocation(CurrentLocation);
	}
	else
	{
		PausePlatform += (MovementSpeed * DeltaTime);

		//Determine if time platform has paused is up
		if (FMath::IsWithin(PausePlatform, 150.0f, 160.0f))
		{
			PausePlatform = 0.0f;
			IsPlatformStill = false;
		}
	}
}

