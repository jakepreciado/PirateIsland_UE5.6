#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PirateShip.generated.h"

UCLASS()
class PIRATEISLAND_API APirateShip : public AActor
{
    GENERATED_BODY()

public:
    APirateShip();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

private:

    // Ship mesh component
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* ShipMesh;

    // Internal tracking angle (degrees)
    float CurrentAngle = 0.f;

public:

    // Center of the circle (your island location)
    UPROPERTY(EditAnywhere, Category = "Circle Movement")
    FVector CircleCenter = FVector::ZeroVector;

    // Radius from the center
    UPROPERTY(EditAnywhere, Category = "Circle Movement")
    float CircleRadius = 25000.f;

    // Orbit speed in degrees per second
    UPROPERTY(EditAnywhere, Category = "Circle Movement")
    float RotationSpeed = 10.f;

    // Start angle on the circle (degrees)
    UPROPERTY(EditAnywhere, Category = "Circle Movement")
    float StartAngle = 0.f;

    // Optional bobbing
    UPROPERTY(EditAnywhere, Category = "Circle Movement|Bobbing")
    bool bEnableBobbing = true;

    UPROPERTY(EditAnywhere, Category = "Circle Movement|Bobbing")
    float BobHeight = 10.f;

    UPROPERTY(EditAnywhere, Category = "Circle Movement|Bobbing")
    float BobSpeed = 1.f;
};
