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
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.HandleInputTextChanged
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_HandleInputTextChanged_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.XpToConvertTextFieldChanged
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_XpToConvertTextFieldChanged_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.CapInputText
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_CapInputText_Params
	{
	public:
		class FText                                                InputText;                                               // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.UpdateXpToConvert
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_UpdateXpToConvert_Params
	{
	public:
		int32_t                                                    amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.Action
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_Action_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.HandleUnfocus
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.HandleFocus
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.BroadcastAndSetTextForXp
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_BroadcastAndSetTextForXp_Params
	{
	public:
		int32_t                                                    XpToConvert;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.XpToConvertTextFieldCommitted
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_XpToConvertTextFieldCommitted_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0UTU[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.GetXpToConvert
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_GetXpToConvert_Params
	{
	public:
		int32_t                                                    XpToConvert;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.Setup
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_Setup_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.Construct
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_Construct_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.BndEvt__RootButton_K2Node_ComponentBoundEvent_135_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_BndEvt__RootButton_K2Node_ComponentBoundEvent_135_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.BndEvt__RootButton_K2Node_ComponentBoundEvent_147_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_BndEvt__RootButton_K2Node_ComponentBoundEvent_147_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.OnActionReceived
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.BndEvt__CustomXpConversion_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_BndEvt__CustomXpConversion_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.ExecuteUbergraph_UI_MarketPanel_Currency_ShipXPConversionItem
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_ExecuteUbergraph_UI_MarketPanel_Currency_ShipXPConversionItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GK02[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.OnItemUnfocused__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_OnItemUnfocused__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.OnItemFocused__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_OnItemFocused__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.OnItemHovered__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_OnItemHovered__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.OnCustomShipXpToConvertUpdated__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_ShipXPConversionItem_C_OnCustomShipXpToConvertUpdated__DelegateSignature_Params
	{
	public:
		struct FRequestXpConversionShip                            RequestData;                                             // 0x0000(0x0008)  (Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
