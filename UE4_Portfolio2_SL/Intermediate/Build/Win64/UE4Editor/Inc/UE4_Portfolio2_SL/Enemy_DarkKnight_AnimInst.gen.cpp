// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/Enemy_DarkKnight_AnimInst.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_DarkKnight_AnimInst() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UEnemy_DarkKnight_AnimInst();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
	UE4_PORTFOLIO2_SL_API UEnum* Z_Construct_UEnum_UE4_Portfolio2_SL_EMONSTER_STATE();
// End Cross Module References
	DEFINE_FUNCTION(UEnemy_DarkKnight_AnimInst::execAnimNotify_InvinsibleEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_InvinsibleEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemy_DarkKnight_AnimInst::execAnimNotify_InvinsibleStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_InvinsibleStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemy_DarkKnight_AnimInst::execAnimNotify_PauseMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_PauseMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemy_DarkKnight_AnimInst::execAnimNotify_InitState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_InitState();
		P_NATIVE_END;
	}
	void UEnemy_DarkKnight_AnimInst::StaticRegisterNativesUEnemy_DarkKnight_AnimInst()
	{
		UClass* Class = UEnemy_DarkKnight_AnimInst::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_InitState", &UEnemy_DarkKnight_AnimInst::execAnimNotify_InitState },
			{ "AnimNotify_InvinsibleEnd", &UEnemy_DarkKnight_AnimInst::execAnimNotify_InvinsibleEnd },
			{ "AnimNotify_InvinsibleStart", &UEnemy_DarkKnight_AnimInst::execAnimNotify_InvinsibleStart },
			{ "AnimNotify_PauseMontage", &UEnemy_DarkKnight_AnimInst::execAnimNotify_PauseMontage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InitState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InitState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy_DarkKnight_AnimInst, nullptr, "AnimNotify_InitState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InitState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InitState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy_DarkKnight_AnimInst, nullptr, "AnimNotify_InvinsibleEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy_DarkKnight_AnimInst, nullptr, "AnimNotify_InvinsibleStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_PauseMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_PauseMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_PauseMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy_DarkKnight_AnimInst, nullptr, "AnimNotify_PauseMontage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_PauseMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_PauseMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_PauseMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_PauseMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_NoRegister()
	{
		return UEnemy_DarkKnight_AnimInst::StaticClass();
	}
	struct Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFight_MetaData[];
#endif
		static void NewProp_IsFight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAttacking_MetaData[];
#endif
		static void NewProp_IsAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockDown_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KnockDown_Time;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Cur_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cur_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Cur_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InitState, "AnimNotify_InitState" }, // 4113540051
		{ &Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleEnd, "AnimNotify_InvinsibleEnd" }, // 2135661077
		{ &Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleStart, "AnimNotify_InvinsibleStart" }, // 657960130
		{ &Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_PauseMontage, "AnimNotify_PauseMontage" }, // 2529349852
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Enemy_DarkKnight_AnimInst.h" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, CurrentSpeed), METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentDirection = { "CurrentDirection", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, CurrentDirection), METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurHP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurHP = { "CurHP", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, CurHP), METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsFight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	void Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsFight_SetBit(void* Obj)
	{
		((UEnemy_DarkKnight_AnimInst*)Obj)->IsFight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsFight = { "IsFight", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemy_DarkKnight_AnimInst), &Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsFight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsFight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsFight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	void Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsAttacking_SetBit(void* Obj)
	{
		((UEnemy_DarkKnight_AnimInst*)Obj)->IsAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemy_DarkKnight_AnimInst), &Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_KnockDown_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_KnockDown_Time = { "KnockDown_Time", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, KnockDown_Time), METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_KnockDown_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_KnockDown_Time_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_State = { "Cur_State", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Cur_State), Z_Construct_UEnum_UE4_Portfolio2_SL_EMONSTER_STATE, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsFight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_KnockDown_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_State,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemy_DarkKnight_AnimInst>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::ClassParams = {
		&UEnemy_DarkKnight_AnimInst::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemy_DarkKnight_AnimInst()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemy_DarkKnight_AnimInst, 3041390031);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UEnemy_DarkKnight_AnimInst>()
	{
		return UEnemy_DarkKnight_AnimInst::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemy_DarkKnight_AnimInst(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst, &UEnemy_DarkKnight_AnimInst::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UEnemy_DarkKnight_AnimInst"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemy_DarkKnight_AnimInst);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
