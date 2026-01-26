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

	StartLocation = GetActorLocation();
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlatform(DeltaTime);
}

void AMovingPlatform::MovePlatform(float DeltaTime)
{
	if (!IsPlatformStill)
	{
		FVector CurrentLocation = GetActorLocation();		

		DistanceMoved = FVector::Dist(StartLocation, CurrentLocation);

		//Determine if the platform has reached the end of its path
		if (DistanceMoved >= MoveDistance)
		{
			//THIS IS ONE OF THE NEW FUNCTIONS
			CalculateOvershoot();

			//THIS IS ONE OF THE NEW FUNCTIONS
			CorrectOvershoot();

			IsPlatformStill = true;
			PlatformVelocity *= -1.f;
		}
		else
		{
			//Calculate directional speed according to computer speed
			CurrentLocation += (PlatformVelocity * DeltaTime);

			SetActorLocation(CurrentLocation);
		}
	}
	else
	{
		PausePlatform += (TimeSpeed * DeltaTime);

		//Determine if time platform has paused is up
		if (PausePlatform > PauseTime)
		{
			PausePlatform = 0.0f;
			IsPlatformStill = false;
		}
	}
}


//THIS IS ONE OF THE NEW FUNCTIONS
//Calculates how much the platform overshot the end of the path and displays that and the name of the particular platform object in the UE log
void AMovingPlatform::CalculateOvershoot()
{
	float OvershootAmount = DistanceMoved - MoveDistance;
	FString Name = GetName();
	UE_LOG(LogTemp, Display, TEXT("%s overshot by %f"), *Name, OvershootAmount);
}


//THIS IS ONE OF THE NEW FUNCTIONS
//Calculates the precise coordinates for the end of the plaform's path and sets as the platform's current location
void AMovingPlatform::CorrectOvershoot()
{
	FVector MoveDirection = PlatformVelocity.GetSafeNormal();
	FVector NewStartLocation = StartLocation + (MoveDirection * MoveDistance);
	SetActorLocation(NewStartLocation);
	StartLocation = NewStartLocation;
}



