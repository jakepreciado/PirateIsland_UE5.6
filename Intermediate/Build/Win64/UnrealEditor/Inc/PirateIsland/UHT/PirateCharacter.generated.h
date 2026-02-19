// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PirateCharacter.h"

#ifdef PIRATEISLAND_PirateCharacter_generated_h
#error "PirateCharacter.generated.h already included, missing '#pragma once' in PirateCharacter.h"
#endif
#define PIRATEISLAND_PirateCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APirateCharacter *********************************************************
PIRATEISLAND_API UClass* Z_Construct_UClass_APirateCharacter_NoRegister();

#define FID_PirateIsland_Source_PirateIsland_PirateCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPirateCharacter(); \
	friend struct Z_Construct_UClass_APirateCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIRATEISLAND_API UClass* Z_Construct_UClass_APirateCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(APirateCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PirateIsland"), Z_Construct_UClass_APirateCharacter_NoRegister) \
	DECLARE_SERIALIZER(APirateCharacter)


#define FID_PirateIsland_Source_PirateIsland_PirateCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APirateCharacter(APirateCharacter&&) = delete; \
	APirateCharacter(const APirateCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APirateCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APirateCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APirateCharacter) \
	NO_API virtual ~APirateCharacter();


#define FID_PirateIsland_Source_PirateIsland_PirateCharacter_h_9_PROLOG
#define FID_PirateIsland_Source_PirateIsland_PirateCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PirateIsland_Source_PirateIsland_PirateCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_PirateIsland_Source_PirateIsland_PirateCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APirateCharacter;

// ********** End Class APirateCharacter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PirateIsland_Source_PirateIsland_PirateCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
