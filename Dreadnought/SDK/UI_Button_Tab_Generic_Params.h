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
	 * Function UI_Button_Tab_Generic.UI_Button_Tab_Generic_C.Action
	 */
	struct UUI_Button_Tab_Generic_C_Action_Params
	{	};

	/**
	 * Function UI_Button_Tab_Generic.UI_Button_Tab_Generic_C.HandleUnfocus
	 */
	struct UUI_Button_Tab_Generic_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Button_Tab_Generic.UI_Button_Tab_Generic_C.HandleFocus
	 */
	struct UUI_Button_Tab_Generic_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Button_Tab_Generic.UI_Button_Tab_Generic_C.SetSelected
	 */
	struct UUI_Button_Tab_Generic_C_SetSelected_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Tab_Generic.UI_Button_Tab_Generic_C.Construct
	 */
	struct UUI_Button_Tab_Generic_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_Tab_Generic.UI_Button_Tab_Generic_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_Tab_Generic_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Tab_Generic.UI_Button_Tab_Generic_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_Tab_Generic_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Tab_Generic.UI_Button_Tab_Generic_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_Tab_Generic_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Tab_Generic.UI_Button_Tab_Generic_C.OnActionReceived
	 */
	struct UUI_Button_Tab_Generic_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Button_Tab_Generic.UI_Button_Tab_Generic_C.ExecuteUbergraph_UI_Button_Tab_Generic
	 */
	struct UUI_Button_Tab_Generic_C_ExecuteUbergraph_UI_Button_Tab_Generic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Tab_Generic.UI_Button_Tab_Generic_C.OnTabClicked__DelegateSignature
	 */
	struct UUI_Button_Tab_Generic_C_OnTabClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_Tab_Generic_C*                            source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Tab_Generic.UI_Button_Tab_Generic_C.OnReceivedFocused__DelegateSignature
	 */
	struct UUI_Button_Tab_Generic_C_OnReceivedFocused__DelegateSignature_Params
	{
	public:
		class UUI_Button_Tab_Generic_C*                            source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Tab_Generic.UI_Button_Tab_Generic_C.OnClicked__DelegateSignature
	 */
	struct UUI_Button_Tab_Generic_C_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
