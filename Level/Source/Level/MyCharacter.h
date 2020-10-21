// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"
#include "MyCharacter.generated.h"

UCLASS()
class LEVEL_API AMyCharacter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
		USkeletalMeshComponent* HeroMesh;	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ManeCollision")
		UCapsuleComponent* ManeCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hitbox")
		UBoxComponent* ChestCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hitbox")
		UBoxComponent* WaistCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hitbox")
		UBoxComponent* BodyCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hitbox")
		UCapsuleComponent* HeadCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hitbox")
		UCapsuleComponent* RightLegCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hitbox")
		UCapsuleComponent* LeftLegCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hitbox")
		UCapsuleComponent* RightArmCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hitbox")
		UCapsuleComponent* LeftArmCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hitbox")
		UCapsuleComponent* LeftHandCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hitbox")
		UCapsuleComponent* RightHandCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hitbox")
		UCapsuleComponent* LeftHipCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hitbox")
		UCapsuleComponent* RightHipCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hitbox")
		USphereComponent* LeftWristCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hitbox")
		USphereComponent* RightWristCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		UCameraComponent* FirstPersonCamera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		UCameraComponent* ThirdPersonCamera;

	UFUNCTION()
		void MoveForward(float amount);
	UFUNCTION()
		void MoveBack(float amount);
	UFUNCTION()
		void MoveRight(float amount);
	UFUNCTION()
		void MoveLeft(float amount);
	/*UFUNCTION()
		void MoveJump(float amount);*/
	UFUNCTION()
		void Yaw(float amount);
	UFUNCTION()
		void Pitch(float amount);

	//система здоровья
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PhisicalState")
		float PhysicalState;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Blood")
		float blood;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Dead")
		bool isDead;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "LowBlood")
		bool LowBlood;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Broken")
		bool Broken;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DamageKf")
		float Kf;
};
