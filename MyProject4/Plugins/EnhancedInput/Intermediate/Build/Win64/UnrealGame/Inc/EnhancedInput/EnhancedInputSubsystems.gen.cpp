// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/EnhancedInputSubsystems.h"
#include "Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputSubsystems() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputEngineSubsystem_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput_NoRegister();
// End Cross Module References
	void UEnhancedInputLocalPlayerSubsystem::StaticRegisterNativesUEnhancedInputLocalPlayerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputLocalPlayerSubsystem);
	UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister()
	{
		return UEnhancedInputLocalPlayerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Per local player input subsystem\n" },
		{ "IncludePath", "EnhancedInputSubsystems.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
		{ "ToolTip", "Per local player input subsystem" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister, (int32)VTABLE_OFFSET(UEnhancedInputLocalPlayerSubsystem, IEnhancedInputSubsystemInterface), false },  // 1718807888
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputLocalPlayerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::ClassParams = {
		&UEnhancedInputLocalPlayerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem.OuterSingleton, Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputLocalPlayerSubsystem>()
	{
		return UEnhancedInputLocalPlayerSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputLocalPlayerSubsystem);
	void UEnhancedInputEngineSubsystem::StaticRegisterNativesUEnhancedInputEngineSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputEngineSubsystem);
	UClass* Z_Construct_UClass_UEnhancedInputEngineSubsystem_NoRegister()
	{
		return UEnhancedInputEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Global input handling subsystem\n// TODO: For now this is a non-functional placeholder that shuold be enabled when the Enhanced Input Plugin is enabled by default.\n" },
		{ "IncludePath", "EnhancedInputSubsystems.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "Global input handling subsystem\nTODO: For now this is a non-functional placeholder that shuold be enabled when the Enhanced Input Plugin is enabled by default." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics::NewProp_PlayerInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnhancedInputEngineSubsystem, PlayerInput), Z_Construct_UClass_UEnhancedPlayerInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics::NewProp_PlayerInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics::NewProp_PlayerInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics::NewProp_PlayerInput,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister, (int32)VTABLE_OFFSET(UEnhancedInputEngineSubsystem, IEnhancedInputSubsystemInterface), false },  // 1718807888
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputEngineSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics::ClassParams = {
		&UEnhancedInputEngineSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnhancedInputEngineSubsystem()
	{
		if (!Z_Registration_Info_UClass_UEnhancedInputEngineSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputEngineSubsystem.OuterSingleton, Z_Construct_UClass_UEnhancedInputEngineSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnhancedInputEngineSubsystem.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputEngineSubsystem>()
	{
		return UEnhancedInputEngineSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputEngineSubsystem);
	struct Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem, UEnhancedInputLocalPlayerSubsystem::StaticClass, TEXT("UEnhancedInputLocalPlayerSubsystem"), &Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputLocalPlayerSubsystem), 266446249U) },
		{ Z_Construct_UClass_UEnhancedInputEngineSubsystem, UEnhancedInputEngineSubsystem::StaticClass, TEXT("UEnhancedInputEngineSubsystem"), &Z_Registration_Info_UClass_UEnhancedInputEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputEngineSubsystem), 3763515172U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_3758306007(TEXT("/Script/EnhancedInput"),
		Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject4_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
