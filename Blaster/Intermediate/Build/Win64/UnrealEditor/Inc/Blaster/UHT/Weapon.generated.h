// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Weapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BLASTER_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define BLASTER_Weapon_generated_h

#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_SPARSE_DATA
#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_ACCESSORS
#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	NO_API virtual ~AWeapon();


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon) \
	NO_API virtual ~AWeapon();


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_19_PROLOG
#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_SPARSE_DATA \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_RPC_WRAPPERS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_ACCESSORS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_INCLASS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_SPARSE_DATA \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_ACCESSORS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_INCLASS_NO_PURE_DECLS \
	FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Weapon_h


#define FOREACH_ENUM_EWEAPONSTATE(op) \
	op(EWeaponState::EWS_Initial) \
	op(EWeaponState::EWS_Equipped) \
	op(EWeaponState::EWS_Dropped) 

enum class EWeaponState : uint8;
template<> struct TIsUEnumClass<EWeaponState> { enum { Value = true }; };
template<> BLASTER_API UEnum* StaticEnum<EWeaponState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
