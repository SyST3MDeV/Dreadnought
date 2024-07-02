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
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.BackAction
	 */
	struct UUI_Popup_LoginStreak_C_BackAction_Params
	{	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.SetInitialWidgetFocus
	 */
	struct UUI_Popup_LoginStreak_C_SetInitialWidgetFocus_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.NavRightGranular
	 */
	struct UUI_Popup_LoginStreak_C_NavRightGranular_Params
	{	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.NavLeftGranular
	 */
	struct UUI_Popup_LoginStreak_C_NavLeftGranular_Params
	{	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.Setup
	 */
	struct UUI_Popup_LoginStreak_C_Setup_Params
	{	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.UnfocusCurrentWidget
	 */
	struct UUI_Popup_LoginStreak_C_UnfocusCurrentWidget_Params
	{
	public:
		class UUI_DreadWidget*                                     NewWidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.SetWidgetFocus
	 */
	struct UUI_Popup_LoginStreak_C_SetWidgetFocus_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.HandleItemHovered
	 */
	struct UUI_Popup_LoginStreak_C_HandleItemHovered_Params
	{
	public:
		class UUI_Button_Generic_C*                                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.HandleInput
	 */
	struct UUI_Popup_LoginStreak_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            Input;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.HandlePopupData
	 */
	struct UUI_Popup_LoginStreak_C_HandlePopupData_Params
	{
	public:
		class ULoginStreakPopupData*                               PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.ButtonSelected
	 */
	struct UUI_Popup_LoginStreak_C_ButtonSelected_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_48QK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.AddButtons
	 */
	struct UUI_Popup_LoginStreak_C_AddButtons_Params
	{
	public:
		TArray<class UPopupButtonData*>                            ButtonData;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.Construct
	 */
	struct UUI_Popup_LoginStreak_C_Construct_Params
	{	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.OnTransitionIn
	 */
	struct UUI_Popup_LoginStreak_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.OnTransitionOut
	 */
	struct UUI_Popup_LoginStreak_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.TransitionInAnimationComplete
	 */
	struct UUI_Popup_LoginStreak_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.TransitionOutAnimationComplete
	 */
	struct UUI_Popup_LoginStreak_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.OnPopupDataSet
	 */
	struct UUI_Popup_LoginStreak_C_OnPopupDataSet_Params
	{
	public:
		class UPopupData*                                          PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.OnNavigationEvent
	 */
	struct UUI_Popup_LoginStreak_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.ExecuteUbergraph_UI_Popup_LoginStreak
	 */
	struct UUI_Popup_LoginStreak_C_ExecuteUbergraph_UI_Popup_LoginStreak_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YIDY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Popup_LoginStreak.UI_Popup_LoginStreak_C.OnButtonSelected__DelegateSignature
	 */
	struct UUI_Popup_LoginStreak_C_OnButtonSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
