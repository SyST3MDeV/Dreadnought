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
	 * Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.GetIsFocused
	 */
	struct UUI_MarketPanel_Currency_ConvertAllButton_C_GetIsFocused_Params
	{
	public:
		bool                                                       IsFocused;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.Action
	 */
	struct UUI_MarketPanel_Currency_ConvertAllButton_C_Action_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.HandleUnfocus
	 */
	struct UUI_MarketPanel_Currency_ConvertAllButton_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.HandleFocus
	 */
	struct UUI_MarketPanel_Currency_ConvertAllButton_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.Setup
	 */
	struct UUI_MarketPanel_Currency_ConvertAllButton_C_Setup_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.Construct
	 */
	struct UUI_MarketPanel_Currency_ConvertAllButton_C_Construct_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.BndEvt__ConvertAllNowButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_ConvertAllButton_C_BndEvt__ConvertAllNowButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_Generic_C*                                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.BndEvt__ConvertAllNowButton_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_ConvertAllButton_C_BndEvt__ConvertAllNowButton_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature_Params
	{
	public:
		class UUI_Button_Generic_C*                                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.OnActionReceived
	 */
	struct UUI_MarketPanel_Currency_ConvertAllButton_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.ExecuteUbergraph_UI_MarketPanel_Currency_ConvertAllButton
	 */
	struct UUI_MarketPanel_Currency_ConvertAllButton_C_ExecuteUbergraph_UI_MarketPanel_Currency_ConvertAllButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0KXF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.OnItemUnfocused__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_ConvertAllButton_C_OnItemUnfocused__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.OnItemFocused__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_ConvertAllButton_C_OnItemFocused__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.OnItemHovered__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_ConvertAllButton_C_OnItemHovered__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.OnItemClicked__DelegateSignature
	 */
	struct UUI_MarketPanel_Currency_ConvertAllButton_C_OnItemClicked__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
