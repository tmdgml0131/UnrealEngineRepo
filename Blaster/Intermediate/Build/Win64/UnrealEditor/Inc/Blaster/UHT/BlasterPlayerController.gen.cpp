// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/PlayerController/BlasterPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterPlayerController() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterHUD_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void ABlasterPlayerController::StaticRegisterNativesABlasterPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterPlayerController);
	UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister()
	{
		return ABlasterPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ABlasterPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlasterHUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterHUD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlasterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/BlasterPlayerController.h" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD = { "BlasterHUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterPlayerController, BlasterHUD), Z_Construct_UClass_ABlasterHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlasterPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterPlayerController_Statics::ClassParams = {
		&ABlasterPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlasterPlayerController()
	{
		if (!Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton, Z_Construct_UClass_ABlasterPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<ABlasterPlayerController>()
	{
		return ABlasterPlayerController::StaticClass();
	}
	ABlasterPlayerController::ABlasterPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterPlayerController);
	ABlasterPlayerController::~ABlasterPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterPlayerController, ABlasterPlayerController::StaticClass, TEXT("ABlasterPlayerController"), &Z_Registration_Info_UClass_ABlasterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterPlayerController), 412960918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_967634211(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
