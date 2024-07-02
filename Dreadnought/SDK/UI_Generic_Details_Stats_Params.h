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
	 * Function UI_Generic_Details_Stats.UI_Generic_Details_Stats_C.AddShipStats
	 */
	struct UUI_Generic_Details_Stats_C_AddShipStats_Params
	{
	public:
		TArray<struct FYShipStatsEntry>                            shipStats;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Generic_Details_Stats.UI_Generic_Details_Stats_C.ClearStats
	 */
	struct UUI_Generic_Details_Stats_C_ClearStats_Params
	{	};

	/**
	 * Function UI_Generic_Details_Stats.UI_Generic_Details_Stats_C.SetShipStats
	 */
	struct UUI_Generic_Details_Stats_C_SetShipStats_Params
	{
	public:
		TArray<struct FYShipStatsEntry>                            shipStats;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Generic_Details_Stats.UI_Generic_Details_Stats_C.Construct
	 */
	struct UUI_Generic_Details_Stats_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_Details_Stats.UI_Generic_Details_Stats_C.ExecuteUbergraph_UI_Generic_Details_Stats
	 */
	struct UUI_Generic_Details_Stats_C_ExecuteUbergraph_UI_Generic_Details_Stats_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
