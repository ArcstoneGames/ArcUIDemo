// Copyright (C) Fabien Poupineau. All Rights Reserved.

#include "ArcUIDemoGameMode.h"
#include "ArcUIDemoCharacter.h"
#include "UI/ArcUIDemoTags.h"
#include "ArcUISubsystem.h"
#include "UObject/ConstructorHelpers.h"

AArcUIDemoGameMode::AArcUIDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AArcUIDemoGameMode::BeginPlay()
{
	Super::BeginPlay();

	GetGameInstance()->GetSubsystem<UArcUISubsystem>()->AddContext(ArcUIDemoTags::UI::Context::HUDRoot);
}
