// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlasterComponents/CombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize;
#ifdef BLASTER_CombatComponent_generated_h
#error "CombatComponent.generated.h already included, missing '#pragma once' in CombatComponent.h"
#endif
#define BLASTER_CombatComponent_generated_h

#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_SPARSE_DATA
#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_RPC_WRAPPERS \
	virtual void MulticastFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
	virtual void ServerFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
	virtual void ServerSetAiming_Implementation(bool bIsAiming); \
 \
	DECLARE_FUNCTION(execMulticastFire); \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execServerSetAiming);


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
	virtual void ServerFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
	virtual void ServerSetAiming_Implementation(bool bIsAiming); \
 \
	DECLARE_FUNCTION(execMulticastFire); \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execServerSetAiming);


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_ACCESSORS
#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_CALLBACK_WRAPPERS
#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedWeapon=NETFIELD_REP_START, \
		bAiming, \
		NETFIELD_REP_END=bAiming	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedWeapon=NETFIELD_REP_START, \
		bAiming, \
		NETFIELD_REP_END=bAiming	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponent(UCombatComponent&&); \
	NO_API UCombatComponent(const UCombatComponent&); \
public: \
	NO_API virtual ~UCombatComponent();


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponent(UCombatComponent&&); \
	NO_API UCombatComponent(const UCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatComponent) \
	NO_API virtual ~UCombatComponent();


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_11_PROLOG
#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_SPARSE_DATA \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_RPC_WRAPPERS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_ACCESSORS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_CALLBACK_WRAPPERS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_INCLASS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_SPARSE_DATA \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_ACCESSORS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_CALLBACK_WRAPPERS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class UCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
