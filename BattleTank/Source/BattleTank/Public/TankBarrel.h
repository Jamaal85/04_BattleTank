// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
		// -1 max downward speed, +1 max upward speed
		void Elevate(float RelativeSpeed);

private:

	UPROPERTY(EditAnywhere, Category = setup)
		float MaxDegreePerSecond = 10.f;

	UPROPERTY(EditAnywhere, Category = setup)
		float MinElevationDegree = 0.f;

	UPROPERTY(EditAnywhere, Category = setup)
		float MaxElevationDegree = 40.f;
};
