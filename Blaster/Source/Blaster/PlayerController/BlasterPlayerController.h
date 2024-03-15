// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BlasterPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BLASTER_API ABlasterPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	void SetHUDHealth(float Health, float MaxHealth);
	void SetHUDScore(float Score);
	void SetHUDDefeats(int32 Defeats);
	void SetHUDWeaponAmmo(int32 Ammo);
	void SetHUDCarriedAmmo(int32 Ammo);
	void SetHUDMatchCountdown(float CountdownTime);
	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float Deltatime) override;

	// 서버 시간과 동기화
	virtual float GetServerTime();

	// 최대한 빨리 서버 시간과 동기화
	virtual void ReceivedPlayer() override;
protected:
	virtual void BeginPlay() override;
	void SetHUDTime();

	// Sync time between client-server

	// 서버에 현재 시간 쿼리 함수
	UFUNCTION(Server, Reliable)
	void ServerRequestServerTime(float TimeOfClientRequest);

	// 클라이언트에 서버 시간 전송
	UFUNCTION(Client, Reliable)
	void ClientReportServerTime(float TimeOfClientRequest, float TimeServerReceivedClientRequest);

	// 클라이언트와 서버의 시간 차이
	float ClientServerDelta = 0.f;

	UPROPERTY(EditAnywhere, Category = Time)
	float TimeSyncFrequency = 5.f;

	float TimeSyncRunningTime = 0.f;

	void CheckTimeSync(float deltaTime);
private:
	UPROPERTY()
	class ABlasterHUD* BlasterHUD;

	float MatchTime = 120.f;
	uint32 CountdownInt = 0;
};
