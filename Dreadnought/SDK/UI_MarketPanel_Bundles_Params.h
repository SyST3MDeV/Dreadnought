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
	 * Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.GetFilterWidget
	 */
	struct UUI_MarketPanel_Bundles_C_GetFilterWidget_Params
	{
	public:
		class UUI_Generic_AccordionFilter_C*                       Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.SetupFilters
	 */
	struct UUI_MarketPanel_Bundles_C_SetupFilters_Params
	{	};

	/**
	 * Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.UpdateMarketItemData
	 */
	struct UUI_MarketPanel_Bundles_C_UpdateMarketItemData_Params
	{	};

	/**
	 * Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.Construct
	 */
	struct UUI_MarketPanel_Bundles_C_Construct_Params
	{	};

	/**
	 * Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.OnShow
	 */
	struct UUI_MarketPanel_Bundles_C_OnShow_Params
	{	};

	/**
	 * Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.OnHide
	 */
	struct UUI_MarketPanel_Bundles_C_OnHide_Params
	{	};

	/**
	 * Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.HideComplete
	 */
	struct UUI_MarketPanel_Bundles_C_HideComplete_Params
	{	};

	/**
	 * Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.BndEvt__AccordionFilter_K2Node_ComponentBoundEvent_0_OnCategoryFilterClicked__DelegateSignature
	 */
	struct UUI_MarketPanel_Bundles_C_BndEvt__AccordionFilter_K2Node_ComponentBoundEvent_0_OnCategoryFilterClicked__DelegateSignature_Params
	{
	public:
		bool                                                       Checked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GJY3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CheckBoxIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    categoryIndex;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.MarketDataUpdated
	 */
	struct UUI_MarketPanel_Bundles_C_MarketDataUpdated_Params
	{	};

	/**
	 * Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.ExecuteUbergraph_UI_MarketPanel_Bundles
	 */
	struct UUI_MarketPanel_Bundles_C_ExecuteUbergraph_UI_MarketPanel_Bundles_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y0EZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
