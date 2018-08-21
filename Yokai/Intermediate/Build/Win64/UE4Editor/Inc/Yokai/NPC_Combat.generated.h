// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YOKAI_NPC_Combat_generated_h
#error "NPC_Combat.generated.h already included, missing '#pragma once' in NPC_Combat.h"
#endif
#define YOKAI_NPC_Combat_generated_h

#define Yokai_Source_Yokai_NPC_Combat_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execengageCombat) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->engageCombat(); \
		P_NATIVE_END; \
	}


#define Yokai_Source_Yokai_NPC_Combat_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execengageCombat) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->engageCombat(); \
		P_NATIVE_END; \
	}


#define Yokai_Source_Yokai_NPC_Combat_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC_Combat(); \
	friend YOKAI_API class UClass* Z_Construct_UClass_ANPC_Combat(); \
public: \
	DECLARE_CLASS(ANPC_Combat, ANPC, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Yokai"), NO_API) \
	DECLARE_SERIALIZER(ANPC_Combat) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Yokai_Source_Yokai_NPC_Combat_h_18_INCLASS \
private: \
	static void StaticRegisterNativesANPC_Combat(); \
	friend YOKAI_API class UClass* Z_Construct_UClass_ANPC_Combat(); \
public: \
	DECLARE_CLASS(ANPC_Combat, ANPC, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Yokai"), NO_API) \
	DECLARE_SERIALIZER(ANPC_Combat) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Yokai_Source_Yokai_NPC_Combat_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPC_Combat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC_Combat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC_Combat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC_Combat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC_Combat(ANPC_Combat&&); \
	NO_API ANPC_Combat(const ANPC_Combat&); \
public:


#define Yokai_Source_Yokai_NPC_Combat_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPC_Combat() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC_Combat(ANPC_Combat&&); \
	NO_API ANPC_Combat(const ANPC_Combat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC_Combat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC_Combat); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPC_Combat)


#define Yokai_Source_Yokai_NPC_Combat_h_18_PRIVATE_PROPERTY_OFFSET
#define Yokai_Source_Yokai_NPC_Combat_h_15_PROLOG
#define Yokai_Source_Yokai_NPC_Combat_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Yokai_Source_Yokai_NPC_Combat_h_18_PRIVATE_PROPERTY_OFFSET \
	Yokai_Source_Yokai_NPC_Combat_h_18_RPC_WRAPPERS \
	Yokai_Source_Yokai_NPC_Combat_h_18_INCLASS \
	Yokai_Source_Yokai_NPC_Combat_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Yokai_Source_Yokai_NPC_Combat_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Yokai_Source_Yokai_NPC_Combat_h_18_PRIVATE_PROPERTY_OFFSET \
	Yokai_Source_Yokai_NPC_Combat_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Yokai_Source_Yokai_NPC_Combat_h_18_INCLASS_NO_PURE_DECLS \
	Yokai_Source_Yokai_NPC_Combat_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Yokai_Source_Yokai_NPC_Combat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
