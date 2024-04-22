// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/BlasterComponents/BuffComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuffComponent() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_UBuffComponent();
	BLASTER_API UClass* Z_Construct_UClass_UBuffComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void UBuffComponent::StaticRegisterNativesUBuffComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuffComponent);
	UClass* Z_Construct_UClass_UBuffComponent_NoRegister()
	{
		return UBuffComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBuffComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuffComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuffComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BlasterComponents/BuffComponent.h" },
		{ "ModuleRelativePath", "BlasterComponents/BuffComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuffComponent_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponents/BuffComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuffComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuffComponent, Character), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBuffComponent_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::NewProp_Character_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuffComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuffComponent_Statics::NewProp_Character,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuffComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuffComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuffComponent_Statics::ClassParams = {
		&UBuffComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBuffComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBuffComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuffComponent()
	{
		if (!Z_Registration_Info_UClass_UBuffComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuffComponent.OuterSingleton, Z_Construct_UClass_UBuffComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBuffComponent.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<UBuffComponent>()
	{
		return UBuffComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuffComponent);
	UBuffComponent::~UBuffComponent() {}
	struct Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBuffComponent, UBuffComponent::StaticClass, TEXT("UBuffComponent"), &Z_Registration_Info_UClass_UBuffComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuffComponent), 1385033459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_65250329(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
