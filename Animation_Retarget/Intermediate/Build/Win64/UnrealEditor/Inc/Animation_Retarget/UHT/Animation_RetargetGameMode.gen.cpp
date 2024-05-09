// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation_Retarget/Animation_RetargetGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimation_RetargetGameMode() {}

// Begin Cross Module References
ANIMATION_RETARGET_API UClass* Z_Construct_UClass_AAnimation_RetargetGameMode();
ANIMATION_RETARGET_API UClass* Z_Construct_UClass_AAnimation_RetargetGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Animation_Retarget();
// End Cross Module References

// Begin Class AAnimation_RetargetGameMode
void AAnimation_RetargetGameMode::StaticRegisterNativesAAnimation_RetargetGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnimation_RetargetGameMode);
UClass* Z_Construct_UClass_AAnimation_RetargetGameMode_NoRegister()
{
	return AAnimation_RetargetGameMode::StaticClass();
}
struct Z_Construct_UClass_AAnimation_RetargetGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Animation_RetargetGameMode.h" },
		{ "ModuleRelativePath", "Animation_RetargetGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnimation_RetargetGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAnimation_RetargetGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Animation_Retarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnimation_RetargetGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnimation_RetargetGameMode_Statics::ClassParams = {
	&AAnimation_RetargetGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAnimation_RetargetGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAnimation_RetargetGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAnimation_RetargetGameMode()
{
	if (!Z_Registration_Info_UClass_AAnimation_RetargetGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnimation_RetargetGameMode.OuterSingleton, Z_Construct_UClass_AAnimation_RetargetGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnimation_RetargetGameMode.OuterSingleton;
}
template<> ANIMATION_RETARGET_API UClass* StaticClass<AAnimation_RetargetGameMode>()
{
	return AAnimation_RetargetGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAnimation_RetargetGameMode);
AAnimation_RetargetGameMode::~AAnimation_RetargetGameMode() {}
// End Class AAnimation_RetargetGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Animation_Retarget_Source_Animation_Retarget_Animation_RetargetGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnimation_RetargetGameMode, AAnimation_RetargetGameMode::StaticClass, TEXT("AAnimation_RetargetGameMode"), &Z_Registration_Info_UClass_AAnimation_RetargetGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnimation_RetargetGameMode), 3516746827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Animation_Retarget_Source_Animation_Retarget_Animation_RetargetGameMode_h_962740591(TEXT("/Script/Animation_Retarget"),
	Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Animation_Retarget_Source_Animation_Retarget_Animation_RetargetGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Animation_Retarget_Source_Animation_Retarget_Animation_RetargetGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
