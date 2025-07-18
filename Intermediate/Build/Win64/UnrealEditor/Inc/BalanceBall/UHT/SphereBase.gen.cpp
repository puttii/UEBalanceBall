// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BalanceBall/Public/SphereBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereBase() {}

// Begin Cross Module References
BALANCEBALL_API UClass* Z_Construct_UClass_ASphereBase();
BALANCEBALL_API UClass* Z_Construct_UClass_ASphereBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_BalanceBall();
// End Cross Module References

// Begin Class ASphereBase
void ASphereBase::StaticRegisterNativesASphereBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASphereBase);
UClass* Z_Construct_UClass_ASphereBase_NoRegister()
{
	return ASphereBase::StaticClass();
}
struct Z_Construct_UClass_ASphereBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SphereBase.h" },
		{ "ModuleRelativePath", "Public/SphereBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereMeshComp_MetaData[] = {
		{ "Category", "SphereBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SphereBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SphereBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SphereBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SphereBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SphereBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedUpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SphereBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollTorque_MetaData[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "Public/SphereBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplier_MetaData[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "Public/SphereBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeedUpAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollTorque;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASphereBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASphereBase_Statics::NewProp_SphereMeshComp = { "SphereMeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASphereBase, SphereMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereMeshComp_MetaData), NewProp_SphereMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASphereBase_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASphereBase, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASphereBase_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASphereBase, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASphereBase_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASphereBase, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASphereBase_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASphereBase, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASphereBase_Statics::NewProp_SpeedUpAction = { "SpeedUpAction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASphereBase, SpeedUpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedUpAction_MetaData), NewProp_SpeedUpAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASphereBase_Statics::NewProp_RollTorque = { "RollTorque", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASphereBase, RollTorque), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollTorque_MetaData), NewProp_RollTorque_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASphereBase_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASphereBase, SpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMultiplier_MetaData), NewProp_SpeedMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASphereBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereBase_Statics::NewProp_SphereMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereBase_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereBase_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereBase_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereBase_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereBase_Statics::NewProp_SpeedUpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereBase_Statics::NewProp_RollTorque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereBase_Statics::NewProp_SpeedMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASphereBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASphereBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_BalanceBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASphereBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASphereBase_Statics::ClassParams = {
	&ASphereBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASphereBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASphereBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASphereBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASphereBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASphereBase()
{
	if (!Z_Registration_Info_UClass_ASphereBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASphereBase.OuterSingleton, Z_Construct_UClass_ASphereBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASphereBase.OuterSingleton;
}
template<> BALANCEBALL_API UClass* StaticClass<ASphereBase>()
{
	return ASphereBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASphereBase);
ASphereBase::~ASphereBase() {}
// End Class ASphereBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_SphereBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASphereBase, ASphereBase::StaticClass, TEXT("ASphereBase"), &Z_Registration_Info_UClass_ASphereBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASphereBase), 1195768220U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_SphereBase_h_302114238(TEXT("/Script/BalanceBall"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_SphereBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_SphereBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
