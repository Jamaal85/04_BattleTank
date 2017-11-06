// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"
#include "BattleTank.h"



void UTankBarrel::Elevate(float RelativeSpeed)
{
	// and moves barrel the right amount this frame 
	// given a max elevation speed at the fram time

	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);

	auto ElevationChange = RelativeSpeed * MaxDegreePerSecond * GetWorld()->DeltaTimeSeconds;	// défini le changement d'orientation
	auto RawNewElevation = RelativeRotation.Pitch + ElevationChange;							// défini la nouvelle orientation

	auto Elevation = FMath::Clamp<float>(RawNewElevation, MinElevationDegree, MaxElevationDegree);

	SetRelativeRotation(FRotator(Elevation, 0,0));																	// applique la nouvelle orientation
}
