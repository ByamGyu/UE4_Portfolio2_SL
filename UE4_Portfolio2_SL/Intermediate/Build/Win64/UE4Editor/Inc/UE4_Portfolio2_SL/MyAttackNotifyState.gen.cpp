// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/MyAttackNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAttackNotifyState() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UMyAttackNotifyState_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UMyAttackNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AEnemy_Base_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMyAttackNotifyState::execGiveDamage)
	{
		P_GET_OBJECT(APlayerCharacter,Z_Param__Attacker);
		P_GET_OBJECT(AEnemy_Base,Z_Param__DamageTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GiveDamage(Z_Param__Attacker,Z_Param__DamageTo);
		P_NATIVE_END;
	}
	void UMyAttackNotifyState::StaticRegisterNativesUMyAttackNotifyState()
	{
		UClass* Class = UMyAttackNotifyState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GiveDamage", &UMyAttackNotifyState::execGiveDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyAttackNotifyState_GiveDamage_Statics
	{
		struct MyAttackNotifyState_eventGiveDamage_Parms
		{
			APlayerCharacter* _Attacker;
			AEnemy_Base* _DamageTo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Attacker;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__DamageTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyAttackNotifyState_GiveDamage_Statics::NewProp__Attacker = { "_Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAttackNotifyState_eventGiveDamage_Parms, _Attacker), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyAttackNotifyState_GiveDamage_Statics::NewProp__DamageTo = { "_DamageTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAttackNotifyState_eventGiveDamage_Parms, _DamageTo), Z_Construct_UClass_AEnemy_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyAttackNotifyState_GiveDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAttackNotifyState_GiveDamage_Statics::NewProp__Attacker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAttackNotifyState_GiveDamage_Statics::NewProp__DamageTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAttackNotifyState_GiveDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyAttackNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAttackNotifyState_GiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAttackNotifyState, nullptr, "GiveDamage", nullptr, nullptr, sizeof(MyAttackNotifyState_eventGiveDamage_Parms), Z_Construct_UFunction_UMyAttackNotifyState_GiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAttackNotifyState_GiveDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyAttackNotifyState_GiveDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAttackNotifyState_GiveDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyAttackNotifyState_GiveDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyAttackNotifyState_GiveDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyAttackNotifyState_NoRegister()
	{
		return UMyAttackNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UMyAttackNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arrHittedResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrHittedResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrHittedResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyAttackNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyAttackNotifyState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyAttackNotifyState_GiveDamage, "GiveDamage" }, // 1639734929
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAttackNotifyState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MyAttackNotifyState.h" },
		{ "ModuleRelativePath", "MyAttackNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_arrHittedResults_Inner = { "arrHittedResults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_arrHittedResults_MetaData[] = {
		{ "ModuleRelativePath", "MyAttackNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_arrHittedResults = { "arrHittedResults", nullptr, (EPropertyFlags)0x0040000000000010, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyAttackNotifyState, arrHittedResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_arrHittedResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_arrHittedResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_AttackDamage_MetaData[] = {
		{ "Comment", "// ???? ???? ?\xdf\xba? ?????? ???? ?\xe8\xbf\xad\n" },
		{ "ModuleRelativePath", "MyAttackNotifyState.h" },
		{ "ToolTip", "???? ???? ?\xdf\xba? ?????? ???? ?\xe8\xbf\xad" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0040000000000010, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyAttackNotifyState, AttackDamage), METADATA_PARAMS(Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_AttackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_AttackDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyAttackNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_arrHittedResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_arrHittedResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_AttackDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyAttackNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAttackNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyAttackNotifyState_Statics::ClassParams = {
		&UMyAttackNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyAttackNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyAttackNotifyState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyAttackNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyAttackNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyAttackNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyAttackNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyAttackNotifyState, 2571351229);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UMyAttackNotifyState>()
	{
		return UMyAttackNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyAttackNotifyState(Z_Construct_UClass_UMyAttackNotifyState, &UMyAttackNotifyState::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UMyAttackNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAttackNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
