// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABWeapon() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABWeapon();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void AABWeapon::StaticRegisterNativesAABWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABWeapon);
	UClass* Z_Construct_UClass_AABWeapon_NoRegister()
	{
		return AABWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AABWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamageMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamageMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamageMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamageMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackModifierMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackModifierMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackModiferMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackModiferMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackModifer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackModifer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ABWeapon.h" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABWeapon_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABWeapon, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABWeapon_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABWeapon_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABWeapon, AttackRange), METADATA_PARAMS(Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamageMin_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamageMin = { "AttackDamageMin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABWeapon, AttackDamageMin), METADATA_PARAMS(Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamageMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamageMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamageMax_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamageMax = { "AttackDamageMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABWeapon, AttackDamageMax), METADATA_PARAMS(Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamageMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamageMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModifierMin_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModifierMin = { "AttackModifierMin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABWeapon, AttackModifierMin), METADATA_PARAMS(Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModifierMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModifierMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModiferMax_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModiferMax = { "AttackModiferMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABWeapon, AttackModiferMax), METADATA_PARAMS(Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModiferMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModiferMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0020080000022815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABWeapon, AttackDamage), METADATA_PARAMS(Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModifer_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ABWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModifer = { "AttackModifer", nullptr, (EPropertyFlags)0x0020080000022815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABWeapon, AttackModifer), METADATA_PARAMS(Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModifer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModifer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABWeapon_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamageMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamageMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModifierMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModiferMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABWeapon_Statics::NewProp_AttackModifer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABWeapon_Statics::ClassParams = {
		&AABWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABWeapon()
	{
		if (!Z_Registration_Info_UClass_AABWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABWeapon.OuterSingleton, Z_Construct_UClass_AABWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABWeapon.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<AABWeapon>()
	{
		return AABWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABWeapon);
	AABWeapon::~AABWeapon() {}
	struct Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABWeapon, AABWeapon::StaticClass, TEXT("AABWeapon"), &Z_Registration_Info_UClass_AABWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABWeapon), 886227457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABWeapon_h_1606463060(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
