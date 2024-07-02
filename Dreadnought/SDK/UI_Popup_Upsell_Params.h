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
	 * Function UI_Popup_Upsell.UI_Popup_Upsell_C.CreateUpsellItem
	 */
	struct UUI_Popup_Upsell_C_CreateUpsellItem_Params
	{
	public:
		struct FMarketItemUIData                                   MarketItemUIData;                                        // 0x0000(0x0250)  (Parm)
		class UUI_Market_Item_C*                                   marketItem;                                              // 0x0250(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_Upsell.UI_Popup_Upsell_C.CheckToClosePopup
	 */
	struct UUI_Popup_Upsell_C_CheckToClosePopup_Params
	{
	public:
		EYPurchaseResult                                           purchaseResult;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_Upsell.UI_Popup_Upsell_C.Setup
	 */
	struct UUI_Popup_Upsell_C_Setup_Params
	{
	public:
		class UObject*                                             PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_Upsell.UI_Popup_Upsell_C.GetRelevantPlayerCurrency
	 */
	struct UUI_Popup_Upsell_C_GetRelevantPlayerCurrency_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_Upsell.UI_Popup_Upsell_C.GetPreviousItemCost
	 */
	struct UUI_Popup_Upsell_C_GetPreviousItemCost_Params
	{
	public:
		int32_t                                                    ItemCost;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_Upsell.UI_Popup_Upsell_C.CloseCurrentPopup
	 */
	struct UUI_Popup_Upsell_C_CloseCurrentPopup_Params
	{	};

	/**
	 * Function UI_Popup_Upsell.UI_Popup_Upsell_C.GetPreviousItemCurrencyType
	 */
	struct UUI_Popup_Upsell_C_GetPreviousItemCurrencyType_Params
	{
	public:
		EYCurrency                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_Upsell.UI_Popup_Upsell_C.AttemptPurchase
	 */
	struct UUI_Popup_Upsell_C_AttemptPurchase_Params
	{
	public:
		struct FMarketItemUIData                                   itemData;                                                // 0x0000(0x0250)  (Parm)
	};

	/**
	 * Function UI_Popup_Upsell.UI_Popup_Upsell_C.CreateUpsellItems
	 */
	struct UUI_Popup_Upsell_C_CreateUpsellItems_Params
	{
	public:
		TArray<struct FMarketItemUIData>                           UpsellItemData;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Popup_Upsell.UI_Popup_Upsell_C.OnPopupDataSet
	 */
	struct UUI_Popup_Upsell_C_OnPopupDataSet_Params
	{
	public:
		class UPopupData*                                          PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_Upsell.UI_Popup_Upsell_C.BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Popup_Upsell_C_BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_Upsell.UI_Popup_Upsell_C.OnMarketPurchaseComplete
	 */
	struct UUI_Popup_Upsell_C_OnMarketPurchaseComplete_Params
	{
	public:
		EYPurchaseResult                                           purchaseResult;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_Upsell.UI_Popup_Upsell_C.ExecuteUbergraph_UI_Popup_Upsell
	 */
	struct UUI_Popup_Upsell_C_ExecuteUbergraph_UI_Popup_Upsell_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2ON5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
