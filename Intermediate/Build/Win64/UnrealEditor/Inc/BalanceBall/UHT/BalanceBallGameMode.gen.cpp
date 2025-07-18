// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BalanceBall/Public/GameMode/BalanceBallGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBalanceBallGameMode() {}

// Begin Cross Module References
BALANCEBALL_API UClass* Z_Construct_UClass_ABalanceBallGameMode();
BALANCEBALL_API UClass* Z_Construct_UClass_ABalanceBallGameMode_NoRegister();
BALANCEBALL_API UClass* Z_Construct_UClass_ASphereBase_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BalanceBall();
// End Cross Module References

// Begin Class ABalanceBallGameMode Function SetCurrentStart
struct Z_Construct_UFunction_ABalanceBallGameMode_SetCurrentStart_Statics
{
	struct BalanceBallGameMode_eventSetCurrentStart_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameMode/BalanceBallGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABalanceBallGameMode_SetCurrentStart_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BalanceBallGameMode_eventSetCurrentStart_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABalanceBallGameMode_SetCurrentStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABalanceBallGameMode_SetCurrentStart_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABalanceBallGameMode_SetCurrentStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABalanceBallGameMode_SetCurrentStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABalanceBallGameMode, nullptr, "SetCurrentStart", nullptr, nullptr, Z_Construct_UFunction_ABalanceBallGameMode_SetCurrentStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABalanceBallGameMode_SetCurrentStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABalanceBallGameMode_SetCurrentStart_Statics::BalanceBallGameMode_eventSetCurrentStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABalanceBallGameMode_SetCurrentStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABalanceBallGameMode_SetCurrentStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABalanceBallGameMode_SetCurrentStart_Statics::BalanceBallGameMode_eventSetCurrentStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABalanceBallGameMode_SetCurrentStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABalanceBallGameMode_SetCurrentStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABalanceBallGameMode::execSetCurrentStart)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentStart(Z_Param_Location);
	P_NATIVE_END;
}
// End Class ABalanceBallGameMode Function SetCurrentStart

// Begin Class ABalanceBallGameMode Function SetGameInputGameAndUI
struct Z_Construct_UFunction_ABalanceBallGameMode_SetGameInputGameAndUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameMode/BalanceBallGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABalanceBallGameMode_SetGameInputGameAndUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABalanceBallGameMode, nullptr, "SetGameInputGameAndUI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABalanceBallGameMode_SetGameInputGameAndUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABalanceBallGameMode_SetGameInputGameAndUI_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABalanceBallGameMode_SetGameInputGameAndUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABalanceBallGameMode_SetGameInputGameAndUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABalanceBallGameMode::execSetGameInputGameAndUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameInputGameAndUI();
	P_NATIVE_END;
}
// End Class ABalanceBallGameMode Function SetGameInputGameAndUI

// Begin Class ABalanceBallGameMode Function SetGameInputUIOnly
struct Z_Construct_UFunction_ABalanceBallGameMode_SetGameInputUIOnly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameMode/BalanceBallGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABalanceBallGameMode_SetGameInputUIOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABalanceBallGameMode, nullptr, "SetGameInputUIOnly", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABalanceBallGameMode_SetGameInputUIOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABalanceBallGameMode_SetGameInputUIOnly_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABalanceBallGameMode_SetGameInputUIOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABalanceBallGameMode_SetGameInputUIOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABalanceBallGameMode::execSetGameInputUIOnly)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameInputUIOnly();
	P_NATIVE_END;
}
// End Class ABalanceBallGameMode Function SetGameInputUIOnly

// Begin Class ABalanceBallGameMode Function SetPlayerLocation
struct Z_Construct_UFunction_ABalanceBallGameMode_SetPlayerLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameMode/BalanceBallGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABalanceBallGameMode_SetPlayerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABalanceBallGameMode, nullptr, "SetPlayerLocation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABalanceBallGameMode_SetPlayerLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABalanceBallGameMode_SetPlayerLocation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABalanceBallGameMode_SetPlayerLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABalanceBallGameMode_SetPlayerLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABalanceBallGameMode::execSetPlayerLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerLocation();
	P_NATIVE_END;
}
// End Class ABalanceBallGameMode Function SetPlayerLocation

// Begin Class ABalanceBallGameMode
void ABalanceBallGameMode::StaticRegisterNativesABalanceBallGameMode()
{
	UClass* Class = ABalanceBallGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCurrentStart", &ABalanceBallGameMode::execSetCurrentStart },
		{ "SetGameInputGameAndUI", &ABalanceBallGameMode::execSetGameInputGameAndUI },
		{ "SetGameInputUIOnly", &ABalanceBallGameMode::execSetGameInputUIOnly },
		{ "SetPlayerLocation", &ABalanceBallGameMode::execSetPlayerLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABalanceBallGameMode);
UClass* Z_Construct_UClass_ABalanceBallGameMode_NoRegister()
{
	return ABalanceBallGameMode::StaticClass();
}
struct Z_Construct_UClass_ABalanceBallGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/BalanceBallGameMode.h" },
		{ "ModuleRelativePath", "Public/GameMode/BalanceBallGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "ModuleRelativePath", "Public/GameMode/BalanceBallGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStart_MetaData[] = {
		{ "Category", "CurrentStart" },
		{ "ModuleRelativePath", "Public/GameMode/BalanceBallGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDeathNum_MetaData[] = {
		{ "Category", "BalanceBallGameMode" },
		{ "ModuleRelativePath", "Public/GameMode/BalanceBallGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isEnd_MetaData[] = {
		{ "Category", "BalanceBallGameMode" },
		{ "ModuleRelativePath", "Public/GameMode/BalanceBallGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerDeathNum;
	static void NewProp_isEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABalanceBallGameMode_SetCurrentStart, "SetCurrentStart" }, // 701914616
		{ &Z_Construct_UFunction_ABalanceBallGameMode_SetGameInputGameAndUI, "SetGameInputGameAndUI" }, // 1001753269
		{ &Z_Construct_UFunction_ABalanceBallGameMode_SetGameInputUIOnly, "SetGameInputUIOnly" }, // 2333337107
		{ &Z_Construct_UFunction_ABalanceBallGameMode_SetPlayerLocation, "SetPlayerLocation" }, // 3955437881
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABalanceBallGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABalanceBallGameMode_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABalanceBallGameMode, PlayerPawn), Z_Construct_UClass_ASphereBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPawn_MetaData), NewProp_PlayerPawn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABalanceBallGameMode_Statics::NewProp_CurrentStart = { "CurrentStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABalanceBallGameMode, CurrentStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStart_MetaData), NewProp_CurrentStart_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABalanceBallGameMode_Statics::NewProp_PlayerDeathNum = { "PlayerDeathNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABalanceBallGameMode, PlayerDeathNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerDeathNum_MetaData), NewProp_PlayerDeathNum_MetaData) };
void Z_Construct_UClass_ABalanceBallGameMode_Statics::NewProp_isEnd_SetBit(void* Obj)
{
	((ABalanceBallGameMode*)Obj)->isEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABalanceBallGameMode_Statics::NewProp_isEnd = { "isEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABalanceBallGameMode), &Z_Construct_UClass_ABalanceBallGameMode_Statics::NewProp_isEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isEnd_MetaData), NewProp_isEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABalanceBallGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalanceBallGameMode_Statics::NewProp_PlayerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalanceBallGameMode_Statics::NewProp_CurrentStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalanceBallGameMode_Statics::NewProp_PlayerDeathNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalanceBallGameMode_Statics::NewProp_isEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABalanceBallGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABalanceBallGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BalanceBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABalanceBallGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABalanceBallGameMode_Statics::ClassParams = {
	&ABalanceBallGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABalanceBallGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABalanceBallGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABalanceBallGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABalanceBallGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABalanceBallGameMode()
{
	if (!Z_Registration_Info_UClass_ABalanceBallGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABalanceBallGameMode.OuterSingleton, Z_Construct_UClass_ABalanceBallGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABalanceBallGameMode.OuterSingleton;
}
template<> BALANCEBALL_API UClass* StaticClass<ABalanceBallGameMode>()
{
	return ABalanceBallGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABalanceBallGameMode);
ABalanceBallGameMode::~ABalanceBallGameMode() {}
// End Class ABalanceBallGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_GameMode_BalanceBallGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABalanceBallGameMode, ABalanceBallGameMode::StaticClass, TEXT("ABalanceBallGameMode"), &Z_Registration_Info_UClass_ABalanceBallGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABalanceBallGameMode), 1159639144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_GameMode_BalanceBallGameMode_h_4044885808(TEXT("/Script/BalanceBall"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_GameMode_BalanceBallGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_GameMode_BalanceBallGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
