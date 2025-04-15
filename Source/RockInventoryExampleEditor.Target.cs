// Copyright Broken Rock Studios LLC. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class RockInventoryExampleEditorTarget : TargetRules
{
	public RockInventoryExampleEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;

		ExtraModuleNames.AddRange( new string[] { "RockInventoryExample" } );
	}
}
