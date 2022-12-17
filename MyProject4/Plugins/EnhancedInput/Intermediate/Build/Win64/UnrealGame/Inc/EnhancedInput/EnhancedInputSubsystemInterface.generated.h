// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayerMappableInputConfig;
struct FModifyContextOptions;
struct FKey;
class UInputAction;
class UInputMappingContext;
struct FMappingQueryIssue;
enum class EMappingQueryIssue : uint8;
enum class EMappingQueryResult : uint8;
enum class EInputMappingRebuildType : uint8;
class UInputModifier;
class UInputTrigger;
struct FInputActionValue;
#ifdef ENHANCEDINPUT_EnhancedInputSubsystemInterface_generated_h
#error "EnhancedInputSubsystemInterface.generated.h already included, missing '#pragma once' in EnhancedInputSubsystemInterface.h"
#endif
#define ENHANCEDINPUT_EnhancedInputSubsystemInterface_generated_h

#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModifyContextOptions_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<struct FModifyContextOptions>();

#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_SPARSE_DATA
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemovePlayerMappableConfig); \
	DECLARE_FUNCTION(execAddPlayerMappableConfig); \
	DECLARE_FUNCTION(execRemovePlayerMappedKey); \
	DECLARE_FUNCTION(execAddPlayerMappedKey); \
	DECLARE_FUNCTION(execQueryKeysMappedToAction); \
	DECLARE_FUNCTION(execHasMappingContext); \
	DECLARE_FUNCTION(execQueryMapKeyInContextSet); \
	DECLARE_FUNCTION(execQueryMapKeyInActiveContextSet); \
	DECLARE_FUNCTION(execRequestRebuildControlMappings); \
	DECLARE_FUNCTION(execRemoveMappingContext); \
	DECLARE_FUNCTION(execAddMappingContext); \
	DECLARE_FUNCTION(execClearAllMappings); \
	DECLARE_FUNCTION(execInjectInputVectorForAction); \
	DECLARE_FUNCTION(execInjectInputForAction);


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemovePlayerMappableConfig); \
	DECLARE_FUNCTION(execAddPlayerMappableConfig); \
	DECLARE_FUNCTION(execRemovePlayerMappedKey); \
	DECLARE_FUNCTION(execAddPlayerMappedKey); \
	DECLARE_FUNCTION(execQueryKeysMappedToAction); \
	DECLARE_FUNCTION(execHasMappingContext); \
	DECLARE_FUNCTION(execQueryMapKeyInContextSet); \
	DECLARE_FUNCTION(execQueryMapKeyInActiveContextSet); \
	DECLARE_FUNCTION(execRequestRebuildControlMappings); \
	DECLARE_FUNCTION(execRemoveMappingContext); \
	DECLARE_FUNCTION(execAddMappingContext); \
	DECLARE_FUNCTION(execClearAllMappings); \
	DECLARE_FUNCTION(execInjectInputVectorForAction); \
	DECLARE_FUNCTION(execInjectInputForAction);


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UEnhancedInputSubsystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputSubsystemInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UEnhancedInputSubsystemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputSubsystemInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UEnhancedInputSubsystemInterface(UEnhancedInputSubsystemInterface&&); \
	ENHANCEDINPUT_API UEnhancedInputSubsystemInterface(const UEnhancedInputSubsystemInterface&); \
public:


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UEnhancedInputSubsystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UEnhancedInputSubsystemInterface(UEnhancedInputSubsystemInterface&&); \
	ENHANCEDINPUT_API UEnhancedInputSubsystemInterface(const UEnhancedInputSubsystemInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UEnhancedInputSubsystemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputSubsystemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputSubsystemInterface)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEnhancedInputSubsystemInterface(); \
	friend struct Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics; \
public: \
	DECLARE_CLASS(UEnhancedInputSubsystemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UEnhancedInputSubsystemInterface)


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_GENERATED_UINTERFACE_BODY() \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_GENERATED_UINTERFACE_BODY() \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEnhancedInputSubsystemInterface() {} \
public: \
	typedef UEnhancedInputSubsystemInterface UClassType; \
	typedef IEnhancedInputSubsystemInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_INCLASS_IINTERFACE \
protected: \
	virtual ~IEnhancedInputSubsystemInterface() {} \
public: \
	typedef UEnhancedInputSubsystemInterface UClassType; \
	typedef IEnhancedInputSubsystemInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_22_PROLOG
#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_RPC_WRAPPERS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_SPARSE_DATA \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UEnhancedInputSubsystemInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h


#define FOREACH_ENUM_EINPUTMAPPINGREBUILDTYPE(op) \
	op(EInputMappingRebuildType::None) \
	op(EInputMappingRebuildType::Rebuild) \
	op(EInputMappingRebuildType::RebuildWithFlush) 

enum class EInputMappingRebuildType : uint8;
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EInputMappingRebuildType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
