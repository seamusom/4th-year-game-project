// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FInputActionValue;
enum class EModifierExecutionPhase : uint8;
class UEnhancedPlayerInput;
#ifdef ENHANCEDINPUT_InputModifiers_generated_h
#error "InputModifiers.generated.h already included, missing '#pragma once' in InputModifiers.h"
#endif
#define ENHANCEDINPUT_InputModifiers_generated_h

#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_RPC_WRAPPERS \
	virtual FLinearColor GetVisualizationColor_Implementation(FInputActionValue SampleValue, FInputActionValue FinalValue) const; \
	virtual EModifierExecutionPhase GetExecutionPhase_Implementation() const; \
	virtual FInputActionValue ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) const; \
 \
	DECLARE_FUNCTION(execGetVisualizationColor); \
	DECLARE_FUNCTION(execGetExecutionPhase); \
	DECLARE_FUNCTION(execModifyRaw);


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVisualizationColor); \
	DECLARE_FUNCTION(execGetExecutionPhase); \
	DECLARE_FUNCTION(execModifyRaw);


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_EVENT_PARMS \
	struct InputModifier_eventGetExecutionPhase_Parms \
	{ \
		EModifierExecutionPhase ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InputModifier_eventGetExecutionPhase_Parms() \
			: ReturnValue((EModifierExecutionPhase)0) \
		{ \
		} \
	}; \
	struct InputModifier_eventGetVisualizationColor_Parms \
	{ \
		FInputActionValue SampleValue; \
		FInputActionValue FinalValue; \
		FLinearColor ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InputModifier_eventGetVisualizationColor_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct InputModifier_eventModifyRaw_Parms \
	{ \
		const UEnhancedPlayerInput* PlayerInput; \
		FInputActionValue CurrentValue; \
		float DeltaTime; \
		FInputActionValue ReturnValue; \
	};


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifier(); \
	friend struct Z_Construct_UClass_UInputModifier_Statics; \
public: \
	DECLARE_CLASS(UInputModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputModifier) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifier(); \
	friend struct Z_Construct_UClass_UInputModifier_Statics; \
public: \
	DECLARE_CLASS(UInputModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputModifier) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputModifier(UInputModifier&&); \
	NO_API UInputModifier(const UInputModifier&); \
public:


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputModifier(UInputModifier&&); \
	NO_API UInputModifier(const UInputModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifier)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_26_PROLOG \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_EVENT_PARMS


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_INCLASS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifier>();

#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierDeadZone(); \
	friend struct Z_Construct_UClass_UInputModifierDeadZone_Statics; \
public: \
	DECLARE_CLASS(UInputModifierDeadZone, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierDeadZone)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierDeadZone(); \
	friend struct Z_Construct_UClass_UInputModifierDeadZone_Statics; \
public: \
	DECLARE_CLASS(UInputModifierDeadZone, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierDeadZone)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierDeadZone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierDeadZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierDeadZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierDeadZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierDeadZone(UInputModifierDeadZone&&); \
	ENHANCEDINPUT_API UInputModifierDeadZone(const UInputModifierDeadZone&); \
public:


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierDeadZone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierDeadZone(UInputModifierDeadZone&&); \
	ENHANCEDINPUT_API UInputModifierDeadZone(const UInputModifierDeadZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierDeadZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierDeadZone); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierDeadZone)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_91_PROLOG
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_INCLASS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierDeadZone>();

#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierScalar(); \
	friend struct Z_Construct_UClass_UInputModifierScalar_Statics; \
public: \
	DECLARE_CLASS(UInputModifierScalar, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierScalar)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierScalar(); \
	friend struct Z_Construct_UClass_UInputModifierScalar_Statics; \
public: \
	DECLARE_CLASS(UInputModifierScalar, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierScalar)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierScalar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierScalar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierScalar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierScalar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierScalar(UInputModifierScalar&&); \
	ENHANCEDINPUT_API UInputModifierScalar(const UInputModifierScalar&); \
public:


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierScalar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierScalar(UInputModifierScalar&&); \
	ENHANCEDINPUT_API UInputModifierScalar(const UInputModifierScalar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierScalar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierScalar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierScalar)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_120_PROLOG
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_INCLASS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierScalar>();

#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierNegate(); \
	friend struct Z_Construct_UClass_UInputModifierNegate_Statics; \
public: \
	DECLARE_CLASS(UInputModifierNegate, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierNegate)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierNegate(); \
	friend struct Z_Construct_UClass_UInputModifierNegate_Statics; \
public: \
	DECLARE_CLASS(UInputModifierNegate, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierNegate)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierNegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierNegate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierNegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierNegate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierNegate(UInputModifierNegate&&); \
	ENHANCEDINPUT_API UInputModifierNegate(const UInputModifierNegate&); \
public:


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierNegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierNegate(UInputModifierNegate&&); \
	ENHANCEDINPUT_API UInputModifierNegate(const UInputModifierNegate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierNegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierNegate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierNegate)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_138_PROLOG
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_INCLASS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_141_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierNegate>();

#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierSmooth(); \
	friend struct Z_Construct_UClass_UInputModifierSmooth_Statics; \
public: \
	DECLARE_CLASS(UInputModifierSmooth, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierSmooth)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierSmooth(); \
	friend struct Z_Construct_UClass_UInputModifierSmooth_Statics; \
public: \
	DECLARE_CLASS(UInputModifierSmooth, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierSmooth)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierSmooth(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierSmooth) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierSmooth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierSmooth); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierSmooth(UInputModifierSmooth&&); \
	ENHANCEDINPUT_API UInputModifierSmooth(const UInputModifierSmooth&); \
public:


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierSmooth(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierSmooth(UInputModifierSmooth&&); \
	ENHANCEDINPUT_API UInputModifierSmooth(const UInputModifierSmooth&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierSmooth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierSmooth); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierSmooth)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_160_PROLOG
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_INCLASS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierSmooth>();

#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierResponseCurveExponential(); \
	friend struct Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics; \
public: \
	DECLARE_CLASS(UInputModifierResponseCurveExponential, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierResponseCurveExponential)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierResponseCurveExponential(); \
	friend struct Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics; \
public: \
	DECLARE_CLASS(UInputModifierResponseCurveExponential, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierResponseCurveExponential)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveExponential(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierResponseCurveExponential) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierResponseCurveExponential); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierResponseCurveExponential); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveExponential(UInputModifierResponseCurveExponential&&); \
	ENHANCEDINPUT_API UInputModifierResponseCurveExponential(const UInputModifierResponseCurveExponential&); \
public:


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveExponential(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveExponential(UInputModifierResponseCurveExponential&&); \
	ENHANCEDINPUT_API UInputModifierResponseCurveExponential(const UInputModifierResponseCurveExponential&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierResponseCurveExponential); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierResponseCurveExponential); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierResponseCurveExponential)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_190_PROLOG
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_INCLASS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_193_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierResponseCurveExponential>();

#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierResponseCurveUser(); \
	friend struct Z_Construct_UClass_UInputModifierResponseCurveUser_Statics; \
public: \
	DECLARE_CLASS(UInputModifierResponseCurveUser, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierResponseCurveUser)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierResponseCurveUser(); \
	friend struct Z_Construct_UClass_UInputModifierResponseCurveUser_Statics; \
public: \
	DECLARE_CLASS(UInputModifierResponseCurveUser, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierResponseCurveUser)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierResponseCurveUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierResponseCurveUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierResponseCurveUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveUser(UInputModifierResponseCurveUser&&); \
	ENHANCEDINPUT_API UInputModifierResponseCurveUser(const UInputModifierResponseCurveUser&); \
public:


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveUser(UInputModifierResponseCurveUser&&); \
	ENHANCEDINPUT_API UInputModifierResponseCurveUser(const UInputModifierResponseCurveUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierResponseCurveUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierResponseCurveUser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierResponseCurveUser)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_208_PROLOG
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_INCLASS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_211_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierResponseCurveUser>();

#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierFOVScaling(); \
	friend struct Z_Construct_UClass_UInputModifierFOVScaling_Statics; \
public: \
	DECLARE_CLASS(UInputModifierFOVScaling, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierFOVScaling)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierFOVScaling(); \
	friend struct Z_Construct_UClass_UInputModifierFOVScaling_Statics; \
public: \
	DECLARE_CLASS(UInputModifierFOVScaling, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierFOVScaling)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierFOVScaling(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierFOVScaling) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierFOVScaling); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierFOVScaling); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierFOVScaling(UInputModifierFOVScaling&&); \
	ENHANCEDINPUT_API UInputModifierFOVScaling(const UInputModifierFOVScaling&); \
public:


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierFOVScaling(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierFOVScaling(UInputModifierFOVScaling&&); \
	ENHANCEDINPUT_API UInputModifierFOVScaling(const UInputModifierFOVScaling&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierFOVScaling); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierFOVScaling); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierFOVScaling)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_239_PROLOG
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_INCLASS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_242_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierFOVScaling>();

#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierToWorldSpace(); \
	friend struct Z_Construct_UClass_UInputModifierToWorldSpace_Statics; \
public: \
	DECLARE_CLASS(UInputModifierToWorldSpace, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierToWorldSpace)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierToWorldSpace(); \
	friend struct Z_Construct_UClass_UInputModifierToWorldSpace_Statics; \
public: \
	DECLARE_CLASS(UInputModifierToWorldSpace, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierToWorldSpace)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierToWorldSpace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierToWorldSpace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierToWorldSpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierToWorldSpace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierToWorldSpace(UInputModifierToWorldSpace&&); \
	ENHANCEDINPUT_API UInputModifierToWorldSpace(const UInputModifierToWorldSpace&); \
public:


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierToWorldSpace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierToWorldSpace(UInputModifierToWorldSpace&&); \
	ENHANCEDINPUT_API UInputModifierToWorldSpace(const UInputModifierToWorldSpace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierToWorldSpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierToWorldSpace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierToWorldSpace)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_262_PROLOG
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_INCLASS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_265_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierToWorldSpace>();

#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierSwizzleAxis(); \
	friend struct Z_Construct_UClass_UInputModifierSwizzleAxis_Statics; \
public: \
	DECLARE_CLASS(UInputModifierSwizzleAxis, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierSwizzleAxis)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierSwizzleAxis(); \
	friend struct Z_Construct_UClass_UInputModifierSwizzleAxis_Statics; \
public: \
	DECLARE_CLASS(UInputModifierSwizzleAxis, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierSwizzleAxis)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierSwizzleAxis(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierSwizzleAxis) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierSwizzleAxis); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierSwizzleAxis); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierSwizzleAxis(UInputModifierSwizzleAxis&&); \
	ENHANCEDINPUT_API UInputModifierSwizzleAxis(const UInputModifierSwizzleAxis&); \
public:


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierSwizzleAxis(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierSwizzleAxis(UInputModifierSwizzleAxis&&); \
	ENHANCEDINPUT_API UInputModifierSwizzleAxis(const UInputModifierSwizzleAxis&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierSwizzleAxis); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierSwizzleAxis); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierSwizzleAxis)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_295_PROLOG
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_INCLASS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierSwizzleAxis>();

#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierCollection(); \
	friend struct Z_Construct_UClass_UInputModifierCollection_Statics; \
public: \
	DECLARE_CLASS(UInputModifierCollection, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierCollection)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierCollection(); \
	friend struct Z_Construct_UClass_UInputModifierCollection_Statics; \
public: \
	DECLARE_CLASS(UInputModifierCollection, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierCollection)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierCollection(UInputModifierCollection&&); \
	ENHANCEDINPUT_API UInputModifierCollection(const UInputModifierCollection&); \
public:


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierCollection(UInputModifierCollection&&); \
	ENHANCEDINPUT_API UInputModifierCollection(const UInputModifierCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierCollection)


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_314_PROLOG
#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_INCLASS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_317_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h


#define FOREACH_ENUM_EMODIFIEREXECUTIONPHASE(op) \
	op(EModifierExecutionPhase::PerInput) \
	op(EModifierExecutionPhase::FinalValue) \
	op(EModifierExecutionPhase::NumPhases) 

enum class EModifierExecutionPhase : uint8;
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EModifierExecutionPhase>();

#define FOREACH_ENUM_EDEADZONETYPE(op) \
	op(EDeadZoneType::Axial) \
	op(EDeadZoneType::Radial) 

enum class EDeadZoneType : uint8;
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EDeadZoneType>();

#define FOREACH_ENUM_EFOVSCALINGTYPE(op) \
	op(EFOVScalingType::Standard) \
	op(EFOVScalingType::UE4_BackCompat) 

enum class EFOVScalingType : uint8;
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EFOVScalingType>();

#define FOREACH_ENUM_EINPUTAXISSWIZZLE(op) \
	op(EInputAxisSwizzle::YXZ) \
	op(EInputAxisSwizzle::ZYX) \
	op(EInputAxisSwizzle::XZY) \
	op(EInputAxisSwizzle::YZX) \
	op(EInputAxisSwizzle::ZXY) 

enum class EInputAxisSwizzle : uint8;
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EInputAxisSwizzle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
