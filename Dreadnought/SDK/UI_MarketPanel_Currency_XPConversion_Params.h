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
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ShowNotEnoughGPPopup
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_ShowNotEnoughGPPopup_Params
	{
	public:
		bool                                                       IsCustomXpConversion;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YCK5[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPopupStackData                                     PopupStackData;                                          // 0x0010(0x0090)  (Parm, OutParm)
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ShowInvalidCustomXpAmountPopup
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_ShowInvalidCustomXpAmountPopup_Params
	{
	public:
		struct FPopupStackData                                     PopupStackData;                                          // 0x0000(0x0090)  (Parm, OutParm)
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleConvertCustomConfirmationPopupResult
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_HandleConvertCustomConfirmationPopupResult_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleConvertAllConfirmationPopupResult
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_HandleConvertAllConfirmationPopupResult_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ShowConfirmationPopup
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_ShowConfirmationPopup_Params
	{
	public:
		int32_t                                                    PurchaseAmountGP;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QAR9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_Popup_Generic_C*                                 GenericPopup;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ConstructConfirmationPopupButtons
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_ConstructConfirmationPopupButtons_Params
	{
	public:
		class AFrontendHUD*                                        FrontendHUD;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PurchaseAmountGP;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N4OF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UPopupButtonData*>                            PopupButtons;                                            // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ScrollCustomXpWidgetIntoView
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_ScrollCustomXpWidgetIntoView_Params
	{
	public:
		class UUI_DreadWidget*                                     Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleCustomXpUnfocus
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_HandleCustomXpUnfocus_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleCustomXpFocus
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_HandleCustomXpFocus_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleAllXpUnfocus
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_HandleAllXpUnfocus_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleAllXpFocus
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_HandleAllXpFocus_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.GetWidgets
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_GetWidgets_Params
	{
	public:
		class UUI_MarketPanel_Currency_ConvertAllButton_C*         ConvertAllButton;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UUI_MarketPanel_Currency_ShipXPConversionItem_C*> ShipWidgets;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.Setup
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_Setup_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleConvertXpCustomButtonClicked
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_HandleConvertXpCustomButtonClicked_Params
	{
	public:
		int32_t                                                    Unused;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KK54[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleConvertAllButtonClicked
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_HandleConvertAllButtonClicked_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U7E3[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleCustomXPConversionFromShipItemUpdated
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_HandleCustomXPConversionFromShipItemUpdated_Params
	{
	public:
		struct FRequestXpConversionShip                            RequestData;                                             // 0x0000(0x0008)  (Parm)
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.CalculateTotalCustomXPConversion
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_CalculateTotalCustomXPConversion_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.CheckForPlayerCurrency
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_CheckForPlayerCurrency_Params
	{
	public:
		struct FUiXpConversionData                                 XpConversionData;                                        // 0x0000(0x0028)  (Parm)
		bool                                                       ShowConversionError;                                     // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WV0C[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.SetData
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_SetData_Params
	{
	public:
		struct FUiXpConversionData                                 XpConversionData;                                        // 0x0000(0x0028)  (Parm)
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.BndEvt__ConvertAllShipXPButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_BndEvt__ConvertAllShipXPButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.BndEvt__ConvertAllShipXPButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_BndEvt__ConvertAllShipXPButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.BndEvt__CustomConversionButton_K2Node_ComponentBoundEvent_129_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_BndEvt__CustomConversionButton_K2Node_ComponentBoundEvent_129_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.BndEvt__CustomConversionButton_K2Node_ComponentBoundEvent_154_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_BndEvt__CustomConversionButton_K2Node_ComponentBoundEvent_154_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.Construct
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_Construct_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.AllXpChildButtonFocused
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_AllXpChildButtonFocused_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.AllXpChildButtonUnfocused
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_AllXpChildButtonUnfocused_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.CustomXpChildButtonFocused
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_CustomXpChildButtonFocused_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.CustomXpChildButtonUnfocused
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_CustomXpChildButtonUnfocused_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ExecuteUbergraph_UI_MarketPanel_Currency_XPConversion
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_ExecuteUbergraph_UI_MarketPanel_Currency_XPConversion_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_506Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.RequestXpConversion__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_RequestXpConversion__DelegateSignature_Params
	{
	public:
		TArray<struct FRequestXpConversionShip>                    shipsToConvertXpFrom;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.RequestXpConvertAllShips__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_XPConversion_C_RequestXpConvertAllShips__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
