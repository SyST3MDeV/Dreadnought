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
	 * Function UI_MarketBundleDetails_ModuleList_2.UI_MarketBundleDetails_ModuleList_1_C.SetStats
	 */
	struct UUI_MarketBundleDetails_ModuleList_1_C_SetStats_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_ModuleList_2.UI_MarketBundleDetails_ModuleList_1_C.SetData
	 */
	struct UUI_MarketBundleDetails_ModuleList_1_C_SetData_Params
	{
	public:
		class FText                                                label;                                                   // 0x0000(0x0018)  (Parm)
		class FString                                              iconPath;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    tier;                                                    // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JW4J[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MarketBundleDetails_ModuleList_2.UI_MarketBundleDetails_ModuleList_1_C.Construct
	 */
	struct UUI_MarketBundleDetails_ModuleList_1_C_Construct_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_ModuleList_2.UI_MarketBundleDetails_ModuleList_1_C.ExecuteUbergraph_UI_MarketBundleDetails_ModuleList_2
	 */
	struct UUI_MarketBundleDetails_ModuleList_1_C_ExecuteUbergraph_UI_MarketBundleDetails_ModuleList_2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
