// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Yokai.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Yokai() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController();
	AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	AIMODULE_API class UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();

	YOKAI_API class UClass* Z_Construct_UClass_AAIController_NPC_Combat_NoRegister();
	YOKAI_API class UClass* Z_Construct_UClass_AAIController_NPC_Combat();
	YOKAI_API class UFunction* Z_Construct_UFunction_ANPC_GetGenericTeamId();
	YOKAI_API class UFunction* Z_Construct_UFunction_ANPC_Init();
	YOKAI_API class UClass* Z_Construct_UClass_ANPC_NoRegister();
	YOKAI_API class UClass* Z_Construct_UClass_ANPC();
	YOKAI_API class UFunction* Z_Construct_UFunction_ANPC_Combat_engageCombat();
	YOKAI_API class UClass* Z_Construct_UClass_ANPC_Combat_NoRegister();
	YOKAI_API class UClass* Z_Construct_UClass_ANPC_Combat();
	YOKAI_API class UClass* Z_Construct_UClass_ANPC_Noncombat_NoRegister();
	YOKAI_API class UClass* Z_Construct_UClass_ANPC_Noncombat();
	YOKAI_API class UPackage* Z_Construct_UPackage__Script_Yokai();
	void AAIController_NPC_Combat::StaticRegisterNativesAAIController_NPC_Combat()
	{
	}
	UClass* Z_Construct_UClass_AAIController_NPC_Combat_NoRegister()
	{
		return AAIController_NPC_Combat::StaticClass();
	}
	UClass* Z_Construct_UClass_AAIController_NPC_Combat()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_Yokai();
			OuterClass = AAIController_NPC_Combat::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900284;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AAIController_NPC_Combat> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AI/AIController_NPC_Combat.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AI/AIController_NPC_Combat.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIController_NPC_Combat, 2787772884);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIController_NPC_Combat(Z_Construct_UClass_AAIController_NPC_Combat, &AAIController_NPC_Combat::StaticClass, TEXT("/Script/Yokai"), TEXT("AAIController_NPC_Combat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIController_NPC_Combat);
	void ANPC::StaticRegisterNativesANPC()
	{
		UClass* Class = ANPC::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetGenericTeamId", (Native)&ANPC::execGetGenericTeamId },
			{ "Init", (Native)&ANPC::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_ANPC_GetGenericTeamId()
	{
		struct NPC_eventGetGenericTeamId_Parms
		{
			FGenericTeamId ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ANPC();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetGenericTeamId"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54040401, 65535, sizeof(NPC_eventGetGenericTeamId_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, NPC_eventGetGenericTeamId_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FGenericTeamId());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("NPC.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("FGenericTeamId TeamId;"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ANPC_Init()
	{
		UObject* Outer=Z_Construct_UClass_ANPC();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Init"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00040401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("NPC.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANPC_NoRegister()
	{
		return ANPC::StaticClass();
	}
	UClass* Z_Construct_UClass_ANPC()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_Yokai();
			OuterClass = ANPC::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900081;

				OuterClass->LinkChild(Z_Construct_UFunction_ANPC_GetGenericTeamId());
				OuterClass->LinkChild(Z_Construct_UFunction_ANPC_Init());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ANPC_GetGenericTeamId(), "GetGenericTeamId"); // 1373042060
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ANPC_Init(), "Init"); // 658660408
				static TCppClassTypeInfo<TCppClassTypeTraits<ANPC> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->Interfaces.Add(FImplementedInterface(Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister(), VTABLE_OFFSET(ANPC, IGenericTeamAgentInterface), false ));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("NPC.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("NPC.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPC, 2528952717);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPC(Z_Construct_UClass_ANPC, &ANPC::StaticClass, TEXT("/Script/Yokai"), TEXT("ANPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC);
	void ANPC_Combat::StaticRegisterNativesANPC_Combat()
	{
		UClass* Class = ANPC_Combat::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "engageCombat", (Native)&ANPC_Combat::execengageCombat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_ANPC_Combat_engageCombat()
	{
		UObject* Outer=Z_Construct_UClass_ANPC_Combat();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("engageCombat"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("NPC_Combat.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANPC_Combat_NoRegister()
	{
		return ANPC_Combat::StaticClass();
	}
	UClass* Z_Construct_UClass_ANPC_Combat()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ANPC();
			Z_Construct_UPackage__Script_Yokai();
			OuterClass = ANPC_Combat::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ANPC_Combat_engageCombat());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ANPC_Combat_engageCombat(), "engageCombat"); // 1605313105
				static TCppClassTypeInfo<TCppClassTypeTraits<ANPC_Combat> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("NPC_Combat.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("NPC_Combat.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("in the future, will have weapon mesh\n\n\n//UCLASS(Abstract) // will eventually be unable to create characters that are purely NPC_Combat"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPC_Combat, 3672578913);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPC_Combat(Z_Construct_UClass_ANPC_Combat, &ANPC_Combat::StaticClass, TEXT("/Script/Yokai"), TEXT("ANPC_Combat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC_Combat);
	void ANPC_Noncombat::StaticRegisterNativesANPC_Noncombat()
	{
	}
	UClass* Z_Construct_UClass_ANPC_Noncombat_NoRegister()
	{
		return ANPC_Noncombat::StaticClass();
	}
	UClass* Z_Construct_UClass_ANPC_Noncombat()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ANPC();
			Z_Construct_UPackage__Script_Yokai();
			OuterClass = ANPC_Noncombat::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ANPC_Noncombat> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("NPC_Noncombat.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("NPC_Noncombat.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPC_Noncombat, 2173310531);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPC_Noncombat(Z_Construct_UClass_ANPC_Noncombat, &ANPC_Noncombat::StaticClass, TEXT("/Script/Yokai"), TEXT("ANPC_Noncombat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC_Noncombat);
	UPackage* Z_Construct_UPackage__Script_Yokai()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Yokai")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x4BF185D2;
			Guid.B = 0x4636257A;
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
