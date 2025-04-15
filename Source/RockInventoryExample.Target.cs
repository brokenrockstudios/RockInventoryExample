// Copyright Broken Rock Studios LLC. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class RockInventoryExampleTarget : TargetRules
{
	public RockInventoryExampleTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "RockInventoryExample" } );
	}
}
