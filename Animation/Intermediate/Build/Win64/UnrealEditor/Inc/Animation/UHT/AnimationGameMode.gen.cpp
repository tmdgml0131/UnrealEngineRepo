// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/AnimationGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationGameMode() {}

// Begin Cross Module References
ANIMATION_API UClass* Z_Construct_UClass_AAnimationGameMode();
ANIMATION_API UClass* Z_Construct_UClass_AAnimationGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Animation();
// End Cross Module References

// Begin Class AAnimationGameMode
void AAnimationGameMode::StaticRegisterNativesAAnimationGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnimationGameMode);
UClass* Z_Construct_UClass_AAnimationGameMode_NoRegister()
{
	return AAnimationGameMode::StaticClass();
}
struct Z_Construct_UClass_AAnimationGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AnimationGameMode.h" },
		{ "ModuleRelativePath", "AnimationGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnimationGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAnimationGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Animation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnimationGameMode_Statics::ClassParams = {
	&AAnimationGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAnimationGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAnimationGameMode()
{
	if (!Z_Registration_Info_UClass_AAnimationGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnimationGameMode.OuterSingleton, Z_Construct_UClass_AAnimationGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnimationGameMode.OuterSingleton;
}
template<> ANIMATION_API UClass* StaticClass<AAnimationGameMode>()
{
	return AAnimationGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAnimationGameMode);
AAnimationGameMode::~AAnimationGameMode() {}
// End Class AAnimationGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnimationGameMode, AAnimationGameMode::StaticClass, TEXT("AAnimationGameMode"), &Z_Registration_Info_UClass_AAnimationGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnimationGameMode), 3119349643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationGameMode_h_1902696520(TEXT("/Script/Animation"),
	Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
