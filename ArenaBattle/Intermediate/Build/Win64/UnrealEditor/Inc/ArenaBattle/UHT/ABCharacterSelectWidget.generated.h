// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABCharacterSelectWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABCharacterSelectWidget_generated_h
#error "ABCharacterSelectWidget.generated.h already included, missing '#pragma once' in ABCharacterSelectWidget.h"
#endif
#define ARENABATTLE_ABCharacterSelectWidget_generated_h

#define FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_SPARSE_DATA
#define FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnConfirmClicked); \
	DECLARE_FUNCTION(execOnNextClicked); \
	DECLARE_FUNCTION(execOnPrevClicked); \
	DECLARE_FUNCTION(execNextCharacter);


#define FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnConfirmClicked); \
	DECLARE_FUNCTION(execOnNextClicked); \
	DECLARE_FUNCTION(execOnPrevClicked); \
	DECLARE_FUNCTION(execNextCharacter);


#define FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_ACCESSORS
#define FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABCharacterSelectWidget(); \
	friend struct Z_Construct_UClass_UABCharacterSelectWidget_Statics; \
public: \
	DECLARE_CLASS(UABCharacterSelectWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABCharacterSelectWidget)


#define FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUABCharacterSelectWidget(); \
	friend struct Z_Construct_UClass_UABCharacterSelectWidget_Statics; \
public: \
	DECLARE_CLASS(UABCharacterSelectWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABCharacterSelectWidget)


#define FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABCharacterSelectWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABCharacterSelectWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABCharacterSelectWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABCharacterSelectWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABCharacterSelectWidget(UABCharacterSelectWidget&&); \
	NO_API UABCharacterSelectWidget(const UABCharacterSelectWidget&); \
public: \
	NO_API virtual ~UABCharacterSelectWidget();


#define FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABCharacterSelectWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABCharacterSelectWidget(UABCharacterSelectWidget&&); \
	NO_API UABCharacterSelectWidget(const UABCharacterSelectWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABCharacterSelectWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABCharacterSelectWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABCharacterSelectWidget) \
	NO_API virtual ~UABCharacterSelectWidget();


#define FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_12_PROLOG
#define FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_SPARSE_DATA \
	FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_RPC_WRAPPERS \
	FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_ACCESSORS \
	FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_INCLASS \
	FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_SPARSE_DATA \
	FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_ACCESSORS \
	FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class UABCharacterSelectWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
