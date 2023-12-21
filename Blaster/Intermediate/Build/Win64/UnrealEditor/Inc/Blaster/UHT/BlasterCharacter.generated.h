// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/BlasterCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeapon;
#ifdef BLASTER_BlasterCharacter_generated_h
#error "BlasterCharacter.generated.h already included, missing '#pragma once' in BlasterCharacter.h"
#endif
#define BLASTER_BlasterCharacter_generated_h

#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_SPARSE_DATA
#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_RPC_WRAPPERS \
	virtual void ServerEquipButtonPressed_Implementation(); \
	virtual void MulticastHit_Implementation(); \
 \
	DECLARE_FUNCTION(execServerEquipButtonPressed); \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon); \
	DECLARE_FUNCTION(execMulticastHit);


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerEquipButtonPressed_Implementation(); \
	virtual void MulticastHit_Implementation(); \
 \
	DECLARE_FUNCTION(execServerEquipButtonPressed); \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon); \
	DECLARE_FUNCTION(execMulticastHit);


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_ACCESSORS
#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_CALLBACK_WRAPPERS
#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterCharacter(); \
	friend struct Z_Construct_UClass_ABlasterCharacter_Statics; \
public: \
	DECLARE_CLASS(ABlasterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(ABlasterCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABlasterCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OverlappingWeapon=NETFIELD_REP_START, \
		NETFIELD_REP_END=OverlappingWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABlasterCharacter(); \
	friend struct Z_Construct_UClass_ABlasterCharacter_Statics; \
public: \
	DECLARE_CLASS(ABlasterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(ABlasterCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABlasterCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OverlappingWeapon=NETFIELD_REP_START, \
		NETFIELD_REP_END=OverlappingWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlasterCharacter(ABlasterCharacter&&); \
	NO_API ABlasterCharacter(const ABlasterCharacter&); \
public: \
	NO_API virtual ~ABlasterCharacter();


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlasterCharacter(ABlasterCharacter&&); \
	NO_API ABlasterCharacter(const ABlasterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlasterCharacter) \
	NO_API virtual ~ABlasterCharacter();


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_13_PROLOG
#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_SPARSE_DATA \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_RPC_WRAPPERS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_ACCESSORS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_CALLBACK_WRAPPERS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_INCLASS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_SPARSE_DATA \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_ACCESSORS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_CALLBACK_WRAPPERS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class ABlasterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
