// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AIProject2.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1AIProject2() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();

	AIPROJECT2_API class UClass* Z_Construct_UClass_UEnemyLeaderFunctions_NoRegister();
	AIPROJECT2_API class UClass* Z_Construct_UClass_UEnemyLeaderFunctions();
	AIPROJECT2_API class UPackage* Z_Construct_UPackage__Script_AIProject2();
	void UEnemyLeaderFunctions::StaticRegisterNativesUEnemyLeaderFunctions()
	{
	}
	UClass* Z_Construct_UClass_UEnemyLeaderFunctions_NoRegister()
	{
		return UEnemyLeaderFunctions::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnemyLeaderFunctions()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_AIProject2();
			OuterClass = UEnemyLeaderFunctions::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UEnemyLeaderFunctions> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnemyLeaderFunctions.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("EnemyLeaderFunctions.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyLeaderFunctions, 2249511776);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyLeaderFunctions(Z_Construct_UClass_UEnemyLeaderFunctions, &UEnemyLeaderFunctions::StaticClass, TEXT("/Script/AIProject2"), TEXT("UEnemyLeaderFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyLeaderFunctions);
	UPackage* Z_Construct_UPackage__Script_AIProject2()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/AIProject2")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xB58ECDBB;
			Guid.B = 0xAB539283;
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
