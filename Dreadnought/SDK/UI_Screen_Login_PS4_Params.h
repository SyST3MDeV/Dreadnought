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
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.OnPreviewKeyDown
	 */
	struct UUI_Screen_Login_PS4_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4GAC[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleCongratulationInput
	 */
	struct UUI_Screen_Login_PS4_C_HandleCongratulationInput_Params
	{
	public:
		EUI_MenuActions                                            InputPin;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleLinkAccountInput
	 */
	struct UUI_Screen_Login_PS4_C_HandleLinkAccountInput_Params
	{
	public:
		EUI_MenuActions                                            InputPin;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleCreateAccountInput
	 */
	struct UUI_Screen_Login_PS4_C_HandleCreateAccountInput_Params
	{
	public:
		EUI_MenuActions                                            InputPin;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleWelcomeInput
	 */
	struct UUI_Screen_Login_PS4_C_HandleWelcomeInput_Params
	{
	public:
		EUI_MenuActions                                            InputPin;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleLegalInput
	 */
	struct UUI_Screen_Login_PS4_C_HandleLegalInput_Params
	{
	public:
		EUI_MenuActions                                            InputPin;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleTitleInput
	 */
	struct UUI_Screen_Login_PS4_C_HandleTitleInput_Params
	{
	public:
		EUI_MenuActions                                            InputPin;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleInput
	 */
	struct UUI_Screen_Login_PS4_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            InputPin;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HideLegend
	 */
	struct UUI_Screen_Login_PS4_C_HideLegend_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.ShowLegend
	 */
	struct UUI_Screen_Login_PS4_C_ShowLegend_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.AttemptAcceptLegalDocument
	 */
	struct UUI_Screen_Login_PS4_C_AttemptAcceptLegalDocument_Params
	{
	public:
		struct FLegalDocumentData                                  LegalDocumentData;                                       // 0x0000(0x0038)  (Parm)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.SetPolicyContentFunction
	 */
	struct UUI_Screen_Login_PS4_C_SetPolicyContentFunction_Params
	{
	public:
		struct FPolicyContentResultData                            policyData;                                              // 0x0000(0x0040)  (Parm)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleAccountResult
	 */
	struct UUI_Screen_Login_PS4_C_HandleAccountResult_Params
	{
	public:
		struct FPS4RequestResultData                               ResultData;                                              // 0x0000(0x0002)  (Parm)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.UpdateLegend
	 */
	struct UUI_Screen_Login_PS4_C_UpdateLegend_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.GoToPreviousScreen
	 */
	struct UUI_Screen_Login_PS4_C_GoToPreviousScreen_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.BindScreenEvents
	 */
	struct UUI_Screen_Login_PS4_C_BindScreenEvents_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.ShowErrorPopup
	 */
	struct UUI_Screen_Login_PS4_C_ShowErrorPopup_Params
	{
	public:
		EYTitleScreenError                                         Error;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C51Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.PutAllScreensInScreensArray
	 */
	struct UUI_Screen_Login_PS4_C_PutAllScreensInScreensArray_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HideAllScreens
	 */
	struct UUI_Screen_Login_PS4_C_HideAllScreens_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.GoToSubState
	 */
	struct UUI_Screen_Login_PS4_C_GoToSubState_Params
	{
	public:
		ELoginSubScreensPS4                                        NewSubState;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.OnTransitionIn
	 */
	struct UUI_Screen_Login_PS4_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.OnTransitionOut
	 */
	struct UUI_Screen_Login_PS4_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.Construct
	 */
	struct UUI_Screen_Login_PS4_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.StartUserProfileSignIn
	 */
	struct UUI_Screen_Login_PS4_C_StartUserProfileSignIn_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.SetPolicyContent
	 */
	struct UUI_Screen_Login_PS4_C_SetPolicyContent_Params
	{
	public:
		struct FPolicyContentResultData                            policyData;                                              // 0x0000(0x0040)  (Parm)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleRequestProfileSignInComplete
	 */
	struct UUI_Screen_Login_PS4_C_HandleRequestProfileSignInComplete_Params
	{
	public:
		struct FRequestProfileSignInResultData                     signInResultData;                                        // 0x0000(0x0003)  (Parm)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleOnAcceptLegalDocumentComplete
	 */
	struct UUI_Screen_Login_PS4_C_HandleOnAcceptLegalDocumentComplete_Params
	{
	public:
		bool                                                       successful;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleRequestToSubState
	 */
	struct UUI_Screen_Login_PS4_C_HandleRequestToSubState_Params
	{
	public:
		ELoginSubScreensPS4                                        NewSubState;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.AttemptRequestSonyEmail
	 */
	struct UUI_Screen_Login_PS4_C_AttemptRequestSonyEmail_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.AttemptRequestCreateAccount
	 */
	struct UUI_Screen_Login_PS4_C_AttemptRequestCreateAccount_Params
	{
	public:
		struct FCreateAccountRequestData                           CreateAccountRequestData;                                // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleOnRequestSonyEmailComplete
	 */
	struct UUI_Screen_Login_PS4_C_HandleOnRequestSonyEmailComplete_Params
	{
	public:
		struct FRequestSonyEmailResultData                         emailResultData;                                         // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleRequestCreateAccountComplete
	 */
	struct UUI_Screen_Login_PS4_C_HandleRequestCreateAccountComplete_Params
	{
	public:
		struct FPS4RequestResultData                               Result;                                                  // 0x0000(0x0002)  (Parm)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.AttemptRequestLinkAccount
	 */
	struct UUI_Screen_Login_PS4_C_AttemptRequestLinkAccount_Params
	{
	public:
		struct FLinkAccountRequestData                             LinkAccountRequestData;                                  // 0x0000(0x0020)  (Parm)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.ProceedFromCongratulations
	 */
	struct UUI_Screen_Login_PS4_C_ProceedFromCongratulations_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleRequestLinkAccountComplete
	 */
	struct UUI_Screen_Login_PS4_C_HandleRequestLinkAccountComplete_Params
	{
	public:
		struct FPS4RequestResultData                               Result;                                                  // 0x0000(0x0002)  (Parm)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_Login_PS4_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.RequestForceLogin
	 */
	struct UUI_Screen_Login_PS4_C_RequestForceLogin_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.OnNavigationEvent
	 */
	struct UUI_Screen_Login_PS4_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.BndEvt__LinkAccountScreen_K2Node_ComponentBoundEvent_3_OnTextCommited__DelegateSignature
	 */
	struct UUI_Screen_Login_PS4_C_BndEvt__LinkAccountScreen_K2Node_ComponentBoundEvent_3_OnTextCommited__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.BndEvt__CreateAccountScreen_K2Node_ComponentBoundEvent_55_OnTextCommited__DelegateSignature
	 */
	struct UUI_Screen_Login_PS4_C_BndEvt__CreateAccountScreen_K2Node_ComponentBoundEvent_55_OnTextCommited__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.ExecuteUbergraph_UI_Screen_Login_PS4
	 */
	struct UUI_Screen_Login_PS4_C_ExecuteUbergraph_UI_Screen_Login_PS4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
