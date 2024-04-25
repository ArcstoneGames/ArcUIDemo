// Copyright (C) Fabien Poupineau. All Rights Reserved.

using UnrealBuildTool;

public class ArcUIDemo : ModuleRules
{
	public ArcUIDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "UMG", "GameplayTags", "StructUtils", "CommonUI" });
		
		PrivateDependencyModuleNames.Add("ArcUIFramework");
	}
}
