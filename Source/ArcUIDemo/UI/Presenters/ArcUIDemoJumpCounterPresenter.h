// Copyright (C) Fabien Poupineau. All Rights Reserved.

#pragma once

#include "ArcUIPresenter.h"
#include "ArcUIDemoJumpCounterPresenter.generated.h"

UCLASS(NotBlueprintable)
class UArcUIDemoJumpCounterPresenter final : public UArcUIPresenter
{
	GENERATED_BODY()

public:
	virtual bool HandleOnContextAdded(FGameplayTag ContextTag, const TInstancedStruct<FArcUIContextPayload>& Payload) override;
	virtual bool HandleOnContextRemoved(FGameplayTag ContextTag) override;

private:
	void OnCharacterJumped();

	int32 JumpCounter{0};
	FDelegateHandle OnJumpedHandle;
};
