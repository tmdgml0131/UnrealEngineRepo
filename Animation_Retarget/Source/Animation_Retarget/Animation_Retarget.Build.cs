// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Animation_Retarget : ModuleRules
{
	public Animation_Retarget(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
