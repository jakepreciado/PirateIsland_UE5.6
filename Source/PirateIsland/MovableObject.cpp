#include "MovableObject.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMovableObject::AMovableObject()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create mesh component
    ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
    RootComponent = ItemMesh;

    // Enable physics
    ItemMesh->SetSimulatePhysics(true);
    ItemMesh->SetEnableGravity(true);

    // Optional physics tuning
    ItemMesh->SetMassOverrideInKg(NAME_None, 50.f);
    ItemMesh->SetLinearDamping(0.1f);
    ItemMesh->SetAngularDamping(0.1f);

    // Allow collision
    ItemMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    ItemMesh->SetCollisionProfileName(TEXT("PhysicsActor"));
}

// Called when the game starts or when spawned
void AMovableObject::BeginPlay()
{
    Super::BeginPlay();

    // Assign the mesh you set in the editor
    if (MeshToUse)
    {
        ItemMesh->SetStaticMesh(MeshToUse);
    }
}

// Called every frame
void AMovableObject::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Apply a kick impulse
void AMovableObject::Kick(FVector Direction, float Strength)
{
    if (ItemMesh)
    {
        ItemMesh->AddImpulse(Direction * Strength, NAME_None, true);
    }
}
