// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHandsAnimSet;
#ifdef FPSCORE_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define FPSCORE_WeaponBase_generated_h

#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHandsAnimSet_Statics; \
	FPSCORE_API static class UScriptStruct* StaticStruct();


template<> FPSCORE_API UScriptStruct* StaticStruct<struct FHandsAnimSet>();

#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics; \
	FPSCORE_API static class UScriptStruct* StaticStruct();


template<> FPSCORE_API UScriptStruct* StaticStruct<struct FRuntimeWeaponData>();

#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttachmentData_Statics; \
	FPSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> FPSCORE_API UScriptStruct* StaticStruct<struct FAttachmentData>();

#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_323_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticWeaponData_Statics; \
	FPSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> FPSCORE_API UScriptStruct* StaticStruct<struct FStaticWeaponData>();

#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_SPARSE_DATA
#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleRecoveryProgress); \
	DECLARE_FUNCTION(execGetVerticalCameraOffset); \
	DECLARE_FUNCTION(execGetWeaponAnimations); \
	DECLARE_FUNCTION(execSetShowDebug);


#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleRecoveryProgress); \
	DECLARE_FUNCTION(execGetVerticalCameraOffset); \
	DECLARE_FUNCTION(execGetWeaponAnimations); \
	DECLARE_FUNCTION(execSetShowDebug);


#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public:


#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase)


#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_584_PROLOG
#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_SPARSE_DATA \
	FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_RPC_WRAPPERS \
	FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_INCLASS \
	FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_SPARSE_DATA \
	FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_587_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h


#define FOREACH_ENUM_EAMMOTYPE(op) \
	op(EAmmoType::Pistol) \
	op(EAmmoType::Rifle) \
	op(EAmmoType::Shotgun) \
	op(EAmmoType::Special) 

enum class EAmmoType : uint8;
template<> FPSCORE_API UEnum* StaticEnum<EAmmoType>();

#define FOREACH_ENUM_EATTACHMENTTYPE(op) \
	op(EAttachmentType::Barrel) \
	op(EAttachmentType::Magazine) \
	op(EAttachmentType::Sights) \
	op(EAttachmentType::Stock) \
	op(EAttachmentType::Grip) 

enum class EAttachmentType : uint8;
template<> FPSCORE_API UEnum* StaticEnum<EAttachmentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
