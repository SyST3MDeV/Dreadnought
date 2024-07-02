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
	 * Function UI_Button_PageDot.UI_Button_PageDot_C.SetSelected
	 */
	struct UUI_Button_PageDot_C_SetSelected_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_PageDot.UI_Button_PageDot_C.OnSynchronizeProperties
	 */
	struct UUI_Button_PageDot_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_Button_PageDot.UI_Button_PageDot_C.Construct
	 */
	struct UUI_Button_PageDot_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_PageDot.UI_Button_PageDot_C.BndEvt__DotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_PageDot_C_BndEvt__DotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_PageDot.UI_Button_PageDot_C.ExecuteUbergraph_UI_Button_PageDot
	 */
	struct UUI_Button_PageDot_C_ExecuteUbergraph_UI_Button_PageDot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_PageDot.UI_Button_PageDot_C.OnClick__DelegateSignature
	 */
	struct UUI_Button_PageDot_C_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    DotIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
