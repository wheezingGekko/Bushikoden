// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PerceptionNeuronRuntime.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1PerceptionNeuronRuntime() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FQuat();

	PERCEPTIONNEURONRUNTIME_API class UFunction* Z_Construct_UFunction_UBVHAsset_GetBVHFilePath();
	PERCEPTIONNEURONRUNTIME_API class UFunction* Z_Construct_UFunction_UBVHAsset_IsLoaded();
	PERCEPTIONNEURONRUNTIME_API class UFunction* Z_Construct_UFunction_UBVHAsset_Load();
	PERCEPTIONNEURONRUNTIME_API class UFunction* Z_Construct_UFunction_UBVHAsset_ReLoad();
	PERCEPTIONNEURONRUNTIME_API class UClass* Z_Construct_UClass_UBVHAsset_NoRegister();
	PERCEPTIONNEURONRUNTIME_API class UClass* Z_Construct_UClass_UBVHAsset();
	PERCEPTIONNEURONRUNTIME_API class UEnum* Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones();
	PERCEPTIONNEURONRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FBoneMappingInfo();
	PERCEPTIONNEURONRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc();
	PERCEPTIONNEURONRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FPNMultiMap();
	PERCEPTIONNEURONRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FNamesContainer();
	PERCEPTIONNEURONRUNTIME_API class UPackage* Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
	void UBVHAsset::StaticRegisterNativesUBVHAsset()
	{
		UClass* Class = UBVHAsset::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetBVHFilePath", (Native)&UBVHAsset::execGetBVHFilePath },
			{ "IsLoaded", (Native)&UBVHAsset::execIsLoaded },
			{ "Load", (Native)&UBVHAsset::execLoad },
			{ "ReLoad", (Native)&UBVHAsset::execReLoad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 4);
	}
	UFunction* Z_Construct_UFunction_UBVHAsset_GetBVHFilePath()
	{
		struct BVHAsset_eventGetBVHFilePath_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UBVHAsset();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetBVHFilePath"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(BVHAsset_eventGetBVHFilePath_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, BVHAsset_eventGetBVHFilePath_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("PerceptionNeuron"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get BVH File Path"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BVHAsset.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBVHAsset_IsLoaded()
	{
		struct BVHAsset_eventIsLoaded_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UBVHAsset();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsLoaded"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(BVHAsset_eventIsLoaded_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, BVHAsset_eventIsLoaded_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, BVHAsset_eventIsLoaded_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, BVHAsset_eventIsLoaded_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("PerceptionNeuron"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Is Loaded"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BVHAsset.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBVHAsset_Load()
	{
		struct BVHAsset_eventLoad_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UBVHAsset();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Load"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(BVHAsset_eventLoad_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, BVHAsset_eventLoad_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, BVHAsset_eventLoad_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, BVHAsset_eventLoad_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("PerceptionNeuron"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Load"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BVHAsset.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBVHAsset_ReLoad()
	{
		struct BVHAsset_eventReLoad_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UBVHAsset();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReLoad"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(BVHAsset_eventReLoad_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, BVHAsset_eventReLoad_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, BVHAsset_eventReLoad_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, BVHAsset_eventReLoad_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("PerceptionNeuron"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("ReLoad"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BVHAsset.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBVHAsset_NoRegister()
	{
		return UBVHAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UBVHAsset()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
			OuterClass = UBVHAsset::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;

				OuterClass->LinkChild(Z_Construct_UFunction_UBVHAsset_GetBVHFilePath());
				OuterClass->LinkChild(Z_Construct_UFunction_UBVHAsset_IsLoaded());
				OuterClass->LinkChild(Z_Construct_UFunction_UBVHAsset_Load());
				OuterClass->LinkChild(Z_Construct_UFunction_UBVHAsset_ReLoad());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLoaded, UBVHAsset, bool);
				UProperty* NewProp_bLoaded = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLoaded"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLoaded, UBVHAsset), 0x0040000000000000, CPP_BOOL_PROPERTY_BITMASK(bLoaded, UBVHAsset), sizeof(bool), true);
				UProperty* NewProp_FrameDataOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FrameDataOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(FrameDataOffset, UBVHAsset), 0x0010000000000000);
				UProperty* NewProp_AnimData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnimData"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AnimData, UBVHAsset), 0x0010000000000000);
				UProperty* NewProp_AnimData_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AnimData, TEXT("AnimData"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_BVHFilePath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BVHFilePath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BVHFilePath, UBVHAsset), 0x0010000000000005);
				UProperty* NewProp_FrameTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FrameTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FrameTime, UBVHAsset), 0x0010000000000005);
				UProperty* NewProp_Frames = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Frames"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Frames, UBVHAsset), 0x0010000000020015);
				UProperty* NewProp_BoneTotalNumber = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BoneTotalNumber"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(BoneTotalNumber, UBVHAsset), 0x0010000000020015);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bWithDisplacement, UBVHAsset, bool);
				UProperty* NewProp_bWithDisplacement = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bWithDisplacement"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bWithDisplacement, UBVHAsset), 0x0010000000020015, CPP_BOOL_PROPERTY_BITMASK(bWithDisplacement, UBVHAsset), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseRootEffect, UBVHAsset, bool);
				UProperty* NewProp_bUseRootEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseRootEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseRootEffect, UBVHAsset), 0x0010000000020015, CPP_BOOL_PROPERTY_BITMASK(bUseRootEffect, UBVHAsset), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBVHAsset_GetBVHFilePath(), "GetBVHFilePath"); // 1078538489
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBVHAsset_IsLoaded(), "IsLoaded"); // 3644692503
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBVHAsset_Load(), "Load"); // 667403142
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBVHAsset_ReLoad(), "ReLoad"); // 1267426101
				static TCppClassTypeInfo<TCppClassTypeTraits<UBVHAsset> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("PerceptionNeuron"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BVHAsset.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BVHAsset.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Implements a BVH file asset that contains animation data for Perception Neuron to use."));
				MetaData->SetValue(NewProp_bLoaded, TEXT("ModuleRelativePath"), TEXT("Public/BVHAsset.h"));
				MetaData->SetValue(NewProp_FrameDataOffset, TEXT("ModuleRelativePath"), TEXT("Public/BVHAsset.h"));
				MetaData->SetValue(NewProp_AnimData, TEXT("ModuleRelativePath"), TEXT("Public/BVHAsset.h"));
				MetaData->SetValue(NewProp_BVHFilePath, TEXT("Category"), TEXT("File"));
				MetaData->SetValue(NewProp_BVHFilePath, TEXT("DisplayName"), TEXT("BVH File"));
				MetaData->SetValue(NewProp_BVHFilePath, TEXT("ModuleRelativePath"), TEXT("Public/BVHAsset.h"));
				MetaData->SetValue(NewProp_BVHFilePath, TEXT("ToolTip"), TEXT("The path of a BVH file locate in."));
				MetaData->SetValue(NewProp_FrameTime, TEXT("Category"), TEXT("Animation"));
				MetaData->SetValue(NewProp_FrameTime, TEXT("DisplayName"), TEXT("Frame Time"));
				MetaData->SetValue(NewProp_FrameTime, TEXT("ModuleRelativePath"), TEXT("Public/BVHAsset.h"));
				MetaData->SetValue(NewProp_FrameTime, TEXT("ToolTip"), TEXT("Frame step time."));
				MetaData->SetValue(NewProp_Frames, TEXT("Category"), TEXT("Animation"));
				MetaData->SetValue(NewProp_Frames, TEXT("DisplayName"), TEXT("Frames"));
				MetaData->SetValue(NewProp_Frames, TEXT("ModuleRelativePath"), TEXT("Public/BVHAsset.h"));
				MetaData->SetValue(NewProp_Frames, TEXT("ToolTip"), TEXT("Total number of frames."));
				MetaData->SetValue(NewProp_BoneTotalNumber, TEXT("Category"), TEXT("Bone"));
				MetaData->SetValue(NewProp_BoneTotalNumber, TEXT("DisplayName"), TEXT("Bone Total Number"));
				MetaData->SetValue(NewProp_BoneTotalNumber, TEXT("ModuleRelativePath"), TEXT("Public/BVHAsset.h"));
				MetaData->SetValue(NewProp_BoneTotalNumber, TEXT("ToolTip"), TEXT("Total number of Bones."));
				MetaData->SetValue(NewProp_bWithDisplacement, TEXT("Category"), TEXT("Bone"));
				MetaData->SetValue(NewProp_bWithDisplacement, TEXT("DisplayName"), TEXT("With Displacement"));
				MetaData->SetValue(NewProp_bWithDisplacement, TEXT("ModuleRelativePath"), TEXT("Public/BVHAsset.h"));
				MetaData->SetValue(NewProp_bWithDisplacement, TEXT("ToolTip"), TEXT("Displacement."));
				MetaData->SetValue(NewProp_bUseRootEffect, TEXT("Category"), TEXT("Bone"));
				MetaData->SetValue(NewProp_bUseRootEffect, TEXT("DisplayName"), TEXT("Use Root Effect"));
				MetaData->SetValue(NewProp_bUseRootEffect, TEXT("ModuleRelativePath"), TEXT("Public/BVHAsset.h"));
				MetaData->SetValue(NewProp_bUseRootEffect, TEXT("ToolTip"), TEXT("Reference."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBVHAsset, 396050265);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBVHAsset(Z_Construct_UClass_UBVHAsset, &UBVHAsset::StaticClass, TEXT("/Script/PerceptionNeuronRuntime"), TEXT("UBVHAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBVHAsset);
static UEnum* EPNBones_StaticEnum()
{
	extern PERCEPTIONNEURONRUNTIME_API class UPackage* Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern PERCEPTIONNEURONRUNTIME_API class UEnum* Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones();
		Singleton = GetStaticEnum(Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones, Z_Construct_UPackage__Script_PerceptionNeuronRuntime(), TEXT("EPNBones"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPNBones(EPNBones_StaticEnum, TEXT("/Script/PerceptionNeuronRuntime"), TEXT("EPNBones"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
		extern uint32 Get_Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPNBones"), 0, Get_Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EPNBones"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EPNBones::Hips"), 0);
			EnumNames.Emplace(TEXT("EPNBones::RightUpLeg"), 1);
			EnumNames.Emplace(TEXT("EPNBones::RightLeg"), 2);
			EnumNames.Emplace(TEXT("EPNBones::RightFoot"), 3);
			EnumNames.Emplace(TEXT("EPNBones::LeftUpLeg"), 4);
			EnumNames.Emplace(TEXT("EPNBones::LeftLeg"), 5);
			EnumNames.Emplace(TEXT("EPNBones::LeftFoot"), 6);
			EnumNames.Emplace(TEXT("EPNBones::Spine"), 7);
			EnumNames.Emplace(TEXT("EPNBones::Spine1"), 8);
			EnumNames.Emplace(TEXT("EPNBones::Spine2"), 9);
			EnumNames.Emplace(TEXT("EPNBones::Spine3"), 10);
			EnumNames.Emplace(TEXT("EPNBones::Neck"), 11);
			EnumNames.Emplace(TEXT("EPNBones::Head"), 12);
			EnumNames.Emplace(TEXT("EPNBones::RightShoulder"), 13);
			EnumNames.Emplace(TEXT("EPNBones::RightArm"), 14);
			EnumNames.Emplace(TEXT("EPNBones::RightForeArm"), 15);
			EnumNames.Emplace(TEXT("EPNBones::RightHand"), 16);
			EnumNames.Emplace(TEXT("EPNBones::RightHandThumb1"), 17);
			EnumNames.Emplace(TEXT("EPNBones::RightHandThumb2"), 18);
			EnumNames.Emplace(TEXT("EPNBones::RightHandThumb3"), 19);
			EnumNames.Emplace(TEXT("EPNBones::RightInHandIndex"), 20);
			EnumNames.Emplace(TEXT("EPNBones::RightHandIndex1"), 21);
			EnumNames.Emplace(TEXT("EPNBones::RightHandIndex2"), 22);
			EnumNames.Emplace(TEXT("EPNBones::RightHandIndex3"), 23);
			EnumNames.Emplace(TEXT("EPNBones::RightInHandMiddle"), 24);
			EnumNames.Emplace(TEXT("EPNBones::RightHandMiddle1"), 25);
			EnumNames.Emplace(TEXT("EPNBones::RightHandMiddle2"), 26);
			EnumNames.Emplace(TEXT("EPNBones::RightHandMiddle3"), 27);
			EnumNames.Emplace(TEXT("EPNBones::RightInHandRing"), 28);
			EnumNames.Emplace(TEXT("EPNBones::RightHandRing1"), 29);
			EnumNames.Emplace(TEXT("EPNBones::RightHandRing2"), 30);
			EnumNames.Emplace(TEXT("EPNBones::RightHandRing3"), 31);
			EnumNames.Emplace(TEXT("EPNBones::RightInHandPinky"), 32);
			EnumNames.Emplace(TEXT("EPNBones::RightHandPinky1"), 33);
			EnumNames.Emplace(TEXT("EPNBones::RightHandPinky2"), 34);
			EnumNames.Emplace(TEXT("EPNBones::RightHandPinky3"), 35);
			EnumNames.Emplace(TEXT("EPNBones::LeftShoulder"), 36);
			EnumNames.Emplace(TEXT("EPNBones::LeftArm"), 37);
			EnumNames.Emplace(TEXT("EPNBones::LeftForeArm"), 38);
			EnumNames.Emplace(TEXT("EPNBones::LeftHand"), 39);
			EnumNames.Emplace(TEXT("EPNBones::LeftHandThumb1"), 40);
			EnumNames.Emplace(TEXT("EPNBones::LeftHandThumb2"), 41);
			EnumNames.Emplace(TEXT("EPNBones::LeftHandThumb3"), 42);
			EnumNames.Emplace(TEXT("EPNBones::LeftInHandIndex"), 43);
			EnumNames.Emplace(TEXT("EPNBones::LeftHandIndex1"), 44);
			EnumNames.Emplace(TEXT("EPNBones::LeftHandIndex2"), 45);
			EnumNames.Emplace(TEXT("EPNBones::LeftHandIndex3"), 46);
			EnumNames.Emplace(TEXT("EPNBones::LeftInHandMiddle"), 47);
			EnumNames.Emplace(TEXT("EPNBones::LeftHandMiddle1"), 48);
			EnumNames.Emplace(TEXT("EPNBones::LeftHandMiddle2"), 49);
			EnumNames.Emplace(TEXT("EPNBones::LeftHandMiddle3"), 50);
			EnumNames.Emplace(TEXT("EPNBones::LeftInHandRing"), 51);
			EnumNames.Emplace(TEXT("EPNBones::LeftHandRing1"), 52);
			EnumNames.Emplace(TEXT("EPNBones::LeftHandRing2"), 53);
			EnumNames.Emplace(TEXT("EPNBones::LeftHandRing3"), 54);
			EnumNames.Emplace(TEXT("EPNBones::LeftInHandPinky"), 55);
			EnumNames.Emplace(TEXT("EPNBones::LeftHandPinky1"), 56);
			EnumNames.Emplace(TEXT("EPNBones::LeftHandPinky2"), 57);
			EnumNames.Emplace(TEXT("EPNBones::LeftHandPinky3"), 58);
			EnumNames.Emplace(TEXT("EPNBones::Invalid"), 59);
			EnumNames.Emplace(TEXT("EPNBones::EPNBones_MAX"), 60);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("EPNBones::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/BoneLists.h"));
			MetaData->SetValue(ReturnEnum, TEXT("RightUpLeg.ToolTip"), TEXT("Hips must be 0, never can be changed"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("The order is important"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones_CRC() { return 2498817606U; }
class UScriptStruct* FBoneMappingInfo::StaticStruct()
{
	extern PERCEPTIONNEURONRUNTIME_API class UPackage* Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PERCEPTIONNEURONRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FBoneMappingInfo();
		extern PERCEPTIONNEURONRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FBoneMappingInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneMappingInfo, Z_Construct_UPackage__Script_PerceptionNeuronRuntime(), TEXT("BoneMappingInfo"), sizeof(FBoneMappingInfo), Get_Z_Construct_UScriptStruct_FBoneMappingInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneMappingInfo(FBoneMappingInfo::StaticStruct, TEXT("/Script/PerceptionNeuronRuntime"), TEXT("BoneMappingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFBoneMappingInfo
{
	FScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFBoneMappingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneMappingInfo")),new UScriptStruct::TCppStructOps<FBoneMappingInfo>);
	}
} ScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFBoneMappingInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FBoneMappingInfo()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneMappingInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneMappingInfo"), sizeof(FBoneMappingInfo), Get_Z_Construct_UScriptStruct_FBoneMappingInfo_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BoneMappingInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBoneMappingInfo>, EStructFlags(0x00000201));
			UProperty* NewProp_CTName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CTName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(CTName, FBoneMappingInfo), 0x0010000000000005);
			UProperty* NewProp_PNID = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PNID"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(PNID, FBoneMappingInfo), 0x0010000000000005, Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/BoneMappingInfo.h"));
			MetaData->SetValue(NewProp_CTName, TEXT("Category"), TEXT("PerceptionNeuron"));
			MetaData->SetValue(NewProp_CTName, TEXT("ModuleRelativePath"), TEXT("Public/BoneMappingInfo.h"));
			MetaData->SetValue(NewProp_PNID, TEXT("Category"), TEXT("PerceptionNeuron"));
			MetaData->SetValue(NewProp_PNID, TEXT("ModuleRelativePath"), TEXT("Public/BoneMappingInfo.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneMappingInfo_CRC() { return 2137596308U; }
class UScriptStruct* FAnimationNode_NewPoseCalc::StaticStruct()
{
	extern PERCEPTIONNEURONRUNTIME_API class UPackage* Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PERCEPTIONNEURONRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc();
		extern PERCEPTIONNEURONRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc, Z_Construct_UPackage__Script_PerceptionNeuronRuntime(), TEXT("AnimationNode_NewPoseCalc"), sizeof(FAnimationNode_NewPoseCalc), Get_Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationNode_NewPoseCalc(FAnimationNode_NewPoseCalc::StaticStruct, TEXT("/Script/PerceptionNeuronRuntime"), TEXT("AnimationNode_NewPoseCalc"), false, nullptr, nullptr);
static struct FScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFAnimationNode_NewPoseCalc
{
	FScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFAnimationNode_NewPoseCalc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationNode_NewPoseCalc")),new UScriptStruct::TCppStructOps<FAnimationNode_NewPoseCalc>);
	}
} ScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFAnimationNode_NewPoseCalc;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationNode_NewPoseCalc"), sizeof(FAnimationNode_NewPoseCalc), Get_Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AnimationNode_NewPoseCalc"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FAnimNode_Base(), new UScriptStruct::TCppStructOps<FAnimationNode_NewPoseCalc>, EStructFlags(0x00000201));
			UProperty* NewProp_WorldPositions = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WorldPositions"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(WorldPositions, FAnimationNode_NewPoseCalc), 0x0020080000000000);
			UProperty* NewProp_WorldPositions_Inner = new(EC_InternalUseOnlyConstructor, NewProp_WorldPositions, TEXT("WorldPositions"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_WorldRotations = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WorldRotations"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(WorldRotations, FAnimationNode_NewPoseCalc), 0x0020080000000000);
			UProperty* NewProp_WorldRotations_Inner = new(EC_InternalUseOnlyConstructor, NewProp_WorldRotations, TEXT("WorldRotations"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FQuat());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHaveInit, FAnimationNode_NewPoseCalc, bool);
			UProperty* NewProp_bHaveInit = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bHaveInit"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHaveInit, FAnimationNode_NewPoseCalc), 0x0020080000000000, CPP_BOOL_PROPERTY_BITMASK(bHaveInit, FAnimationNode_NewPoseCalc), sizeof(bool), true);
			UProperty* NewProp_BoneMap_Copy = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoneMap_Copy"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(BoneMap_Copy, FAnimationNode_NewPoseCalc), 0x0020080000000000);
			UProperty* NewProp_BoneMap_Copy_Inner = new(EC_InternalUseOnlyConstructor, NewProp_BoneMap_Copy, TEXT("BoneMap_Copy"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FBoneMappingInfo());
			UProperty* NewProp_BoneName2BoneMapIndex = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoneName2BoneMapIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(BoneName2BoneMapIndex, FAnimationNode_NewPoseCalc), 0x0020080000000000);
			UProperty* NewProp_BoneName2BoneMapIndex_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_BoneName2BoneMapIndex, TEXT("BoneName2BoneMapIndex_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_BoneName2BoneMapIndex_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_BoneName2BoneMapIndex, TEXT("BoneName2BoneMapIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000000);
			UProperty* NewProp_BoneID2NameMap = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoneID2NameMap"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BoneID2NameMap, FAnimationNode_NewPoseCalc), 0x0020080000000000, Z_Construct_UScriptStruct_FPNMultiMap());
			UProperty* NewProp_BoneMap = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoneMap"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(BoneMap, FAnimationNode_NewPoseCalc), 0x0010000000000005);
			UProperty* NewProp_BoneMap_Inner = new(EC_InternalUseOnlyConstructor, NewProp_BoneMap, TEXT("BoneMap"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FBoneMappingInfo());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/AnimNode_NewPoseCalc.h"));
			MetaData->SetValue(NewProp_WorldPositions, TEXT("ModuleRelativePath"), TEXT("Public/AnimNode_NewPoseCalc.h"));
			MetaData->SetValue(NewProp_WorldRotations, TEXT("ModuleRelativePath"), TEXT("Public/AnimNode_NewPoseCalc.h"));
			MetaData->SetValue(NewProp_bHaveInit, TEXT("ModuleRelativePath"), TEXT("Public/AnimNode_NewPoseCalc.h"));
			MetaData->SetValue(NewProp_BoneMap_Copy, TEXT("ModuleRelativePath"), TEXT("Public/AnimNode_NewPoseCalc.h"));
			MetaData->SetValue(NewProp_BoneName2BoneMapIndex, TEXT("ModuleRelativePath"), TEXT("Public/AnimNode_NewPoseCalc.h"));
			MetaData->SetValue(NewProp_BoneID2NameMap, TEXT("ModuleRelativePath"), TEXT("Public/AnimNode_NewPoseCalc.h"));
			MetaData->SetValue(NewProp_BoneMap, TEXT("Category"), TEXT("SkeletonsRetargeting"));
			MetaData->SetValue(NewProp_BoneMap, TEXT("ModuleRelativePath"), TEXT("Public/AnimNode_NewPoseCalc.h"));
			MetaData->SetValue(NewProp_BoneMap, TEXT("NeverAsPin"), TEXT(""));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationNode_NewPoseCalc_CRC() { return 3233276532U; }
class UScriptStruct* FPNMultiMap::StaticStruct()
{
	extern PERCEPTIONNEURONRUNTIME_API class UPackage* Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PERCEPTIONNEURONRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FPNMultiMap();
		extern PERCEPTIONNEURONRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPNMultiMap_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPNMultiMap, Z_Construct_UPackage__Script_PerceptionNeuronRuntime(), TEXT("PNMultiMap"), sizeof(FPNMultiMap), Get_Z_Construct_UScriptStruct_FPNMultiMap_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPNMultiMap(FPNMultiMap::StaticStruct, TEXT("/Script/PerceptionNeuronRuntime"), TEXT("PNMultiMap"), false, nullptr, nullptr);
static struct FScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFPNMultiMap
{
	FScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFPNMultiMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PNMultiMap")),new UScriptStruct::TCppStructOps<FPNMultiMap>);
	}
} ScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFPNMultiMap;
	UScriptStruct* Z_Construct_UScriptStruct_FPNMultiMap()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FPNMultiMap_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PNMultiMap"), sizeof(FPNMultiMap), Get_Z_Construct_UScriptStruct_FPNMultiMap_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PNMultiMap"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FPNMultiMap>, EStructFlags(0x00000001));
			UProperty* NewProp_InterMap = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InterMap"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(InterMap, FPNMultiMap), 0x0040000000000000);
			UProperty* NewProp_InterMap_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_InterMap, TEXT("InterMap_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UEnum_PerceptionNeuronRuntime_EPNBones());
			UProperty* NewProp_InterMap_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_InterMap, TEXT("InterMap"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000000, Z_Construct_UScriptStruct_FNamesContainer());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/AnimNode_NewPoseCalc.h"));
			MetaData->SetValue(NewProp_InterMap, TEXT("ModuleRelativePath"), TEXT("Public/AnimNode_NewPoseCalc.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPNMultiMap_CRC() { return 795761469U; }
class UScriptStruct* FNamesContainer::StaticStruct()
{
	extern PERCEPTIONNEURONRUNTIME_API class UPackage* Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PERCEPTIONNEURONRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FNamesContainer();
		extern PERCEPTIONNEURONRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FNamesContainer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamesContainer, Z_Construct_UPackage__Script_PerceptionNeuronRuntime(), TEXT("NamesContainer"), sizeof(FNamesContainer), Get_Z_Construct_UScriptStruct_FNamesContainer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamesContainer(FNamesContainer::StaticStruct, TEXT("/Script/PerceptionNeuronRuntime"), TEXT("NamesContainer"), false, nullptr, nullptr);
static struct FScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFNamesContainer
{
	FScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFNamesContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamesContainer")),new UScriptStruct::TCppStructOps<FNamesContainer>);
	}
} ScriptStruct_PerceptionNeuronRuntime_StaticRegisterNativesFNamesContainer;
	UScriptStruct* Z_Construct_UScriptStruct_FNamesContainer()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_PerceptionNeuronRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FNamesContainer_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamesContainer"), sizeof(FNamesContainer), Get_Z_Construct_UScriptStruct_FNamesContainer_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("NamesContainer"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FNamesContainer>, EStructFlags(0x00000001));
			UProperty* NewProp_Names = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Names"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Names, FNamesContainer), 0x0010000000000000);
			UProperty* NewProp_Names_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Names, TEXT("Names"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/AnimNode_NewPoseCalc.h"));
			MetaData->SetValue(NewProp_Names, TEXT("ModuleRelativePath"), TEXT("Public/AnimNode_NewPoseCalc.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamesContainer_CRC() { return 348424979U; }
	UPackage* Z_Construct_UPackage__Script_PerceptionNeuronRuntime()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/PerceptionNeuronRuntime")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xF99DD1BB;
			Guid.B = 0x88D31535;
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
