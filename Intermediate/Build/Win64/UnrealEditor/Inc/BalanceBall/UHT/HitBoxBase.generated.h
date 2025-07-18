// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HitBoxBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BALANCEBALL_HitBoxBase_generated_h
#error "HitBoxBase.generated.h already included, missing '#pragma once' in HitBoxBase.h"
#endif
#define BALANCEBALL_HitBoxBase_generated_h

#define FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_HitBoxBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBeginHit);


#define FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_HitBoxBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHitBoxBase(); \
	friend struct Z_Construct_UClass_AHitBoxBase_Statics; \
public: \
	DECLARE_CLASS(AHitBoxBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BalanceBall"), NO_API) \
	DECLARE_SERIALIZER(AHitBoxBase)


#define FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_HitBoxBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHitBoxBase(AHitBoxBase&&); \
	AHitBoxBase(const AHitBoxBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitBoxBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitBoxBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHitBoxBase) \
	NO_API virtual ~AHitBoxBase();


#define FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_HitBoxBase_h_9_PROLOG
#define FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_HitBoxBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_HitBoxBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_HitBoxBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_HitBoxBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BALANCEBALL_API UClass* StaticClass<class AHitBoxBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_HitBoxBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
