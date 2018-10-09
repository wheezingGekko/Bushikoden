// Copyright 2015 Smartisan Technology Co., Ltd. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
    #if WITH_FORWARDED_MODULE_RULES_CTOR
    using zTargetInfo = ReadOnlyTargetRules;
#else
    using zTargetInfo = TargetInfo;
#endif
    
    public class PerceptionNeuronEditor : ModuleRules
    {
        public PerceptionNeuronEditor(zTargetInfo Target)
            #if WITH_FORWARDED_MODULE_RULES_CTOR
            : base(Target)
#endif
        {
            PrivateDependencyModuleNames.AddRange(
                new string[] {	
				    "Core",
				    "CoreUObject",
                    "Engine",
                    "UnrealEd",         // for FAssetEditorManager
				    "AssetTools",       // class FAssetTypeActions_Base
                    "Slate",
                    "SlateCore",
                    "PropertyEditor",
                    "EditorStyle",
                    "DesktopWidgets",
                    "DesktopPlatform",
                    "Projects",
                    "InputCore",
                    "AnimGraph",
                    "BlueprintGraph",
					"PerceptionNeuronRuntime",
			    }
            );

            /// List of modules with header files that our module's public headers needs access to, but we don't need to "import" or link against.
            PublicIncludePathModuleNames.AddRange(
                new string[] {
                    "AnimGraph",
                }
            );
        }
    }
}
