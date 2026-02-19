// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PirateIsland/PirateShip.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePirateShip() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PIRATEISLAND_API UClass* Z_Construct_UClass_APirateShip();
PIRATEISLAND_API UClass* Z_Construct_UClass_APirateShip_NoRegister();
UPackage* Z_Construct_UPackage__Script_PirateIsland();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APirateShip **************************************************************
void APirateShip::StaticRegisterNativesAPirateShip()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APirateShip;
UClass* APirateShip::GetPrivateStaticClass()
{
	using TClass = APirateShip;
	if (!Z_Registration_Info_UClass_APirateShip.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PirateShip"),
			Z_Registration_Info_UClass_APirateShip.InnerSingleton,
			StaticRegisterNativesAPirateShip,
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
	return Z_Registration_Info_UClass_APirateShip.InnerSingleton;
}
UClass* Z_Construct_UClass_APirateShip_NoRegister()
{
	return APirateShip::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APirateShip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PirateShip.h" },
		{ "ModuleRelativePath", "PirateShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShipMesh_MetaData[] = {
		{ "Category", "PirateShip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ship mesh component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PirateShip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ship mesh component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleCenter_MetaData[] = {
		{ "Category", "Circle Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Center of the circle (your island location)\n" },
#endif
		{ "ModuleRelativePath", "PirateShip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Center of the circle (your island location)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleRadius_MetaData[] = {
		{ "Category", "Circle Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Radius from the center\n" },
#endif
		{ "ModuleRelativePath", "PirateShip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius from the center" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Circle Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Orbit speed in degrees per second\n" },
#endif
		{ "ModuleRelativePath", "PirateShip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Orbit speed in degrees per second" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAngle_MetaData[] = {
		{ "Category", "Circle Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Start angle on the circle (degrees)\n" },
#endif
		{ "ModuleRelativePath", "PirateShip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start angle on the circle (degrees)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBobbing_MetaData[] = {
		{ "Category", "Circle Movement|Bobbing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional bobbing\n" },
#endif
		{ "ModuleRelativePath", "PirateShip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional bobbing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BobHeight_MetaData[] = {
		{ "Category", "Circle Movement|Bobbing" },
		{ "ModuleRelativePath", "PirateShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BobSpeed_MetaData[] = {
		{ "Category", "Circle Movement|Bobbing" },
		{ "ModuleRelativePath", "PirateShip.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CircleCenter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CircleRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartAngle;
	static void NewProp_bEnableBobbing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBobbing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BobHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BobSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APirateShip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APirateShip_Statics::NewProp_ShipMesh = { "ShipMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APirateShip, ShipMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShipMesh_MetaData), NewProp_ShipMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APirateShip_Statics::NewProp_CircleCenter = { "CircleCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APirateShip, CircleCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleCenter_MetaData), NewProp_CircleCenter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APirateShip_Statics::NewProp_CircleRadius = { "CircleRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APirateShip, CircleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleRadius_MetaData), NewProp_CircleRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APirateShip_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APirateShip, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APirateShip_Statics::NewProp_StartAngle = { "StartAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APirateShip, StartAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAngle_MetaData), NewProp_StartAngle_MetaData) };
void Z_Construct_UClass_APirateShip_Statics::NewProp_bEnableBobbing_SetBit(void* Obj)
{
	((APirateShip*)Obj)->bEnableBobbing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APirateShip_Statics::NewProp_bEnableBobbing = { "bEnableBobbing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APirateShip), &Z_Construct_UClass_APirateShip_Statics::NewProp_bEnableBobbing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBobbing_MetaData), NewProp_bEnableBobbing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APirateShip_Statics::NewProp_BobHeight = { "BobHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APirateShip, BobHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BobHeight_MetaData), NewProp_BobHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APirateShip_Statics::NewProp_BobSpeed = { "BobSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APirateShip, BobSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BobSpeed_MetaData), NewProp_BobSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APirateShip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APirateShip_Statics::NewProp_ShipMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APirateShip_Statics::NewProp_CircleCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APirateShip_Statics::NewProp_CircleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APirateShip_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APirateShip_Statics::NewProp_StartAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APirateShip_Statics::NewProp_bEnableBobbing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APirateShip_Statics::NewProp_BobHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APirateShip_Statics::NewProp_BobSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APirateShip_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APirateShip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PirateIsland,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APirateShip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APirateShip_Statics::ClassParams = {
	&APirateShip::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APirateShip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APirateShip_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APirateShip_Statics::Class_MetaDataParams), Z_Construct_UClass_APirateShip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APirateShip()
{
	if (!Z_Registration_Info_UClass_APirateShip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APirateShip.OuterSingleton, Z_Construct_UClass_APirateShip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APirateShip.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APirateShip);
APirateShip::~APirateShip() {}
// ********** End Class APirateShip ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PirateIsland_Source_PirateIsland_PirateShip_h__Script_PirateIsland_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APirateShip, APirateShip::StaticClass, TEXT("APirateShip"), &Z_Registration_Info_UClass_APirateShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APirateShip), 4093928600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PirateIsland_Source_PirateIsland_PirateShip_h__Script_PirateIsland_351355335(TEXT("/Script/PirateIsland"),
	Z_CompiledInDeferFile_FID_PirateIsland_Source_PirateIsland_PirateShip_h__Script_PirateIsland_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PirateIsland_Source_PirateIsland_PirateShip_h__Script_PirateIsland_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
