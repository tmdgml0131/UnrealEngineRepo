// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATION_AnimationCharacter_generated_h
#error "AnimationCharacter.generated.h already included, missing '#pragma once' in AnimationCharacter.h"
#endif
#define ANIMATION_AnimationCharacter_generated_h

#define FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnimationCharacter(); \
	friend struct Z_Construct_UClass_AAnimationCharacter_Statics; \
public: \
	DECLARE_CLASS(AAnimationCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Animation"), NO_API) \
	DECLARE_SERIALIZER(AAnimationCharacter)


#define FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAnimationCharacter(AAnimationCharacter&&); \
	AAnimationCharacter(const AAnimationCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimationCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimationCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAnimationCharacter) \
	NO_API virtual ~AAnimationCharacter();


#define FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationCharacter_h_18_PROLOG
#define FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATION_API UClass* StaticClass<class AAnimationCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
