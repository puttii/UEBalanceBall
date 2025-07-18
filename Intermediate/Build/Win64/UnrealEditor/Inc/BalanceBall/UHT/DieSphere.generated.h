// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DieSphere.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BALANCEBALL_DieSphere_generated_h
#error "DieSphere.generated.h already included, missing '#pragma once' in DieSphere.h"
#endif
#define BALANCEBALL_DieSphere_generated_h

#define FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_DieSphere_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADieSphere(); \
	friend struct Z_Construct_UClass_ADieSphere_Statics; \
public: \
	DECLARE_CLASS(ADieSphere, AHitBoxBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BalanceBall"), NO_API) \
	DECLARE_SERIALIZER(ADieSphere)


#define FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_DieSphere_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADieSphere(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADieSphere(ADieSphere&&); \
	ADieSphere(const ADieSphere&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADieSphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADieSphere); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADieSphere) \
	NO_API virtual ~ADieSphere();


#define FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_DieSphere_h_12_PROLOG
#define FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_DieSphere_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_DieSphere_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_DieSphere_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BALANCEBALL_API UClass* StaticClass<class ADieSphere>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_BalanceBall_Source_BalanceBall_Public_DieSphere_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
