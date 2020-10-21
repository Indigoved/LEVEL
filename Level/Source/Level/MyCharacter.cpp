// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	HeroMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HeroMesh"));
	//HeroMesh->SetupAttachment(RootComponent);
	ManeCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ManeCollision"));
	ChestCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ChestHitBox"));
	WaistCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("WaistHitBox"));
	BodyCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BodyHitBox"));
	HeadCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HeadHitBox"));
	RightLegCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RightLegHitBox"));
	LeftLegCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LeftLegHitBox"));
	RightArmCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RightArmHitBox"));
	LeftArmCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LeftArmHitBox"));
	LeftHandCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LeftHandHitBox"));
	RightHandCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RightHandHitBox"));
	LeftHipCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LeftHipHitBox"));
	RightHipCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RightHipHitBox"));
	LeftWristCollision = CreateDefaultSubobject<USphereComponent>(TEXT("LeftWristHitBox"));
	RightWristCollision = CreateDefaultSubobject<USphereComponent>(TEXT("RightWristHitBox"));
	FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	ThirdPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(InputComponent);

	InputComponent->BindAxis("Forward", this, &AMyCharacter::MoveForward);
	InputComponent->BindAxis("Back", this, &AMyCharacter::MoveBack);
	InputComponent->BindAxis("Right", this, &AMyCharacter::MoveRight);
	InputComponent->BindAxis("Left", this, &AMyCharacter::MoveLeft);
	//InputComponent->BindAxis("Jump", this, &AMyCharacter::MoveJump);
	InputComponent->BindAxis("Yaw", this, &AMyCharacter::Yaw);
	InputComponent->BindAxis("Pitch", this, &AMyCharacter::Pitch);
}

void AMyCharacter::MoveForward(float amount)
{
	if (Controller && amount)
	{
		FVector fwd = GetActorForwardVector();
		AddMovementInput(fwd, amount);

	}
}

void AMyCharacter::MoveBack(float amount)
{
	if (Controller && amount)
	{
		FVector bck = -GetActorForwardVector();
		AddMovementInput(bck, amount);
	}
}

void AMyCharacter::MoveRight(float amount)
{
	if (Controller && amount)
	{
		FVector rght = GetActorRightVector();
		AddMovementInput(rght, amount);
	}
}

void AMyCharacter::MoveLeft(float amount)
{
	if (Controller && amount)
	{
		FVector lft = -GetActorRightVector();
		AddMovementInput(lft, amount);
	}
}

void AMyCharacter::Yaw(float amount)
{
	AddControllerYawInput(200.f * amount * GetWorld()->GetDeltaSeconds());
}

void AMyCharacter::Pitch(float amount)
{
	AddControllerPitchInput(200.f * amount * GetWorld()->GetDeltaSeconds());
}
