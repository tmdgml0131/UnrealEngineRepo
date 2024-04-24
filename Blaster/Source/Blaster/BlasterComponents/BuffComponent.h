// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BuffComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLASTER_API UBuffComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UBuffComponent();
	friend class ABlasterCharacter;

	// Heal Flag �÷��ְ� Heal �� ���
	void Heal(float HealAmount, float HealingTime);

	// Speed 
	void BuffSpeed(float BuffSpeed, float BuffTime);
protected:
	virtual void BeginPlay() override;

	// ���� Heal ó�� �Լ�, Flag On ��, Tick ���� ����
	void HealRampUp(float DeltaTime);

private:
	UPROPERTY()
	class ABlasterCharacter* Character;

	// Heal
	bool bHealing = false;
	float HealingRate = 0.f;
	float AmountToHeal = 0.f;

	// Speed
	FTimerHandle SpeedBuffTimer;
	float InitialSpeed = 0.f;
	void ResetSpeed();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastSpeedBuff(float WalkSpeed, float RunSpeed);

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
};
