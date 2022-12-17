// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETriggerState : uint8;
class UEnhancedPlayerInput;
struct FInputActionValue;
enum class ETriggerType : uint8;
#ifdef ENHANCEDINPUT_InputTriggers_generated_h
#error "InputTriggers.generated.h already included, missing '#pragma once' in InputTriggers.h"
#endif
#define ENHANCEDINPUT_InputTriggers_generated_h

#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_SPARSE_DATA
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_RPC_WRAPPERS \
	virtual ETriggerState UpdateState_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime); \
	virtual ETriggerType GetTriggerType_Implementation() const; \
 \
	DECLARE_FUNCTION(execUpdateState); \
	DECLARE_FUNCTION(execGetTriggerType); \
	DECLARE_FUNCTION(execIsActuated);


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateState); \
	DECLARE_FUNCTION(execGetTriggerType); \
	DECLARE_FUNCTION(execIsActuated);


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_EVENT_PARMS \
	struct InputTrigger_eventGetTriggerType_Parms \
	{ \
		ETriggerType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InputTrigger_eventGetTriggerType_Parms() \
			: ReturnValue((ETriggerType)0) \
		{ \
		} \
	}; \
	struct InputTrigger_eventUpdateState_Parms \
	{ \
		const UEnhancedPlayerInput* PlayerInput; \
		FInputActionValue ModifiedValue; \
		float DeltaTime; \
		ETriggerState ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InputTrigger_eventUpdateState_Parms() \
			: ReturnValue((ETriggerState)0) \
		{ \
		} \
	};


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_CALLBACK_WRAPPERS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTrigger(); \
	friend struct Z_Construct_UClass_UInputTrigger_Statics; \
public: \
	DECLARE_CLASS(UInputTrigger, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputTrigger) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUInputTrigger(); \
	friend struct Z_Construct_UClass_UInputTrigger_Statics; \
public: \
	DECLARE_CLASS(UInputTrigger, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputTrigger) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputTrigger(UInputTrigger&&); \
	NO_API UInputTrigger(const UInputTrigger&); \
public:


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputTrigger(UInputTrigger&&); \
	NO_API UInputTrigger(const UInputTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTrigger); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTrigger)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_102_PROLOG \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_EVENT_PARMS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_RPC_WRAPPERS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_CALLBACK_WRAPPERS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_INCLASS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_CALLBACK_WRAPPERS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_INCLASS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTrigger>();

#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_SPARSE_DATA
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_RPC_WRAPPERS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerTimedBase(); \
	friend struct Z_Construct_UClass_UInputTriggerTimedBase_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerTimedBase, UInputTrigger, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerTimedBase)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerTimedBase(); \
	friend struct Z_Construct_UClass_UInputTriggerTimedBase_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerTimedBase, UInputTrigger, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerTimedBase)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerTimedBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerTimedBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerTimedBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerTimedBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerTimedBase(UInputTriggerTimedBase&&); \
	ENHANCEDINPUT_API UInputTriggerTimedBase(const UInputTriggerTimedBase&); \
public:


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerTimedBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerTimedBase(UInputTriggerTimedBase&&); \
	ENHANCEDINPUT_API UInputTriggerTimedBase(const UInputTriggerTimedBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerTimedBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerTimedBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerTimedBase)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_168_PROLOG
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_RPC_WRAPPERS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_INCLASS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_INCLASS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_171_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerTimedBase>();

#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_SPARSE_DATA
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_RPC_WRAPPERS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerDown(); \
	friend struct Z_Construct_UClass_UInputTriggerDown_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerDown, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerDown)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerDown(); \
	friend struct Z_Construct_UClass_UInputTriggerDown_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerDown, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerDown)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerDown(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerDown) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerDown); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerDown); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerDown(UInputTriggerDown&&); \
	ENHANCEDINPUT_API UInputTriggerDown(const UInputTriggerDown&); \
public:


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerDown(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerDown(UInputTriggerDown&&); \
	ENHANCEDINPUT_API UInputTriggerDown(const UInputTriggerDown&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerDown); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerDown); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerDown)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_216_PROLOG
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_RPC_WRAPPERS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_INCLASS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_INCLASS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_219_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerDown>();

#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_SPARSE_DATA
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_RPC_WRAPPERS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerPressed(); \
	friend struct Z_Construct_UClass_UInputTriggerPressed_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerPressed, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerPressed)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerPressed(); \
	friend struct Z_Construct_UClass_UInputTriggerPressed_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerPressed, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerPressed)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerPressed(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerPressed) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerPressed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerPressed); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerPressed(UInputTriggerPressed&&); \
	ENHANCEDINPUT_API UInputTriggerPressed(const UInputTriggerPressed&); \
public:


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerPressed(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerPressed(UInputTriggerPressed&&); \
	ENHANCEDINPUT_API UInputTriggerPressed(const UInputTriggerPressed&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerPressed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerPressed); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerPressed)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_233_PROLOG
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_RPC_WRAPPERS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_INCLASS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_INCLASS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_236_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerPressed>();

#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_SPARSE_DATA
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_RPC_WRAPPERS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerReleased(); \
	friend struct Z_Construct_UClass_UInputTriggerReleased_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerReleased, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerReleased)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerReleased(); \
	friend struct Z_Construct_UClass_UInputTriggerReleased_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerReleased, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerReleased)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerReleased(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerReleased) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerReleased); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerReleased); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerReleased(UInputTriggerReleased&&); \
	ENHANCEDINPUT_API UInputTriggerReleased(const UInputTriggerReleased&); \
public:


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerReleased(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerReleased(UInputTriggerReleased&&); \
	ENHANCEDINPUT_API UInputTriggerReleased(const UInputTriggerReleased&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerReleased); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerReleased); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerReleased)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_252_PROLOG
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_RPC_WRAPPERS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_INCLASS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_INCLASS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerReleased>();

#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_SPARSE_DATA
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_RPC_WRAPPERS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerHold(); \
	friend struct Z_Construct_UClass_UInputTriggerHold_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerHold, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerHold)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerHold(); \
	friend struct Z_Construct_UClass_UInputTriggerHold_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerHold, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerHold)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerHold(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerHold) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerHold); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerHold); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerHold(UInputTriggerHold&&); \
	ENHANCEDINPUT_API UInputTriggerHold(const UInputTriggerHold&); \
public:


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerHold(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerHold(UInputTriggerHold&&); \
	ENHANCEDINPUT_API UInputTriggerHold(const UInputTriggerHold&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerHold); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerHold); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerHold)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_272_PROLOG
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_RPC_WRAPPERS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_INCLASS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_INCLASS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_275_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerHold>();

#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_SPARSE_DATA
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_RPC_WRAPPERS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerHoldAndRelease(); \
	friend struct Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerHoldAndRelease, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerHoldAndRelease)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerHoldAndRelease(); \
	friend struct Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerHoldAndRelease, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerHoldAndRelease)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerHoldAndRelease(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerHoldAndRelease) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerHoldAndRelease); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerHoldAndRelease); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerHoldAndRelease(UInputTriggerHoldAndRelease&&); \
	ENHANCEDINPUT_API UInputTriggerHoldAndRelease(const UInputTriggerHoldAndRelease&); \
public:


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerHoldAndRelease(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerHoldAndRelease(UInputTriggerHoldAndRelease&&); \
	ENHANCEDINPUT_API UInputTriggerHoldAndRelease(const UInputTriggerHoldAndRelease&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerHoldAndRelease); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerHoldAndRelease); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerHoldAndRelease)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_300_PROLOG
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_RPC_WRAPPERS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_INCLASS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_INCLASS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_303_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerHoldAndRelease>();

#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_SPARSE_DATA
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_RPC_WRAPPERS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerTap(); \
	friend struct Z_Construct_UClass_UInputTriggerTap_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerTap, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerTap)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerTap(); \
	friend struct Z_Construct_UClass_UInputTriggerTap_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerTap, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerTap)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerTap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerTap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerTap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerTap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerTap(UInputTriggerTap&&); \
	ENHANCEDINPUT_API UInputTriggerTap(const UInputTriggerTap&); \
public:


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerTap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerTap(UInputTriggerTap&&); \
	ENHANCEDINPUT_API UInputTriggerTap(const UInputTriggerTap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerTap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerTap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerTap)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_318_PROLOG
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_RPC_WRAPPERS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_INCLASS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_INCLASS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_321_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerTap>();

#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_SPARSE_DATA
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_RPC_WRAPPERS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerPulse(); \
	friend struct Z_Construct_UClass_UInputTriggerPulse_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerPulse, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerPulse)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerPulse(); \
	friend struct Z_Construct_UClass_UInputTriggerPulse_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerPulse, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerPulse)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerPulse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerPulse) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerPulse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerPulse); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerPulse(UInputTriggerPulse&&); \
	ENHANCEDINPUT_API UInputTriggerPulse(const UInputTriggerPulse&); \
public:


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerPulse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerPulse(UInputTriggerPulse&&); \
	ENHANCEDINPUT_API UInputTriggerPulse(const UInputTriggerPulse&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerPulse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerPulse); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerPulse)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_340_PROLOG
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_RPC_WRAPPERS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_INCLASS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_INCLASS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_343_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerPulse>();

#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_SPARSE_DATA
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_RPC_WRAPPERS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerChordAction(); \
	friend struct Z_Construct_UClass_UInputTriggerChordAction_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerChordAction, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerChordAction)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerChordAction(); \
	friend struct Z_Construct_UClass_UInputTriggerChordAction_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerChordAction, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerChordAction)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerChordAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerChordAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerChordAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerChordAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerChordAction(UInputTriggerChordAction&&); \
	ENHANCEDINPUT_API UInputTriggerChordAction(const UInputTriggerChordAction&); \
public:


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerChordAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerChordAction(UInputTriggerChordAction&&); \
	ENHANCEDINPUT_API UInputTriggerChordAction(const UInputTriggerChordAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerChordAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerChordAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerChordAction)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_376_PROLOG
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_RPC_WRAPPERS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_INCLASS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_INCLASS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_379_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerChordAction>();

#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_SPARSE_DATA
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_RPC_WRAPPERS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerChordBlocker(); \
	friend struct Z_Construct_UClass_UInputTriggerChordBlocker_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerChordBlocker, UInputTriggerChordAction, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerChordBlocker)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerChordBlocker(); \
	friend struct Z_Construct_UClass_UInputTriggerChordBlocker_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerChordBlocker, UInputTriggerChordAction, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerChordBlocker)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerChordBlocker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerChordBlocker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerChordBlocker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerChordBlocker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerChordBlocker(UInputTriggerChordBlocker&&); \
	ENHANCEDINPUT_API UInputTriggerChordBlocker(const UInputTriggerChordBlocker&); \
public:


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerChordBlocker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerChordBlocker(UInputTriggerChordBlocker&&); \
	ENHANCEDINPUT_API UInputTriggerChordBlocker(const UInputTriggerChordBlocker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerChordBlocker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerChordBlocker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerChordBlocker)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_397_PROLOG
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_RPC_WRAPPERS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_INCLASS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_INCLASS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_400_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerChordBlocker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h


#define FOREACH_ENUM_ETRIGGERSTATE(op) \
	op(ETriggerState::None) \
	op(ETriggerState::Ongoing) \
	op(ETriggerState::Triggered) 

enum class ETriggerState : uint8;
template<> ENHANCEDINPUT_API UEnum* StaticEnum<ETriggerState>();

#define FOREACH_ENUM_ETRIGGEREVENT(op) \
	op(ETriggerEvent::None) \
	op(ETriggerEvent::Triggered) \
	op(ETriggerEvent::Started) \
	op(ETriggerEvent::Ongoing) \
	op(ETriggerEvent::Canceled) \
	op(ETriggerEvent::Completed) 

enum class ETriggerEvent : uint8;
template<> ENHANCEDINPUT_API UEnum* StaticEnum<ETriggerEvent>();

#define FOREACH_ENUM_ETRIGGERTYPE(op) \
	op(ETriggerType::Explicit) \
	op(ETriggerType::Implicit) \
	op(ETriggerType::Blocker) 

enum class ETriggerType : uint8;
template<> ENHANCEDINPUT_API UEnum* StaticEnum<ETriggerType>();

#define FOREACH_ENUM_ETRIGGEREVENTSSUPPORTED(op) \
	op(ETriggerEventsSupported::None) \
	op(ETriggerEventsSupported::Instant) \
	op(ETriggerEventsSupported::Uninterruptible) \
	op(ETriggerEventsSupported::Ongoing) \
	op(ETriggerEventsSupported::All) 

enum class ETriggerEventsSupported : uint8;
template<> ENHANCEDINPUT_API UEnum* StaticEnum<ETriggerEventsSupported>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
