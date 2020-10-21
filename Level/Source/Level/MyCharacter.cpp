// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	stamina = maxStamina;
	TheAmountOfBlood = maxTheAmountOfBlood;
	ThePhysicalState = maxOfThePhysicalState;
	concentration = maxOfconcentration;
	isDead = false;
	fracture = false;
	bleeding = false;
	stun = false;
	dehydration = false;
	hunger = false;
	cold = false;
	heat = false;
	choking = false;
	treatment = false;
	frostbite = false;
	overheating = false;
	blinding = false;
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
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

bool AMyCharacter::UIsDead()
{
	if (stamina == 0 && TheAmountOfBlood == 0 && concentration == 0 && ThePhysicalState == 0)
		return true;
	else
		return false;
}

float AMyCharacter::DefeatedDamage(float damage, int where)
{
	switch (where)
	{
	case Head:
		return ThePhysicalState -= (damage * mHead);
		break;
	case Body:
		return ThePhysicalState -= (damage * mBody);
		break;
	case Leg:
		return ThePhysicalState -= (damage * mLegOrHand);
		break;
	case Hand:
		return ThePhysicalState -= (damage * mLegOrHand);
		break;
	default:
		break;
	}
}

