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
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SwapToFromShipTab
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_SwapToFromShipTab_Params
	{
	public:
		bool                                                       IsShipLayout;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5YY8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetDescriptionText
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_SetDescriptionText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.ShowShipTabs
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_ShowShipTabs_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupElitePanel
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_SetupElitePanel_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupTab
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_SetupTab_Params
	{
	public:
		class UUI_Market_BundleDetails_TabIcon_C*                  Tab;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMarketBundleInfoTabs                                      Type;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YY6B[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.GetScrollBox
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_GetScrollBox_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1RHF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UScrollBox*                                          ScrollboxWidget;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.GetNumTabs
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_GetNumTabs_Params
	{
	public:
		int32_t                                                    Return;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.HasTabs
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_HasTabs_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.GetTab
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_GetTab_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PBRU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_Market_BundleDetails_TabIcon_C*                  TabWidget;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.Setup
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_Setup_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.GetPanelAssociatedWithTab
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_GetPanelAssociatedWithTab_Params
	{
	public:
		class UUI_Market_BundleDetails_TabIcon_C*                  Tab;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UBorder*                                             Panel;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.PopulatePanelsContent
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_PopulatePanelsContent_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.PopulatePanelAndScrollboxArrays
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_PopulatePanelAndScrollboxArrays_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.ResetUI
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_ResetUI_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.HandleTabSelected
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_HandleTabSelected_Params
	{
	public:
		class UUI_Market_BundleDetails_TabIcon_C*                  Tab;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupAllTabs
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_SetupAllTabs_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupStatsPanel
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_SetupStatsPanel_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.ShowShipLayout
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_ShowShipLayout_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupCharacterItem
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_SetupCharacterItem_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupLorePanel
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_SetupLorePanel_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupLoadoutItem
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_SetupLoadoutItem_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetMarketItemData
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_SetMarketItemData_Params
	{
	public:
		struct FYMenuItemData                                      itemData;                                                // 0x0000(0x0088)  (Parm)
		bool                                                       IsItemEquippable;                                        // 0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.Construct
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_Construct_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.ExecuteUbergraph_UI_MarketBundleDetails_InfoPanel
	 */
	struct UUI_MarketBundleDetails_InfoPanel_C_ExecuteUbergraph_UI_MarketBundleDetails_InfoPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
