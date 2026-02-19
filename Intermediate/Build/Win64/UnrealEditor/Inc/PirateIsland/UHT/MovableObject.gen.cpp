// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PirateIsland/MovableObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMovableObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PIRATEISLAND_API UClass* Z_Construct_UClass_AMovableObject();
PIRATEISLAND_API UClass* Z_Construct_UClass_AMovableObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_PirateIsland();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMovableObject Function Kick *********************************************
struct Z_Construct_UFunction_AMovableObject_Kick_Statics
{
	struct MovableObject_eventKick_Parms
	{
		FVector Direction;
		float Strength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Kick the item in a direction\n" },
#endif
		{ "ModuleRelativePath", "MovableObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Kick the item in a direction" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMovableObject_Kick_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovableObject_eventKick_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovableObject_Kick_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovableObject_eventKick_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovableObject_Kick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovableObject_Kick_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovableObject_Kick_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovableObject_Kick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovableObject_Kick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMovableObject, nullptr, "Kick", Z_Construct_UFunction_AMovableObject_Kick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovableObject_Kick_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMovableObject_Kick_Statics::MovableObject_eventKick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovableObject_Kick_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovableObject_Kick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMovableObject_Kick_Statics::MovableObject_eventKick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMovableObject_Kick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovableObject_Kick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovableObject::execKick)
{
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Kick(Z_Param_Direction,Z_Param_Strength);
	P_NATIVE_END;
}
// ********** End Class AMovableObject Function Kick ***********************************************

// ********** Begin Class AMovableObject ***********************************************************
void AMovableObject::StaticRegisterNativesAMovableObject()
{
	UClass* Class = AMovableObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Kick", &AMovableObject::execKick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMovableObject;
UClass* AMovableObject::GetPrivateStaticClass()
{
	using TClass = AMovableObject;
	if (!Z_Registration_Info_UClass_AMovableObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MovableObject"),
			Z_Registration_Info_UClass_AMovableObject.InnerSingleton,
			StaticRegisterNativesAMovableObject,
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
	return Z_Registration_Info_UClass_AMovableObject.InnerSingleton;
}
UClass* Z_Construct_UClass_AMovableObject_NoRegister()
{
	return AMovableObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMovableObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovableObject.h" },
		{ "ModuleRelativePath", "MovableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "Category", "Movable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The physics mesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MovableObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The physics mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshToUse_MetaData[] = {
		{ "Category", "Movable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh you can assign in editor\n" },
#endif
		{ "ModuleRelativePath", "MovableObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh you can assign in editor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshToUse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovableObject_Kick, "Kick" }, // 2950099133
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovableObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovableObject_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovableObject, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovableObject_Statics::NewProp_MeshToUse = { "MeshToUse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovableObject, MeshToUse), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshToUse_MetaData), NewProp_MeshToUse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovableObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovableObject_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovableObject_Statics::NewProp_MeshToUse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovableObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovableObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PirateIsland,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovableObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovableObject_Statics::ClassParams = {
	&AMovableObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMovableObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovableObject_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovableObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovableObject()
{
	if (!Z_Registration_Info_UClass_AMovableObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovableObject.OuterSingleton, Z_Construct_UClass_AMovableObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovableObject.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovableObject);
AMovableObject::~AMovableObject() {}
// ********** End Class AMovableObject *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PirateIsland_Source_PirateIsland_MovableObject_h__Script_PirateIsland_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovableObject, AMovableObject::StaticClass, TEXT("AMovableObject"), &Z_Registration_Info_UClass_AMovableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovableObject), 238498309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PirateIsland_Source_PirateIsland_MovableObject_h__Script_PirateIsland_315178040(TEXT("/Script/PirateIsland"),
	Z_CompiledInDeferFile_FID_PirateIsland_Source_PirateIsland_MovableObject_h__Script_PirateIsland_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PirateIsland_Source_PirateIsland_MovableObject_h__Script_PirateIsland_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
