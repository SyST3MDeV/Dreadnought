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
	 * Function UI_MarketBundleDetails_Stat.UI_MarketBundleDetails_Stat_C.SetItemStats
	 */
	struct UUI_MarketBundleDetails_Stat_C_SetItemStats_Params
	{
	public:
		TArray<struct FYUIInformationPanelStatData>                stats;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
