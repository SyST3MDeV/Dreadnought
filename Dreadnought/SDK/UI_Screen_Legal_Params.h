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
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.ShouldEnableContinueButtons
	 */
	struct UUI_Screen_Legal_C_ShouldEnableContinueButtons_Params
	{
	public:
		bool                                                       shouldEnable;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.SetupPS4
	 */
	struct UUI_Screen_Legal_C_SetupPS4_Params
	{	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.SetupPC
	 */
	struct UUI_Screen_Legal_C_SetupPC_Params
	{	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.HandleLegalActionProcessed
	 */
	struct UUI_Screen_Legal_C_HandleLegalActionProcessed_Params
	{	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.HideContinueButtons
	 */
	struct UUI_Screen_Legal_C_HideContinueButtons_Params
	{	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.StopSpinner
	 */
	struct UUI_Screen_Legal_C_StopSpinner_Params
	{	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.StartSpinner
	 */
	struct UUI_Screen_Legal_C_StartSpinner_Params
	{	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.TryAcceptLegalDocument
	 */
	struct UUI_Screen_Legal_C_TryAcceptLegalDocument_Params
	{
	public:
		bool                                                       WasRequestSent;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.SetupPlatformButtons
	 */
	struct UUI_Screen_Legal_C_SetupPlatformButtons_Params
	{	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.ScrollText
	 */
	struct UUI_Screen_Legal_C_ScrollText_Params
	{
	public:
		bool                                                       ScrollUp;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_42AJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.HandleContinueButtonPressed
	 */
	struct UUI_Screen_Legal_C_HandleContinueButtonPressed_Params
	{	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.HandleInput
	 */
	struct UUI_Screen_Legal_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamepadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.PopulateUIFields
	 */
	struct UUI_Screen_Legal_C_PopulateUIFields_Params
	{	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.Construct
	 */
	struct UUI_Screen_Legal_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.OnTransitionIn
	 */
	struct UUI_Screen_Legal_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.OnTransitionOut
	 */
	struct UUI_Screen_Legal_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_Legal_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_Legal_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Screen_Legal_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Screen_Legal_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.OnNavigationEvent
	 */
	struct UUI_Screen_Legal_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UUI_Screen_Legal_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_Generic_C*                                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.HandleLegalItemActionProcessed
	 */
	struct UUI_Screen_Legal_C_HandleLegalItemActionProcessed_Params
	{	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.BndEvt__AttestationBodyText_K2Node_ComponentBoundEvent_31_OnStateChanged__DelegateSignature
	 */
	struct UUI_Screen_Legal_C_BndEvt__AttestationBodyText_K2Node_ComponentBoundEvent_31_OnStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5A4Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CheckBoxIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Legal.UI_Screen_Legal_C.ExecuteUbergraph_UI_Screen_Legal
	 */
	struct UUI_Screen_Legal_C_ExecuteUbergraph_UI_Screen_Legal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
