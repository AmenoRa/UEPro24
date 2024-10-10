// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UEPro24 : ModuleRules
{
	public UEPro24(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
