// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABCharacterSelectWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterSelectWidget() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterSelectWidget();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterSelectWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	DEFINE_FUNCTION(UABCharacterSelectWidget::execOnConfirmClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConfirmClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCharacterSelectWidget::execOnNextClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNextClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCharacterSelectWidget::execOnPrevClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPrevClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABCharacterSelectWidget::execNextCharacter)
	{
		P_GET_UBOOL(Z_Param_bForward);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextCharacter(Z_Param_bForward);
		P_NATIVE_END;
	}
	void UABCharacterSelectWidget::StaticRegisterNativesUABCharacterSelectWidget()
	{
		UClass* Class = UABCharacterSelectWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NextCharacter", &UABCharacterSelectWidget::execNextCharacter },
			{ "OnConfirmClicked", &UABCharacterSelectWidget::execOnConfirmClicked },
			{ "OnNextClicked", &UABCharacterSelectWidget::execOnNextClicked },
			{ "OnPrevClicked", &UABCharacterSelectWidget::execOnPrevClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics
	{
		struct ABCharacterSelectWidget_eventNextCharacter_Parms
		{
			bool bForward;
		};
		static void NewProp_bForward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::NewProp_bForward_SetBit(void* Obj)
	{
		((ABCharacterSelectWidget_eventNextCharacter_Parms*)Obj)->bForward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::NewProp_bForward = { "bForward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABCharacterSelectWidget_eventNextCharacter_Parms), &Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::NewProp_bForward_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::NewProp_bForward,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_bForward", "true" },
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCharacterSelectWidget, nullptr, "NextCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::ABCharacterSelectWidget_eventNextCharacter_Parms), Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCharacterSelectWidget, nullptr, "OnConfirmClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCharacterSelectWidget, nullptr, "OnNextClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCharacterSelectWidget, nullptr, "OnPrevClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterSelectWidget);
	UClass* Z_Construct_UClass_UABCharacterSelectWidget_NoRegister()
	{
		return UABCharacterSelectWidget::StaticClass();
	}
	struct Z_Construct_UClass_UABCharacterSelectWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrevButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NextButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfirmButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABCharacterSelectWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABCharacterSelectWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABCharacterSelectWidget_NextCharacter, "NextCharacter" }, // 1908138359
		{ &Z_Construct_UFunction_UABCharacterSelectWidget_OnConfirmClicked, "OnConfirmClicked" }, // 275612470
		{ &Z_Construct_UFunction_UABCharacterSelectWidget_OnNextClicked, "OnNextClicked" }, // 2558145698
		{ &Z_Construct_UFunction_UABCharacterSelectWidget_OnPrevClicked, "OnPrevClicked" }, // 3390737
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterSelectWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ABCharacterSelectWidget.h" },
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_CurrentIndex_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABCharacterSelectWidget, CurrentIndex), METADATA_PARAMS(Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_CurrentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_CurrentIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_MaxIndex_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_MaxIndex = { "MaxIndex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABCharacterSelectWidget, MaxIndex), METADATA_PARAMS(Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_MaxIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_MaxIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_PrevButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_PrevButton = { "PrevButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABCharacterSelectWidget, PrevButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_PrevButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_PrevButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_NextButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_NextButton = { "NextButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABCharacterSelectWidget, NextButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_NextButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_NextButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_TextBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_TextBox = { "TextBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABCharacterSelectWidget, TextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_TextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_TextBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_ConfirmButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABCharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_ConfirmButton = { "ConfirmButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABCharacterSelectWidget, ConfirmButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_ConfirmButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_ConfirmButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABCharacterSelectWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_CurrentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_MaxIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_PrevButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_NextButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_TextBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterSelectWidget_Statics::NewProp_ConfirmButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABCharacterSelectWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterSelectWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterSelectWidget_Statics::ClassParams = {
		&UABCharacterSelectWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UABCharacterSelectWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSelectWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABCharacterSelectWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSelectWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABCharacterSelectWidget()
	{
		if (!Z_Registration_Info_UClass_UABCharacterSelectWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterSelectWidget.OuterSingleton, Z_Construct_UClass_UABCharacterSelectWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABCharacterSelectWidget.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<UABCharacterSelectWidget>()
	{
		return UABCharacterSelectWidget::StaticClass();
	}
	UABCharacterSelectWidget::UABCharacterSelectWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterSelectWidget);
	UABCharacterSelectWidget::~UABCharacterSelectWidget() {}
	struct Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterSelectWidget, UABCharacterSelectWidget::StaticClass, TEXT("UABCharacterSelectWidget"), &Z_Registration_Info_UClass_UABCharacterSelectWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterSelectWidget), 1043286778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_2921470880(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_UnrealEngineRepo_ArenaBattle_Source_ArenaBattle_Public_ABCharacterSelectWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
