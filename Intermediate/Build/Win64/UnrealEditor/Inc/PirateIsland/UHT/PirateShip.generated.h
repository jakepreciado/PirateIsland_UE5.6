// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PirateShip.h"

#ifdef PIRATEISLAND_PirateShip_generated_h
#error "PirateShip.generated.h already included, missing '#pragma once' in PirateShip.h"
#endif
#define PIRATEISLAND_PirateShip_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APirateShip **************************************************************
PIRATEISLAND_API UClass* Z_Construct_UClass_APirateShip_NoRegister();

#define FID_PirateIsland_Source_PirateIsland_PirateShip_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPirateShip(); \
	friend struct Z_Construct_UClass_APirateShip_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIRATEISLAND_API UClass* Z_Construct_UClass_APirateShip_NoRegister(); \
public: \
	DECLARE_CLASS2(APirateShip, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PirateIsland"), Z_Construct_UClass_APirateShip_NoRegister) \
	DECLARE_SERIALIZER(APirateShip)


#define FID_PirateIsland_Source_PirateIsland_PirateShip_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APirateShip(APirateShip&&) = delete; \
	APirateShip(const APirateShip&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APirateShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APirateShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APirateShip) \
	NO_API virtual ~APirateShip();


#define FID_PirateIsland_Source_PirateIsland_PirateShip_h_7_PROLOG
#define FID_PirateIsland_Source_PirateIsland_PirateShip_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PirateIsland_Source_PirateIsland_PirateShip_h_10_INCLASS_NO_PURE_DECLS \
	FID_PirateIsland_Source_PirateIsland_PirateShip_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APirateShip;

// ********** End Class APirateShip ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PirateIsland_Source_PirateIsland_PirateShip_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
