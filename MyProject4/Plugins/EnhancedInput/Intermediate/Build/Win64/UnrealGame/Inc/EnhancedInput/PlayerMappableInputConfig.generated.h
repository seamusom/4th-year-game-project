// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UInputMappingContext; 
class UInputAction;
struct FEnhancedActionKeyMapping;
#ifdef ENHANCEDINPUT_PlayerMappableInputConfig_generated_h
#error "PlayerMappableInputConfig.generated.h already included, missing '#pragma once' in PlayerMappableInputConfig.h"
#endif
#define ENHANCEDINPUT_PlayerMappableInputConfig_generated_h

#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_SPARSE_DATA
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execIsDeprecated); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetConfigName); \
	DECLARE_FUNCTION(execGetMappingContexts); \
	DECLARE_FUNCTION(execResetToDefault); \
	DECLARE_FUNCTION(execGetKeysBoundToAction); \
	DECLARE_FUNCTION(execGetMappingByName); \
	DECLARE_FUNCTION(execGetPlayerMappableKeys);


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execIsDeprecated); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetConfigName); \
	DECLARE_FUNCTION(execGetMappingContexts); \
	DECLARE_FUNCTION(execResetToDefault); \
	DECLARE_FUNCTION(execGetKeysBoundToAction); \
	DECLARE_FUNCTION(execGetMappingByName); \
	DECLARE_FUNCTION(execGetPlayerMappableKeys);


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerMappableInputConfig(); \
	friend struct Z_Construct_UClass_UPlayerMappableInputConfig_Statics; \
public: \
	DECLARE_CLASS(UPlayerMappableInputConfig, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UPlayerMappableInputConfig)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerMappableInputConfig(); \
	friend struct Z_Construct_UClass_UPlayerMappableInputConfig_Statics; \
public: \
	DECLARE_CLASS(UPlayerMappableInputConfig, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UPlayerMappableInputConfig)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerMappableInputConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerMappableInputConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerMappableInputConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMappableInputConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerMappableInputConfig(UPlayerMappableInputConfig&&); \
	NO_API UPlayerMappableInputConfig(const UPlayerMappableInputConfig&); \
public:


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerMappableInputConfig(UPlayerMappableInputConfig&&); \
	NO_API UPlayerMappableInputConfig(const UPlayerMappableInputConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerMappableInputConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMappableInputConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerMappableInputConfig)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_21_PROLOG
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_RPC_WRAPPERS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_INCLASS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_INCLASS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UPlayerMappableInputConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
