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
	 * Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.HandleUnfocus
	 */
	struct UUI_SelectFleet_BattleBonus_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.HandleFocus
	 */
	struct UUI_SelectFleet_BattleBonus_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.HandleTimerExpired
	 */
	struct UUI_SelectFleet_BattleBonus_C_HandleTimerExpired_Params
	{	};

	/**
	 * Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.SetupColor
	 */
	struct UUI_SelectFleet_BattleBonus_C_SetupColor_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.SetCooldownTime
	 */
	struct UUI_SelectFleet_BattleBonus_C_SetCooldownTime_Params
	{
	public:
		float                                                      RemainingTime;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.SetupBonusValues
	 */
	struct UUI_SelectFleet_BattleBonus_C_SetupBonusValues_Params
	{	};

	/**
	 * Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.Setup
	 */
	struct UUI_SelectFleet_BattleBonus_C_Setup_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y8TS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.Construct
	 */
	struct UUI_SelectFleet_BattleBonus_C_Construct_Params
	{	};

	/**
	 * Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.OnFleetUpdated
	 */
	struct UUI_SelectFleet_BattleBonus_C_OnFleetUpdated_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.ExecuteUbergraph_UI_SelectFleet_BattleBonus
	 */
	struct UUI_SelectFleet_BattleBonus_C_ExecuteUbergraph_UI_SelectFleet_BattleBonus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KR5T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.ActivateBattleBonusDispatcher__DelegateSignature
	 */
	struct UUI_SelectFleet_BattleBonus_C_ActivateBattleBonusDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
