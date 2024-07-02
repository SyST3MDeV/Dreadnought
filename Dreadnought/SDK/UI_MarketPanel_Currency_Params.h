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
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.InitCurrentPanelIndex
	 */
	struct UUI_MarketPanel_Currency_C_InitCurrentPanelIndex_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.HideMarketGrid
	 */
	struct UUI_MarketPanel_Currency_C_HideMarketGrid_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.ShowMarketGrid
	 */
	struct UUI_MarketPanel_Currency_C_ShowMarketGrid_Params
	{
	public:
		ECurrencyMarketPanels                                      currencyPanel;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B27U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.GetXpConversionWidget
	 */
	struct UUI_MarketPanel_Currency_C_GetXpConversionWidget_Params
	{
	public:
		class UUI_MarketPanel_Currency_XPConversion_C*             Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.GetCurrencyCategoryWidgets
	 */
	struct UUI_MarketPanel_Currency_C_GetCurrencyCategoryWidgets_Params
	{
	public:
		TArray<class UUI_Market_CategoryButton_C*>                 Widgets;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.UpdateTabs
	 */
	struct UUI_MarketPanel_Currency_C_UpdateTabs_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.SetCurrentPanel
	 */
	struct UUI_MarketPanel_Currency_C_SetCurrentPanel_Params
	{
	public:
		ECurrencyMarketPanels                                      index;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.GetPanelTitle
	 */
	struct UUI_MarketPanel_Currency_C_GetPanelTitle_Params
	{
	public:
		ECurrencyMarketPanels                                      PanelEnum;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M5IV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                title;                                                   // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.GetDebugGridData
	 */
	struct UUI_MarketPanel_Currency_C_GetDebugGridData_Params
	{
	public:
		TArray<struct FYUIItemPurchaseData>                        Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.Construct
	 */
	struct UUI_MarketPanel_Currency_C_Construct_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.OnShow
	 */
	struct UUI_MarketPanel_Currency_C_OnShow_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.OnHide
	 */
	struct UUI_MarketPanel_Currency_C_OnHide_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.HideComplete
	 */
	struct UUI_MarketPanel_Currency_C_HideComplete_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.MarketDataUpdated
	 */
	struct UUI_MarketPanel_Currency_C_MarketDataUpdated_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.BndEvt__CPPacksButton_K2Node_ComponentBoundEvent_0_OnLoadoutButtonClicked__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_C_BndEvt__CPPacksButton_K2Node_ComponentBoundEvent_0_OnLoadoutButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_Market_CategoryButton_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.BndEvt__GPPacksButton_K2Node_ComponentBoundEvent_1_OnLoadoutButtonClicked__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_C_BndEvt__GPPacksButton_K2Node_ComponentBoundEvent_1_OnLoadoutButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_Market_CategoryButton_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.BndEvt__XPConversionButton_K2Node_ComponentBoundEvent_2_OnLoadoutButtonClicked__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_C_BndEvt__XPConversionButton_K2Node_ComponentBoundEvent_2_OnLoadoutButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_Market_CategoryButton_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.HandleRequestConvertAllXPShips
	 */
	struct UUI_MarketPanel_Currency_C_HandleRequestConvertAllXPShips_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.HandleRequestXPConversion
	 */
	struct UUI_MarketPanel_Currency_C_HandleRequestXPConversion_Params
	{
	public:
		TArray<struct FRequestXpConversionShip>                    RequestData;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.BndEvt__GpStoreButton_PS4_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_C_BndEvt__GpStoreButton_PS4_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.UpdateXpConversionScreenData
	 */
	struct UUI_MarketPanel_Currency_C_UpdateXpConversionScreenData_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.ExecuteUbergraph_UI_MarketPanel_Currency
	 */
	struct UUI_MarketPanel_Currency_C_ExecuteUbergraph_UI_MarketPanel_Currency_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FAZH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
