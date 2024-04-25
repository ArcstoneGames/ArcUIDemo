// Copyright (C) Fabien Poupineau. All Rights Reserved.


#include "ArcUIDemoJumpCounterPresenter.h"

#include "ArcUISubsystem.h"
#include "ArcUITags.h"
#include "ArcUIDemo/ArcUIDemoCharacter.h"
#include "ArcUIDemo/UI/ArcUIDemoTags.h"
#include "ArcUIDemo/UI/ViewPayloads/ArcUIDemoViewPayloads_Jump.h"
#include "ArcUIDemo/UI/Views/ArcUIDemoJumpCounterWidget.h"

bool UArcUIDemoJumpCounterPresenter::HandleOnContextAdded(FGameplayTag ContextTag, const TInstancedStruct<FArcUIContextPayload>& Payload)
{
	bool bHandled = Super::HandleOnContextAdded(ContextTag, Payload);
	if (ContextTag == ArcUIDemoTags::UI::Context::HUD::JumpCounter)
	{
		JumpCounter = 0;
		if (auto* DemoCharacter = Cast<AArcUIDemoCharacter>(ObservedActor))
		{
			OnJumpedHandle = DemoCharacter->OnDemoJumped.AddUObject(this, &ThisClass::OnCharacterJumped);
			bHandled = true;
		}		
	}
	return bHandled;
}

bool UArcUIDemoJumpCounterPresenter::HandleOnContextRemoved(FGameplayTag ContextTag)
{
	bool bHandled = Super::HandleOnContextRemoved(ContextTag);
	if (OnJumpedHandle.IsValid())
	{
		OnJumpedHandle.Reset();
		bHandled = true;
	}
	JumpCounter = 0;
	return bHandled;
}

void UArcUIDemoJumpCounterPresenter::OnCharacterJumped()
{
	using namespace ArcUITags;
	using namespace ArcUIDemoTags::UI;
	
	JumpCounter++;
	if (auto* JumpCounterWidget = UISubsystem->GetCreatedWidget<UArcUIDemoJumpCounterWidget>(View::JumpCounter, Context::HUD::JumpCounter, Layer::HUD::Low))
	{
		const auto Payload = ArcUI::MakeViewPayload<FArcUIDemoJumpViewPayload>(JumpCounter);
		JumpCounterWidget->PushPayload(Payload);
	}
}
