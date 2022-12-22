// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/define.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodedefine() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UEnum* Z_Construct_UEnum_UE4_Portfolio2_SL_EMONSTER_STATE();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
	UE4_PORTFOLIO2_SL_API UEnum* Z_Construct_UEnum_UE4_Portfolio2_SL_EPLAYER_STATE();
// End Cross Module References
	static UEnum* EMONSTER_STATE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE4_Portfolio2_SL_EMONSTER_STATE, Z_Construct_UPackage__Script_UE4_Portfolio2_SL(), TEXT("EMONSTER_STATE"));
		}
		return Singleton;
	}
	template<> UE4_PORTFOLIO2_SL_API UEnum* StaticEnum<EMONSTER_STATE>()
	{
		return EMONSTER_STATE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMONSTER_STATE(EMONSTER_STATE_StaticEnum, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("EMONSTER_STATE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE4_Portfolio2_SL_EMONSTER_STATE_Hash() { return 4005646075U; }
	UEnum* Z_Construct_UEnum_UE4_Portfolio2_SL_EMONSTER_STATE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMONSTER_STATE"), 0, Get_Z_Construct_UEnum_UE4_Portfolio2_SL_EMONSTER_STATE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMONSTER_STATE::IDLE", (int64)EMONSTER_STATE::IDLE },
				{ "EMONSTER_STATE::SLEEP_STAND", (int64)EMONSTER_STATE::SLEEP_STAND },
				{ "EMONSTER_STATE::SLEEP_SITDOWN", (int64)EMONSTER_STATE::SLEEP_SITDOWN },
				{ "EMONSTER_STATE::MOVE", (int64)EMONSTER_STATE::MOVE },
				{ "EMONSTER_STATE::JUMP", (int64)EMONSTER_STATE::JUMP },
				{ "EMONSTER_STATE::FALL", (int64)EMONSTER_STATE::FALL },
				{ "EMONSTER_STATE::GUARD", (int64)EMONSTER_STATE::GUARD },
				{ "EMONSTER_STATE::ATTACK", (int64)EMONSTER_STATE::ATTACK },
				{ "EMONSTER_STATE::RANGE_ATTACK", (int64)EMONSTER_STATE::RANGE_ATTACK },
				{ "EMONSTER_STATE::RANGE_AIM", (int64)EMONSTER_STATE::RANGE_AIM },
				{ "EMONSTER_STATE::RANGE_FIRE", (int64)EMONSTER_STATE::RANGE_FIRE },
				{ "EMONSTER_STATE::SPELL", (int64)EMONSTER_STATE::SPELL },
				{ "EMONSTER_STATE::IMPACT_WEAK", (int64)EMONSTER_STATE::IMPACT_WEAK },
				{ "EMONSTER_STATE::IMPACT_STRONG", (int64)EMONSTER_STATE::IMPACT_STRONG },
				{ "EMONSTER_STATE::GUARD_IMPACT_WEAK", (int64)EMONSTER_STATE::GUARD_IMPACT_WEAK },
				{ "EMONSTER_STATE::GUARD_IMPACT_STRONG", (int64)EMONSTER_STATE::GUARD_IMPACT_STRONG },
				{ "EMONSTER_STATE::GUARD_BREAK", (int64)EMONSTER_STATE::GUARD_BREAK },
				{ "EMONSTER_STATE::KNOCK_DOWN", (int64)EMONSTER_STATE::KNOCK_DOWN },
				{ "EMONSTER_STATE::DEAD", (int64)EMONSTER_STATE::DEAD },
				{ "EMONSTER_STATE::PARRY", (int64)EMONSTER_STATE::PARRY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ATTACK.Name", "EMONSTER_STATE::ATTACK" },
				{ "BlueprintType", "true" },
				{ "DEAD.Name", "EMONSTER_STATE::DEAD" },
				{ "FALL.Name", "EMONSTER_STATE::FALL" },
				{ "GUARD.Name", "EMONSTER_STATE::GUARD" },
				{ "GUARD_BREAK.Name", "EMONSTER_STATE::GUARD_BREAK" },
				{ "GUARD_IMPACT_STRONG.Name", "EMONSTER_STATE::GUARD_IMPACT_STRONG" },
				{ "GUARD_IMPACT_WEAK.Name", "EMONSTER_STATE::GUARD_IMPACT_WEAK" },
				{ "IDLE.Name", "EMONSTER_STATE::IDLE" },
				{ "IMPACT_STRONG.Name", "EMONSTER_STATE::IMPACT_STRONG" },
				{ "IMPACT_WEAK.Name", "EMONSTER_STATE::IMPACT_WEAK" },
				{ "JUMP.Name", "EMONSTER_STATE::JUMP" },
				{ "KNOCK_DOWN.Name", "EMONSTER_STATE::KNOCK_DOWN" },
				{ "ModuleRelativePath", "define.h" },
				{ "MOVE.Name", "EMONSTER_STATE::MOVE" },
				{ "PARRY.Name", "EMONSTER_STATE::PARRY" },
				{ "RANGE_AIM.Name", "EMONSTER_STATE::RANGE_AIM" },
				{ "RANGE_ATTACK.Name", "EMONSTER_STATE::RANGE_ATTACK" },
				{ "RANGE_FIRE.Name", "EMONSTER_STATE::RANGE_FIRE" },
				{ "SLEEP_SITDOWN.Name", "EMONSTER_STATE::SLEEP_SITDOWN" },
				{ "SLEEP_STAND.Name", "EMONSTER_STATE::SLEEP_STAND" },
				{ "SPELL.Name", "EMONSTER_STATE::SPELL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
				nullptr,
				"EMONSTER_STATE",
				"EMONSTER_STATE",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPLAYER_STATE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE4_Portfolio2_SL_EPLAYER_STATE, Z_Construct_UPackage__Script_UE4_Portfolio2_SL(), TEXT("EPLAYER_STATE"));
		}
		return Singleton;
	}
	template<> UE4_PORTFOLIO2_SL_API UEnum* StaticEnum<EPLAYER_STATE>()
	{
		return EPLAYER_STATE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPLAYER_STATE(EPLAYER_STATE_StaticEnum, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("EPLAYER_STATE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE4_Portfolio2_SL_EPLAYER_STATE_Hash() { return 1741691929U; }
	UEnum* Z_Construct_UEnum_UE4_Portfolio2_SL_EPLAYER_STATE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPLAYER_STATE"), 0, Get_Z_Construct_UEnum_UE4_Portfolio2_SL_EPLAYER_STATE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPLAYER_STATE::IDLE", (int64)EPLAYER_STATE::IDLE },
				{ "EPLAYER_STATE::MOVE", (int64)EPLAYER_STATE::MOVE },
				{ "EPLAYER_STATE::JUMP", (int64)EPLAYER_STATE::JUMP },
				{ "EPLAYER_STATE::FALL", (int64)EPLAYER_STATE::FALL },
				{ "EPLAYER_STATE::ROLL", (int64)EPLAYER_STATE::ROLL },
				{ "EPLAYER_STATE::GUARD", (int64)EPLAYER_STATE::GUARD },
				{ "EPLAYER_STATE::ATTACK_LIGHT", (int64)EPLAYER_STATE::ATTACK_LIGHT },
				{ "EPLAYER_STATE::ATTACK_HEAVY", (int64)EPLAYER_STATE::ATTACK_HEAVY },
				{ "EPLAYER_STATE::ATTACK_KICK", (int64)EPLAYER_STATE::ATTACK_KICK },
				{ "EPLAYER_STATE::ATTACK_GUARDBREAK", (int64)EPLAYER_STATE::ATTACK_GUARDBREAK },
				{ "EPLAYER_STATE::SPELL", (int64)EPLAYER_STATE::SPELL },
				{ "EPLAYER_STATE::IMPACT_WEAK", (int64)EPLAYER_STATE::IMPACT_WEAK },
				{ "EPLAYER_STATE::IMPACT_STRONG", (int64)EPLAYER_STATE::IMPACT_STRONG },
				{ "EPLAYER_STATE::GUARD_IMPACT_WEAK", (int64)EPLAYER_STATE::GUARD_IMPACT_WEAK },
				{ "EPLAYER_STATE::GUARD_IMPACT_STRONG", (int64)EPLAYER_STATE::GUARD_IMPACT_STRONG },
				{ "EPLAYER_STATE::GUARD_BREAK", (int64)EPLAYER_STATE::GUARD_BREAK },
				{ "EPLAYER_STATE::KNOCK_DOWN", (int64)EPLAYER_STATE::KNOCK_DOWN },
				{ "EPLAYER_STATE::DEAD", (int64)EPLAYER_STATE::DEAD },
				{ "EPLAYER_STATE::PARRY", (int64)EPLAYER_STATE::PARRY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ATTACK_GUARDBREAK.Name", "EPLAYER_STATE::ATTACK_GUARDBREAK" },
				{ "ATTACK_HEAVY.Name", "EPLAYER_STATE::ATTACK_HEAVY" },
				{ "ATTACK_KICK.Name", "EPLAYER_STATE::ATTACK_KICK" },
				{ "ATTACK_LIGHT.Name", "EPLAYER_STATE::ATTACK_LIGHT" },
				{ "BlueprintType", "true" },
				{ "DEAD.Name", "EPLAYER_STATE::DEAD" },
				{ "FALL.Name", "EPLAYER_STATE::FALL" },
				{ "GUARD.Name", "EPLAYER_STATE::GUARD" },
				{ "GUARD_BREAK.Name", "EPLAYER_STATE::GUARD_BREAK" },
				{ "GUARD_IMPACT_STRONG.Name", "EPLAYER_STATE::GUARD_IMPACT_STRONG" },
				{ "GUARD_IMPACT_WEAK.Name", "EPLAYER_STATE::GUARD_IMPACT_WEAK" },
				{ "IDLE.Name", "EPLAYER_STATE::IDLE" },
				{ "IMPACT_STRONG.Name", "EPLAYER_STATE::IMPACT_STRONG" },
				{ "IMPACT_WEAK.Name", "EPLAYER_STATE::IMPACT_WEAK" },
				{ "JUMP.Name", "EPLAYER_STATE::JUMP" },
				{ "KNOCK_DOWN.Name", "EPLAYER_STATE::KNOCK_DOWN" },
				{ "ModuleRelativePath", "define.h" },
				{ "MOVE.Name", "EPLAYER_STATE::MOVE" },
				{ "PARRY.Name", "EPLAYER_STATE::PARRY" },
				{ "ROLL.Name", "EPLAYER_STATE::ROLL" },
				{ "SPELL.Name", "EPLAYER_STATE::SPELL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
				nullptr,
				"EPLAYER_STATE",
				"EPLAYER_STATE",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
