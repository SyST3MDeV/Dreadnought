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
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.SetPS4Legend
	 */
	struct UUI_Screen_Ribbons_C_SetPS4Legend_Params
	{	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.GranularLeft
	 */
	struct UUI_Screen_Ribbons_C_GranularLeft_Params
	{	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.GranularUp
	 */
	struct UUI_Screen_Ribbons_C_GranularUp_Params
	{	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.GranularRight
	 */
	struct UUI_Screen_Ribbons_C_GranularRight_Params
	{	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.GranularDown
	 */
	struct UUI_Screen_Ribbons_C_GranularDown_Params
	{	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.UpdateCurrentFocus
	 */
	struct UUI_Screen_Ribbons_C_UpdateCurrentFocus_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JIM6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.UnfocusCurrentItem
	 */
	struct UUI_Screen_Ribbons_C_UnfocusCurrentItem_Params
	{	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.GetInitialRibbon
	 */
	struct UUI_Screen_Ribbons_C_GetInitialRibbon_Params
	{
	public:
		class UUI_Button_Ribbons_C*                                Item;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.HandleInput
	 */
	struct UUI_Screen_Ribbons_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.RibbonFocused
	 */
	struct UUI_Screen_Ribbons_C_RibbonFocused_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7DJ3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.SetupList
	 */
	struct UUI_Screen_Ribbons_C_SetupList_Params
	{	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.Construct
	 */
	struct UUI_Screen_Ribbons_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.OnTransitionIn
	 */
	struct UUI_Screen_Ribbons_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.OnTransitionOut
	 */
	struct UUI_Screen_Ribbons_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_Ribbons_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_Ribbons_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.UpdateCurrentlyFocusedItem
	 */
	struct UUI_Screen_Ribbons_C_UpdateCurrentlyFocusedItem_Params
	{
	public:
		class UUI_DreadWidget*                                     FocusedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.OnNavigationEvent
	 */
	struct UUI_Screen_Ribbons_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Ribbons.UI_Screen_Ribbons_C.ExecuteUbergraph_UI_Screen_Ribbons
	 */
	struct UUI_Screen_Ribbons_C_ExecuteUbergraph_UI_Screen_Ribbons_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MFNC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
