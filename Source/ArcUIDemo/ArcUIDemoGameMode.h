// Copyright (C) Fabien Poupineau. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ArcUIDemoGameMode.generated.h"

UCLASS(minimalapi)
class AArcUIDemoGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AArcUIDemoGameMode();

	virtual void BeginPlay() override;
};



