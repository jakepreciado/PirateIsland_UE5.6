#include "PirateShip.h"
#include "Components/StaticMeshComponent.h"
#include "Math/UnrealMathUtility.h"

APirateShip::APirateShip()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create mesh component
    ShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
    RootComponent = ShipMesh;

    ShipMesh->SetMobility(EComponentMobility::Movable);
    ShipMesh->SetSimulatePhysics(false);
}

void APirateShip::BeginPlay()
{
    Super::BeginPlay();

    // Start at the specified angle
    CurrentAngle = StartAngle;

    const float Radians = FMath::DegreesToRadians(CurrentAngle);

    FVector StartPos;
    StartPos.X = CircleCenter.X + CircleRadius * FMath::Cos(Radians);
    StartPos.Y = CircleCenter.Y + CircleRadius * FMath::Sin(Radians);
    StartPos.Z = CircleCenter.Z; // ship Z = water level

    SetActorLocation(StartPos);
}

void APirateShip::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Increment the angle
    CurrentAngle += RotationSpeed * DeltaTime;

    const float Radians = FMath::DegreesToRadians(CurrentAngle);

    // Calculate new location on the circle
    FVector NewLocation;
    NewLocation.X = CircleCenter.X + CircleRadius * FMath::Cos(Radians);
    NewLocation.Y = CircleCenter.Y + CircleRadius * FMath::Sin(Radians);

    // Z = water height + optional bob
    float Z = CircleCenter.Z;
    if (bEnableBobbing)
    {
        Z += FMath::Sin(GetWorld()->TimeSeconds * BobSpeed) * BobHeight;
    }
    NewLocation.Z = Z;

    // Calculate movement direction
    FVector Direction = (NewLocation - GetActorLocation()).GetSafeNormal();

    // Move the ship
    SetActorLocation(NewLocation);

    // Rotate ship to face movement
    if (!Direction.IsNearlyZero())
    {
        SetActorRotation(Direction.Rotation());
    }
}