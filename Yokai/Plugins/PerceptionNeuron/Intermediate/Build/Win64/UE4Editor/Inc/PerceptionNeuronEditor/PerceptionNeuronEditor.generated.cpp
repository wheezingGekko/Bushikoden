// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PerceptionNeuronEditor.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1PerceptionNeuronEditor() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ANIMGRAPH_API class UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	PERCEPTIONNEURONRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc();

	PERCEPTIONNEURONEDITOR_API class UClass* Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_NoRegister();
	PERCEPTIONNEURONEDITOR_API class UClass* Z_Construct_UClass_UAnimGraphNode_NewPoseCalc();
	PERCEPTIONNEURONEDITOR_API class UPackage* Z_Construct_UPackage__Script_PerceptionNeuronEditor();
	void UAnimGraphNode_NewPoseCalc::StaticRegisterNativesUAnimGraphNode_NewPoseCalc()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_NewPoseCalc_NoRegister()
	{
		return UAnimGraphNode_NewPoseCalc::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_NewPoseCalc()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAnimGraphNode_Base();
			Z_Construct_UPackage__Script_PerceptionNeuronEditor();
			OuterClass = UAnimGraphNode_NewPoseCalc::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHasInit, UAnimGraphNode_NewPoseCalc, bool);
				UProperty* NewProp_bHasInit = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bHasInit"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHasInit, UAnimGraphNode_NewPoseCalc), 0x0040000000000000, CPP_BOOL_PROPERTY_BITMASK(bHasInit, UAnimGraphNode_NewPoseCalc), sizeof(bool), true);
				UProperty* NewProp_Node = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Node"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Node, UAnimGraphNode_NewPoseCalc), 0x0010000000000001, Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UAnimGraphNode_NewPoseCalc> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AnimGraphNode_NewPoseCalc.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/AnimGraphNode_NewPoseCalc.h"));
				MetaData->SetValue(NewProp_bHasInit, TEXT("ModuleRelativePath"), TEXT("Public/AnimGraphNode_NewPoseCalc.h"));
				MetaData->SetValue(NewProp_Node, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_Node, TEXT("ModuleRelativePath"), TEXT("Public/AnimGraphNode_NewPoseCalc.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_NewPoseCalc, 3748950745);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_NewPoseCalc(Z_Construct_UClass_UAnimGraphNode_NewPoseCalc, &UAnimGraphNode_NewPoseCalc::StaticClass, TEXT("/Script/PerceptionNeuronEditor"), TEXT("UAnimGraphNode_NewPoseCalc"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_NewPoseCalc);
	UPackage* Z_Construct_UPackage__Script_PerceptionNeuronEditor()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/PerceptionNeuronEditor")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000040);
			FGuid Guid;
			Guid.A = 0x2393C8F7;
			Guid.B = 0xED05243B;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
