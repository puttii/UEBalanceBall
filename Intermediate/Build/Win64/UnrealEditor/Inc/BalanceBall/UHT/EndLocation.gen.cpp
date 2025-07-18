// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BalanceBall/Public/EndLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndLocation() {}

// Begin Cross Module References
BALANCEBALL_API UClass* Z_Construct_UClass_AEndLocation();
BALANCEBALL_API UClass* Z_Construct_UClass_AEndLocation_NoRegister();
BALANCEBALL_API UClass* Z_Construct_UClass_AHitBoxBase();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BalanceBall();
// End Cross Module References

// Begin Class AEndLocation
void AEndLocation::StaticRegisterNativesAEndLocation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEndLocation);
UClass* Z_Construct_UClass_AEndLocation_NoRegister()
{
	return AEndLocation::StaticClass();
}
struct Z_Construct_UClass_AEndLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EndLocation.h" },
		{ "ModuleRelativePath", "Public/EndLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndMeshComp_MetaData[] = {
		{ "Category", "EndLocation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EndLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagMeshComp_MetaData[] = {
		{ "Category", "EndLocation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EndLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagpoleMeshComp_MetaData[] = {
		{ "Category", "EndLocation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EndLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlagMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlagpoleMeshComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEndLocation_Statics::NewProp_EndMeshComp = { "EndMeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEndLocation, EndMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndMeshComp_MetaData), NewProp_EndMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEndLocation_Statics::NewProp_FlagMeshComp = { "FlagMeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEndLocation, FlagMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagMeshComp_MetaData), NewProp_FlagMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEndLocation_Statics::NewProp_FlagpoleMeshComp = { "FlagpoleMeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEndLocation, FlagpoleMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagpoleMeshComp_MetaData), NewProp_FlagpoleMeshComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEndLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndLocation_Statics::NewProp_EndMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndLocation_Statics::NewProp_FlagMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndLocation_Statics::NewProp_FlagpoleMeshComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEndLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEndLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHitBoxBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BalanceBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEndLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEndLocation_Statics::ClassParams = {
	&AEndLocation::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEndLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEndLocation_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEndLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_AEndLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEndLocation()
{
	if (!Z_Registration_Info_UClass_AEndLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEndLocation.OuterSingleton, Z_Construct_UClass_AEndLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEndLocation.OuterSingleton;
}
template<> BALANCEBALL_API UClass* StaticClass<AEndLocation>()
{
	return AEndLocation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEndLocation);
AEndLocation::~AEndLocation() {}
// End Class AEndLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_EndLocation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEndLocation, AEndLocation::StaticClass, TEXT("AEndLocation"), &Z_Registration_Info_UClass_AEndLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEndLocation), 1144676676U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_EndLocation_h_3519918706(TEXT("/Script/BalanceBall"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_EndLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_EndLocation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
