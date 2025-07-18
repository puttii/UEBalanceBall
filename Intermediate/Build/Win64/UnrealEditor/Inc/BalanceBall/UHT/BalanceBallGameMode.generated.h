// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/BalanceBallGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BALANCEBALL_BalanceBallGameMode_generated_h
#error "BalanceBallGameMode.generated.h already included, missing '#pragma once' in BalanceBallGameMode.h"
#endif
#define BALANCEBALL_BalanceBallGameMode_generated_h

#define FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_GameMode_BalanceBallGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetGameInputUIOnly); \
	DECLARE_FUNCTION(execSetGameInputGameAndUI); \
	DECLARE_FUNCTION(execSetCurrentStart); \
	DECLARE_FUNCTION(execSetPlayerLocation);


#define FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_GameMode_BalanceBallGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABalanceBallGameMode(); \
	friend struct Z_Construct_UClass_ABalanceBallGameMode_Statics; \
public: \
	DECLARE_CLASS(ABalanceBallGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BalanceBall"), NO_API) \
	DECLARE_SERIALIZER(ABalanceBallGameMode)


#define FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_GameMode_BalanceBallGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABalanceBallGameMode(ABalanceBallGameMode&&); \
	ABalanceBallGameMode(const ABalanceBallGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABalanceBallGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABalanceBallGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABalanceBallGameMode) \
	NO_API virtual ~ABalanceBallGameMode();


#define FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_GameMode_BalanceBallGameMode_h_12_PROLOG
#define FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_GameMode_BalanceBallGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_GameMode_BalanceBallGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_GameMode_BalanceBallGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_GameMode_BalanceBallGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BALANCEBALL_API UClass* StaticClass<class ABalanceBallGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_GameMode_BalanceBallGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
