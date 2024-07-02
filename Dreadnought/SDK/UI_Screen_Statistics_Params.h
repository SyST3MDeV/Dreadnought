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
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.HandleGamepadGranularLeftRight
	 */
	struct UUI_Screen_Statistics_C_HandleGamepadGranularLeftRight_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.HandleGamepadGranularRight
	 */
	struct UUI_Screen_Statistics_C_HandleGamepadGranularRight_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.HandleGamepadGranularLeft
	 */
	struct UUI_Screen_Statistics_C_HandleGamepadGranularLeft_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.HandleGamepadGranularDown
	 */
	struct UUI_Screen_Statistics_C_HandleGamepadGranularDown_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.HandleGamepadGranularUp
	 */
	struct UUI_Screen_Statistics_C_HandleGamepadGranularUp_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.HandleDropdown
	 */
	struct UUI_Screen_Statistics_C_HandleDropdown_Params
	{
	public:
		bool                                                       DropdownOpen;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.SetPS4Legend
	 */
	struct UUI_Screen_Statistics_C_SetPS4Legend_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.HandleGamepadActionSecondary
	 */
	struct UUI_Screen_Statistics_C_HandleGamepadActionSecondary_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.HandleGamepadUpSection
	 */
	struct UUI_Screen_Statistics_C_HandleGamepadUpSection_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.HandleGamepadDownSection
	 */
	struct UUI_Screen_Statistics_C_HandleGamepadDownSection_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.SetupStatComparison
	 */
	struct UUI_Screen_Statistics_C_SetupStatComparison_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.GamepadNavSetup
	 */
	struct UUI_Screen_Statistics_C_GamepadNavSetup_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.WidgetSetup
	 */
	struct UUI_Screen_Statistics_C_WidgetSetup_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.HandleGamepadRightSection
	 */
	struct UUI_Screen_Statistics_C_HandleGamepadRightSection_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.HandleGamepadLeftSection
	 */
	struct UUI_Screen_Statistics_C_HandleGamepadLeftSection_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.HandleGamepadAction
	 */
	struct UUI_Screen_Statistics_C_HandleGamepadAction_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.UpdateCurrentlyFocusedItem
	 */
	struct UUI_Screen_Statistics_C_UpdateCurrentlyFocusedItem_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.HandleInput
	 */
	struct UUI_Screen_Statistics_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.HandleRibbonsButtonClicked
	 */
	struct UUI_Screen_Statistics_C_HandleRibbonsButtonClicked_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.SetupPlayerComparison
	 */
	struct UUI_Screen_Statistics_C_SetupPlayerComparison_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.SetupFlightLog
	 */
	struct UUI_Screen_Statistics_C_SetupFlightLog_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.OnTransitionIn
	 */
	struct UUI_Screen_Statistics_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.OnTransitionOut
	 */
	struct UUI_Screen_Statistics_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.TransitionInAnimComplete
	 */
	struct UUI_Screen_Statistics_C_TransitionInAnimComplete_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.TransitionOutAnimComplete
	 */
	struct UUI_Screen_Statistics_C_TransitionOutAnimComplete_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.HandleStatisticsUIUpdated
	 */
	struct UUI_Screen_Statistics_C_HandleStatisticsUIUpdated_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.OnNavigationEvent
	 */
	struct UUI_Screen_Statistics_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.Construct
	 */
	struct UUI_Screen_Statistics_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_40_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Screen_Statistics_C_BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_40_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Statistics.UI_Screen_Statistics_C.ExecuteUbergraph_UI_Screen_Statistics
	 */
	struct UUI_Screen_Statistics_C_ExecuteUbergraph_UI_Screen_Statistics_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SSVD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
