// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/InputModifiers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputModifiers() {}
// Cross Module References
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EModifierExecutionPhase();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput_NoRegister();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EDeadZoneType();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierDeadZone_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierDeadZone();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierScalar_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierScalar();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierNegate_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierNegate();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierSmooth_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierSmooth();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierResponseCurveExponential_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierResponseCurveExponential();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierResponseCurveUser_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierResponseCurveUser();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EFOVScalingType();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierFOVScaling_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierFOVScaling();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierToWorldSpace_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierToWorldSpace();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierSwizzleAxis_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierSwizzleAxis();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierCollection_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierCollection();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModifierExecutionPhase;
	static UEnum* EModifierExecutionPhase_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EModifierExecutionPhase.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EModifierExecutionPhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EModifierExecutionPhase, Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EModifierExecutionPhase"));
		}
		return Z_Registration_Info_UEnum_EModifierExecutionPhase.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UEnum* StaticEnum<EModifierExecutionPhase>()
	{
		return EModifierExecutionPhase_StaticEnum();
	}
	struct Z_Construct_UEnum_EnhancedInput_EModifierExecutionPhase_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EnhancedInput_EModifierExecutionPhase_Statics::Enumerators[] = {
		{ "EModifierExecutionPhase::PerInput", (int64)EModifierExecutionPhase::PerInput },
		{ "EModifierExecutionPhase::FinalValue", (int64)EModifierExecutionPhase::FinalValue },
		{ "EModifierExecutionPhase::NumPhases", (int64)EModifierExecutionPhase::NumPhases },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EnhancedInput_EModifierExecutionPhase_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// NOTE: Deprecated. Do not use.\n" },
		{ "FinalValue.Comment", "// Deprecated. Do not use.\n" },
		{ "FinalValue.Name", "EModifierExecutionPhase::FinalValue" },
		{ "FinalValue.ToolTip", "Deprecated. Do not use." },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "NumPhases.Hidden", "" },
		{ "NumPhases.Name", "EModifierExecutionPhase::NumPhases" },
		{ "PerInput.Comment", "// Deprecated. Do not use.\n" },
		{ "PerInput.Name", "EModifierExecutionPhase::PerInput" },
		{ "PerInput.ToolTip", "Deprecated. Do not use." },
		{ "ToolTip", "NOTE: Deprecated. Do not use." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EModifierExecutionPhase_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		"EModifierExecutionPhase",
		"EModifierExecutionPhase",
		Z_Construct_UEnum_EnhancedInput_EModifierExecutionPhase_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EModifierExecutionPhase_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EnhancedInput_EModifierExecutionPhase_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EModifierExecutionPhase_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EnhancedInput_EModifierExecutionPhase()
	{
		if (!Z_Registration_Info_UEnum_EModifierExecutionPhase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModifierExecutionPhase.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EModifierExecutionPhase_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EModifierExecutionPhase.InnerSingleton;
	}
	DEFINE_FUNCTION(UInputModifier::execGetVisualizationColor)
	{
		P_GET_STRUCT(FInputActionValue,Z_Param_SampleValue);
		P_GET_STRUCT(FInputActionValue,Z_Param_FinalValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetVisualizationColor_Implementation(Z_Param_SampleValue,Z_Param_FinalValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputModifier::execGetExecutionPhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EModifierExecutionPhase*)Z_Param__Result=P_THIS->GetExecutionPhase_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputModifier::execModifyRaw)
	{
		P_GET_OBJECT(UEnhancedPlayerInput,Z_Param_PlayerInput);
		P_GET_STRUCT(FInputActionValue,Z_Param_CurrentValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputActionValue*)Z_Param__Result=P_THIS->ModifyRaw_Implementation(Z_Param_PlayerInput,Z_Param_CurrentValue,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	static FName NAME_UInputModifier_GetExecutionPhase = FName(TEXT("GetExecutionPhase"));
	EModifierExecutionPhase UInputModifier::GetExecutionPhase() const
	{
		InputModifier_eventGetExecutionPhase_Parms Parms;
		const_cast<UInputModifier*>(this)->ProcessEvent(FindFunctionChecked(NAME_UInputModifier_GetExecutionPhase),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UInputModifier_GetVisualizationColor = FName(TEXT("GetVisualizationColor"));
	FLinearColor UInputModifier::GetVisualizationColor(FInputActionValue SampleValue, FInputActionValue FinalValue) const
	{
		InputModifier_eventGetVisualizationColor_Parms Parms;
		Parms.SampleValue=SampleValue;
		Parms.FinalValue=FinalValue;
		const_cast<UInputModifier*>(this)->ProcessEvent(FindFunctionChecked(NAME_UInputModifier_GetVisualizationColor),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UInputModifier_ModifyRaw = FName(TEXT("ModifyRaw"));
	FInputActionValue UInputModifier::ModifyRaw(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) const
	{
		InputModifier_eventModifyRaw_Parms Parms;
		Parms.PlayerInput=PlayerInput;
		Parms.CurrentValue=CurrentValue;
		Parms.DeltaTime=DeltaTime;
		const_cast<UInputModifier*>(this)->ProcessEvent(FindFunctionChecked(NAME_UInputModifier_ModifyRaw),&Parms);
		return Parms.ReturnValue;
	}
	void UInputModifier::StaticRegisterNativesUInputModifier()
	{
		UClass* Class = UInputModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetExecutionPhase", &UInputModifier::execGetExecutionPhase },
			{ "GetVisualizationColor", &UInputModifier::execGetVisualizationColor },
			{ "ModifyRaw", &UInputModifier::execModifyRaw },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputModifier_GetExecutionPhase_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInputModifier_GetExecutionPhase_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInputModifier_GetExecutionPhase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputModifier_eventGetExecutionPhase_Parms, ReturnValue), Z_Construct_UEnum_EnhancedInput_EModifierExecutionPhase, METADATA_PARAMS(nullptr, 0) }; // 420991811
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputModifier_GetExecutionPhase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModifier_GetExecutionPhase_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModifier_GetExecutionPhase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputModifier_GetExecutionPhase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Execution phase is deprecated." },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputModifier_GetExecutionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputModifier, nullptr, "GetExecutionPhase", nullptr, nullptr, sizeof(InputModifier_eventGetExecutionPhase_Parms), Z_Construct_UFunction_UInputModifier_GetExecutionPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModifier_GetExecutionPhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputModifier_GetExecutionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModifier_GetExecutionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputModifier_GetExecutionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputModifier_GetExecutionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinalValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::NewProp_SampleValue = { "SampleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputModifier_eventGetVisualizationColor_Parms, SampleValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 740260349
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::NewProp_FinalValue = { "FinalValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputModifier_eventGetVisualizationColor_Parms, FinalValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 740260349
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputModifier_eventGetVisualizationColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::NewProp_SampleValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::NewProp_FinalValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "Comment", "/**\n\x09 * Helper to allow debug visualization of the modifier.\n\x09 * @param SampleValue - The base input action value pre-modification (ranging -1 -> 1 across all applicable axes).\n\x09 * @param FinalValue - The post-modification input action value for the provided SampleValue.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Helper to allow debug visualization of the modifier.\n@param SampleValue - The base input action value pre-modification (ranging -1 -> 1 across all applicable axes).\n@param FinalValue - The post-modification input action value for the provided SampleValue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputModifier, nullptr, "GetVisualizationColor", nullptr, nullptr, sizeof(InputModifier_eventGetVisualizationColor_Parms), Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputModifier_GetVisualizationColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputModifier_GetVisualizationColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_PlayerInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputModifier_eventModifyRaw_Parms, PlayerInput), Z_Construct_UClass_UEnhancedPlayerInput_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_PlayerInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_PlayerInput_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputModifier_eventModifyRaw_Parms, CurrentValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 740260349
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputModifier_eventModifyRaw_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputModifier_eventModifyRaw_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 740260349
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_PlayerInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_CurrentValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modifier" },
		{ "Comment", "/**\n\x09 * ModifyRaw\n\x09 * Will be called by each modifier in the modifier chain\n\x09 * @param CurrentValue - The modified value returned by the previous modifier in the chain, or the base raw value if this is the first modifier in the chain.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "ModifyRaw\nWill be called by each modifier in the modifier chain\n@param CurrentValue - The modified value returned by the previous modifier in the chain, or the base raw value if this is the first modifier in the chain." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputModifier, nullptr, "ModifyRaw", nullptr, nullptr, sizeof(InputModifier_eventModifyRaw_Parms), Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputModifier_ModifyRaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputModifier_ModifyRaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifier);
	UClass* Z_Construct_UClass_UInputModifier_NoRegister()
	{
		return UInputModifier::StaticClass();
	}
	struct Z_Construct_UClass_UInputModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputModifier_GetExecutionPhase, "GetExecutionPhase" }, // 3684929182
		{ &Z_Construct_UFunction_UInputModifier_GetVisualizationColor, "GetVisualizationColor" }, // 1938018848
		{ &Z_Construct_UFunction_UInputModifier_ModifyRaw, "ModifyRaw" }, // 1282013236
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nBase class for building modifiers.\n*/" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Base class for building modifiers." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifier_Statics::ClassParams = {
		&UInputModifier::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x401030A3u,
		METADATA_PARAMS(Z_Construct_UClass_UInputModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputModifier()
	{
		if (!Z_Registration_Info_UClass_UInputModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifier.OuterSingleton, Z_Construct_UClass_UInputModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputModifier.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifier>()
	{
		return UInputModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifier);
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeadZoneType;
	static UEnum* EDeadZoneType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDeadZoneType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDeadZoneType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EDeadZoneType, Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EDeadZoneType"));
		}
		return Z_Registration_Info_UEnum_EDeadZoneType.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UEnum* StaticEnum<EDeadZoneType>()
	{
		return EDeadZoneType_StaticEnum();
	}
	struct Z_Construct_UEnum_EnhancedInput_EDeadZoneType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EnhancedInput_EDeadZoneType_Statics::Enumerators[] = {
		{ "EDeadZoneType::Axial", (int64)EDeadZoneType::Axial },
		{ "EDeadZoneType::Radial", (int64)EDeadZoneType::Radial },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EnhancedInput_EDeadZoneType_Statics::Enum_MetaDataParams[] = {
		{ "Axial.Comment", "// Apply dead zone to axes individually. This will result in input being chamfered at the corners for 2d/3d axis inputs, and matches the original UE4 deadzone logic.\n" },
		{ "Axial.Name", "EDeadZoneType::Axial" },
		{ "Axial.ToolTip", "Apply dead zone to axes individually. This will result in input being chamfered at the corners for 2d/3d axis inputs, and matches the original UE4 deadzone logic." },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "Radial.Comment", "// Apply dead zone logic to all axes simultaneously. This gives smooth input (circular/spherical coverage). On a 1d axis input this works identically to Axial.\n" },
		{ "Radial.Name", "EDeadZoneType::Radial" },
		{ "Radial.ToolTip", "Apply dead zone logic to all axes simultaneously. This gives smooth input (circular/spherical coverage). On a 1d axis input this works identically to Axial." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EDeadZoneType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		"EDeadZoneType",
		"EDeadZoneType",
		Z_Construct_UEnum_EnhancedInput_EDeadZoneType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EDeadZoneType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EnhancedInput_EDeadZoneType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EDeadZoneType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EnhancedInput_EDeadZoneType()
	{
		if (!Z_Registration_Info_UEnum_EDeadZoneType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeadZoneType.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EDeadZoneType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDeadZoneType.InnerSingleton;
	}
	void UInputModifierDeadZone::StaticRegisterNativesUInputModifierDeadZone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierDeadZone);
	UClass* Z_Construct_UClass_UInputModifierDeadZone_NoRegister()
	{
		return UInputModifierDeadZone::StaticClass();
	}
	struct Z_Construct_UClass_UInputModifierDeadZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowerThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpperThreshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputModifierDeadZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierDeadZone_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Dead Zone\n    *  Input values within the range LowerThreshold -> UpperThreshold will be remapped from 0 -> 1.\n\x09*  Values outside this range will be clamped.\n\x09*/" },
		{ "DisplayName", "Dead Zone" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Dead Zone\nInput values within the range LowerThreshold -> UpperThreshold will be remapped from 0 -> 1.\nValues outside this range will be clamped." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_LowerThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Threshold below which input is ignored\n" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Threshold below which input is ignored" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_LowerThreshold = { "LowerThreshold", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputModifierDeadZone, LowerThreshold), METADATA_PARAMS(Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_LowerThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_LowerThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_UpperThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Threshold above which input is clamped to 1\n" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Threshold above which input is clamped to 1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_UpperThreshold = { "UpperThreshold", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputModifierDeadZone, UpperThreshold), METADATA_PARAMS(Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_UpperThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_UpperThreshold_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputModifierDeadZone, Type), Z_Construct_UEnum_EnhancedInput_EDeadZoneType, METADATA_PARAMS(Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_Type_MetaData)) }; // 124335324
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierDeadZone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_LowerThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_UpperThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierDeadZone_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputModifierDeadZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierDeadZone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierDeadZone_Statics::ClassParams = {
		&UInputModifierDeadZone::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputModifierDeadZone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierDeadZone_Statics::PropPointers),
		0,
		0x400830A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputModifierDeadZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierDeadZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputModifierDeadZone()
	{
		if (!Z_Registration_Info_UClass_UInputModifierDeadZone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierDeadZone.OuterSingleton, Z_Construct_UClass_UInputModifierDeadZone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputModifierDeadZone.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierDeadZone>()
	{
		return UInputModifierDeadZone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierDeadZone);
	void UInputModifierScalar::StaticRegisterNativesUInputModifierScalar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierScalar);
	UClass* Z_Construct_UClass_UInputModifierScalar_NoRegister()
	{
		return UInputModifierScalar::StaticClass();
	}
	struct Z_Construct_UClass_UInputModifierScalar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scalar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scalar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputModifierScalar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierScalar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Scalar\n\x09*  Scales input by a set factor per axis\n\x09*/" },
		{ "DisplayName", "Scalar" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Scalar\nScales input by a set factor per axis" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierScalar_Statics::NewProp_Scalar_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// TODO: Detail customization to only show modifiable axes for the relevant binding? This thing has no idea what it's bound to...\n" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "TODO: Detail customization to only show modifiable axes for the relevant binding? This thing has no idea what it's bound to..." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputModifierScalar_Statics::NewProp_Scalar = { "Scalar", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputModifierScalar, Scalar), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UInputModifierScalar_Statics::NewProp_Scalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierScalar_Statics::NewProp_Scalar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierScalar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierScalar_Statics::NewProp_Scalar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputModifierScalar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierScalar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierScalar_Statics::ClassParams = {
		&UInputModifierScalar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputModifierScalar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierScalar_Statics::PropPointers),
		0,
		0x400830A2u,
		METADATA_PARAMS(Z_Construct_UClass_UInputModifierScalar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierScalar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputModifierScalar()
	{
		if (!Z_Registration_Info_UClass_UInputModifierScalar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierScalar.OuterSingleton, Z_Construct_UClass_UInputModifierScalar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputModifierScalar.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierScalar>()
	{
		return UInputModifierScalar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierScalar);
	void UInputModifierNegate::StaticRegisterNativesUInputModifierNegate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierNegate);
	UClass* Z_Construct_UClass_UInputModifierNegate_NoRegister()
	{
		return UInputModifierNegate::StaticClass();
	}
	struct Z_Construct_UClass_UInputModifierNegate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bX_MetaData[];
#endif
		static void NewProp_bX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bY_MetaData[];
#endif
		static void NewProp_bY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bZ_MetaData[];
#endif
		static void NewProp_bZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputModifierNegate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierNegate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Negate\n\x09*  Inverts input per axis\n\x09*/" },
		{ "DisplayName", "Negate" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Negate\nInverts input per axis" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bX_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
#endif
	void Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bX_SetBit(void* Obj)
	{
		((UInputModifierNegate*)Obj)->bX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bX = { "bX", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInputModifierNegate), &Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bY_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
#endif
	void Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bY_SetBit(void* Obj)
	{
		((UInputModifierNegate*)Obj)->bY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInputModifierNegate), &Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bZ_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
#endif
	void Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bZ_SetBit(void* Obj)
	{
		((UInputModifierNegate*)Obj)->bZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bZ = { "bZ", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInputModifierNegate), &Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierNegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierNegate_Statics::NewProp_bZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputModifierNegate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierNegate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierNegate_Statics::ClassParams = {
		&UInputModifierNegate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputModifierNegate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierNegate_Statics::PropPointers),
		0,
		0x400830A2u,
		METADATA_PARAMS(Z_Construct_UClass_UInputModifierNegate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierNegate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputModifierNegate()
	{
		if (!Z_Registration_Info_UClass_UInputModifierNegate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierNegate.OuterSingleton, Z_Construct_UClass_UInputModifierNegate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputModifierNegate.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierNegate>()
	{
		return UInputModifierNegate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierNegate);
	void UInputModifierSmooth::StaticRegisterNativesUInputModifierSmooth()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierSmooth);
	UClass* Z_Construct_UClass_UInputModifierSmooth_NoRegister()
	{
		return UInputModifierSmooth::StaticClass();
	}
	struct Z_Construct_UClass_UInputModifierSmooth_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputModifierSmooth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierSmooth_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Smooth\n\x09*  Smooth inputs out over multiple frames\n\x09*/" },
		{ "DisplayName", "Smooth" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Smooth\nSmooth inputs out over multiple frames" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputModifierSmooth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierSmooth>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierSmooth_Statics::ClassParams = {
		&UInputModifierSmooth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x400830A2u,
		METADATA_PARAMS(Z_Construct_UClass_UInputModifierSmooth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSmooth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputModifierSmooth()
	{
		if (!Z_Registration_Info_UClass_UInputModifierSmooth.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierSmooth.OuterSingleton, Z_Construct_UClass_UInputModifierSmooth_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputModifierSmooth.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierSmooth>()
	{
		return UInputModifierSmooth::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierSmooth);
	void UInputModifierResponseCurveExponential::StaticRegisterNativesUInputModifierResponseCurveExponential()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierResponseCurveExponential);
	UClass* Z_Construct_UClass_UInputModifierResponseCurveExponential_NoRegister()
	{
		return UInputModifierResponseCurveExponential::StaticClass();
	}
	struct Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveExponent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveExponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Response Curve Exponential\n\x09*  Apply a simple exponential response curve to input values, per axis\n\x09*/" },
		{ "DisplayName", "Response Curve - Exponential" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Response Curve Exponential\nApply a simple exponential response curve to input values, per axis" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::NewProp_CurveExponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::NewProp_CurveExponent = { "CurveExponent", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputModifierResponseCurveExponential, CurveExponent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::NewProp_CurveExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::NewProp_CurveExponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::NewProp_CurveExponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierResponseCurveExponential>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::ClassParams = {
		&UInputModifierResponseCurveExponential::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::PropPointers),
		0,
		0x400830A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputModifierResponseCurveExponential()
	{
		if (!Z_Registration_Info_UClass_UInputModifierResponseCurveExponential.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierResponseCurveExponential.OuterSingleton, Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputModifierResponseCurveExponential.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierResponseCurveExponential>()
	{
		return UInputModifierResponseCurveExponential::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierResponseCurveExponential);
	void UInputModifierResponseCurveUser::StaticRegisterNativesUInputModifierResponseCurveUser()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierResponseCurveUser);
	UClass* Z_Construct_UClass_UInputModifierResponseCurveUser_NoRegister()
	{
		return UInputModifierResponseCurveUser::StaticClass();
	}
	struct Z_Construct_UClass_UInputModifierResponseCurveUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Response Curve User Defined\n\x09*  Apply a custom response curve to input values, per axis\n\x09*/" },
		{ "DisplayName", "Response Curve - User Defined" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Response Curve User Defined\nApply a custom response curve to input values, per axis" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseX_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseX = { "ResponseX", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputModifierResponseCurveUser, ResponseX), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseY_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseY = { "ResponseY", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputModifierResponseCurveUser, ResponseY), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseZ_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseZ = { "ResponseZ", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputModifierResponseCurveUser, ResponseZ), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::NewProp_ResponseZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierResponseCurveUser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::ClassParams = {
		&UInputModifierResponseCurveUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::PropPointers),
		0,
		0x400830A2u,
		METADATA_PARAMS(Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputModifierResponseCurveUser()
	{
		if (!Z_Registration_Info_UClass_UInputModifierResponseCurveUser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierResponseCurveUser.OuterSingleton, Z_Construct_UClass_UInputModifierResponseCurveUser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputModifierResponseCurveUser.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierResponseCurveUser>()
	{
		return UInputModifierResponseCurveUser::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierResponseCurveUser);
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFOVScalingType;
	static UEnum* EFOVScalingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFOVScalingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFOVScalingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EFOVScalingType, Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EFOVScalingType"));
		}
		return Z_Registration_Info_UEnum_EFOVScalingType.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UEnum* StaticEnum<EFOVScalingType>()
	{
		return EFOVScalingType_StaticEnum();
	}
	struct Z_Construct_UEnum_EnhancedInput_EFOVScalingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EnhancedInput_EFOVScalingType_Statics::Enumerators[] = {
		{ "EFOVScalingType::Standard", (int64)EFOVScalingType::Standard },
		{ "EFOVScalingType::UE4_BackCompat", (int64)EFOVScalingType::UE4_BackCompat },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EnhancedInput_EFOVScalingType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "Standard.Comment", "// FOV scaling to apply scaled movement deltas to inputs dependent upon the player's selected FOV\n" },
		{ "Standard.Name", "EFOVScalingType::Standard" },
		{ "Standard.ToolTip", "FOV scaling to apply scaled movement deltas to inputs dependent upon the player's selected FOV" },
		{ "UE4_BackCompat.Comment", "// FOV scaling was incorrectly calculated in UE4's UPlayerInput::MassageAxisInput. This implementation is intended to aid backwards compatibility, but should not be used by new projects.\n" },
		{ "UE4_BackCompat.Name", "EFOVScalingType::UE4_BackCompat" },
		{ "UE4_BackCompat.ToolTip", "FOV scaling was incorrectly calculated in UE4's UPlayerInput::MassageAxisInput. This implementation is intended to aid backwards compatibility, but should not be used by new projects." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EFOVScalingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		"EFOVScalingType",
		"EFOVScalingType",
		Z_Construct_UEnum_EnhancedInput_EFOVScalingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EFOVScalingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EnhancedInput_EFOVScalingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EFOVScalingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EnhancedInput_EFOVScalingType()
	{
		if (!Z_Registration_Info_UEnum_EFOVScalingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFOVScalingType.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EFOVScalingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFOVScalingType.InnerSingleton;
	}
	void UInputModifierFOVScaling::StaticRegisterNativesUInputModifierFOVScaling()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierFOVScaling);
	UClass* Z_Construct_UClass_UInputModifierFOVScaling_NoRegister()
	{
		return UInputModifierFOVScaling::StaticClass();
	}
	struct Z_Construct_UClass_UInputModifierFOVScaling_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOVScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FOVScalingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOVScalingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FOVScalingType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputModifierFOVScaling_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierFOVScaling_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** FOV Scaling\n\x09* Apply FOV dependent scaling to input values, per axis\n\x09*/" },
		{ "DisplayName", "FOV Scaling" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "FOV Scaling\nApply FOV dependent scaling to input values, per axis" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Extra scalar applied on top of basic FOV scaling.\n" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Extra scalar applied on top of basic FOV scaling." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScale = { "FOVScale", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputModifierFOVScaling, FOVScale), METADATA_PARAMS(Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScale_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScalingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScalingType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScalingType = { "FOVScalingType", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputModifierFOVScaling, FOVScalingType), Z_Construct_UEnum_EnhancedInput_EFOVScalingType, METADATA_PARAMS(Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScalingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScalingType_MetaData)) }; // 2324831589
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierFOVScaling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScalingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierFOVScaling_Statics::NewProp_FOVScalingType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputModifierFOVScaling_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierFOVScaling>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierFOVScaling_Statics::ClassParams = {
		&UInputModifierFOVScaling::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputModifierFOVScaling_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierFOVScaling_Statics::PropPointers),
		0,
		0x400830A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputModifierFOVScaling_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierFOVScaling_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputModifierFOVScaling()
	{
		if (!Z_Registration_Info_UClass_UInputModifierFOVScaling.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierFOVScaling.OuterSingleton, Z_Construct_UClass_UInputModifierFOVScaling_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputModifierFOVScaling.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierFOVScaling>()
	{
		return UInputModifierFOVScaling::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierFOVScaling);
	void UInputModifierToWorldSpace::StaticRegisterNativesUInputModifierToWorldSpace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierToWorldSpace);
	UClass* Z_Construct_UClass_UInputModifierToWorldSpace_NoRegister()
	{
		return UInputModifierToWorldSpace::StaticClass();
	}
	struct Z_Construct_UClass_UInputModifierToWorldSpace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputModifierToWorldSpace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierToWorldSpace_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Input space to World space conversion\n\x09* Auto-converts axes within the Input Action Value into world space\x09""allowing the result to be directly plugged into functions that take world space values.\n\x09* E.g. For a 2D input axis up/down is mapped to world X (forward), whilst axis left/right is mapped to world Y (right).\n\x09*/" },
		{ "DisplayName", "To World Space" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Input space to World space conversion\nAuto-converts axes within the Input Action Value into world space     allowing the result to be directly plugged into functions that take world space values.\nE.g. For a 2D input axis up/down is mapped to world X (forward), whilst axis left/right is mapped to world Y (right)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputModifierToWorldSpace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierToWorldSpace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierToWorldSpace_Statics::ClassParams = {
		&UInputModifierToWorldSpace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x400830A2u,
		METADATA_PARAMS(Z_Construct_UClass_UInputModifierToWorldSpace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierToWorldSpace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputModifierToWorldSpace()
	{
		if (!Z_Registration_Info_UClass_UInputModifierToWorldSpace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierToWorldSpace.OuterSingleton, Z_Construct_UClass_UInputModifierToWorldSpace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputModifierToWorldSpace.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierToWorldSpace>()
	{
		return UInputModifierToWorldSpace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierToWorldSpace);
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputAxisSwizzle;
	static UEnum* EInputAxisSwizzle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputAxisSwizzle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputAxisSwizzle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle, Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EInputAxisSwizzle"));
		}
		return Z_Registration_Info_UEnum_EInputAxisSwizzle.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UEnum* StaticEnum<EInputAxisSwizzle>()
	{
		return EInputAxisSwizzle_StaticEnum();
	}
	struct Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle_Statics::Enumerators[] = {
		{ "EInputAxisSwizzle::YXZ", (int64)EInputAxisSwizzle::YXZ },
		{ "EInputAxisSwizzle::ZYX", (int64)EInputAxisSwizzle::ZYX },
		{ "EInputAxisSwizzle::XZY", (int64)EInputAxisSwizzle::XZY },
		{ "EInputAxisSwizzle::YZX", (int64)EInputAxisSwizzle::YZX },
		{ "EInputAxisSwizzle::ZXY", (int64)EInputAxisSwizzle::ZXY },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "XZY.Comment", "// Swap Y and Z axis\n" },
		{ "XZY.Name", "EInputAxisSwizzle::XZY" },
		{ "XZY.ToolTip", "Swap Y and Z axis" },
		{ "YXZ.Comment", "// Swap X and Y axis. Useful for binding 1D inputs to the Y axis for 2D actions.\n" },
		{ "YXZ.Name", "EInputAxisSwizzle::YXZ" },
		{ "YXZ.ToolTip", "Swap X and Y axis. Useful for binding 1D inputs to the Y axis for 2D actions." },
		{ "YZX.Comment", "// Reorder all axes, Y first\n" },
		{ "YZX.Name", "EInputAxisSwizzle::YZX" },
		{ "YZX.ToolTip", "Reorder all axes, Y first" },
		{ "ZXY.Comment", "// Reorder all axes, Z first\n" },
		{ "ZXY.Name", "EInputAxisSwizzle::ZXY" },
		{ "ZXY.ToolTip", "Reorder all axes, Z first" },
		{ "ZYX.Comment", "// Swap X and Z axis\n" },
		{ "ZYX.Name", "EInputAxisSwizzle::ZYX" },
		{ "ZYX.ToolTip", "Swap X and Z axis" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		"EInputAxisSwizzle",
		"EInputAxisSwizzle",
		Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle()
	{
		if (!Z_Registration_Info_UEnum_EInputAxisSwizzle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputAxisSwizzle.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputAxisSwizzle.InnerSingleton;
	}
	void UInputModifierSwizzleAxis::StaticRegisterNativesUInputModifierSwizzleAxis()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierSwizzleAxis);
	UClass* Z_Construct_UClass_UInputModifierSwizzleAxis_NoRegister()
	{
		return UInputModifierSwizzleAxis::StaticClass();
	}
	struct Z_Construct_UClass_UInputModifierSwizzleAxis_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Order_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Order;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Swizzle axis components of an input value.\n\x09* Useful to map a 1D input onto the Y axis of a 2D action.\n\x09*/" },
		{ "DisplayName", "Swizzle Input Axis Values" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Swizzle axis components of an input value.\nUseful to map a 1D input onto the Y axis of a 2D action." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::NewProp_Order_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::NewProp_Order_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Default to XY swap, useful for binding 1D inputs to the Y axis.\n" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Default to XY swap, useful for binding 1D inputs to the Y axis." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputModifierSwizzleAxis, Order), Z_Construct_UEnum_EnhancedInput_EInputAxisSwizzle, METADATA_PARAMS(Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::NewProp_Order_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::NewProp_Order_MetaData)) }; // 1017936050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::NewProp_Order_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::NewProp_Order,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierSwizzleAxis>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::ClassParams = {
		&UInputModifierSwizzleAxis::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::PropPointers),
		0,
		0x400830A2u,
		METADATA_PARAMS(Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputModifierSwizzleAxis()
	{
		if (!Z_Registration_Info_UClass_UInputModifierSwizzleAxis.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierSwizzleAxis.OuterSingleton, Z_Construct_UClass_UInputModifierSwizzleAxis_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputModifierSwizzleAxis.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierSwizzleAxis>()
	{
		return UInputModifierSwizzleAxis::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierSwizzleAxis);
	void UInputModifierCollection::StaticRegisterNativesUInputModifierCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierCollection);
	UClass* Z_Construct_UClass_UInputModifierCollection_NoRegister()
	{
		return UInputModifierCollection::StaticClass();
	}
	struct Z_Construct_UClass_UInputModifierCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPermitValueTypeModification_MetaData[];
#endif
		static void NewProp_bPermitValueTypeModification_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPermitValueTypeModification;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputModifierCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierCollection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Modifier collection\n\x09* A user definable group of modifiers that can be easily applied to multiple actions or mappings to save duplication work.\n\x09*/" },
		{ "DisplayName", "Modifier Collection" },
		{ "IncludePath", "InputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "Modifier collection\nA user definable group of modifiers that can be easily applied to multiple actions or mappings to save duplication work." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputModifierCollection_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierCollection_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputModifierCollection_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputModifierCollection, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputModifierCollection_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierCollection_Statics::NewProp_Modifiers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputModifierCollection_Statics::NewProp_bPermitValueTypeModification_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If set each modifier will not have the modified value corrected to the base type before execution.\n\x09*\x09""After all modifiers are run the resulting value will be converted back to the action's value type as with any other modifier.\n\x09*\x09This allows for complex sets of conditional modifiers that can alter their behavior based on their predecessors value type.\n\x09*\x09Note that this is an advanced feature and may cause issues if used with the basic modifier implementations.\n\x09**/" },
		{ "ModuleRelativePath", "Public/InputModifiers.h" },
		{ "ToolTip", "If set each modifier will not have the modified value corrected to the base type before execution.\n     After all modifiers are run the resulting value will be converted back to the action's value type as with any other modifier.\n     This allows for complex sets of conditional modifiers that can alter their behavior based on their predecessors value type.\n     Note that this is an advanced feature and may cause issues if used with the basic modifier implementations." },
	};
#endif
	void Z_Construct_UClass_UInputModifierCollection_Statics::NewProp_bPermitValueTypeModification_SetBit(void* Obj)
	{
		((UInputModifierCollection*)Obj)->bPermitValueTypeModification = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputModifierCollection_Statics::NewProp_bPermitValueTypeModification = { "bPermitValueTypeModification", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInputModifierCollection), &Z_Construct_UClass_UInputModifierCollection_Statics::NewProp_bPermitValueTypeModification_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputModifierCollection_Statics::NewProp_bPermitValueTypeModification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierCollection_Statics::NewProp_bPermitValueTypeModification_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierCollection_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierCollection_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierCollection_Statics::NewProp_bPermitValueTypeModification,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputModifierCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierCollection_Statics::ClassParams = {
		&UInputModifierCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputModifierCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierCollection_Statics::PropPointers),
		0,
		0x400830A2u,
		METADATA_PARAMS(Z_Construct_UClass_UInputModifierCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputModifierCollection()
	{
		if (!Z_Registration_Info_UClass_UInputModifierCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierCollection.OuterSingleton, Z_Construct_UClass_UInputModifierCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputModifierCollection.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputModifierCollection>()
	{
		return UInputModifierCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierCollection);
	struct Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_Statics::EnumInfo[] = {
		{ EModifierExecutionPhase_StaticEnum, TEXT("EModifierExecutionPhase"), &Z_Registration_Info_UEnum_EModifierExecutionPhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 420991811U) },
		{ EDeadZoneType_StaticEnum, TEXT("EDeadZoneType"), &Z_Registration_Info_UEnum_EDeadZoneType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 124335324U) },
		{ EFOVScalingType_StaticEnum, TEXT("EFOVScalingType"), &Z_Registration_Info_UEnum_EFOVScalingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2324831589U) },
		{ EInputAxisSwizzle_StaticEnum, TEXT("EInputAxisSwizzle"), &Z_Registration_Info_UEnum_EInputAxisSwizzle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1017936050U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputModifier, UInputModifier::StaticClass, TEXT("UInputModifier"), &Z_Registration_Info_UClass_UInputModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifier), 1784611625U) },
		{ Z_Construct_UClass_UInputModifierDeadZone, UInputModifierDeadZone::StaticClass, TEXT("UInputModifierDeadZone"), &Z_Registration_Info_UClass_UInputModifierDeadZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierDeadZone), 2837180660U) },
		{ Z_Construct_UClass_UInputModifierScalar, UInputModifierScalar::StaticClass, TEXT("UInputModifierScalar"), &Z_Registration_Info_UClass_UInputModifierScalar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierScalar), 245804090U) },
		{ Z_Construct_UClass_UInputModifierNegate, UInputModifierNegate::StaticClass, TEXT("UInputModifierNegate"), &Z_Registration_Info_UClass_UInputModifierNegate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierNegate), 2979775191U) },
		{ Z_Construct_UClass_UInputModifierSmooth, UInputModifierSmooth::StaticClass, TEXT("UInputModifierSmooth"), &Z_Registration_Info_UClass_UInputModifierSmooth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierSmooth), 3589529455U) },
		{ Z_Construct_UClass_UInputModifierResponseCurveExponential, UInputModifierResponseCurveExponential::StaticClass, TEXT("UInputModifierResponseCurveExponential"), &Z_Registration_Info_UClass_UInputModifierResponseCurveExponential, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierResponseCurveExponential), 1731330891U) },
		{ Z_Construct_UClass_UInputModifierResponseCurveUser, UInputModifierResponseCurveUser::StaticClass, TEXT("UInputModifierResponseCurveUser"), &Z_Registration_Info_UClass_UInputModifierResponseCurveUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierResponseCurveUser), 2083638914U) },
		{ Z_Construct_UClass_UInputModifierFOVScaling, UInputModifierFOVScaling::StaticClass, TEXT("UInputModifierFOVScaling"), &Z_Registration_Info_UClass_UInputModifierFOVScaling, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierFOVScaling), 2615438699U) },
		{ Z_Construct_UClass_UInputModifierToWorldSpace, UInputModifierToWorldSpace::StaticClass, TEXT("UInputModifierToWorldSpace"), &Z_Registration_Info_UClass_UInputModifierToWorldSpace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierToWorldSpace), 1918286744U) },
		{ Z_Construct_UClass_UInputModifierSwizzleAxis, UInputModifierSwizzleAxis::StaticClass, TEXT("UInputModifierSwizzleAxis"), &Z_Registration_Info_UClass_UInputModifierSwizzleAxis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierSwizzleAxis), 1133386732U) },
		{ Z_Construct_UClass_UInputModifierCollection, UInputModifierCollection::StaticClass, TEXT("UInputModifierCollection"), &Z_Registration_Info_UClass_UInputModifierCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierCollection), 4265435622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_2283369964(TEXT("/Script/EnhancedInput"),
		Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
