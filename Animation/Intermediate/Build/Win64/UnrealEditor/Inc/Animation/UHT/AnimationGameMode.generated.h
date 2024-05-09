// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATION_AnimationGameMode_generated_h
#error "AnimationGameMode.generated.h already included, missing '#pragma once' in AnimationGameMode.h"
#endif
#define ANIMATION_AnimationGameMode_generated_h

#define FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnimationGameMode(); \
	friend struct Z_Construct_UClass_AAnimationGameMode_Statics; \
public: \
	DECLARE_CLASS(AAnimationGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Animation"), ANIMATION_API) \
	DECLARE_SERIALIZER(AAnimationGameMode)


#define FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAnimationGameMode(AAnimationGameMode&&); \
	AAnimationGameMode(const AAnimationGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATION_API, AAnimationGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimationGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAnimationGameMode) \
	ANIMATION_API virtual ~AAnimationGameMode();


#define FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationGameMode_h_9_PROLOG
#define FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATION_API UClass* StaticClass<class AAnimationGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_UnrealEngineRepo_Animation_Source_Animation_AnimationGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
