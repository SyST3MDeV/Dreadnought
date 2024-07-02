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
	 * Function UI_Button_CustomMatchFleet.UI_Button_CustomMatchFleet_C.Action
	 */
	struct UUI_Button_CustomMatchFleet_C_Action_Params
	{	};

	/**
	 * Function UI_Button_CustomMatchFleet.UI_Button_CustomMatchFleet_C.HandleUnfocus
	 */
	struct UUI_Button_CustomMatchFleet_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Button_CustomMatchFleet.UI_Button_CustomMatchFleet_C.HandleFocus
	 */
	struct UUI_Button_CustomMatchFleet_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Button_CustomMatchFleet.UI_Button_CustomMatchFleet_C.Setup
	 */
	struct UUI_Button_CustomMatchFleet_C_Setup_Params
	{
	public:
		EYFleetType                                                Selection;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_CustomMatchFleet.UI_Button_CustomMatchFleet_C.Construct
	 */
	struct UUI_Button_CustomMatchFleet_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_CustomMatchFleet.UI_Button_CustomMatchFleet_C.BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_CustomMatchFleet_C_BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_CustomMatchFleet.UI_Button_CustomMatchFleet_C.BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_CustomMatchFleet_C_BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_CustomMatchFleet.UI_Button_CustomMatchFleet_C.BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_CustomMatchFleet_C_BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_CustomMatchFleet.UI_Button_CustomMatchFleet_C.OnActionReceived
	 */
	struct UUI_Button_CustomMatchFleet_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Button_CustomMatchFleet.UI_Button_CustomMatchFleet_C.ExecuteUbergraph_UI_Button_CustomMatchFleet
	 */
	struct UUI_Button_CustomMatchFleet_C_ExecuteUbergraph_UI_Button_CustomMatchFleet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_CustomMatchFleet.UI_Button_CustomMatchFleet_C.OnFleetSelected__DelegateSignature
	 */
	struct UUI_Button_CustomMatchFleet_C_OnFleetSelected__DelegateSignature_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
