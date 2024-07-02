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
	 * Function UI_TechTree_ExpandButton.UI_TechTree_ExpandButton_C.HandleUnfocus
	 */
	struct UUI_TechTree_ExpandButton_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_TechTree_ExpandButton.UI_TechTree_ExpandButton_C.HandleFocus
	 */
	struct UUI_TechTree_ExpandButton_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_TechTree_ExpandButton.UI_TechTree_ExpandButton_C.Action
	 */
	struct UUI_TechTree_ExpandButton_C_Action_Params
	{	};

	/**
	 * Function UI_TechTree_ExpandButton.UI_TechTree_ExpandButton_C.Setup
	 */
	struct UUI_TechTree_ExpandButton_C_Setup_Params
	{	};

	/**
	 * Function UI_TechTree_ExpandButton.UI_TechTree_ExpandButton_C.SetButtonOpenState
	 */
	struct UUI_TechTree_ExpandButton_C_SetButtonOpenState_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree_ExpandButton.UI_TechTree_ExpandButton_C.Construct
	 */
	struct UUI_TechTree_ExpandButton_C_Construct_Params
	{	};

	/**
	 * Function UI_TechTree_ExpandButton.UI_TechTree_ExpandButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_TechTree_ExpandButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TechTree_ExpandButton.UI_TechTree_ExpandButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_TechTree_ExpandButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TechTree_ExpandButton.UI_TechTree_ExpandButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_TechTree_ExpandButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TechTree_ExpandButton.UI_TechTree_ExpandButton_C.OnActionReceived
	 */
	struct UUI_TechTree_ExpandButton_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_TechTree_ExpandButton.UI_TechTree_ExpandButton_C.ExecuteUbergraph_UI_TechTree_ExpandButton
	 */
	struct UUI_TechTree_ExpandButton_C_ExecuteUbergraph_UI_TechTree_ExpandButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree_ExpandButton.UI_TechTree_ExpandButton_C.OnReceivedFocus__DelegateSignature
	 */
	struct UUI_TechTree_ExpandButton_C_OnReceivedFocus__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree_ExpandButton.UI_TechTree_ExpandButton_C.OnButtonClicked__DelegateSignature
	 */
	struct UUI_TechTree_ExpandButton_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
