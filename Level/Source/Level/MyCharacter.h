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

	//блок статистик
	float UGetStamina() { return stamina; }//возвращает количество выносливости
	float UGetBlood() { return TheAmountOfBlood; }//возвращает количество крови
	float UGetConcentration() { return concentration; }//возвращает количество концентрации
	float UGetPhysicalState() { return ThePhysicalState; }//возвращает количество физического состояния
	bool UIsDead();//указывает жив игрок или нет
	bool UIsFracture() { return fracture; }//показывает нанесен ли перелом
	bool UIsBleeding() { return bleeding; }//показывает наличие кровотечения
	bool UIsStun() { return stun; }//показывает наличие оглушения
	bool UIsdehydration() { return dehydration; }//показывает наличие обезвоживания
	bool UIsHunger() { return hunger; }//показывает наличие голода
	bool UIsCold() { return cold; }//показывает замерзает персонаж или нет
	bool UIsHeat() { return heat; }//показывает жарко персонажу или нет
	bool UIsChoking() { return choking; }//показывает наличие удушья
	bool UIsTreatment() { return treatment; }//показывает наличие лечения
	bool UIsFrostbite() { return frostbite; }//показывает наличие обморожения
	bool UIsOverheating() { return overheating; }//показывает наличие перегрева
	bool UIsBlinding() { return blinding; }//показывает наличие ослепления
	float DefeatedDamage(float damage, int where);//просчет входящего урона
private:
	// система здоровья игрока
	float stamina;
	const float maxStamina = 100;
	float TheAmountOfBlood;
	const float maxTheAmountOfBlood = 100;
	float concentration;
	const float maxOfconcentration = 100;
	float ThePhysicalState;
	const float maxOfThePhysicalState = 100;
	bool isDead;
	//система хитбоксов
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
	//статус эффекты
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
