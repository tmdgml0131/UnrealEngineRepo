// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABGameplayWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameplayWidget() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameplayWidget();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameplayWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	DEFINE_FUNCTION(UABGameplayWidget::execOnRetryGameClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRetryGameClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABGameplayWidget::execOnReturnToTileClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReturnToTileClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABGameplayWidget::execOnResumeClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResumeClicked();
		P_NATIVE_END;
	}
	void UABGameplayWidget::StaticRegisterNativesUABGameplayWidget()
	{
		UClass* Class = UABGameplayWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnResumeClicked", &UABGameplayWidget::execOnResumeClicked },
			{ "OnRetryGameClicked", &UABGameplayWidget::execOnRetryGameClicked },
			{ "OnReturnToTileClicked", &UABGameplayWidget::execOnReturnToTileClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGameplayWidget, nullptr, "OnResumeClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGameplayWidget, nullptr, "OnRetryGameClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABGameplayWidget_OnReturnToTileClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABGameplayWidget_OnReturnToTileClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABGameplayWidget_OnReturnToTileClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABGameplayWidget, nullptr, "OnReturnToTileClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABGameplayWidget_OnReturnToTileClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABGameplayWidget_OnReturnToTileClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABGameplayWidget_OnReturnToTileClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABGameplayWidget_OnReturnToTileClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABGameplayWidget);
	UClass* Z_Construct_UClass_UABGameplayWidget_NoRegister()
	{
		return UABGameplayWidget::StaticClass();
	}
	struct Z_Construct_UClass_UABGameplayWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResumeButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResumeButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToTitleButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnToTitleButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetryGameButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RetryGameButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABGameplayWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABGameplayWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABGameplayWidget_OnResumeClicked, "OnResumeClicked" }, // 361326164
		{ &Z_Construct_UFunction_UABGameplayWidget_OnRetryGameClicked, "OnRetryGameClicked" }, // 3927024254
		{ &Z_Construct_UFunction_UABGameplayWidget_OnReturnToTileClicked, "OnReturnToTileClicked" }, // 909953028
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGameplayWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ABGameplayWidget.h" },
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ResumeButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ResumeButton = { "ResumeButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABGameplayWidget, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ResumeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ResumeButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ReturnToTitleButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ReturnToTitleButton = { "ReturnToTitleButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABGameplayWidget, ReturnToTitleButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ReturnToTitleButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ReturnToTitleButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_RetryGameButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABGameplayWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_RetryGameButton = { "RetryGameButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABGameplayWidget, RetryGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_RetryGameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_RetryGameButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABGameplayWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ResumeButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_ReturnToTitleButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABGameplayWidget_Statics::NewProp_RetryGameButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABGameplayWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABGameplayWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABGameplayWidget_Statics::ClassParams = {
		&UABGameplayWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UABGameplayWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UABGameplayWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABGameplayWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABGameplayWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABGameplayWidget()
	{
		if (!Z_Registration_Info_UClass_UABGameplayWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABGameplayWidget.OuterSingleton, Z_Construct_UClass_UABGameplayWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABGameplayWidget.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<UABGameplayWidget>()
	{
		return UABGameplayWidget::StaticClass();
	}
	UABGameplayWidget::UABGameplayWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABGameplayWidget);
	UABGameplayWidget::~UABGameplayWidget() {}
	struct Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABGameplayWidget, UABGameplayWidget::StaticClass, TEXT("UABGameplayWidget"), &Z_Registration_Info_UClass_UABGameplayWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABGameplayWidget), 3668857300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_2158631202(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABGameplayWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
