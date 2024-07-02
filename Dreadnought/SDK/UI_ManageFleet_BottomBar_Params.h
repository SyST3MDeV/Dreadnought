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
	 * Function UI_ManageFleet_BottomBar.UI_ManageFleet_BottomBar_C.SetFocus
	 */
	struct UUI_ManageFleet_BottomBar_C_SetFocus_Params
	{
	public:
		bool                                                       IsFocused;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ManageFleet_BottomBar.UI_ManageFleet_BottomBar_C.SetTier
	 */
	struct UUI_ManageFleet_BottomBar_C_SetTier_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ManageFleet_BottomBar.UI_ManageFleet_BottomBar_C.Construct
	 */
	struct UUI_ManageFleet_BottomBar_C_Construct_Params
	{	};

	/**
	 * Function UI_ManageFleet_BottomBar.UI_ManageFleet_BottomBar_C.ExecuteUbergraph_UI_ManageFleet_BottomBar
	 */
	struct UUI_ManageFleet_BottomBar_C_ExecuteUbergraph_UI_ManageFleet_BottomBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
