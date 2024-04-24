// Fill out your copyright notice in the Description page of Project Settings.


#include "BuffComponent.h"
#include "Blaster/Character/BlasterCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

UBuffComponent::UBuffComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UBuffComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UBuffComponent::Heal(float HealAmount, float HealingTime)
{
	bHealing = true;

	HealingRate = HealAmount / HealingTime;
	AmountToHeal += HealAmount;
}

void UBuffComponent::BuffSpeed(float BuffSpeed, float BuffTime)
{
	// ���� �̵��ӵ��� �ִ뺸�� ũ�ų� ���ٸ� �Լ� ����
	if (!Character || Character->GetCharacterMovement()->MaxWalkSpeed >= Character->GetCharacterMaxSpeed()) return;

	Character->GetWorldTimerManager().SetTimer(SpeedBuffTimer, this, &ThisClass::ResetSpeed, BuffTime);

	float BuffedWalkSpeed = BuffSpeed * Character->GetCharacterInitialWalkSpeed();
	float BuffedRunSpeed = BuffSpeed * Character->GetCharacterInitialRunSpeed();

	Character->GetCharacterMovement()->MaxWalkSpeed = BuffedWalkSpeed;
	Character->SetCharacterWalkSpeed(BuffedWalkSpeed);
	Character->SetCharacterRunSpeed(BuffedRunSpeed);
	if (Character->bIsRunning)
	{
		Character->GetCharacterMovement()->MaxWalkSpeed = BuffedRunSpeed;
	}

	MulticastSpeedBuff(BuffedWalkSpeed, BuffedRunSpeed);
}

void UBuffComponent::ResetSpeed()
{
	if (!Character) return;

	Character->GetCharacterMovement()->MaxWalkSpeed = Character->GetCharacterInitialWalkSpeed();
	Character->SetCharacterWalkSpeed(Character->GetCharacterInitialWalkSpeed());
	Character->SetCharacterRunSpeed(Character->GetCharacterInitialRunSpeed());

	MulticastSpeedBuff(Character->GetCharacterInitialWalkSpeed(), Character->GetCharacterInitialRunSpeed());
}

void UBuffComponent::MulticastSpeedBuff_Implementation(float WalkSpeed, float RunSpeed)
{
	if (!Character) return;

	Character->GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	Character->SetCharacterWalkSpeed(WalkSpeed);
	Character->SetCharacterRunSpeed(RunSpeed);
	if (Character->bIsRunning)
	{
		Character->GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
	}
}

void UBuffComponent::HealRampUp(float DeltaTime)
{
	if (!bHealing || !Character || Character->IsElimmed()) return;

	const float HealThisFrame = HealingRate * DeltaTime;
	Character->SetHealth(FMath::Clamp(Character->GetHealth() + HealThisFrame, 0.f, Character->GetMaxHealth()));
	Character->UpdateHUDHealth();

	AmountToHeal -= HealThisFrame;

	if (AmountToHeal <= 0.f || Character->GetHealth() >= Character->GetMaxHealth())
	{
		bHealing = false;
		AmountToHeal = 0.f;
	}
}


void UBuffComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	HealRampUp(DeltaTime);
}

