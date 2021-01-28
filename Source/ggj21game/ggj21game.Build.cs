// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ggj21game : ModuleRules
{
	public ggj21game(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
