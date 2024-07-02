#pragma once

/**
 * Name: Dreadnought
 * Version: Latest
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_ManageFleet_BattleBonus.UI_ManageFleet_BattleBonus_C.SetTierColor
	 */
	struct UUI_ManageFleet_BattleBonus_C_SetTierColor_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ManageFleet_BattleBonus.UI_ManageFleet_BattleBonus_C.Construct
	 */
	struct UUI_ManageFleet_BattleBonus_C_Construct_Params
	{	};

	/**
	 * Function UI_ManageFleet_BattleBonus.UI_ManageFleet_BattleBonus_C.ExecuteUbergraph_UI_ManageFleet_BattleBonus
	 */
	struct UUI_ManageFleet_BattleBonus_C_ExecuteUbergraph_UI_ManageFleet_BattleBonus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3MIE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
