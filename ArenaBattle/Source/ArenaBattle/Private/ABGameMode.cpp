// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameMode.h"
#include "ABCharacter.h"
#include "ABPlayerController.h"
#include "ABPlayerState.h"
#include "ABGameState.h"
#include "EngineUtils.h"

AABGameMode::AABGameMode()
{
	DefaultPawnClass = AABCharacter::StaticClass();
	PlayerControllerClass = AABPlayerController::StaticClass();
	PlayerStateClass = AABPlayerState::StaticClass();
	GameStateClass = AABGameState::StaticClass();
	ScoreToClear = 2;
}

void AABGameMode::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABGameState = Cast<AABGameState>(GameState);
}

void AABGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	auto ABPlayerState = Cast<AABPlayerState>(NewPlayer->PlayerState);
	ABCHECK(ABPlayerState != nullptr);
	ABPlayerState->InitPlayerData();
}

void AABGameMode::AddScore(class AABPlayerController* Player)
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; It++)
	{
		const auto ABPlayercontroller = Cast<AABPlayerController>(It->Get());
		if (ABPlayercontroller != nullptr && ABPlayercontroller == Player)
		{
			ABPlayercontroller->AddGameScore();
			break;
		}
	}

	ABGameState->AddGameScore();

	if (GetScore() >= ScoreToClear)
	{
		ABGameState->SetGameCleared();

		for (TActorIterator<APawn> It(GetWorld()); It; ++It)
		{
			APawn* CurrentPawn = *It;
			if (CurrentPawn)
			{
				CurrentPawn->TurnOff();
			}
		}

		for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; It++)
		{
			const auto ABPlayerController = Cast<AABPlayerController>(It->Get());
			if (ABPlayerController != nullptr)
			{
				ABPlayerController->ShowResultUI();
			}
		}
	}
}

int AABGameMode::GetScore() const
{
	return ABGameState->GetTotalGameScore();
}
