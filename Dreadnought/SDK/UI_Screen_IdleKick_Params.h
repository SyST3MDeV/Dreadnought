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
	 * Function UI_Screen_IdleKick.UI_Screen_IdleKick_C.HandlePopupButtonSelected
	 */
	struct UUI_Screen_IdleKick_C_HandlePopupButtonSelected_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_IdleKick.UI_Screen_IdleKick_C.ShowDisconnectedPopup
	 */
	struct UUI_Screen_IdleKick_C_ShowDisconnectedPopup_Params
	{	};

	/**
	 * Function UI_Screen_IdleKick.UI_Screen_IdleKick_C.Setup
	 */
	struct UUI_Screen_IdleKick_C_Setup_Params
	{	};

	/**
	 * Function UI_Screen_IdleKick.UI_Screen_IdleKick_C.SetupNavigationLegend
	 */
	struct UUI_Screen_IdleKick_C_SetupNavigationLegend_Params
	{	};

	/**
	 * Function UI_Screen_IdleKick.UI_Screen_IdleKick_C.HandleNavigation
	 */
	struct UUI_Screen_IdleKick_C_HandleNavigation_Params
	{
	public:
		EUI_MenuActions                                            MenuAction;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_IdleKick.UI_Screen_IdleKick_C.Construct
	 */
	struct UUI_Screen_IdleKick_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_IdleKick.UI_Screen_IdleKick_C.OnTransitionIn
	 */
	struct UUI_Screen_IdleKick_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_IdleKick.UI_Screen_IdleKick_C.OnTransitionOut
	 */
	struct UUI_Screen_IdleKick_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_IdleKick.UI_Screen_IdleKick_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_IdleKick_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_IdleKick.UI_Screen_IdleKick_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_IdleKick_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_IdleKick.UI_Screen_IdleKick_C.OnNavigationEvent
	 */
	struct UUI_Screen_IdleKick_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_IdleKick.UI_Screen_IdleKick_C.ExecuteUbergraph_UI_Screen_IdleKick
	 */
	struct UUI_Screen_IdleKick_C_ExecuteUbergraph_UI_Screen_IdleKick_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FTOU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
