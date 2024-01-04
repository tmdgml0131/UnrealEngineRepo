// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/Character/BlasterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterCharacter() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_UInteractWithCrosshairsInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	DEFINE_FUNCTION(ABlasterCharacter::execUpdateDissolveMaterial)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DissolveValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDissolveMaterial(Z_Param_DissolveValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterCharacter::execOnRep_Health)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterCharacter::execServerEquipButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerEquipButtonPressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterCharacter::execOnRep_OverlappingWeapon)
	{
		P_GET_OBJECT(AWeapon,Z_Param_LastWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OverlappingWeapon(Z_Param_LastWeapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterCharacter::execReceiveDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatorController);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatorController,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterCharacter::execMultiCastElim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MultiCastElim_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ABlasterCharacter_MultiCastElim = FName(TEXT("MultiCastElim"));
	void ABlasterCharacter::MultiCastElim()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABlasterCharacter_MultiCastElim),NULL);
	}
	static FName NAME_ABlasterCharacter_ServerEquipButtonPressed = FName(TEXT("ServerEquipButtonPressed"));
	void ABlasterCharacter::ServerEquipButtonPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABlasterCharacter_ServerEquipButtonPressed),NULL);
	}
	void ABlasterCharacter::StaticRegisterNativesABlasterCharacter()
	{
		UClass* Class = ABlasterCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MultiCastElim", &ABlasterCharacter::execMultiCastElim },
			{ "OnRep_Health", &ABlasterCharacter::execOnRep_Health },
			{ "OnRep_OverlappingWeapon", &ABlasterCharacter::execOnRep_OverlappingWeapon },
			{ "ReceiveDamage", &ABlasterCharacter::execReceiveDamage },
			{ "ServerEquipButtonPressed", &ABlasterCharacter::execServerEquipButtonPressed },
			{ "UpdateDissolveMaterial", &ABlasterCharacter::execUpdateDissolveMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABlasterCharacter_MultiCastElim_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterCharacter_MultiCastElim_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_MultiCastElim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "MultiCastElim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlasterCharacter_MultiCastElim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_MultiCastElim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlasterCharacter_MultiCastElim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_MultiCastElim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterCharacter_OnRep_Health_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterCharacter_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "OnRep_Health", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlasterCharacter_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlasterCharacter_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics
	{
		struct BlasterCharacter_eventOnRep_OverlappingWeapon_Parms
		{
			AWeapon* LastWeapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::NewProp_LastWeapon = { "LastWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlasterCharacter_eventOnRep_OverlappingWeapon_Parms, LastWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::NewProp_LastWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "OnRep_OverlappingWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::BlasterCharacter_eventOnRep_OverlappingWeapon_Parms), Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics
	{
		struct BlasterCharacter_eventReceiveDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatorController;
			AActor* DamageCauser;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlasterCharacter_eventReceiveDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlasterCharacter_eventReceiveDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlasterCharacter_eventReceiveDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_InstigatorController = { "InstigatorController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlasterCharacter_eventReceiveDamage_Parms, InstigatorController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlasterCharacter_eventReceiveDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_DamagedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_InstigatorController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "ReceiveDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::BlasterCharacter_eventReceiveDamage_Parms), Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// RPC \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
		{ "ToolTip", "RPC \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "ServerEquipButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics
	{
		struct BlasterCharacter_eventUpdateDissolveMaterial_Parms
		{
			float DissolveValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DissolveValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::NewProp_DissolveValue = { "DissolveValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlasterCharacter_eventUpdateDissolveMaterial_Parms, DissolveValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::NewProp_DissolveValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterCharacter, nullptr, "UpdateDissolveMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::BlasterCharacter_eventUpdateDissolveMaterial_Parms), Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterCharacter);
	UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister()
	{
		return ABlasterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABlasterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverheadWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverheadWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireWeaponMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireWeaponMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitReactMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitReactMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraTreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraTreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElimDealy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElimDealy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DissolveTimeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveTimeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DissolveCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicDissolveMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicDissolveMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DissolveMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlasterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlasterCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlasterCharacter_MultiCastElim, "MultiCastElim" }, // 2607274443
		{ &Z_Construct_UFunction_ABlasterCharacter_OnRep_Health, "OnRep_Health" }, // 1855220211
		{ &Z_Construct_UFunction_ABlasterCharacter_OnRep_OverlappingWeapon, "OnRep_OverlappingWeapon" }, // 4231714081
		{ &Z_Construct_UFunction_ABlasterCharacter_ReceiveDamage, "ReceiveDamage" }, // 3803768527
		{ &Z_Construct_UFunction_ABlasterCharacter_ServerEquipButtonPressed, "ServerEquipButtonPressed" }, // 638945417
		{ &Z_Construct_UFunction_ABlasterCharacter_UpdateDissolveMaterial, "UpdateDissolveMaterial" }, // 3893174071
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/BlasterCharacter.h" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverheadWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverheadWidget = { "OverheadWidget", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterCharacter, OverheadWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverheadWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverheadWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingWeapon = { "OverlappingWeapon", "OnRep_OverlappingWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterCharacter, OverlappingWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CombatComponent_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CombatComponent = { "CombatComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterCharacter, CombatComponent), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CombatComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CombatComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireWeaponMontage_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireWeaponMontage = { "FireWeaponMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterCharacter, FireWeaponMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireWeaponMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireWeaponMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_HitReactMontage_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_HitReactMontage = { "HitReactMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterCharacter, HitReactMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_HitReactMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_HitReactMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimMontage_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimMontage = { "ElimMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterCharacter, ElimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraTreshold_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraTreshold = { "CameraTreshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterCharacter, CameraTreshold), METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraTreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraTreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "Comment", "// Player Health\n" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
		{ "ToolTip", "Player Health" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterCharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimDealy_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimDealy = { "ElimDealy", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterCharacter, ElimDealy), METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimDealy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimDealy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveTimeline_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "Comment", "// Dissolve Effect\n// Timeline \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd Call-back Func. \xef\xbf\xbd\xca\xbf\xef\xbf\xbd\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
		{ "ToolTip", "Dissolve Effect\nTimeline \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd Call-back Func. \xef\xbf\xbd\xca\xbf\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveTimeline = { "DissolveTimeline", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterCharacter, DissolveTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveTimeline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveCurve_MetaData[] = {
		{ "Category", "BlasterCharacter" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveCurve = { "DissolveCurve", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterCharacter, DissolveCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DynamicDissolveMaterialInstance_MetaData[] = {
		{ "Category", "Elim" },
		{ "Comment", "// Dynamic Instance, Runtime\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
		{ "ToolTip", "Dynamic Instance, Runtime\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DynamicDissolveMaterialInstance = { "DynamicDissolveMaterialInstance", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterCharacter, DynamicDissolveMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DynamicDissolveMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DynamicDissolveMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveMaterialInstance_MetaData[] = {
		{ "Category", "Elim" },
		{ "Comment", "// Blueprint\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Material Instance\xef\xbf\xbd\xef\xbf\xbd Dynamic Material\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Character/BlasterCharacter.h" },
		{ "ToolTip", "Blueprint\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Material Instance\xef\xbf\xbd\xef\xbf\xbd Dynamic Material\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveMaterialInstance = { "DissolveMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterCharacter, DissolveMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveMaterialInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverheadWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_OverlappingWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CombatComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_FireWeaponMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_HitReactMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_CameraTreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_ElimDealy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveTimeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DynamicDissolveMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterCharacter_Statics::NewProp_DissolveMaterialInstance,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABlasterCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractWithCrosshairsInterface_NoRegister, (int32)VTABLE_OFFSET(ABlasterCharacter, IInteractWithCrosshairsInterface), false },  // 2730109807
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlasterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterCharacter_Statics::ClassParams = {
		&ABlasterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlasterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlasterCharacter()
	{
		if (!Z_Registration_Info_UClass_ABlasterCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterCharacter.OuterSingleton, Z_Construct_UClass_ABlasterCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABlasterCharacter.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<ABlasterCharacter>()
	{
		return ABlasterCharacter::StaticClass();
	}

	void ABlasterCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OverlappingWeapon(TEXT("OverlappingWeapon"));
		static const FName Name_Health(TEXT("Health"));

		const bool bIsValid = true
			&& Name_OverlappingWeapon == ClassReps[(int32)ENetFields_Private::OverlappingWeapon].Property->GetFName()
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABlasterCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterCharacter);
	ABlasterCharacter::~ABlasterCharacter() {}
	struct Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterCharacter, ABlasterCharacter::StaticClass, TEXT("ABlasterCharacter"), &Z_Registration_Info_UClass_ABlasterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterCharacter), 2742612677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_2991784468(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
