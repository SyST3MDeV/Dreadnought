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
	 * Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.Setup
	 */
	struct UUI_MarketPanel_EliteStatus_C_Setup_Params
	{	};

	/**
	 * Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.SetBonusInfo
	 */
	struct UUI_MarketPanel_EliteStatus_C_SetBonusInfo_Params
	{	};

	/**
	 * Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.HandleInfoPanelUnfocus
	 */
	struct UUI_MarketPanel_EliteStatus_C_HandleInfoPanelUnfocus_Params
	{	};

	/**
	 * Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.HandleInfoPanelFocus
	 */
	struct UUI_MarketPanel_EliteStatus_C_HandleInfoPanelFocus_Params
	{	};

	/**
	 * Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.GetDebugGridData
	 */
	struct UUI_MarketPanel_EliteStatus_C_GetDebugGridData_Params
	{
	public:
		TArray<struct FYUIItemPurchaseData>                        Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.Construct
	 */
	struct UUI_MarketPanel_EliteStatus_C_Construct_Params
	{	};

	/**
	 * Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.OnShow
	 */
	struct UUI_MarketPanel_EliteStatus_C_OnShow_Params
	{	};

	/**
	 * Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.OnHide
	 */
	struct UUI_MarketPanel_EliteStatus_C_OnHide_Params
	{	};

	/**
	 * Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.HideComplete
	 */
	struct UUI_MarketPanel_EliteStatus_C_HideComplete_Params
	{	};

	/**
	 * Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.MarketDataUpdated
	 */
	struct UUI_MarketPanel_EliteStatus_C_MarketDataUpdated_Params
	{	};

	/**
	 * Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.ExecuteUbergraph_UI_MarketPanel_EliteStatus
	 */
	struct UUI_MarketPanel_EliteStatus_C_ExecuteUbergraph_UI_MarketPanel_EliteStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VE3O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
