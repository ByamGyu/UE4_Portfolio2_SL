// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4_PORTFOLIO2_SL_define_generated_h
#error "define.generated.h already included, missing '#pragma once' in define.h"
#endif
#define UE4_PORTFOLIO2_SL_define_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_define_h


#define FOREACH_ENUM_EMONSTER_STATE(op) \
	op(EMONSTER_STATE::IDLE) \
	op(EMONSTER_STATE::MOVE) \
	op(EMONSTER_STATE::JUMP) \
	op(EMONSTER_STATE::FALL) \
	op(EMONSTER_STATE::GUARD) \
	op(EMONSTER_STATE::GUARD_MOVE) \
	op(EMONSTER_STATE::ATTACK) \
	op(EMONSTER_STATE::SPELL) \
	op(EMONSTER_STATE::IMPACT_WEAK) \
	op(EMONSTER_STATE::IMPACT_STRONG) \
	op(EMONSTER_STATE::GUARD_IMPACT_WEAK) \
	op(EMONSTER_STATE::GUARD_IMPACT_STRONG) \
	op(EMONSTER_STATE::DEAD) 

enum class EMONSTER_STATE : uint8;
template<> UE4_PORTFOLIO2_SL_API UEnum* StaticEnum<EMONSTER_STATE>();

#define FOREACH_ENUM_EPLAYER_STATE(op) \
	op(EPLAYER_STATE::IDLE) \
	op(EPLAYER_STATE::MOVE) \
	op(EPLAYER_STATE::JUMP) \
	op(EPLAYER_STATE::FALL) \
	op(EPLAYER_STATE::ROLL) \
	op(EPLAYER_STATE::GUARD) \
	op(EPLAYER_STATE::ATTACK) \
	op(EPLAYER_STATE::SPELL) \
	op(EPLAYER_STATE::IMPACT_WEAK) \
	op(EPLAYER_STATE::IMPACT_STRONG) \
	op(EPLAYER_STATE::GUARD_IMPACT_WEAK) \
	op(EPLAYER_STATE::GUARD_IMPACT_STRONG) \
	op(EPLAYER_STATE::GUARD_BREAK) \
	op(EPLAYER_STATE::KNOCK_DOWN) \
	op(EPLAYER_STATE::DEAD) \
	op(EPLAYER_STATE::PARRY) 

enum class EPLAYER_STATE : uint8;
template<> UE4_PORTFOLIO2_SL_API UEnum* StaticEnum<EPLAYER_STATE>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS