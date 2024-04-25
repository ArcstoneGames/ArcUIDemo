// Copyright (C) Fabien Poupineau. All Rights Reserved.

#include "ArcUIDemo/UI/ArcUIDemoTags.h"

namespace ArcUIDemoTags::UI
{
	namespace Context
	{
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(HUDRoot, "ArcUI.Context.HUD", "ArcUI Demo - HUD Context")

		namespace HUD
		{
			UE_DEFINE_GAMEPLAY_TAG_COMMENT(JumpCounter, "ArcUI.Context.HUD.JumpCounter", "ArcUI Demo - JumpCounter Context")
		}
	}

	namespace View
	{	
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(HUD, "ArcUI.View.HUD", "ArcUI Demo - HUD View");
		UE_DEFINE_GAMEPLAY_TAG_COMMENT(JumpCounter, "ArcUI.View.JumpCounter", "ArcUI Demo - JumpCounter View");
	}
}