// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
class AActor;
class UInputAction;
class UInputMappingContext;
#ifdef ENHANCEDINPUT_EnhancedInputLibrary_generated_h
#error "EnhancedInputLibrary.generated.h already included, missing '#pragma once' in EnhancedInputLibrary.h"
#endif
#define ENHANCEDINPUT_EnhancedInputLibrary_generated_h

#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_InputActionValueToString); \
	DECLARE_FUNCTION(execConv_InputActionValueToAxis3D); \
	DECLARE_FUNCTION(execConv_InputActionValueToAxis2D); \
	DECLARE_FUNCTION(execConv_InputActionValueToAxis1D); \
	DECLARE_FUNCTION(execConv_InputActionValueToBool); \
	DECLARE_FUNCTION(execGetBoundActionValue); \
	DECLARE_FUNCTION(execMakeInputActionValue); \
	DECLARE_FUNCTION(execBreakInputActionValue); \
	DECLARE_FUNCTION(execRequestRebuildControlMappingsUsingContext);


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_InputActionValueToString); \
	DECLARE_FUNCTION(execConv_InputActionValueToAxis3D); \
	DECLARE_FUNCTION(execConv_InputActionValueToAxis2D); \
	DECLARE_FUNCTION(execConv_InputActionValueToAxis1D); \
	DECLARE_FUNCTION(execConv_InputActionValueToBool); \
	DECLARE_FUNCTION(execGetBoundActionValue); \
	DECLARE_FUNCTION(execMakeInputActionValue); \
	DECLARE_FUNCTION(execBreakInputActionValue); \
	DECLARE_FUNCTION(execRequestRebuildControlMappingsUsingContext);


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputLibrary(); \
	friend struct Z_Construct_UClass_UEnhancedInputLibrary_Statics; \
public: \
	DECLARE_CLASS(UEnhancedInputLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UEnhancedInputLibrary)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUEnhancedInputLibrary(); \
	friend struct Z_Construct_UClass_UEnhancedInputLibrary_Statics; \
public: \
	DECLARE_CLASS(UEnhancedInputLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UEnhancedInputLibrary)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnhancedInputLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedInputLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnhancedInputLibrary(UEnhancedInputLibrary&&); \
	NO_API UEnhancedInputLibrary(const UEnhancedInputLibrary&); \
public:


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnhancedInputLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnhancedInputLibrary(UEnhancedInputLibrary&&); \
	NO_API UEnhancedInputLibrary(const UEnhancedInputLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedInputLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputLibrary)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UEnhancedInputLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
