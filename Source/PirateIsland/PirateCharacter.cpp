#include "PirateCharacter.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"

APirateCharacter::APirateCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    // Capsule size
    GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);
    GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    GetMesh()->SetRelativeLocation(FVector(0.f, 0.f, -96.f)); 

    // Character movement
    GetCharacterMovement()->GravityScale = 1.0f;
    GetCharacterMovement()->MaxWalkSpeed = 600.f;
    GetCharacterMovement()->JumpZVelocity = 600.f;
    GetCharacterMovement()->bOrientRotationToMovement = true;

    // Create camera boom
    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(RootComponent);
    CameraBoom->TargetArmLength = 300.f;
    CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on controller
    CameraBoom->bEnableCameraLag = true;
    CameraBoom->CameraLagSpeed = 10.f; // Adjust for smoother follow
    CameraBoom->bEnableCameraRotationLag = true;
    CameraBoom->CameraRotationLagSpeed = 10.f;
    CameraBoom->SocketOffset = FVector(0.f, 0.f, 100.f); // Raise camera

    // Create follow camera
    FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
    FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

    // Character rotation settings
    bUseControllerRotationYaw = false;
    GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in direction of input
}

void APirateCharacter::BeginPlay()
{
    Super::BeginPlay();
}

void APirateCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void APirateCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Movement
    PlayerInputComponent->BindAxis("MoveForward", this, &APirateCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &APirateCharacter::MoveRight);

    // Camera
    PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
    PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

    // Jump
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APirateCharacter::JumpAction);
    PlayerInputComponent->BindAction("Jump", IE_Released, this, &APirateCharacter::StopJumpAction);
}

void APirateCharacter::MoveForward(float Value)
{
    if (Controller && Value != 0.0f)
    {
        // Find out which way is forward
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        // Get forward vector
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        AddMovementInput(Direction, Value);
    }
}

void APirateCharacter::MoveRight(float Value)
{
    if (Controller && Value != 0.0f)
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
        AddMovementInput(Direction, Value);
    }
}

void APirateCharacter::JumpAction()
{
    Jump();
}

void APirateCharacter::StopJumpAction()
{
    StopJumping();
}
