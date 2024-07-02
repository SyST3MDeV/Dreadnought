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
	 * Function UI_Screen_HomeLoading.UI_Screen_HomeLoading_C.BindButtonEvents
	 */
	struct UUI_Screen_HomeLoading_C_BindButtonEvents_Params
	{
	public:
		TArray<class UUI_Button_Home_C*>                           Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_HomeLoading.UI_Screen_HomeLoading_C.Setup
	 */
	struct UUI_Screen_HomeLoading_C_Setup_Params
	{	};

	/**
	 * Function UI_Screen_HomeLoading.UI_Screen_HomeLoading_C.HandleInput
	 */
	struct UUI_Screen_HomeLoading_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_HomeLoading.UI_Screen_HomeLoading_C.ClearButtonArrayNotificationStatuses
	 */
	struct UUI_Screen_HomeLoading_C_ClearButtonArrayNotificationStatuses_Params
	{	};

	/**
	 * Function UI_Screen_HomeLoading.UI_Screen_HomeLoading_C.SetupButtonArray
	 */
	struct UUI_Screen_HomeLoading_C_SetupButtonArray_Params
	{	};

	/**
	 * Function UI_Screen_HomeLoading.UI_Screen_HomeLoading_C.Construct
	 */
	struct UUI_Screen_HomeLoading_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_HomeLoading.UI_Screen_HomeLoading_C.OnTransitionIn
	 */
	struct UUI_Screen_HomeLoading_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_HomeLoading.UI_Screen_HomeLoading_C.OnTransitionOut
	 */
	struct UUI_Screen_HomeLoading_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_HomeLoading.UI_Screen_HomeLoading_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_HomeLoading_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_HomeLoading.UI_Screen_HomeLoading_C.OnNavigationEvent
	 */
	struct UUI_Screen_HomeLoading_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_HomeLoading.UI_Screen_HomeLoading_C.UpdateCurrentlyFocusedItem
	 */
	struct UUI_Screen_HomeLoading_C_UpdateCurrentlyFocusedItem_Params
	{
	public:
		class UUI_DreadWidget*                                     FocusedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_HomeLoading.UI_Screen_HomeLoading_C.BndEvt__Button_TrainingMatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UUI_Screen_HomeLoading_C_BndEvt__Button_TrainingMatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_Home_C*                                   Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_HomeLoading.UI_Screen_HomeLoading_C.BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UUI_Screen_HomeLoading_C_BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_Home_C*                                   Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_HomeLoading.UI_Screen_HomeLoading_C.DownloadProgressUpdated
	 */
	struct UUI_Screen_HomeLoading_C_DownloadProgressUpdated_Params
	{
	public:
		float                                                      currentProgressPercentage;                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_HomeLoading.UI_Screen_HomeLoading_C.ExecuteUbergraph_UI_Screen_HomeLoading
	 */
	struct UUI_Screen_HomeLoading_C_ExecuteUbergraph_UI_Screen_HomeLoading_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
