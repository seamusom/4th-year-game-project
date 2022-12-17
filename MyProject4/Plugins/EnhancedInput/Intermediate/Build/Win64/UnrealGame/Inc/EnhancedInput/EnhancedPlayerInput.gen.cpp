// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/EnhancedPlayerInput.h"
#include "Engine/Classes/GameFramework/PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedPlayerInput() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerInput();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionInstance();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
	void UEnhancedPlayerInput::StaticRegisterNativesUEnhancedPlayerInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedPlayerInput);
	UClass* Z_Construct_UClass_UEnhancedPlayerInput_NoRegister()
	{
		return UEnhancedPlayerInput::StaticClass();
	}
	struct Z_Construct_UClass_UEnhancedPlayerInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppliedInputContexts_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AppliedInputContexts_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedInputContexts_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AppliedInputContexts;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnhancedActionMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedActionMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnhancedActionMappings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionInstanceData_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionInstanceData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionInstanceData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActionInstanceData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeysPressedThisTick_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeysPressedThisTick_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeysPressedThisTick_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_KeysPressedThisTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnhancedPlayerInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerInput,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedPlayerInput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UEnhancedPlayerInput : UPlayerInput extensions for enhanced player input system\n*/" },
		{ "IncludePath", "EnhancedPlayerInput.h" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "UEnhancedPlayerInput : UPlayerInput extensions for enhanced player input system" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_ValueProp = { "AppliedInputContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_Key_KeyProp = { "AppliedInputContexts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_MetaData[] = {
		{ "Comment", "/** Currently applied key mappings\n\x09 * Note: Source reference only. Use EnhancedActionMappings for the actual mappings (with properly instanced triggers/modifiers)\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "Currently applied key mappings\nNote: Source reference only. Use EnhancedActionMappings for the actual mappings (with properly instanced triggers/modifiers)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts = { "AppliedInputContexts", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnhancedPlayerInput, AppliedInputContexts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings_Inner = { "EnhancedActionMappings", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 3986583736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings_MetaData[] = {
		{ "Comment", "/** This player's version of the Action Mappings */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "This player's version of the Action Mappings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings = { "EnhancedActionMappings", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnhancedPlayerInput, EnhancedActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings_MetaData)) }; // 3986583736
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_ValueProp = { "ActionInstanceData", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(nullptr, 0) }; // 778252975
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_Key_KeyProp = { "ActionInstanceData_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_MetaData[] = {
		{ "Comment", "/** Tracked action values. Queryable. */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "Tracked action values. Queryable." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData = { "ActionInstanceData", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnhancedPlayerInput, ActionInstanceData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_MetaData)) }; // 778252975
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_ValueProp = { "KeysPressedThisTick", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_Key_KeyProp = { "KeysPressedThisTick_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2615338182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_MetaData[] = {
		{ "Comment", "/**\n\x09 * A map of Keys to the amount they were depressed this frame. This is reset with each call to ProcessInputStack\n\x09 * and is populated within UEnhancedPlayerInput::InputKey.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput.h" },
		{ "ToolTip", "A map of Keys to the amount they were depressed this frame. This is reset with each call to ProcessInputStack\nand is populated within UEnhancedPlayerInput::InputKey." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick = { "KeysPressedThisTick", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnhancedPlayerInput, KeysPressedThisTick), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_MetaData)) }; // 2615338182
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedPlayerInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_AppliedInputContexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_EnhancedActionMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_ActionInstanceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_Statics::NewProp_KeysPressedThisTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnhancedPlayerInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedPlayerInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedPlayerInput_Statics::ClassParams = {
		&UEnhancedPlayerInput::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnhancedPlayerInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::PropPointers),
		0,
		0x009000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UEnhancedPlayerInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnhancedPlayerInput()
	{
		if (!Z_Registration_Info_UClass_UEnhancedPlayerInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedPlayerInput.OuterSingleton, Z_Construct_UClass_UEnhancedPlayerInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnhancedPlayerInput.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedPlayerInput>()
	{
		return UEnhancedPlayerInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedPlayerInput);
	struct Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedPlayerInput, UEnhancedPlayerInput::StaticClass, TEXT("UEnhancedPlayerInput"), &Z_Registration_Info_UClass_UEnhancedPlayerInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedPlayerInput), 2573000378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_2784031790(TEXT("/Script/EnhancedInput"),
		Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
