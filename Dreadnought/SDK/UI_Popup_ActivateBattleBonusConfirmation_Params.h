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
	 * Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.ButtonClicked
	 */
	struct UUI_Popup_ActivateBattleBonusConfirmation_C_ButtonClicked_Params
	{
	public:
		class UUI_Button_Generic_C*                                ButtonRef;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.HandlePS4
	 */
	struct UUI_Popup_ActivateBattleBonusConfirmation_C_HandlePS4_Params
	{	};

	/**
	 * Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.HandlePopupData
	 */
	struct UUI_Popup_ActivateBattleBonusConfirmation_C_HandlePopupData_Params
	{
	public:
		class UActivateBattleBonusConfirmationPopupData*           PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.Construct
	 */
	struct UUI_Popup_ActivateBattleBonusConfirmation_C_Construct_Params
	{	};

	/**
	 * Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.TransitionInAnimationComplete
	 */
	struct UUI_Popup_ActivateBattleBonusConfirmation_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.TransitionOutAnimationComplete
	 */
	struct UUI_Popup_ActivateBattleBonusConfirmation_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Popup_ActivateBattleBonusConfirmation_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Popup_ActivateBattleBonusConfirmation_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.OnNavigationEvent
	 */
	struct UUI_Popup_ActivateBattleBonusConfirmation_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.OnPopupDataSet
	 */
	struct UUI_Popup_ActivateBattleBonusConfirmation_C_OnPopupDataSet_Params
	{
	public:
		class UPopupData*                                          PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.OnTransitionOut
	 */
	struct UUI_Popup_ActivateBattleBonusConfirmation_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.OnTransitionIn
	 */
	struct UUI_Popup_ActivateBattleBonusConfirmation_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.ExecuteUbergraph_UI_Popup_ActivateBattleBonusConfirmation
	 */
	struct UUI_Popup_ActivateBattleBonusConfirmation_C_ExecuteUbergraph_UI_Popup_ActivateBattleBonusConfirmation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.OnButtonSelected__DelegateSignature
	 */
	struct UUI_Popup_ActivateBattleBonusConfirmation_C_OnButtonSelected__DelegateSignature_Params
	{
	public:
		class UUI_Button_Generic_C*                                ButtonRef;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
