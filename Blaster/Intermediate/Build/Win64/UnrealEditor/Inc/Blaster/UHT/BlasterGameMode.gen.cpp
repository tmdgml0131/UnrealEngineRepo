// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/GameMode/BlasterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterGameMode() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterGameMode();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void ABlasterGameMode::StaticRegisterNativesABlasterGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterGameMode);
	UClass* Z_Construct_UClass_ABlasterGameMode_NoRegister()
	{
		return ABlasterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABlasterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlasterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/BlasterGameMode.h" },
		{ "ModuleRelativePath", "GameMode/BlasterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlasterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterGameMode_Statics::ClassParams = {
		&ABlasterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABlasterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlasterGameMode()
	{
		if (!Z_Registration_Info_UClass_ABlasterGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterGameMode.OuterSingleton, Z_Construct_UClass_ABlasterGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABlasterGameMode.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<ABlasterGameMode>()
	{
		return ABlasterGameMode::StaticClass();
	}
	ABlasterGameMode::ABlasterGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterGameMode);
	ABlasterGameMode::~ABlasterGameMode() {}
	struct Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_GameMode_BlasterGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_GameMode_BlasterGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterGameMode, ABlasterGameMode::StaticClass, TEXT("ABlasterGameMode"), &Z_Registration_Info_UClass_ABlasterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterGameMode), 45658463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_GameMode_BlasterGameMode_h_1844337912(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_GameMode_BlasterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_GameMode_BlasterGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
