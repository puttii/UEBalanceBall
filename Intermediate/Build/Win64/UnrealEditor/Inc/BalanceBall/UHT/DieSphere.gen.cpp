// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BalanceBall/Public/DieSphere.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDieSphere() {}

// Begin Cross Module References
BALANCEBALL_API UClass* Z_Construct_UClass_ADieSphere();
BALANCEBALL_API UClass* Z_Construct_UClass_ADieSphere_NoRegister();
BALANCEBALL_API UClass* Z_Construct_UClass_AHitBoxBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_BalanceBall();
// End Cross Module References

// Begin Class ADieSphere
void ADieSphere::StaticRegisterNativesADieSphere()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADieSphere);
UClass* Z_Construct_UClass_ADieSphere_NoRegister()
{
	return ADieSphere::StaticClass();
}
struct Z_Construct_UClass_ADieSphere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DieSphere.h" },
		{ "ModuleRelativePath", "Public/DieSphere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereLocation_MetaData[] = {
		{ "Category", "DieSphere" },
		{ "ModuleRelativePath", "Public/DieSphere.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphereLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADieSphere>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADieSphere_Statics::NewProp_SphereLocation = { "SphereLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADieSphere, SphereLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereLocation_MetaData), NewProp_SphereLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADieSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADieSphere_Statics::NewProp_SphereLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADieSphere_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADieSphere_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHitBoxBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BalanceBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADieSphere_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADieSphere_Statics::ClassParams = {
	&ADieSphere::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADieSphere_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADieSphere_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADieSphere_Statics::Class_MetaDataParams), Z_Construct_UClass_ADieSphere_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADieSphere()
{
	if (!Z_Registration_Info_UClass_ADieSphere.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADieSphere.OuterSingleton, Z_Construct_UClass_ADieSphere_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADieSphere.OuterSingleton;
}
template<> BALANCEBALL_API UClass* StaticClass<ADieSphere>()
{
	return ADieSphere::StaticClass();
}
ADieSphere::ADieSphere() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADieSphere);
ADieSphere::~ADieSphere() {}
// End Class ADieSphere

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_DieSphere_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADieSphere, ADieSphere::StaticClass, TEXT("ADieSphere"), &Z_Registration_Info_UClass_ADieSphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADieSphere), 3199110001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_DieSphere_h_3767813715(TEXT("/Script/BalanceBall"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_DieSphere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_DieSphere_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
