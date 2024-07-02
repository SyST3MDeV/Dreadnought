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
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.SetColorFromConfigColor
	 */
	struct UUI_Button_SelectFleet_C_SetColorFromConfigColor_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleInitialFocus
	 */
	struct UUI_Button_SelectFleet_C_HandleInitialFocus_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.CheckForManageFleetIndex
	 */
	struct UUI_Button_SelectFleet_C_CheckForManageFleetIndex_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.CheckForBattleBonusIndex
	 */
	struct UUI_Button_SelectFleet_C_CheckForBattleBonusIndex_Params
	{
	public:
		bool                                                       IsNavigatingUp;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.UnfocusSelectFleetButton
	 */
	struct UUI_Button_SelectFleet_C_UnfocusSelectFleetButton_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.FocusSelectFleetButton
	 */
	struct UUI_Button_SelectFleet_C_FocusSelectFleetButton_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.SetButtonStyle
	 */
	struct UUI_Button_SelectFleet_C_SetButtonStyle_Params
	{
	public:
		class UButton*                                             Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFocused;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleButtonFocusing
	 */
	struct UUI_Button_SelectFleet_C_HandleButtonFocusing_Params
	{
	public:
		int32_t                                                    ButtonToFocus;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PreviousIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleGranularUpInput
	 */
	struct UUI_Button_SelectFleet_C_HandleGranularUpInput_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleGranularDownInput
	 */
	struct UUI_Button_SelectFleet_C_HandleGranularDownInput_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.Action
	 */
	struct UUI_Button_SelectFleet_C_Action_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.SetManageFleetButtonVisibility
	 */
	struct UUI_Button_SelectFleet_C_SetManageFleetButtonVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.SetLockedState
	 */
	struct UUI_Button_SelectFleet_C_SetLockedState_Params
	{
	public:
		bool                                                       FleetIsLocked;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.OnPurchasePopupResult
	 */
	struct UUI_Button_SelectFleet_C_OnPurchasePopupResult_Params
	{
	public:
		class UUI_Button_Generic_C*                                SelectedButtonRef;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.Setup
	 */
	struct UUI_Button_SelectFleet_C_Setup_Params
	{
	public:
		EYFleetType                                                Selection;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleFocus
	 */
	struct UUI_Button_SelectFleet_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleUnfocus
	 */
	struct UUI_Button_SelectFleet_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.Construct
	 */
	struct UUI_Button_SelectFleet_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_SelectFleet_C_BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.BndEvt__ManageFleetButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Button_SelectFleet_C_BndEvt__ManageFleetButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_SelectFleet_C_BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_SelectFleet_C_BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.OnActionReceived
	 */
	struct UUI_Button_SelectFleet_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.ExecuteUbergraph_UI_Button_SelectFleet
	 */
	struct UUI_Button_SelectFleet_C_ExecuteUbergraph_UI_Button_SelectFleet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.OnReceivedFocus__DelegateSignature
	 */
	struct UUI_Button_SelectFleet_C_OnReceivedFocus__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.ActivateBattleReadinessClicked__DelegateSignature
	 */
	struct UUI_Button_SelectFleet_C_ActivateBattleReadinessClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.ManageFleetClicked__DelegateSignature
	 */
	struct UUI_Button_SelectFleet_C_ManageFleetClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.FleetClicked__DelegateSignature
	 */
	struct UUI_Button_SelectFleet_C_FleetClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
