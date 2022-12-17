// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class UTexture2D;
class AWeaponBase;
#ifdef FPSCORE_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define FPSCORE_InventoryComponent_generated_h

#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_15_DELEGATE \
struct _Script_FPSCore_eventHitActor_Parms \
{ \
	FHitResult HitResult; \
}; \
static inline void FHitActor_DelegateWrapper(const FMulticastScriptDelegate& HitActor, FHitResult HitResult) \
{ \
	_Script_FPSCore_eventHitActor_Parms Parms; \
	Parms.HitResult=HitResult; \
	HitActor.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStarterWeaponData_Statics; \
	FPSCORE_API static class UScriptStruct* StaticStruct();


template<> FPSCORE_API UScriptStruct* StaticStruct<struct FStarterWeaponData>();

#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_SPARSE_DATA
#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentWeaponDisplayImage); \
	DECLARE_FUNCTION(execGetCurrentWeaponDisplayName); \
	DECLARE_FUNCTION(execGetCurrentWeaponRemainingAmmo); \
	DECLARE_FUNCTION(execGetCurrentWeaponLoadedAmmo); \
	DECLARE_FUNCTION(execGetCurrentWeapon);


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentWeaponDisplayImage); \
	DECLARE_FUNCTION(execGetCurrentWeaponDisplayName); \
	DECLARE_FUNCTION(execGetCurrentWeaponRemainingAmmo); \
	DECLARE_FUNCTION(execGetCurrentWeaponLoadedAmmo); \
	DECLARE_FUNCTION(execGetCurrentWeapon);


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public:


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent)


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_41_PROLOG
#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_SPARSE_DATA \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_RPC_WRAPPERS \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_INCLASS \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_SPARSE_DATA \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_INCLASS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject4_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
