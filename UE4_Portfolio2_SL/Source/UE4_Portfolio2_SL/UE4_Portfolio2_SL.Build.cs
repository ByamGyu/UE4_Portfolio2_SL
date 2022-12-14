// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE4_Portfolio2_SL : ModuleRules
{
	public UE4_Portfolio2_SL(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG", "NavigationSystem", "AIModule", "GamePlayTasks" });
	}
}
