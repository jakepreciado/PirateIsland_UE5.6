#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovableObject.generated.h"

UCLASS()
class PIRATEISLAND_API AMovableObject : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AMovableObject();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Kick the item in a direction
    UFUNCTION(BlueprintCallable, Category = "Interaction")
    void Kick(FVector Direction, float Strength);

    // The physics mesh
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movable")
    UStaticMeshComponent* ItemMesh;

    // Mesh you can assign in editor
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movable")
    UStaticMesh* MeshToUse;
};
