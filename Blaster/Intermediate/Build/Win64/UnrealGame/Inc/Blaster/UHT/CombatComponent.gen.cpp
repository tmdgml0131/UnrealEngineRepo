// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/BlasterComponents/CombatComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatComponent() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterHUD_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_UCombatComponent();
	BLASTER_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	BLASTER_API UEnum* Z_Construct_UEnum_Blaster_ECombatState();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	DEFINE_FUNCTION(UCombatComponent::execOnRep_CombatState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CombatState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execOnRep_CarriedAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CarriedAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execMulticastFire)
	{
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceHitTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastFire_Implementation(Z_Param_TraceHitTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execOnRep_EquippedWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EquippedWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execServerReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerReload_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execServerFire)
	{
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceHitTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerFire_Implementation(Z_Param_TraceHitTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execServerSetAiming)
	{
		P_GET_UBOOL(Z_Param_bIsAiming);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetAiming_Implementation(Z_Param_bIsAiming);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execFinishReloading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishReloading();
		P_NATIVE_END;
	}
	struct CombatComponent_eventMulticastFire_Parms
	{
		FVector_NetQuantize TraceHitTarget;
	};
	struct CombatComponent_eventServerFire_Parms
	{
		FVector_NetQuantize TraceHitTarget;
	};
	struct CombatComponent_eventServerSetAiming_Parms
	{
		bool bIsAiming;
	};
	static FName NAME_UCombatComponent_MulticastFire = FName(TEXT("MulticastFire"));
	void UCombatComponent::MulticastFire(FVector_NetQuantize const& TraceHitTarget)
	{
		CombatComponent_eventMulticastFire_Parms Parms;
		Parms.TraceHitTarget=TraceHitTarget;
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_MulticastFire),&Parms);
	}
	static FName NAME_UCombatComponent_ServerFire = FName(TEXT("ServerFire"));
	void UCombatComponent::ServerFire(FVector_NetQuantize const& TraceHitTarget)
	{
		CombatComponent_eventServerFire_Parms Parms;
		Parms.TraceHitTarget=TraceHitTarget;
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_ServerFire),&Parms);
	}
	static FName NAME_UCombatComponent_ServerReload = FName(TEXT("ServerReload"));
	void UCombatComponent::ServerReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_ServerReload),NULL);
	}
	static FName NAME_UCombatComponent_ServerSetAiming = FName(TEXT("ServerSetAiming"));
	void UCombatComponent::ServerSetAiming(bool bIsAiming)
	{
		CombatComponent_eventServerSetAiming_Parms Parms;
		Parms.bIsAiming=bIsAiming ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_ServerSetAiming),&Parms);
	}
	void UCombatComponent::StaticRegisterNativesUCombatComponent()
	{
		UClass* Class = UCombatComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishReloading", &UCombatComponent::execFinishReloading },
			{ "MulticastFire", &UCombatComponent::execMulticastFire },
			{ "OnRep_CarriedAmmo", &UCombatComponent::execOnRep_CarriedAmmo },
			{ "OnRep_CombatState", &UCombatComponent::execOnRep_CombatState },
			{ "OnRep_EquippedWeapon", &UCombatComponent::execOnRep_EquippedWeapon },
			{ "ServerFire", &UCombatComponent::execServerFire },
			{ "ServerReload", &UCombatComponent::execServerReload },
			{ "ServerSetAiming", &UCombatComponent::execServerSetAiming },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "FinishReloading", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_FinishReloading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget = { "TraceHitTarget", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CombatComponent_eventMulticastFire_Parms, TraceHitTarget), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget_MetaData)) }; // 1613593159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "MulticastFire", nullptr, nullptr, sizeof(CombatComponent_eventMulticastFire_Parms), Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_MulticastFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_CarriedAmmo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_CombatState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_CombatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_EquippedWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ServerFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget = { "TraceHitTarget", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CombatComponent_eventServerFire_Parms, TraceHitTarget), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget_MetaData)) }; // 1613593159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerFire", nullptr, nullptr, sizeof(CombatComponent_eventServerFire_Parms), Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_ServerFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ServerReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_ServerReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics
	{
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((CombatComponent_eventServerSetAiming_Parms*)Obj)->bIsAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CombatComponent_eventServerSetAiming_Parms), &Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::NewProp_bIsAiming,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// RPC \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
		{ "ToolTip", "RPC \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerSetAiming", nullptr, nullptr, sizeof(CombatComponent_eventServerSetAiming_Parms), Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_ServerSetAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatComponent);
	UClass* Z_Construct_UClass_UCombatComponent_NoRegister()
	{
		return UCombatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCombatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAiming_MetaData[];
#endif
		static void NewProp_bAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomedFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomedFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarriedAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CarriedAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingARAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingARAmmo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CombatState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatComponent_FinishReloading, "FinishReloading" }, // 4177583743
		{ &Z_Construct_UFunction_UCombatComponent_MulticastFire, "MulticastFire" }, // 3595525436
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo, "OnRep_CarriedAmmo" }, // 412819254
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_CombatState, "OnRep_CombatState" }, // 2543887909
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon, "OnRep_EquippedWeapon" }, // 4218197083
		{ &Z_Construct_UFunction_UCombatComponent_ServerFire, "ServerFire" }, // 3756717372
		{ &Z_Construct_UFunction_UCombatComponent_ServerReload, "ServerReload" }, // 702792665
		{ &Z_Construct_UFunction_UCombatComponent_ServerSetAiming, "ServerSetAiming" }, // 156669088
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BlasterComponents/CombatComponent.h" },
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombatComponent, Character), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombatComponent, Controller), Z_Construct_UClass_ABlasterPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombatComponent, HUD), Z_Construct_UClass_ABlasterHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", "OnRep_EquippedWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombatComponent, EquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming_SetBit(void* Obj)
	{
		((UCombatComponent*)Obj)->bAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCombatComponent), &Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed = { "BaseWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombatComponent, BaseWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed = { "AimWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombatComponent, AimWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV = { "ZoomedFOV", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombatComponent, ZoomedFOV), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomInterpSpeed_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomInterpSpeed = { "ZoomInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombatComponent, ZoomInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo_MetaData[] = {
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xba \xef\xbf\xbd\xeb\xb7\xae\n" },
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xba \xef\xbf\xbd\xeb\xb7\xae" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo = { "CarriedAmmo", "OnRep_CarriedAmmo", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombatComponent, CarriedAmmo), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingARAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingARAmmo = { "StartingARAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombatComponent, StartingARAmmo), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingARAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingARAmmo_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_MetaData[] = {
		{ "ModuleRelativePath", "BlasterComponents/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState = { "CombatState", "OnRep_CombatState", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombatComponent, CombatState), Z_Construct_UEnum_Blaster_ECombatState, METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_MetaData)) }; // 4022952836
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingARAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatComponent_Statics::ClassParams = {
		&UCombatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCombatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatComponent()
	{
		if (!Z_Registration_Info_UClass_UCombatComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatComponent.OuterSingleton, Z_Construct_UClass_UCombatComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatComponent.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<UCombatComponent>()
	{
		return UCombatComponent::StaticClass();
	}

	void UCombatComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_EquippedWeapon(TEXT("EquippedWeapon"));
		static const FName Name_bAiming(TEXT("bAiming"));
		static const FName Name_CarriedAmmo(TEXT("CarriedAmmo"));
		static const FName Name_CombatState(TEXT("CombatState"));

		const bool bIsValid = true
			&& Name_EquippedWeapon == ClassReps[(int32)ENetFields_Private::EquippedWeapon].Property->GetFName()
			&& Name_bAiming == ClassReps[(int32)ENetFields_Private::bAiming].Property->GetFName()
			&& Name_CarriedAmmo == ClassReps[(int32)ENetFields_Private::CarriedAmmo].Property->GetFName()
			&& Name_CombatState == ClassReps[(int32)ENetFields_Private::CombatState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCombatComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatComponent);
	UCombatComponent::~UCombatComponent() {}
	struct Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatComponent, UCombatComponent::StaticClass, TEXT("UCombatComponent"), &Z_Registration_Info_UClass_UCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatComponent), 4232761530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_3851193655(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
