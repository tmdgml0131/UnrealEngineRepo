// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/Pickups/HealthPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthPickup() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_AHealthPickup();
	BLASTER_API UClass* Z_Construct_UClass_AHealthPickup_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_APickup();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void AHealthPickup::StaticRegisterNativesAHealthPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealthPickup);
	UClass* Z_Construct_UClass_AHealthPickup_NoRegister()
	{
		return AHealthPickup::StaticClass();
	}
	struct Z_Construct_UClass_AHealthPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupEffectComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupEffectComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealthPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pickups/HealthPickup.h" },
		{ "ModuleRelativePath", "Pickups/HealthPickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount_MetaData[] = {
		{ "Category", "HealthPickup" },
		{ "ModuleRelativePath", "Pickups/HealthPickup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHealthPickup, HealAmount), METADATA_PARAMS(Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingTime_MetaData[] = {
		{ "Category", "HealthPickup" },
		{ "ModuleRelativePath", "Pickups/HealthPickup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingTime = { "HealingTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHealthPickup, HealingTime), METADATA_PARAMS(Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickup_Statics::NewProp_PickupEffectComponent_MetaData[] = {
		{ "Category", "HealthPickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickups/HealthPickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHealthPickup_Statics::NewProp_PickupEffectComponent = { "PickupEffectComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHealthPickup, PickupEffectComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHealthPickup_Statics::NewProp_PickupEffectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::NewProp_PickupEffectComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickup_Statics::NewProp_PickupEffect_MetaData[] = {
		{ "Category", "HealthPickup" },
		{ "ModuleRelativePath", "Pickups/HealthPickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHealthPickup_Statics::NewProp_PickupEffect = { "PickupEffect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHealthPickup, PickupEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHealthPickup_Statics::NewProp_PickupEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::NewProp_PickupEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealthPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPickup_Statics::NewProp_PickupEffectComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPickup_Statics::NewProp_PickupEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealthPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealthPickup_Statics::ClassParams = {
		&AHealthPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHealthPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHealthPickup()
	{
		if (!Z_Registration_Info_UClass_AHealthPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealthPickup.OuterSingleton, Z_Construct_UClass_AHealthPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHealthPickup.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<AHealthPickup>()
	{
		return AHealthPickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthPickup);
	AHealthPickup::~AHealthPickup() {}
	struct Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_HealthPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_HealthPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHealthPickup, AHealthPickup::StaticClass, TEXT("AHealthPickup"), &Z_Registration_Info_UClass_AHealthPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealthPickup), 2041527847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_HealthPickup_h_1970908584(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_HealthPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_HealthPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
