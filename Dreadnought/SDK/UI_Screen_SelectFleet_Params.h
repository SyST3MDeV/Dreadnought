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
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.HandleInputPopup
	 */
	struct UUI_Screen_SelectFleet_C_HandleInputPopup_Params
	{
	public:
		EUI_MenuActions                                            Selection;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.SendFleetAnalytics
	 */
	struct UUI_Screen_SelectFleet_C_SendFleetAnalytics_Params
	{
	public:
		EYFleetType                                                Selection;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.SetupInitialFocus
	 */
	struct UUI_Screen_SelectFleet_C_SetupInitialFocus_Params
	{	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.HandleGranularRightInput
	 */
	struct UUI_Screen_SelectFleet_C_HandleGranularRightInput_Params
	{	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.HandleGranularLeftInput
	 */
	struct UUI_Screen_SelectFleet_C_HandleGranularLeftInput_Params
	{	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.HandleInput
	 */
	struct UUI_Screen_SelectFleet_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.HandleFocusUpdate
	 */
	struct UUI_Screen_SelectFleet_C_HandleFocusUpdate_Params
	{
	public:
		class UUI_DreadWidget*                                     FocusedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.InitializeFleetButton
	 */
	struct UUI_Screen_SelectFleet_C_InitializeFleetButton_Params
	{
	public:
		class UUI_Button_SelectFleet_C*                            FleetButtonWidget;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYFleetType                                                Fleet;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FleetIsLocked;                                           // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.FleetTypeSelected
	 */
	struct UUI_Screen_SelectFleet_C_FleetTypeSelected_Params
	{
	public:
		EYFleetType                                                FleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.Setup
	 */
	struct UUI_Screen_SelectFleet_C_Setup_Params
	{	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.Construct
	 */
	struct UUI_Screen_SelectFleet_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.OnTransitionIn
	 */
	struct UUI_Screen_SelectFleet_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.OnTransitionOut
	 */
	struct UUI_Screen_SelectFleet_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.TransitionInAnimComplete
	 */
	struct UUI_Screen_SelectFleet_C_TransitionInAnimComplete_Params
	{	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.TransitionOutAnimComplete
	 */
	struct UUI_Screen_SelectFleet_C_TransitionOutAnimComplete_Params
	{	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_4_FleetClicked__DelegateSignature
	 */
	struct UUI_Screen_SelectFleet_C_BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_4_FleetClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__RecruitButton_K2Node_ComponentBoundEvent_5_FleetClicked__DelegateSignature
	 */
	struct UUI_Screen_SelectFleet_C_BndEvt__RecruitButton_K2Node_ComponentBoundEvent_5_FleetClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__VeteranButton_K2Node_ComponentBoundEvent_6_FleetClicked__DelegateSignature
	 */
	struct UUI_Screen_SelectFleet_C_BndEvt__VeteranButton_K2Node_ComponentBoundEvent_6_FleetClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_7_ManageFleetClicked__DelegateSignature
	 */
	struct UUI_Screen_SelectFleet_C_BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_7_ManageFleetClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__RecruitButton_K2Node_ComponentBoundEvent_8_ManageFleetClicked__DelegateSignature
	 */
	struct UUI_Screen_SelectFleet_C_BndEvt__RecruitButton_K2Node_ComponentBoundEvent_8_ManageFleetClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__VeteranButton_K2Node_ComponentBoundEvent_9_ManageFleetClicked__DelegateSignature
	 */
	struct UUI_Screen_SelectFleet_C_BndEvt__VeteranButton_K2Node_ComponentBoundEvent_9_ManageFleetClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.OnNavigationEvent
	 */
	struct UUI_Screen_SelectFleet_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.ExecuteUbergraph_UI_Screen_SelectFleet
	 */
	struct UUI_Screen_SelectFleet_C_ExecuteUbergraph_UI_Screen_SelectFleet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PKC5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
