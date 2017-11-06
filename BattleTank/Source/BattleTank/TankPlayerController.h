// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"	// Must be the last include

class ATank;

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
		ATank* GetControlledTank() const;
		void Tick(float DeltaTime);
		virtual void BeginPlay() override;

private:

	// Start the tank moving the barrel so taht a shot would hit where the crosshair intersects the world.
	void AimTowardsCrossHair();	//
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;

	UPROPERTY(EditAnywhere)
	float CrossHairXLocation = 0.5f, CrossHairYLocation = 0.33333f, LineTraceRange = 1000000.0f; // portée de recherche de 10 km (unité en cm dans unreal)

	bool ATankPlayerController::GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;

	bool ATankPlayerController::GetLookVectorHitLocation(FVector LookDirection, FVector &HitLocation) const;
};
