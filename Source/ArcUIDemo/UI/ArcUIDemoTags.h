// Copyright (C) Fabien Poupineau. All Rights Reserved.

#pragma once

// UE5
#include "NativeGameplayTags.h"


namespace ArcUIDemoTags::UI
{
	namespace Context
	{
		UE_DECLARE_GAMEPLAY_TAG_EXTERN(HUDRoot);
		
		namespace HUD
		{
			UE_DECLARE_GAMEPLAY_TAG_EXTERN(JumpCounter);
		}
	}

	namespace View
	{	
		UE_DECLARE_GAMEPLAY_TAG_EXTERN(HUD);
		UE_DECLARE_GAMEPLAY_TAG_EXTERN(JumpCounter);
	}
}