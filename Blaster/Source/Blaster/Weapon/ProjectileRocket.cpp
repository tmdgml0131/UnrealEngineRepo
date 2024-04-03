// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileRocket.h"
#include "Kismet/GameplayStatics.h"

AProjectileRocket::AProjectileRocket()
{
	RocketMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rocket Mesh"));
	RocketMesh->SetupAttachment(RootComponent);
	RocketMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AProjectileRocket::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	APawn* FiringPawn = GetInstigator();

	if (FiringPawn)
	{
		AController* FiringController = FiringPawn->GetController();
		if (FiringController)
		{
			UGameplayStatics::ApplyRadialDamageWithFalloff(
				this,								// World Context Object
				Damage,								// Base Damage
				10.f,								// 최소 데미지
				GetActorLocation(),					// 폭발 구심점
				200.f,								// 구심점 내부
				500.f,								// 구심점 외부
				1.f,								// 데미지 감소 매커니즘 ( y=x )
				UDamageType::StaticClass(),			// 데미지 타입 클래스
				TArray<AActor*>(),					// 무시할 액터, 이 경우 None
				this,								// Damage Causer
				FiringController					// Instigator Controller
			);
		}

	}
	
	Super::OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
	
}
