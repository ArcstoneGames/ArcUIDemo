// Copyright (C) Fabien Poupineau. All Rights Reserved.

#pragma once

#include "ArcUIViewPayload.h"
#include "ArcUIDemoViewPayloads_Jump.generated.h"

USTRUCT(BlueprintType)
struct FArcUIDemoJumpViewPayload final : public FArcUIViewPayload
{
	GENERATED_BODY()

	FArcUIDemoJumpViewPayload() = default;
	explicit FArcUIDemoJumpViewPayload(int32 InCounter) : Counter(InCounter) {}
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Counter{0};
};
