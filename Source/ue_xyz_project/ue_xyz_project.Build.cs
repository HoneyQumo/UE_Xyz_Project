// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ue_xyz_project : ModuleRules
{
	public ue_xyz_project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate",
			"ChaosVehicles"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ue_xyz_project",
			"ue_xyz_project/Variant_Platforming",
			"ue_xyz_project/Variant_Platforming/Animation",
			"ue_xyz_project/Variant_Combat",
			"ue_xyz_project/Variant_Combat/AI",
			"ue_xyz_project/Variant_Combat/Animation",
			"ue_xyz_project/Variant_Combat/Gameplay",
			"ue_xyz_project/Variant_Combat/Interfaces",
			"ue_xyz_project/Variant_Combat/UI",
			"ue_xyz_project/Variant_SideScrolling",
			"ue_xyz_project/Variant_SideScrolling/AI",
			"ue_xyz_project/Variant_SideScrolling/Gameplay",
			"ue_xyz_project/Variant_SideScrolling/Interfaces",
			"ue_xyz_project/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
