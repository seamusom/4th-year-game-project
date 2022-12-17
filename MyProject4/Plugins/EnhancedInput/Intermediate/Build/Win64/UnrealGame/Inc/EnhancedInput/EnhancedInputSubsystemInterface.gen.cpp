// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/EnhancedInputSubsystemInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputSubsystemInterface() {}
// Cross Module References
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FModifyContextOptions();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FMappingQueryIssue();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EMappingQueryResult();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputMappingRebuildType;
	static UEnum* EInputMappingRebuildType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputMappingRebuildType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputMappingRebuildType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType, Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EInputMappingRebuildType"));
		}
		return Z_Registration_Info_UEnum_EInputMappingRebuildType.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UEnum* StaticEnum<EInputMappingRebuildType>()
	{
		return EInputMappingRebuildType_StaticEnum();
	}
	struct Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::Enumerators[] = {
		{ "EInputMappingRebuildType::None", (int64)EInputMappingRebuildType::None },
		{ "EInputMappingRebuildType::Rebuild", (int64)EInputMappingRebuildType::Rebuild },
		{ "EInputMappingRebuildType::RebuildWithFlush", (int64)EInputMappingRebuildType::RebuildWithFlush },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "None.Comment", "// No rebuild required.\n" },
		{ "None.Name", "EInputMappingRebuildType::None" },
		{ "None.ToolTip", "No rebuild required." },
		{ "Rebuild.Comment", "// Standard mapping rebuild. Retains existing triggers and modifiers for actions that were previously mapped.\n" },
		{ "Rebuild.Name", "EInputMappingRebuildType::Rebuild" },
		{ "Rebuild.ToolTip", "Standard mapping rebuild. Retains existing triggers and modifiers for actions that were previously mapped." },
		{ "RebuildWithFlush.Comment", "// If you have made changes to the triggers/modifiers associated with a UInputAction that was previously mapped a flush is required to reset the tracked data for that action.\n" },
		{ "RebuildWithFlush.Name", "EInputMappingRebuildType::RebuildWithFlush" },
		{ "RebuildWithFlush.ToolTip", "If you have made changes to the triggers/modifiers associated with a UInputAction that was previously mapped a flush is required to reset the tracked data for that action." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		"EInputMappingRebuildType",
		"EInputMappingRebuildType",
		Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType()
	{
		if (!Z_Registration_Info_UEnum_EInputMappingRebuildType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputMappingRebuildType.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputMappingRebuildType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModifyContextOptions;
class UScriptStruct* FModifyContextOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModifyContextOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModifyContextOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifyContextOptions, Z_Construct_UPackage__Script_EnhancedInput(), TEXT("ModifyContextOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ModifyContextOptions.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FModifyContextOptions>()
{
	return FModifyContextOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FModifyContextOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAllPressedKeysUntilRelease_MetaData[];
#endif
		static void NewProp_bIgnoreAllPressedKeysUntilRelease_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAllPressedKeysUntilRelease;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceImmediately_MetaData[];
#endif
		static void NewProp_bForceImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceImmediately;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifyContextOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Passed in as params for Adding/Remove input contexts */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Passed in as params for Adding/Remove input contexts" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifyContextOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If true than any keys that are pressed during the rebuild of control mappings will be ignored until they are released.\n" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "If true than any keys that are pressed during the rebuild of control mappings will be ignored until they are released." },
	};
#endif
	void Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease_SetBit(void* Obj)
	{
		((FModifyContextOptions*)Obj)->bIgnoreAllPressedKeysUntilRelease = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease = { "bIgnoreAllPressedKeysUntilRelease", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FModifyContextOptions), &Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// The mapping changes will be applied synchronously, rather than at the end of the frame, making them available to the input system on the same frame.\n" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "The mapping changes will be applied synchronously, rather than at the end of the frame, making them available to the input system on the same frame." },
	};
#endif
	void Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately_SetBit(void* Obj)
	{
		((FModifyContextOptions*)Obj)->bForceImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately = { "bForceImmediately", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FModifyContextOptions), &Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifyContextOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bIgnoreAllPressedKeysUntilRelease,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewProp_bForceImmediately,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifyContextOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		&NewStructOps,
		"ModifyContextOptions",
		sizeof(FModifyContextOptions),
		alignof(FModifyContextOptions),
		Z_Construct_UScriptStruct_FModifyContextOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyContextOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModifyContextOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyContextOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModifyContextOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_ModifyContextOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModifyContextOptions.InnerSingleton, Z_Construct_UScriptStruct_FModifyContextOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ModifyContextOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execRemovePlayerMappableConfig)
	{
		P_GET_OBJECT(UPlayerMappableInputConfig,Z_Param_Config);
		P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePlayerMappableConfig(Z_Param_Config,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execAddPlayerMappableConfig)
	{
		P_GET_OBJECT(UPlayerMappableInputConfig,Z_Param_Config);
		P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPlayerMappableConfig(Z_Param_Config,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execRemovePlayerMappedKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
		P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemovePlayerMappedKey(Z_Param_MappingName,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execAddPlayerMappedKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
		P_GET_STRUCT(FKey,Z_Param_NewKey);
		P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddPlayerMappedKey(Z_Param_MappingName,Z_Param_NewKey,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execQueryKeysMappedToAction)
	{
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FKey>*)Z_Param__Result=P_THIS->QueryKeysMappedToAction(Z_Param_Action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execHasMappingContext)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMappingContext(Z_Param_MappingContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execQueryMapKeyInContextSet)
	{
		P_GET_TARRAY_REF(UInputMappingContext*,Z_Param_Out_PrioritizedActiveContexts);
		P_GET_OBJECT(UInputMappingContext,Z_Param_InputContext);
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_TARRAY_REF(FMappingQueryIssue,Z_Param_Out_OutIssues);
		P_GET_ENUM(EMappingQueryIssue,Z_Param_BlockingIssues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMappingQueryResult*)Z_Param__Result=P_THIS->QueryMapKeyInContextSet(Z_Param_Out_PrioritizedActiveContexts,Z_Param_InputContext,Z_Param_Action,Z_Param_Key,Z_Param_Out_OutIssues,EMappingQueryIssue(Z_Param_BlockingIssues));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execQueryMapKeyInActiveContextSet)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_InputContext);
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_TARRAY_REF(FMappingQueryIssue,Z_Param_Out_OutIssues);
		P_GET_ENUM(EMappingQueryIssue,Z_Param_BlockingIssues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMappingQueryResult*)Z_Param__Result=P_THIS->QueryMapKeyInActiveContextSet(Z_Param_InputContext,Z_Param_Action,Z_Param_Key,Z_Param_Out_OutIssues,EMappingQueryIssue(Z_Param_BlockingIssues));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execRequestRebuildControlMappings)
	{
		P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
		P_GET_ENUM(EInputMappingRebuildType,Z_Param_RebuildType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestRebuildControlMappings(Z_Param_Out_Options,EInputMappingRebuildType(Z_Param_RebuildType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execRemoveMappingContext)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
		P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMappingContext(Z_Param_MappingContext,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execAddMappingContext)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_MappingContext);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_GET_STRUCT_REF(FModifyContextOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMappingContext(Z_Param_MappingContext,Z_Param_Priority,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execClearAllMappings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllMappings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execInjectInputVectorForAction)
	{
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_GET_TARRAY_REF(UInputModifier*,Z_Param_Out_Modifiers);
		P_GET_TARRAY_REF(UInputTrigger*,Z_Param_Out_Triggers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InjectInputVectorForAction(Z_Param_Action,Z_Param_Value,Z_Param_Out_Modifiers,Z_Param_Out_Triggers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEnhancedInputSubsystemInterface::execInjectInputForAction)
	{
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_GET_STRUCT(FInputActionValue,Z_Param_RawValue);
		P_GET_TARRAY_REF(UInputModifier*,Z_Param_Out_Modifiers);
		P_GET_TARRAY_REF(UInputTrigger*,Z_Param_Out_Triggers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InjectInputForAction(Z_Param_Action,Z_Param_RawValue,Z_Param_Out_Modifiers,Z_Param_Out_Triggers);
		P_NATIVE_END;
	}
	void UEnhancedInputSubsystemInterface::StaticRegisterNativesUEnhancedInputSubsystemInterface()
	{
		UClass* Class = UEnhancedInputSubsystemInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMappingContext", &IEnhancedInputSubsystemInterface::execAddMappingContext },
			{ "AddPlayerMappableConfig", &IEnhancedInputSubsystemInterface::execAddPlayerMappableConfig },
			{ "AddPlayerMappedKey", &IEnhancedInputSubsystemInterface::execAddPlayerMappedKey },
			{ "ClearAllMappings", &IEnhancedInputSubsystemInterface::execClearAllMappings },
			{ "HasMappingContext", &IEnhancedInputSubsystemInterface::execHasMappingContext },
			{ "InjectInputForAction", &IEnhancedInputSubsystemInterface::execInjectInputForAction },
			{ "InjectInputVectorForAction", &IEnhancedInputSubsystemInterface::execInjectInputVectorForAction },
			{ "QueryKeysMappedToAction", &IEnhancedInputSubsystemInterface::execQueryKeysMappedToAction },
			{ "QueryMapKeyInActiveContextSet", &IEnhancedInputSubsystemInterface::execQueryMapKeyInActiveContextSet },
			{ "QueryMapKeyInContextSet", &IEnhancedInputSubsystemInterface::execQueryMapKeyInContextSet },
			{ "RemoveMappingContext", &IEnhancedInputSubsystemInterface::execRemoveMappingContext },
			{ "RemovePlayerMappableConfig", &IEnhancedInputSubsystemInterface::execRemovePlayerMappableConfig },
			{ "RemovePlayerMappedKey", &IEnhancedInputSubsystemInterface::execRemovePlayerMappedKey },
			{ "RequestRebuildControlMappings", &IEnhancedInputSubsystemInterface::execRequestRebuildControlMappings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics
	{
		struct EnhancedInputSubsystemInterface_eventAddMappingContext_Parms
		{
			const UInputMappingContext* MappingContext;
			int32 Priority;
			FModifyContextOptions Options;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_MappingContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_MappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_MappingContext_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddMappingContext_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddMappingContext_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Options_MetaData)) }; // 2036454446
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_MappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Add a control mapping context.\n\x09 * @param MappingContext\x09\x09""A set of key to action mappings to apply to this player\n\x09 * @param Priority\x09\x09\x09\x09Higher priority mappings will be applied first and, if they consume input, will block lower priority mappings.\n\x09 * @param Options\x09\x09\x09\x09Options to consider when adding this mapping context.\n\x09 */" },
		{ "CPP_Default_Options", "()" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Add a control mapping context.\n@param MappingContext                A set of key to action mappings to apply to this player\n@param Priority                              Higher priority mappings will be applied first and, if they consume input, will block lower priority mappings.\n@param Options                               Options to consider when adding this mapping context." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "AddMappingContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::EnhancedInputSubsystemInterface_eventAddMappingContext_Parms), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics
	{
		struct EnhancedInputSubsystemInterface_eventAddPlayerMappableConfig_Parms
		{
			const UPlayerMappableInputConfig* Config;
			FModifyContextOptions Options;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddPlayerMappableConfig_Parms, Config), Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Config_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddPlayerMappableConfig_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Options_MetaData)) }; // 2036454446
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** Adds all the input mapping contexts inside of this mappable config. */" },
		{ "CPP_Default_Options", "()" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Adds all the input mapping contexts inside of this mappable config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "AddPlayerMappableConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::EnhancedInputSubsystemInterface_eventAddPlayerMappableConfig_Parms), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics
	{
		struct EnhancedInputSubsystemInterface_eventAddPlayerMappedKey_Parms
		{
			FName MappingName;
			FKey NewKey;
			FModifyContextOptions Options;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddPlayerMappedKey_Parms, MappingName), METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_MappingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_MappingName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_NewKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddPlayerMappedKey_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_NewKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_NewKey_MetaData)) }; // 2615338182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddPlayerMappedKey_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_Options_MetaData)) }; // 2036454446
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventAddPlayerMappedKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_MappingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_NewKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/**\n\x09 * Replace any currently applied mappings to this key mapping with the given new one.\n\x09 * Requests a rebuild of the player mappings. \n\x09 *\n\x09 * @return The number of mappings that have been replaced\n\x09 */" },
		{ "CPP_Default_Options", "()" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Replace any currently applied mappings to this key mapping with the given new one.\nRequests a rebuild of the player mappings.\n\n@return The number of mappings that have been replaced" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "AddPlayerMappedKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::EnhancedInputSubsystemInterface_eventAddPlayerMappedKey_Parms), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Remove all applied mapping contexts.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Remove all applied mapping contexts." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "ClearAllMappings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics
	{
		struct EnhancedInputSubsystemInterface_eventHasMappingContext_Parms
		{
			const UInputMappingContext* MappingContext;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_MappingContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventHasMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_MappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_MappingContext_MetaData)) };
	void Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnhancedInputSubsystemInterface_eventHasMappingContext_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnhancedInputSubsystemInterface_eventHasMappingContext_Parms), &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_MappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Mapping Queries" },
		{ "Comment", "/**\n\x09 * Check if a mapping context is applied to this subsystem's owner.\n\x09 */// TODO: BlueprintPure would be nicer. Move into library?\n" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Check if a mapping context is applied to this subsystem's owner.\n        // TODO: BlueprintPure would be nicer. Move into library?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "HasMappingContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::EnhancedInputSubsystemInterface_eventHasMappingContext_Parms), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics
	{
		struct EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms
		{
			const UInputAction* Action;
			FInputActionValue RawValue;
			TArray<UInputModifier*> Modifiers;
			TArray<UInputTrigger*> Triggers;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Action_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms, RawValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 740260349
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_RawValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::NewProp_Triggers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Modifiers,Triggers" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\n\x09 * Applies action modifiers and triggers on top.\n\x09 *\n\x09 * @param Action\x09\x09The Input Action to set inject input for\n\x09 * @param RawValue\x09\x09The value to set the action to\n\x09 * @param Modifiers\x09\x09The modifiers to apply to the injected input.\n\x09 * @param Triggers\x09\x09The triggers to apply to the injected input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\nApplies action modifiers and triggers on top.\n\n@param Action                The Input Action to set inject input for\n@param RawValue              The value to set the action to\n@param Modifiers             The modifiers to apply to the injected input.\n@param Triggers              The triggers to apply to the injected input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "InjectInputForAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::EnhancedInputSubsystemInterface_eventInjectInputForAction_Parms), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics
	{
		struct EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms
		{
			const UInputAction* Action;
			FVector Value;
			TArray<UInputModifier*> Modifiers;
			TArray<UInputTrigger*> Triggers;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Action_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::NewProp_Triggers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Modifiers,Triggers" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\n\x09 * Applies action modifiers and triggers on top.\n\x09 *\n\x09 * @param Action\x09\x09The Input Action to set inject input for\n\x09 * @param Value\x09\x09\x09The value to set the action to (the type will be controlled by the Action)\n\x09 * @param Modifiers\x09\x09The modifiers to apply to the injected input.\n\x09 * @param Triggers\x09\x09The triggers to apply to the injected input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Input simulation via injection. Runs modifiers and triggers delegates as if the input had come through the underlying input system as FKeys.\nApplies action modifiers and triggers on top.\n\n@param Action                The Input Action to set inject input for\n@param Value                 The value to set the action to (the type will be controlled by the Action)\n@param Modifiers             The modifiers to apply to the injected input.\n@param Triggers              The triggers to apply to the injected input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "InjectInputVectorForAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::EnhancedInputSubsystemInterface_eventInjectInputVectorForAction_Parms), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics
	{
		struct EnhancedInputSubsystemInterface_eventQueryKeysMappedToAction_Parms
		{
			const UInputAction* Action;
			TArray<FKey> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryKeysMappedToAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_Action_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2615338182
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryKeysMappedToAction_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2615338182
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Mapping Queries" },
		{ "Comment", "/**\n\x09 * Returns the keys mapped to the given action in the active input mapping contexts.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Returns the keys mapped to the given action in the active input mapping contexts." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "QueryKeysMappedToAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::EnhancedInputSubsystemInterface_eventQueryKeysMappedToAction_Parms), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics
	{
		struct EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms
		{
			const UInputMappingContext* InputContext;
			const UInputAction* Action;
			FKey Key;
			TArray<FMappingQueryIssue> OutIssues;
			EMappingQueryIssue BlockingIssues;
			EMappingQueryResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutIssues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIssues;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlockingIssues_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlockingIssues;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_InputContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_InputContext = { "InputContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, InputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_InputContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_InputContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Action_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2615338182
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_OutIssues_Inner = { "OutIssues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMappingQueryIssue, METADATA_PARAMS(nullptr, 0) }; // 2873119118
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_OutIssues = { "OutIssues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, OutIssues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2873119118
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_BlockingIssues_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_BlockingIssues = { "BlockingIssues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, BlockingIssues), Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue, METADATA_PARAMS(nullptr, 0) }; // 1804607089
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms, ReturnValue), Z_Construct_UEnum_EnhancedInput_EMappingQueryResult, METADATA_PARAMS(nullptr, 0) }; // 4054595501
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_InputContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_OutIssues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_OutIssues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_BlockingIssues_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_BlockingIssues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Mapping Queries" },
		{ "Comment", "/* = DefaultMappingIssues::StandardFatal*/" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "= DefaultMappingIssues::StandardFatal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "QueryMapKeyInActiveContextSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::EnhancedInputSubsystemInterface_eventQueryMapKeyInActiveContextSet_Parms), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics
	{
		struct EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms
		{
			TArray<UInputMappingContext*> PrioritizedActiveContexts;
			const UInputMappingContext* InputContext;
			const UInputAction* Action;
			FKey Key;
			TArray<FMappingQueryIssue> OutIssues;
			EMappingQueryIssue BlockingIssues;
			EMappingQueryResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrioritizedActiveContexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrioritizedActiveContexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrioritizedActiveContexts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutIssues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIssues;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlockingIssues_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlockingIssues;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts_Inner = { "PrioritizedActiveContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts = { "PrioritizedActiveContexts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, PrioritizedActiveContexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_InputContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_InputContext = { "InputContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, InputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_InputContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_InputContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Action_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2615338182
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_OutIssues_Inner = { "OutIssues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMappingQueryIssue, METADATA_PARAMS(nullptr, 0) }; // 2873119118
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_OutIssues = { "OutIssues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, OutIssues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2873119118
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_BlockingIssues_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_BlockingIssues = { "BlockingIssues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, BlockingIssues), Z_Construct_UEnum_EnhancedInput_EMappingQueryIssue, METADATA_PARAMS(nullptr, 0) }; // 1804607089
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms, ReturnValue), Z_Construct_UEnum_EnhancedInput_EMappingQueryResult, METADATA_PARAMS(nullptr, 0) }; // 4054595501
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_PrioritizedActiveContexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_InputContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_OutIssues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_OutIssues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_BlockingIssues_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_BlockingIssues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Mapping Queries" },
		{ "Comment", "/* = DefaultMappingIssues::StandardFatal*/" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "= DefaultMappingIssues::StandardFatal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "QueryMapKeyInContextSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::EnhancedInputSubsystemInterface_eventQueryMapKeyInContextSet_Parms), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics
	{
		struct EnhancedInputSubsystemInterface_eventRemoveMappingContext_Parms
		{
			const UInputMappingContext* MappingContext;
			FModifyContextOptions Options;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_MappingContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemoveMappingContext_Parms, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_MappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_MappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemoveMappingContext_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_Options_MetaData)) }; // 2036454446
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_MappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Remove a specific control context. \n\x09* This is safe to call even if the context is not applied.\n\x09* @param MappingContext\x09\x09""Context to remove from the player\n\x09* @param Options\x09\x09\x09Options to consider when removing this input mapping context\n\x09*/" },
		{ "CPP_Default_Options", "()" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Remove a specific control context.\nThis is safe to call even if the context is not applied.\n@param MappingContext         Context to remove from the player\n@param Options                        Options to consider when removing this input mapping context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "RemoveMappingContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::EnhancedInputSubsystemInterface_eventRemoveMappingContext_Parms), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics
	{
		struct EnhancedInputSubsystemInterface_eventRemovePlayerMappableConfig_Parms
		{
			const UPlayerMappableInputConfig* Config;
			FModifyContextOptions Options;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemovePlayerMappableConfig_Parms, Config), Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Config_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemovePlayerMappableConfig_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Options_MetaData)) }; // 2036454446
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** Removes all the input mapping contexts inside of this mappable config. */" },
		{ "CPP_Default_Options", "()" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Removes all the input mapping contexts inside of this mappable config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "RemovePlayerMappableConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::EnhancedInputSubsystemInterface_eventRemovePlayerMappableConfig_Parms), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics
	{
		struct EnhancedInputSubsystemInterface_eventRemovePlayerMappedKey_Parms
		{
			FName MappingName;
			FModifyContextOptions Options;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemovePlayerMappedKey_Parms, MappingName), METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::NewProp_MappingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::NewProp_MappingName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemovePlayerMappedKey_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::NewProp_Options_MetaData)) }; // 2036454446
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRemovePlayerMappedKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::NewProp_MappingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/**\n\x09 * Remove any player mappings with to the given action\n\x09 * Requests a rebuild of the player mappings. \n\x09 *\n\x09 * @return The number of mappings that have been removed\n\x09 */" },
		{ "CPP_Default_Options", "()" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Remove any player mappings with to the given action\nRequests a rebuild of the player mappings.\n\n@return The number of mappings that have been removed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "RemovePlayerMappedKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::EnhancedInputSubsystemInterface_eventRemovePlayerMappedKey_Parms), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics
	{
		struct EnhancedInputSubsystemInterface_eventRequestRebuildControlMappings_Parms
		{
			FModifyContextOptions Options;
			EInputMappingRebuildType RebuildType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RebuildType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RebuildType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRequestRebuildControlMappings_Parms, Options), Z_Construct_UScriptStruct_FModifyContextOptions, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_Options_MetaData)) }; // 2036454446
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_RebuildType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_RebuildType = { "RebuildType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnhancedInputSubsystemInterface_eventRequestRebuildControlMappings_Parms, RebuildType), Z_Construct_UEnum_EnhancedInput_EInputMappingRebuildType, METADATA_PARAMS(nullptr, 0) }; // 2805931177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_RebuildType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::NewProp_RebuildType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Options" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Flag player for reapplication of all mapping contexts at the end of this frame.\n\x09* This is called automatically when adding or removing mappings contexts.\n\x09*\n\x09* @param Options\x09\x09Options to consider when removing this input mapping context\n\x09*/" },
		{ "CPP_Default_Options", "()" },
		{ "CPP_Default_RebuildType", "Rebuild" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
		{ "ToolTip", "Flag player for reapplication of all mapping contexts at the end of this frame.\nThis is called automatically when adding or removing mappings contexts.\n\n@param Options                Options to consider when removing this input mapping context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputSubsystemInterface, nullptr, "RequestRebuildControlMappings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::EnhancedInputSubsystemInterface_eventRequestRebuildControlMappings_Parms), Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputSubsystemInterface);
	UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister()
	{
		return UEnhancedInputSubsystemInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddMappingContext, "AddMappingContext" }, // 4182893400
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappableConfig, "AddPlayerMappableConfig" }, // 4213515638
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_AddPlayerMappedKey, "AddPlayerMappedKey" }, // 1212597096
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_ClearAllMappings, "ClearAllMappings" }, // 2941258086
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_HasMappingContext, "HasMappingContext" }, // 3555126155
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputForAction, "InjectInputForAction" }, // 259176169
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_InjectInputVectorForAction, "InjectInputVectorForAction" }, // 4048544002
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryKeysMappedToAction, "QueryKeysMappedToAction" }, // 573624100
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet, "QueryMapKeyInActiveContextSet" }, // 50921454
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet, "QueryMapKeyInContextSet" }, // 3615938912
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemoveMappingContext, "RemoveMappingContext" }, // 1244488739
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig, "RemovePlayerMappableConfig" }, // 923500672
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RemovePlayerMappedKey, "RemovePlayerMappedKey" }, // 3681692126
		{ &Z_Construct_UFunction_UEnhancedInputSubsystemInterface_RequestRebuildControlMappings, "RequestRebuildControlMappings" }, // 2798153189
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystemInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEnhancedInputSubsystemInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::ClassParams = {
		&UEnhancedInputSubsystemInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface()
	{
		if (!Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface.OuterSingleton, Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputSubsystemInterface>()
	{
		return UEnhancedInputSubsystemInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputSubsystemInterface);
	struct Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::EnumInfo[] = {
		{ EInputMappingRebuildType_StaticEnum, TEXT("EInputMappingRebuildType"), &Z_Registration_Info_UEnum_EInputMappingRebuildType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2805931177U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::ScriptStructInfo[] = {
		{ FModifyContextOptions::StaticStruct, Z_Construct_UScriptStruct_FModifyContextOptions_Statics::NewStructOps, TEXT("ModifyContextOptions"), &Z_Registration_Info_UScriptStruct_ModifyContextOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifyContextOptions), 2036454446U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputSubsystemInterface, UEnhancedInputSubsystemInterface::StaticClass, TEXT("UEnhancedInputSubsystemInterface"), &Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputSubsystemInterface), 1718807888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_4143389482(TEXT("/Script/EnhancedInput"),
		Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
