// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/BlasterTypes/CombatState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatState() {}
// Cross Module References
	BLASTER_API UEnum* Z_Construct_UEnum_Blaster_ECombatState();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatState;
	static UEnum* ECombatState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECombatState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECombatState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Blaster_ECombatState, (UObject*)Z_Construct_UPackage__Script_Blaster(), TEXT("ECombatState"));
		}
		return Z_Registration_Info_UEnum_ECombatState.OuterSingleton;
	}
	template<> BLASTER_API UEnum* StaticEnum<ECombatState>()
	{
		return ECombatState_StaticEnum();
	}
	struct Z_Construct_UEnum_Blaster_ECombatState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Blaster_ECombatState_Statics::Enumerators[] = {
		{ "ECombatState::ECS_Unoccupied", (int64)ECombatState::ECS_Unoccupied },
		{ "ECombatState::ECS_Reloading", (int64)ECombatState::ECS_Reloading },
		{ "ECombatState::ECS_ThrowingGrenade", (int64)ECombatState::ECS_ThrowingGrenade },
		{ "ECombatState::ECS_MAX", (int64)ECombatState::ECS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Blaster_ECombatState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_MAX.DisplayName", "DefaultMAX" },
		{ "ECS_MAX.Name", "ECombatState::ECS_MAX" },
		{ "ECS_Reloading.DisplayName", "Reloading" },
		{ "ECS_Reloading.Name", "ECombatState::ECS_Reloading" },
		{ "ECS_ThrowingGrenade.DisplayName", "ThrowingGrenade" },
		{ "ECS_ThrowingGrenade.Name", "ECombatState::ECS_ThrowingGrenade" },
		{ "ECS_Unoccupied.DisplayName", "Unoccupied" },
		{ "ECS_Unoccupied.Name", "ECombatState::ECS_Unoccupied" },
		{ "ModuleRelativePath", "BlasterTypes/CombatState.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Blaster_ECombatState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Blaster,
		nullptr,
		"ECombatState",
		"ECombatState",
		Z_Construct_UEnum_Blaster_ECombatState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Blaster_ECombatState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Blaster_ECombatState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Blaster_ECombatState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Blaster_ECombatState()
	{
		if (!Z_Registration_Info_UEnum_ECombatState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatState.InnerSingleton, Z_Construct_UEnum_Blaster_ECombatState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECombatState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterTypes_CombatState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterTypes_CombatState_h_Statics::EnumInfo[] = {
		{ ECombatState_StaticEnum, TEXT("ECombatState"), &Z_Registration_Info_UEnum_ECombatState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1779451411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterTypes_CombatState_h_2135976778(TEXT("/Script/Blaster"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterTypes_CombatState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterTypes_CombatState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
