// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class LEVEL_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	
		
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//���� ���������
	float UGetStamina() { return stamina; }//���������� ���������� ������������
	float UGetBlood() { return TheAmountOfBlood; }//���������� ���������� �����
	float UGetConcentration() { return concentration; }//���������� ���������� ������������
	float UGetPhysicalState() { return ThePhysicalState; }//���������� ���������� ����������� ���������
	bool UIsDead();//��������� ��� ����� ��� ���
	bool UIsFracture() { return fracture; }//���������� ������� �� �������
	bool UIsBleeding() { return bleeding; }//���������� ������� ������������
	bool UIsStun() { return stun; }//���������� ������� ���������
	bool UIsdehydration() { return dehydration; }//���������� ������� �������������
	bool UIsHunger() { return hunger; }//���������� ������� ������
	bool UIsCold() { return cold; }//���������� ��������� �������� ��� ���
	bool UIsHeat() { return heat; }//���������� ����� ��������� ��� ���
	bool UIsChoking() { return choking; }//���������� ������� ������
	bool UIsTreatment() { return treatment; }//���������� ������� �������
	bool UIsFrostbite() { return frostbite; }//���������� ������� �����������
	bool UIsOverheating() { return overheating; }//���������� ������� ���������
	bool UIsBlinding() { return blinding; }//���������� ������� ����������
	float DefeatedDamage(float damage, int where);//������� ��������� �����
private:
	// ������� �������� ������
	float stamina;
	const float maxStamina = 100;
	float TheAmountOfBlood;
	const float maxTheAmountOfBlood = 100;
	float concentration;
	const float maxOfconcentration = 100;
	float ThePhysicalState;
	const float maxOfThePhysicalState = 100;
	bool isDead;
	//������� ���������
	enum PartOfTheBody
	{
		Head,
		Body,
		Hand,
		Leg
	};
	const float mHead = 1;
	const float mBody = 0.5;
	const float mLegOrHand = 0.25;
	//������ �������
	bool fracture;
	bool bleeding;
	bool stun;
	bool dehydration;
	bool hunger;
	bool cold;
	bool heat;
	bool choking;
	bool treatment;
	bool frostbite;
	bool overheating;
	bool blinding;
};
