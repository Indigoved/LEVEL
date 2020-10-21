// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNewCharacter.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMyNewCharacter::AMyNewCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	HeroMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HeroMesh"));
	HeroMesh->SetupAttachment(RootComponent);
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
void AMyNewCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyNewCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyNewCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(InputComponent);
	InputComponent->BindAxis("Forward", this, &AMyNewCharacter::MoveForward);
	InputComponent->BindAxis("Back", this, &AMyNewCharacter::MoveBack);
	InputComponent->BindAxis("Right", this, &AMyNewCharacter::MoveRight);
	InputComponent->BindAxis("Left", this, &AMyNewCharacter::MoveLeft);
	//InputComponent->BindAction("Jump", this, &AMyNewCharacter::MoveJump);
	InputComponent->BindAxis("Yaw", this, &AMyNewCharacter::Yaw);
	InputComponent->BindAxis("Pitch", this, &AMyNewCharacter::Pitch);
}

void AMyNewCharacter::MoveForward(float amount)
{
	if (Controller && amount)
	{
		FVector fwd = GetActorForwardVector();
		AddMovementInput(fwd, amount);

	}
}

void AMyNewCharacter::MoveBack(float amount)
{
	if (Controller && amount)
	{
		FVector bck = -GetActorForwardVector();
		AddMovementInput(bck, amount);
	}
}

void AMyNewCharacter::MoveRight(float amount)
{
	if (Controller && amount)
	{
		FVector rght = GetActorRightVector();
		AddMovementInput(rght, amount);
	}
}

void AMyNewCharacter::MoveLeft(float amount)
{
	if (Controller && amount)
	{
		FVector lft = -GetActorRightVector();
		AddMovementInput(lft, amount);
	}
}

//void AMyNewCharacter::MoveJump(float amount)
//{
//	if (Controller && amount)
//	{
//		FVector jmp = GetActorLocation();
//		jmp.Z += amount;
//	}
//}

void AMyNewCharacter::Yaw(float amount)
{
	AddControllerYawInput(200.f * amount * GetWorld()->GetDeltaSeconds());
}

void AMyNewCharacter::Pitch(float amount)
{
	AddControllerPitchInput(200.f * amount * GetWorld()->GetDeltaSeconds());
}
