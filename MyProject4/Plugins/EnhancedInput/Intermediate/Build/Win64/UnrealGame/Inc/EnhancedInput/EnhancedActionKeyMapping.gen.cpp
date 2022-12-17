// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/EnhancedActionKeyMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedActionKeyMapping() {}
// Cross Module References
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappableKeyOptions();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerMappableKeyOptions;
class UScriptStruct* FPlayerMappableKeyOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerMappableKeyOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerMappableKeyOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions, Z_Construct_UPackage__Script_EnhancedInput(), TEXT("PlayerMappableKeyOptions"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerMappableKeyOptions.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FPlayerMappableKeyOptions>()
{
	return FPlayerMappableKeyOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayCategory_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayCategory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A struct that represents player facing mapping options for an action key mapping.\n * Use this to set a unique FName for the mapping option to save it, as well as some FText options\n * for use in UI.\n */" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "A struct that represents player facing mapping options for an action key mapping.\nUse this to set a unique FName for the mapping option to save it, as well as some FText options\nfor use in UI." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerMappableKeyOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** A unique name for this player binding to be saved with. */" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "A unique name for this player binding to be saved with." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerMappableKeyOptions, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** The display name that can  */" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "The display name that can" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerMappableKeyOptions, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayCategory_MetaData[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** The category that this player binding is in */" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "The category that this player binding is in" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayCategory = { "DisplayCategory", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerMappableKeyOptions, DisplayCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayCategory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewProp_DisplayCategory,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		&NewStructOps,
		"PlayerMappableKeyOptions",
		sizeof(FPlayerMappableKeyOptions),
		alignof(FPlayerMappableKeyOptions),
		Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappableKeyOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerMappableKeyOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerMappableKeyOptions.InnerSingleton, Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerMappableKeyOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnhancedActionKeyMapping;
class UScriptStruct* FEnhancedActionKeyMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnhancedActionKeyMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnhancedActionKeyMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EnhancedActionKeyMapping"));
	}
	return Z_Registration_Info_UScriptStruct_EnhancedActionKeyMapping.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FEnhancedActionKeyMapping>()
{
	return FEnhancedActionKeyMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerMappable_MetaData[];
#endif
		static void NewProp_bIsPlayerMappable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerMappable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMappableOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerMappableOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeIgnored_MetaData[];
#endif
		static void NewProp_bShouldBeIgnored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeIgnored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines a mapping between a key activation and the resulting enhanced action\n * An key could be a button press, joystick axis movement, etc.\n * An enhanced action could be MoveForward, Jump, Fire, etc.\n *\n**/" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "Defines a mapping between a key activation and the resulting enhanced action\nAn key could be a button press, joystick axis movement, etc.\nAn enhanced action could be MoveForward, Jump, Fire, etc." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnhancedActionKeyMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Action to be affected by the key  */" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "Action to be affected by the key" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnhancedActionKeyMapping, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key that affect the action. */" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "Key that affect the action." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnhancedActionKeyMapping, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Key_MetaData)) }; // 2615338182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bIsPlayerMappable_MetaData[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** If true than this ActionKeyMapping will be exposed as a player bindable key */" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "If true than this ActionKeyMapping will be exposed as a player bindable key" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bIsPlayerMappable_SetBit(void* Obj)
	{
		((FEnhancedActionKeyMapping*)Obj)->bIsPlayerMappable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bIsPlayerMappable = { "bIsPlayerMappable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FEnhancedActionKeyMapping), &Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bIsPlayerMappable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bIsPlayerMappable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bIsPlayerMappable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_PlayerMappableOptions_MetaData[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** Options for making this a player mappable keymapping */" },
		{ "editCondition", "bIsPlayerBindable" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "Options for making this a player mappable keymapping" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_PlayerMappableOptions = { "PlayerMappableOptions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnhancedActionKeyMapping, PlayerMappableOptions), Z_Construct_UScriptStruct_FPlayerMappableKeyOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_PlayerMappableOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_PlayerMappableOptions_MetaData)) }; // 40331758
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bShouldBeIgnored_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, then this Key Mapping should be ignored. This is set to true if the key is down\n\x09 * during a rebuild of it's owning PlayerInput ControlMappings.\n\x09 * \n\x09 * @see IEnhancedInputSubsystemInterface::RebuildControlMappings\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "If true, then this Key Mapping should be ignored. This is set to true if the key is down\nduring a rebuild of it's owning PlayerInput ControlMappings.\n\n@see IEnhancedInputSubsystemInterface::RebuildControlMappings" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bShouldBeIgnored_SetBit(void* Obj)
	{
		((FEnhancedActionKeyMapping*)Obj)->bShouldBeIgnored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bShouldBeIgnored = { "bShouldBeIgnored", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FEnhancedActionKeyMapping), &Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bShouldBeIgnored_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bShouldBeIgnored_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bShouldBeIgnored_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers_Inner_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Trigger qualifiers. If any trigger qualifiers exist the mapping will not trigger unless:\n\x09* If there are any Explicit triggers in this list at least one of them must be met.\n\x09* All Implicit triggers in this list must be met.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "Trigger qualifiers. If any trigger qualifiers exist the mapping will not trigger unless:\nIf there are any Explicit triggers in this list at least one of them must be met.\nAll Implicit triggers in this list must be met." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Trigger qualifiers. If any trigger qualifiers exist the mapping will not trigger unless:\n\x09* If there are any Explicit triggers in this list at least one of them must be met.\n\x09* All Implicit triggers in this list must be met.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "Trigger qualifiers. If any trigger qualifiers exist the mapping will not trigger unless:\nIf there are any Explicit triggers in this list at least one of them must be met.\nAll Implicit triggers in this list must be met." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnhancedActionKeyMapping, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers_Inner_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Modifiers applied to the raw key value.\n\x09* These are applied sequentially in array order.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "Modifiers applied to the raw key value.\nThese are applied sequentially in array order." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Modifiers applied to the raw key value.\n\x09* These are applied sequentially in array order.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnhancedActionKeyMapping.h" },
		{ "ToolTip", "Modifiers applied to the raw key value.\nThese are applied sequentially in array order." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnhancedActionKeyMapping, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bIsPlayerMappable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_PlayerMappableOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_bShouldBeIgnored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Triggers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewProp_Modifiers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		&NewStructOps,
		"EnhancedActionKeyMapping",
		sizeof(FEnhancedActionKeyMapping),
		alignof(FEnhancedActionKeyMapping),
		Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_EnhancedActionKeyMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnhancedActionKeyMapping.InnerSingleton, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnhancedActionKeyMapping.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedActionKeyMapping_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedActionKeyMapping_h_Statics::ScriptStructInfo[] = {
		{ FPlayerMappableKeyOptions::StaticStruct, Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics::NewStructOps, TEXT("PlayerMappableKeyOptions"), &Z_Registration_Info_UScriptStruct_PlayerMappableKeyOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerMappableKeyOptions), 40331758U) },
		{ FEnhancedActionKeyMapping::StaticStruct, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics::NewStructOps, TEXT("EnhancedActionKeyMapping"), &Z_Registration_Info_UScriptStruct_EnhancedActionKeyMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnhancedActionKeyMapping), 3986583736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedActionKeyMapping_h_2737994520(TEXT("/Script/EnhancedInput"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedActionKeyMapping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedActionKeyMapping_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
