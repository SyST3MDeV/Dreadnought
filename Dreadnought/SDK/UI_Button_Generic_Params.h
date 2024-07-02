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
	 * Function UI_Button_Generic.UI_Button_Generic_C.SetCurrencyTypeAndAmountFloat
	 */
	struct UUI_Button_Generic_C_SetCurrencyTypeAndAmountFloat_Params
	{
	public:
		EYUICurrency                                               currencyType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H49U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrencyAmount;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              CurrencyCode;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.HandleUnfocus
	 */
	struct UUI_Button_Generic_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.HandleFocus
	 */
	struct UUI_Button_Generic_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.Action
	 */
	struct UUI_Button_Generic_C_Action_Params
	{	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.SetFocus
	 */
	struct UUI_Button_Generic_C_SetFocus_Params
	{	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.SetCurrencyTypeAndAmount
	 */
	struct UUI_Button_Generic_C_SetCurrencyTypeAndAmount_Params
	{
	public:
		EYUICurrency                                               currencyType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KEOG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CurrencyAmount;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.SetCurrencyEnabled
	 */
	struct UUI_Button_Generic_C_SetCurrencyEnabled_Params
	{
	public:
		bool                                                       CurrencyDisplayEnabled;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.SetLabelPadding
	 */
	struct UUI_Button_Generic_C_SetLabelPadding_Params
	{	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.SetButtonLabel
	 */
	struct UUI_Button_Generic_C_SetButtonLabel_Params
	{
	public:
		class FText                                                label;                                                   // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.SetButtonColor
	 */
	struct UUI_Button_Generic_C_SetButtonColor_Params
	{
	public:
		struct FLinearColor                                        NewColor;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.Construct
	 */
	struct UUI_Button_Generic_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.OnSynchronizeProperties
	 */
	struct UUI_Button_Generic_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.BndEvt__GenericButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_Generic_C_BndEvt__GenericButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.BndEvt__GenericButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_Generic_C_BndEvt__GenericButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.OnActionReceived
	 */
	struct UUI_Button_Generic_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.ExecuteUbergraph_UI_Button_Generic
	 */
	struct UUI_Button_Generic_C_ExecuteUbergraph_UI_Button_Generic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.OnHovered__DelegateSignature
	 */
	struct UUI_Button_Generic_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UUI_Button_Generic_C*                                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.OnClicked__DelegateSignature
	 */
	struct UUI_Button_Generic_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_Generic_C*                                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Generic.UI_Button_Generic_C.OnButtonClicked__DelegateSignature
	 */
	struct UUI_Button_Generic_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
