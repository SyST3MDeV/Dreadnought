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
	 * Function UI_Screen_Market.UI_Screen_Market_C.HandleOnTabChanged
	 */
	struct UUI_Screen_Market_C_HandleOnTabChanged_Params
	{
	public:
		EUI_Screen                                                 Selection;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.UpdateHints
	 */
	struct UUI_Screen_Market_C_UpdateHints_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.HandleTabClicked
	 */
	struct UUI_Screen_Market_C_HandleTabClicked_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.UnbindMarketItemEvents
	 */
	struct UUI_Screen_Market_C_UnbindMarketItemEvents_Params
	{
	public:
		class UUI_Market_Item_C*                                   MarketItemWidget;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.BindMarketItemEvents
	 */
	struct UUI_Screen_Market_C_BindMarketItemEvents_Params
	{
	public:
		class UUI_Market_Item_C*                                   MarketItemWidget;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.CreateNewMarketItem
	 */
	struct UUI_Screen_Market_C_CreateNewMarketItem_Params
	{
	public:
		struct FMarketItemUIData                                   MarketItemData;                                          // 0x0000(0x0250)  (Parm)
		class UUI_Market_Item_C*                                   MarketItemWidget;                                        // 0x0250(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.AddMarketItemToGrid
	 */
	struct UUI_Screen_Market_C_AddMarketItemToGrid_Params
	{
	public:
		struct FMarketItemUIData                                   MarketItemData;                                          // 0x0000(0x0250)  (Parm)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.ClearMarketGrid
	 */
	struct UUI_Screen_Market_C_ClearMarketGrid_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.IsCustomConversionItemFocused
	 */
	struct UUI_Screen_Market_C_IsCustomConversionItemFocused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.UpdateCurrencies
	 */
	struct UUI_Screen_Market_C_UpdateCurrencies_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.IsGPPanelPS4Focused
	 */
	struct UUI_Screen_Market_C_IsGPPanelPS4Focused_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.CanConvertXP
	 */
	struct UUI_Screen_Market_C_CanConvertXP_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.HandleAsyncXpConversionCompleted
	 */
	struct UUI_Screen_Market_C_HandleAsyncXpConversionCompleted_Params
	{
	public:
		int32_t                                                    NewParam;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.HandleAsyncXpConversionRequest
	 */
	struct UUI_Screen_Market_C_HandleAsyncXpConversionRequest_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.NavLeftIntoMarketGrid
	 */
	struct UUI_Screen_Market_C_NavLeftIntoMarketGrid_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.ScrollElitePanelDescriptionBox
	 */
	struct UUI_Screen_Market_C_ScrollElitePanelDescriptionBox_Params
	{
	public:
		bool                                                       ScrollUp;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2I8E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.SetEliteInfoPanelFocus
	 */
	struct UUI_Screen_Market_C_SetEliteInfoPanelFocus_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.ShowPanelIfNotVisible
	 */
	struct UUI_Screen_Market_C_ShowPanelIfNotVisible_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.NavigateToXPConversionScreen
	 */
	struct UUI_Screen_Market_C_NavigateToXPConversionScreen_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.NavigateToGPPurchaseScreen
	 */
	struct UUI_Screen_Market_C_NavigateToGPPurchaseScreen_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.NavigateToCurrencyScreen
	 */
	struct UUI_Screen_Market_C_NavigateToCurrencyScreen_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.NavigateToHeroShipScreen
	 */
	struct UUI_Screen_Market_C_NavigateToHeroShipScreen_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.NavigateToBundlesScreen
	 */
	struct UUI_Screen_Market_C_NavigateToBundlesScreen_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.NavigateToFeaturedScreen
	 */
	struct UUI_Screen_Market_C_NavigateToFeaturedScreen_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.IsPanelVisible
	 */
	struct UUI_Screen_Market_C_IsPanelVisible_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsVisible;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9XTO[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.NavToFirstSelectableCurrencyCategory
	 */
	struct UUI_Screen_Market_C_NavToFirstSelectableCurrencyCategory_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.ActionTertiary
	 */
	struct UUI_Screen_Market_C_ActionTertiary_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.Action
	 */
	struct UUI_Screen_Market_C_Action_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.UnfocusCurrentWidgetFromHover
	 */
	struct UUI_Screen_Market_C_UnfocusCurrentWidgetFromHover_Params
	{
	public:
		class UUI_DreadWidget*                                     NewWidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.SetCustomXpConversionFocus
	 */
	struct UUI_Screen_Market_C_SetCustomXpConversionFocus_Params
	{
	public:
		int32_t                                                    ShipItemIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9LPM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.SetAllXpConversionFocus
	 */
	struct UUI_Screen_Market_C_SetAllXpConversionFocus_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.SetupXpConversion
	 */
	struct UUI_Screen_Market_C_SetupXpConversion_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.NavRightIntoMarketGrid
	 */
	struct UUI_Screen_Market_C_NavRightIntoMarketGrid_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.NavUpMarketGrid
	 */
	struct UUI_Screen_Market_C_NavUpMarketGrid_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.NavDownMarketGrid
	 */
	struct UUI_Screen_Market_C_NavDownMarketGrid_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.NavRightMarketGrid
	 */
	struct UUI_Screen_Market_C_NavRightMarketGrid_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.SetFilterFocus
	 */
	struct UUI_Screen_Market_C_SetFilterFocus_Params
	{
	public:
		int32_t                                                    categoryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    filterIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.NavLeftMarketGrid
	 */
	struct UUI_Screen_Market_C_NavLeftMarketGrid_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.SetupBundleOrHeroPanel
	 */
	struct UUI_Screen_Market_C_SetupBundleOrHeroPanel_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.GetUpIndexCurrencyCategory
	 */
	struct UUI_Screen_Market_C_GetUpIndexCurrencyCategory_Params
	{
	public:
		int32_t                                                    CurrentIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.GetDownIndexCurrencyCategory
	 */
	struct UUI_Screen_Market_C_GetDownIndexCurrencyCategory_Params
	{
	public:
		int32_t                                                    CurrentIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.SetCurrencyCategoryFocus
	 */
	struct UUI_Screen_Market_C_SetCurrencyCategoryFocus_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K4ZN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.GetFirstSelectableCurrencyCategoryIndex
	 */
	struct UUI_Screen_Market_C_GetFirstSelectableCurrencyCategoryIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.SetupCurrencyPanel
	 */
	struct UUI_Screen_Market_C_SetupCurrencyPanel_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.OnGpToCreditsButtonSelected
	 */
	struct UUI_Screen_Market_C_OnGpToCreditsButtonSelected_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.EliteStatusPackMarketItemSelected
	 */
	struct UUI_Screen_Market_C_EliteStatusPackMarketItemSelected_Params
	{
	public:
		struct FMarketItemUIData                                   MarketItemData;                                          // 0x0000(0x0250)  (Parm)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.SetGpToCreditPopupData
	 */
	struct UUI_Screen_Market_C_SetGpToCreditPopupData_Params
	{
	public:
		class UGpToCreditsDetailsPopupData*                        PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FMarketItemUIData                                   MarketItemData;                                          // 0x0008(0x0250)  (Parm)
		bool                                                       IsGpPack;                                                // 0x0258(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7122[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.CreditPackMarketItemSelected
	 */
	struct UUI_Screen_Market_C_CreditPackMarketItemSelected_Params
	{
	public:
		struct FMarketItemUIData                                   MarketItemData;                                          // 0x0000(0x0250)  (Parm)
		bool                                                       IsGpPack;                                                // 0x0250(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6D8K[0x7];                                   // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.SetupFeaturedPanel
	 */
	struct UUI_Screen_Market_C_SetupFeaturedPanel_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.SetFeaturedGridFocus
	 */
	struct UUI_Screen_Market_C_SetFeaturedGridFocus_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EJ6L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.SetFeaturedFocus
	 */
	struct UUI_Screen_Market_C_SetFeaturedFocus_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0OKC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.UnfocusCurrentWidget
	 */
	struct UUI_Screen_Market_C_UnfocusCurrentWidget_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.HandleItemHovered
	 */
	struct UUI_Screen_Market_C_HandleItemHovered_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.SetMarketGridFocus
	 */
	struct UUI_Screen_Market_C_SetMarketGridFocus_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D2ZB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.SetWidgetFocus
	 */
	struct UUI_Screen_Market_C_SetWidgetFocus_Params
	{
	public:
		class UUI_DreadWidget*                                     Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.HandleNavRightSection
	 */
	struct UUI_Screen_Market_C_HandleNavRightSection_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.HandleNavLeftSection
	 */
	struct UUI_Screen_Market_C_HandleNavLeftSection_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.HandleNavDownGranular
	 */
	struct UUI_Screen_Market_C_HandleNavDownGranular_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.HandleNavUpGranular
	 */
	struct UUI_Screen_Market_C_HandleNavUpGranular_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.HandleNavRightGranular
	 */
	struct UUI_Screen_Market_C_HandleNavRightGranular_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.HandleNavLeftGranular
	 */
	struct UUI_Screen_Market_C_HandleNavLeftGranular_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.Setup
	 */
	struct UUI_Screen_Market_C_Setup_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.NavigateToCreditsPurchaseScreen
	 */
	struct UUI_Screen_Market_C_NavigateToCreditsPurchaseScreen_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.NavigateToElitePurchaseScreen
	 */
	struct UUI_Screen_Market_C_NavigateToElitePurchaseScreen_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.HandleInput
	 */
	struct UUI_Screen_Market_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.ConstructPurchasePopupButtons
	 */
	struct UUI_Screen_Market_C_ConstructPurchasePopupButtons_Params
	{
	public:
		struct FMarketItemUIData                                   MarketItemData;                                          // 0x0000(0x0250)  (Parm, OutParm, ReferenceParm)
		TArray<class UPopupButtonData*>                            PopupButtons;                                            // 0x0250(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.ShowInsufficientFundsPopup
	 */
	struct UUI_Screen_Market_C_ShowInsufficientFundsPopup_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.HandlePurchaseConfirmationPopupResult
	 */
	struct UUI_Screen_Market_C_HandlePurchaseConfirmationPopupResult_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.ShowPurchaseConfirmationPopup
	 */
	struct UUI_Screen_Market_C_ShowPurchaseConfirmationPopup_Params
	{
	public:
		struct FMarketItemUIData                                   PurchaseItemData;                                        // 0x0000(0x0250)  (Parm)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.UpdateMarketGridVisibility
	 */
	struct UUI_Screen_Market_C_UpdateMarketGridVisibility_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.HandleItemPreviewClick
	 */
	struct UUI_Screen_Market_C_HandleItemPreviewClick_Params
	{
	public:
		struct FMarketItemUIData                                   MarketItemData;                                          // 0x0000(0x0250)  (Parm)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.HandleItemDetailsClick
	 */
	struct UUI_Screen_Market_C_HandleItemDetailsClick_Params
	{
	public:
		struct FMarketItemUIData                                   MarketItemData;                                          // 0x0000(0x0250)  (Parm)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.HandleItemPurchaseClick
	 */
	struct UUI_Screen_Market_C_HandleItemPurchaseClick_Params
	{
	public:
		struct FMarketItemUIData                                   MarketItemData;                                          // 0x0000(0x0250)  (Parm)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.SetMarketGridData
	 */
	struct UUI_Screen_Market_C_SetMarketGridData_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.GetPanel
	 */
	struct UUI_Screen_Market_C_GetPanel_Params
	{
	public:
		class UClass*                                              PanelClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UUI_MarketSubPanel*                                  Panel;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.ShowPanel
	 */
	struct UUI_Screen_Market_C_ShowPanel_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6A92[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.SetupTabs
	 */
	struct UUI_Screen_Market_C_SetupTabs_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.Construct
	 */
	struct UUI_Screen_Market_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.OnTransitionIn
	 */
	struct UUI_Screen_Market_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.OnTransitionOut
	 */
	struct UUI_Screen_Market_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.TransitionInAnimComplete
	 */
	struct UUI_Screen_Market_C_TransitionInAnimComplete_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.TransitionOutAnimComplete
	 */
	struct UUI_Screen_Market_C_TransitionOutAnimComplete_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.BndEvt__TabList_K2Node_ComponentBoundEvent_0_OnTabClicked__DelegateSignature
	 */
	struct UUI_Screen_Market_C_BndEvt__TabList_K2Node_ComponentBoundEvent_0_OnTabClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.UpdateCurrentlyFocusedItem
	 */
	struct UUI_Screen_Market_C_UpdateCurrentlyFocusedItem_Params
	{
	public:
		class UUI_DreadScreen*                                     FocusedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.OnNavigationEvent
	 */
	struct UUI_Screen_Market_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.OnChangeTab
	 */
	struct UUI_Screen_Market_C_OnChangeTab_Params
	{
	public:
		EUI_Screen                                                 screen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.OnXpConversionDataUpdated
	 */
	struct UUI_Screen_Market_C_OnXpConversionDataUpdated_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.OnXpConversionRequested
	 */
	struct UUI_Screen_Market_C_OnXpConversionRequested_Params
	{	};

	/**
	 * Function UI_Screen_Market.UI_Screen_Market_C.ExecuteUbergraph_UI_Screen_Market
	 */
	struct UUI_Screen_Market_C_ExecuteUbergraph_UI_Screen_Market_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6DSL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
