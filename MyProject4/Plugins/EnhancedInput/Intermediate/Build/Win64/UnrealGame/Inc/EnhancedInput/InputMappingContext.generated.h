// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
struct FKey;
struct FEnhancedActionKeyMapping;
#ifdef ENHANCEDINPUT_InputMappingContext_generated_h
#error "InputMappingContext.generated.h already included, missing '#pragma once' in InputMappingContext.h"
#endif
#define ENHANCEDINPUT_InputMappingContext_generated_h

#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_SPARSE_DATA
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnmapAll); \
	DECLARE_FUNCTION(execUnmapAction); \
	DECLARE_FUNCTION(execUnmapKey); \
	DECLARE_FUNCTION(execMapKey);


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnmapAll); \
	DECLARE_FUNCTION(execUnmapAction); \
	DECLARE_FUNCTION(execUnmapKey); \
	DECLARE_FUNCTION(execMapKey);


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputMappingContext(); \
	friend struct Z_Construct_UClass_UInputMappingContext_Statics; \
public: \
	DECLARE_CLASS(UInputMappingContext, UDataAsset, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputMappingContext) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUInputMappingContext(); \
	friend struct Z_Construct_UClass_UInputMappingContext_Statics; \
public: \
	DECLARE_CLASS(UInputMappingContext, UDataAsset, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputMappingContext) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputMappingContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputMappingContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputMappingContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputMappingContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputMappingContext(UInputMappingContext&&); \
	NO_API UInputMappingContext(const UInputMappingContext&); \
public:


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputMappingContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputMappingContext(UInputMappingContext&&); \
	NO_API UInputMappingContext(const UInputMappingContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputMappingContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputMappingContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputMappingContext)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_21_PROLOG
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_RPC_WRAPPERS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_INCLASS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_INCLASS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputMappingContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
