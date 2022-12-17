// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
struct FInputActionValue;
class UInputAction;
#ifdef ENHANCEDINPUT_EnhancedInputComponent_generated_h
#error "EnhancedInputComponent.generated.h already included, missing '#pragma once' in EnhancedInputComponent.h"
#endif
#define ENHANCEDINPUT_EnhancedInputComponent_generated_h

#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_21_DELEGATE \
struct _Script_EnhancedInput_eventInputDebugKeyHandlerDynamicSignature_Parms \
{ \
	FKey Key; \
	FInputActionValue ActionValue; \
}; \
static inline void FInputDebugKeyHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputDebugKeyHandlerDynamicSignature, FKey Key, FInputActionValue ActionValue) \
{ \
	_Script_EnhancedInput_eventInputDebugKeyHandlerDynamicSignature_Parms Parms; \
	Parms.Key=Key; \
	Parms.ActionValue=ActionValue; \
	InputDebugKeyHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_27_DELEGATE \
struct _Script_EnhancedInput_eventEnhancedInputActionHandlerDynamicSignature_Parms \
{ \
	FInputActionValue ActionValue; \
	float ElapsedTime; \
	float TriggeredTime; \
	const UInputAction* SourceAction; \
}; \
static inline void FEnhancedInputActionHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& EnhancedInputActionHandlerDynamicSignature, FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const UInputAction* SourceAction) \
{ \
	_Script_EnhancedInput_eventEnhancedInputActionHandlerDynamicSignature_Parms Parms; \
	Parms.ActionValue=ActionValue; \
	Parms.ElapsedTime=ElapsedTime; \
	Parms.TriggeredTime=TriggeredTime; \
	Parms.SourceAction=SourceAction; \
	EnhancedInputActionHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBoundActionValue);


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBoundActionValue);


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputComponent(); \
	friend struct Z_Construct_UClass_UEnhancedInputComponent_Statics; \
public: \
	DECLARE_CLASS(UEnhancedInputComponent, UInputComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UEnhancedInputComponent)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_INCLASS \
private: \
	static void StaticRegisterNativesUEnhancedInputComponent(); \
	friend struct Z_Construct_UClass_UEnhancedInputComponent_Statics; \
public: \
	DECLARE_CLASS(UEnhancedInputComponent, UInputComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UEnhancedInputComponent)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnhancedInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnhancedInputComponent(UEnhancedInputComponent&&); \
	NO_API UEnhancedInputComponent(const UEnhancedInputComponent&); \
public:


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnhancedInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnhancedInputComponent(UEnhancedInputComponent&&); \
	NO_API UEnhancedInputComponent(const UEnhancedInputComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputComponent)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_281_PROLOG
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_INCLASS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_285_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EnhancedInputComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UEnhancedInputComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
