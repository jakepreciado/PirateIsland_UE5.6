// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PirateIsland/PirateCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePirateCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
PIRATEISLAND_API UClass* Z_Construct_UClass_APirateCharacter();
PIRATEISLAND_API UClass* Z_Construct_UClass_APirateCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_PirateIsland();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APirateCharacter *********************************************************
void APirateCharacter::StaticRegisterNativesAPirateCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APirateCharacter;
UClass* APirateCharacter::GetPrivateStaticClass()
{
	using TClass = APirateCharacter;
	if (!Z_Registration_Info_UClass_APirateCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PirateCharacter"),
			Z_Registration_Info_UClass_APirateCharacter.InnerSingleton,
			StaticRegisterNativesAPirateCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APirateCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_APirateCharacter_NoRegister()
{
	return APirateCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APirateCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PirateCharacter.h" },
		{ "ModuleRelativePath", "PirateCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera boom positioning the camera behind the character\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PirateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Follow camera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PirateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APirateCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APirateCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APirateCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APirateCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APirateCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APirateCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APirateCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APirateCharacter_Statics::NewProp_FollowCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APirateCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APirateCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_PirateIsland,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APirateCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APirateCharacter_Statics::ClassParams = {
	&APirateCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APirateCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APirateCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APirateCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APirateCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APirateCharacter()
{
	if (!Z_Registration_Info_UClass_APirateCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APirateCharacter.OuterSingleton, Z_Construct_UClass_APirateCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APirateCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APirateCharacter);
APirateCharacter::~APirateCharacter() {}
// ********** End Class APirateCharacter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PirateIsland_Source_PirateIsland_PirateCharacter_h__Script_PirateIsland_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APirateCharacter, APirateCharacter::StaticClass, TEXT("APirateCharacter"), &Z_Registration_Info_UClass_APirateCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APirateCharacter), 3566554240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PirateIsland_Source_PirateIsland_PirateCharacter_h__Script_PirateIsland_129313680(TEXT("/Script/PirateIsland"),
	Z_CompiledInDeferFile_FID_PirateIsland_Source_PirateIsland_PirateCharacter_h__Script_PirateIsland_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PirateIsland_Source_PirateIsland_PirateCharacter_h__Script_PirateIsland_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
