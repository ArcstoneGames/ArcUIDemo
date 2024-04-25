// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArcUIViewPayload.h"
#include "Blueprint/UserWidget.h"
#include "ArcUIDemoJumpCounterWidget.generated.h"

UCLASS(Abstract, Blueprintable, meta=(DisableNativeTick))
class UArcUIDemoJumpCounterWidget final : public UUserWidget, public IArcUIViewPayloadReceiver
{
	GENERATED_BODY()
};
