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
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.UnfocusCurrentWidget
	 */
	struct UUI_Popup_GpToCreditsDetails_C_UnfocusCurrentWidget_Params
	{
	public:
		class UUI_DreadWidget*                                     NewWidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.HandleItemHovered
	 */
	struct UUI_Popup_GpToCreditsDetails_C_HandleItemHovered_Params
	{
	public:
		class UUI_Button_Generic_C*                                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.SetWidgetFocus
	 */
	struct UUI_Popup_GpToCreditsDetails_C_SetWidgetFocus_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PQHE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.Setup
	 */
	struct UUI_Popup_GpToCreditsDetails_C_Setup_Params
	{	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.HandleInput
	 */
	struct UUI_Popup_GpToCreditsDetails_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            Input;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L8IC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.ButtonClicked
	 */
	struct UUI_Popup_GpToCreditsDetails_C_ButtonClicked_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CA8R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.HandlePopupData
	 */
	struct UUI_Popup_GpToCreditsDetails_C_HandlePopupData_Params
	{
	public:
		class UGpToCreditsDetailsPopupData*                        PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.Construct
	 */
	struct UUI_Popup_GpToCreditsDetails_C_Construct_Params
	{	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.OnPopupDataSet
	 */
	struct UUI_Popup_GpToCreditsDetails_C_OnPopupDataSet_Params
	{
	public:
		class UPopupData*                                          PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.OnTransitionIn
	 */
	struct UUI_Popup_GpToCreditsDetails_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.OnTransitionOut
	 */
	struct UUI_Popup_GpToCreditsDetails_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.TransitionInAnimationComplete
	 */
	struct UUI_Popup_GpToCreditsDetails_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.TransitionOutAnimationComplete
	 */
	struct UUI_Popup_GpToCreditsDetails_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Popup_GpToCreditsDetails_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_17_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Popup_GpToCreditsDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_17_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.OnNavigationEvent
	 */
	struct UUI_Popup_GpToCreditsDetails_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.ExecuteUbergraph_UI_Popup_GpToCreditsDetails
	 */
	struct UUI_Popup_GpToCreditsDetails_C_ExecuteUbergraph_UI_Popup_GpToCreditsDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q1FY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.OnButtonSelected__DelegateSignature
	 */
	struct UUI_Popup_GpToCreditsDetails_C_OnButtonSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
