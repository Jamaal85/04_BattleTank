// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTurret.h"
#include "BattleTank.h"



void UTankTurret::Rotate(float RelativeSpeed)
{
	// and moves Turret the right amount this frame 
	// given a max Rotation speed at the fram time

	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);

	auto RotationChange = RelativeSpeed * MaxDegreePerSecond * GetWorld()->DeltaTimeSeconds;	// défini le changement d'orientation
	auto Rotation = RelativeRotation.Yaw + RotationChange;							// défini la nouvelle orientation

	SetRelativeRotation(FRotator(0, Rotation, 0));																	// applique la nouvelle orientation
}


