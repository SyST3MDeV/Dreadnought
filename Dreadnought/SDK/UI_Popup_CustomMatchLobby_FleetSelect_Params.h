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
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.HandleLeftRight
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_HandleLeftRight_Params
	{
	public:
		int32_t                                                    NextIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NPVX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.CancelAction
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_CancelAction_Params
	{
	public:
		int32_t                                                    InputPin;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HKYX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.HandleInput
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.HandlePopupData
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_HandlePopupData_Params
	{
	public:
		class UCustomMatchLobbyFleetSelectPopupData*               PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.Construct
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_Construct_Params
	{	};

	/**
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.OnTransitionIn
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.OnTransitionOut
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.TransitionInAnimationComplete
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.TransitionOutAnimationComplete
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.OnPopupDataSet
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_OnPopupDataSet_Params
	{
	public:
		class UPopupData*                                          PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.BndEvt__RecruitButton_K2Node_ComponentBoundEvent_7_OnFleetSelected__DelegateSignature
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_BndEvt__RecruitButton_K2Node_ComponentBoundEvent_7_OnFleetSelected__DelegateSignature_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.BndEvt__VeteranButton_K2Node_ComponentBoundEvent_8_OnFleetSelected__DelegateSignature
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_BndEvt__VeteranButton_K2Node_ComponentBoundEvent_8_OnFleetSelected__DelegateSignature_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_9_OnFleetSelected__DelegateSignature
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_9_OnFleetSelected__DelegateSignature_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.OnNavigationEvent
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.ExecuteUbergraph_UI_Popup_CustomMatchLobby_FleetSelect
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_ExecuteUbergraph_UI_Popup_CustomMatchLobby_FleetSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.OnFleetSelected__DelegateSignature
	 */
	struct UUI_Popup_CustomMatchLobby_FleetSelect_C_OnFleetSelected__DelegateSignature_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
