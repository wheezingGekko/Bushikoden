// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGenericTeamId;
#ifdef YOKAI_NPC_generated_h
#error "NPC.generated.h already included, missing '#pragma once' in NPC.h"
#endif
#define YOKAI_NPC_generated_h

#define Yokai_Source_Yokai_NPC_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Init(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGenericTeamId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGenericTeamId*)Z_Param__Result=this->GetGenericTeamId(); \
		P_NATIVE_END; \
	}


#define Yokai_Source_Yokai_NPC_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Init(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGenericTeamId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGenericTeamId*)Z_Param__Result=this->GetGenericTeamId(); \
		P_NATIVE_END; \
	}


#define Yokai_Source_Yokai_NPC_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend YOKAI_API class UClass* Z_Construct_UClass_ANPC(); \
public: \
	DECLARE_CLASS(ANPC, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Yokai"), NO_API) \
	DECLARE_SERIALIZER(ANPC) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ANPC*>(this); }


#define Yokai_Source_Yokai_NPC_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend YOKAI_API class UClass* Z_Construct_UClass_ANPC(); \
public: \
	DECLARE_CLASS(ANPC, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Yokai"), NO_API) \
	DECLARE_SERIALIZER(ANPC) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ANPC*>(this); }


#define Yokai_Source_Yokai_NPC_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public:


#define Yokai_Source_Yokai_NPC_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPC)


#define Yokai_Source_Yokai_NPC_h_15_PRIVATE_PROPERTY_OFFSET
#define Yokai_Source_Yokai_NPC_h_12_PROLOG
#define Yokai_Source_Yokai_NPC_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Yokai_Source_Yokai_NPC_h_15_PRIVATE_PROPERTY_OFFSET \
	Yokai_Source_Yokai_NPC_h_15_RPC_WRAPPERS \
	Yokai_Source_Yokai_NPC_h_15_INCLASS \
	Yokai_Source_Yokai_NPC_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Yokai_Source_Yokai_NPC_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Yokai_Source_Yokai_NPC_h_15_PRIVATE_PROPERTY_OFFSET \
	Yokai_Source_Yokai_NPC_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Yokai_Source_Yokai_NPC_h_15_INCLASS_NO_PURE_DECLS \
	Yokai_Source_Yokai_NPC_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Yokai_Source_Yokai_NPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
