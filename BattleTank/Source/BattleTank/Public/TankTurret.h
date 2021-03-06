// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class BATTLETANK_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	// -1 max downward speed, +1 max upward speed
	void Rotate(float RelativeSpeed);
	
private:

	UPROPERTY(EditAnywhere, Category = setup)
		float MaxDegreePerSecond = 25.f;
};
