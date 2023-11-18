// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABUIPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABUIPlayerController() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABUIPlayerController();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABUIPlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void AABUIPlayerController::StaticRegisterNativesAABUIPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABUIPlayerController);
	UClass* Z_Construct_UClass_AABUIPlayerController_NoRegister()
	{
		return AABUIPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AABUIPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UIWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIWidgetInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UIWidgetInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABUIPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABUIPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ABUIPlayerController.h" },
		{ "ModuleRelativePath", "Public/ABUIPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABUIPlayerController_Statics::NewProp_UIWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ABUIPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABUIPlayerController_Statics::NewProp_UIWidgetClass = { "UIWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABUIPlayerController, UIWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABUIPlayerController_Statics::NewProp_UIWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABUIPlayerController_Statics::NewProp_UIWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABUIPlayerController_Statics::NewProp_UIWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABUIPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABUIPlayerController_Statics::NewProp_UIWidgetInstance = { "UIWidgetInstance", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABUIPlayerController, UIWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABUIPlayerController_Statics::NewProp_UIWidgetInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABUIPlayerController_Statics::NewProp_UIWidgetInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABUIPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABUIPlayerController_Statics::NewProp_UIWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABUIPlayerController_Statics::NewProp_UIWidgetInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABUIPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABUIPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABUIPlayerController_Statics::ClassParams = {
		&AABUIPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABUIPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABUIPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABUIPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABUIPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABUIPlayerController()
	{
		if (!Z_Registration_Info_UClass_AABUIPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABUIPlayerController.OuterSingleton, Z_Construct_UClass_AABUIPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABUIPlayerController.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<AABUIPlayerController>()
	{
		return AABUIPlayerController::StaticClass();
	}
	AABUIPlayerController::AABUIPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABUIPlayerController);
	AABUIPlayerController::~AABUIPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABUIPlayerController, AABUIPlayerController::StaticClass, TEXT("AABUIPlayerController"), &Z_Registration_Info_UClass_AABUIPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABUIPlayerController), 745790883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_3624909445(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABUIPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
