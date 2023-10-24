// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UNREAL_FINALLY : ModuleRules
{
	public UNREAL_FINALLY(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
