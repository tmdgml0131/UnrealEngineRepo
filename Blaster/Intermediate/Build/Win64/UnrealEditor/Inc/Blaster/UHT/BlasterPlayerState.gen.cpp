// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/PlayerState/BlasterPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterPlayerState() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerState();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void ABlasterPlayerState::StaticRegisterNativesABlasterPlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterPlayerState);
	UClass* Z_Construct_UClass_ABlasterPlayerState_NoRegister()
	{
		return ABlasterPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ABlasterPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlasterPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayerState/BlasterPlayerState.h" },
		{ "ModuleRelativePath", "PlayerState/BlasterPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlasterPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterPlayerState_Statics::ClassParams = {
		&ABlasterPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlasterPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlasterPlayerState()
	{
		if (!Z_Registration_Info_UClass_ABlasterPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterPlayerState.OuterSingleton, Z_Construct_UClass_ABlasterPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABlasterPlayerState.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<ABlasterPlayerState>()
	{
		return ABlasterPlayerState::StaticClass();
	}
	ABlasterPlayerState::ABlasterPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterPlayerState);
	ABlasterPlayerState::~ABlasterPlayerState() {}
	struct Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterPlayerState, ABlasterPlayerState::StaticClass, TEXT("ABlasterPlayerState"), &Z_Registration_Info_UClass_ABlasterPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterPlayerState), 1207789376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_3029598677(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
