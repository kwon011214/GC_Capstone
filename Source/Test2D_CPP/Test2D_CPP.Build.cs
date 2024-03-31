// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Test2D_CPP : ModuleRules
{
	public Test2D_CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
