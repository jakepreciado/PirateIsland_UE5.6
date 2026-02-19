// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovableObject.h"

#ifdef PIRATEISLAND_MovableObject_generated_h
#error "MovableObject.generated.h already included, missing '#pragma once' in MovableObject.h"
#endif
#define PIRATEISLAND_MovableObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMovableObject ***********************************************************
#define FID_PirateIsland_Source_PirateIsland_MovableObject_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execKick);


PIRATEISLAND_API UClass* Z_Construct_UClass_AMovableObject_NoRegister();

#define FID_PirateIsland_Source_PirateIsland_MovableObject_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovableObject(); \
	friend struct Z_Construct_UClass_AMovableObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIRATEISLAND_API UClass* Z_Construct_UClass_AMovableObject_NoRegister(); \
public: \
	DECLARE_CLASS2(AMovableObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PirateIsland"), Z_Construct_UClass_AMovableObject_NoRegister) \
	DECLARE_SERIALIZER(AMovableObject)


#define FID_PirateIsland_Source_PirateIsland_MovableObject_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMovableObject(AMovableObject&&) = delete; \
	AMovableObject(const AMovableObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovableObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovableObject) \
	NO_API virtual ~AMovableObject();


#define FID_PirateIsland_Source_PirateIsland_MovableObject_h_7_PROLOG
#define FID_PirateIsland_Source_PirateIsland_MovableObject_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PirateIsland_Source_PirateIsland_MovableObject_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PirateIsland_Source_PirateIsland_MovableObject_h_10_INCLASS_NO_PURE_DECLS \
	FID_PirateIsland_Source_PirateIsland_MovableObject_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMovableObject;

// ********** End Class AMovableObject *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PirateIsland_Source_PirateIsland_MovableObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
