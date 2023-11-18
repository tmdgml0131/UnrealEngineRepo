// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABGameplayResultWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameplayResultWidget() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameplayResultWidget();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameplayResultWidget_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameplayWidget();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UABGameplayResultWidget::StaticRegisterNativesUABGameplayResultWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABGameplayResultWidget);
	UClass* Z_Construct_UClass_UABGameplayResultWidget_NoRegister()
	{
		return UABGameplayResultWidget::StaticClass();
	}
	struct Z_Construct_UClass_UABGameplayResultWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABGameplayResultWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UABGameplayWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGameplayResultWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ABGameplayResultWidget.h" },
		{ "ModuleRelativePath", "Public/ABGameplayResultWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABGameplayResultWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABGameplayResultWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABGameplayResultWidget_Statics::ClassParams = {
		&UABGameplayResultWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABGameplayResultWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABGameplayResultWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABGameplayResultWidget()
	{
		if (!Z_Registration_Info_UClass_UABGameplayResultWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABGameplayResultWidget.OuterSingleton, Z_Construct_UClass_UABGameplayResultWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABGameplayResultWidget.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<UABGameplayResultWidget>()
	{
		return UABGameplayResultWidget::StaticClass();
	}
	UABGameplayResultWidget::UABGameplayResultWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABGameplayResultWidget);
	UABGameplayResultWidget::~UABGameplayResultWidget() {}
	struct Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABGameplayResultWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABGameplayResultWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABGameplayResultWidget, UABGameplayResultWidget::StaticClass, TEXT("UABGameplayResultWidget"), &Z_Registration_Info_UClass_UABGameplayResultWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABGameplayResultWidget), 71348562U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABGameplayResultWidget_h_1792112100(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABGameplayResultWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABGameplayResultWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
