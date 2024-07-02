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
	 * Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.HandleTimerExpired
	 */
	struct UUI_Generic_BattleBonusHeader_C_HandleTimerExpired_Params
	{	};

	/**
	 * Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.ShowBattleBonusTimer
	 */
	struct UUI_Generic_BattleBonusHeader_C_ShowBattleBonusTimer_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.SetBattleBonusTime
	 */
	struct UUI_Generic_BattleBonusHeader_C_SetBattleBonusTime_Params
	{
	public:
		float                                                      RemainingTime;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.Construct
	 */
	struct UUI_Generic_BattleBonusHeader_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.ExecuteUbergraph_UI_Generic_BattleBonusHeader
	 */
	struct UUI_Generic_BattleBonusHeader_C_ExecuteUbergraph_UI_Generic_BattleBonusHeader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PUBH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.TimerExpired__DelegateSignature
	 */
	struct UUI_Generic_BattleBonusHeader_C_TimerExpired__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
