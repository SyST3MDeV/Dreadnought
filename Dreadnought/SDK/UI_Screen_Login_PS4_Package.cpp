/**
 * Name: Dreadnought
 * Version: Latest
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.OnPreviewKeyDown
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (Parm)
	 */
	struct FEventReply UUI_Screen_Login_PS4_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.OnPreviewKeyDown");
		
		UUI_Screen_Login_PS4_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleCongratulationInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Login_PS4_C::HandleCongratulationInput(EUI_MenuActions InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleCongratulationInput");
		
		UUI_Screen_Login_PS4_C_HandleCongratulationInput_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleLinkAccountInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Login_PS4_C::HandleLinkAccountInput(EUI_MenuActions InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleLinkAccountInput");
		
		UUI_Screen_Login_PS4_C_HandleLinkAccountInput_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleCreateAccountInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Login_PS4_C::HandleCreateAccountInput(EUI_MenuActions InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleCreateAccountInput");
		
		UUI_Screen_Login_PS4_C_HandleCreateAccountInput_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleWelcomeInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Login_PS4_C::HandleWelcomeInput(EUI_MenuActions InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleWelcomeInput");
		
		UUI_Screen_Login_PS4_C_HandleWelcomeInput_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleLegalInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Login_PS4_C::HandleLegalInput(EUI_MenuActions InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleLegalInput");
		
		UUI_Screen_Login_PS4_C_HandleLegalInput_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleTitleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Login_PS4_C::HandleTitleInput(EUI_MenuActions InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleTitleInput");
		
		UUI_Screen_Login_PS4_C_HandleTitleInput_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Login_PS4_C::HandleInput(EUI_MenuActions InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleInput");
		
		UUI_Screen_Login_PS4_C_HandleInput_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HideLegend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::HideLegend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HideLegend");
		
		UUI_Screen_Login_PS4_C_HideLegend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.ShowLegend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::ShowLegend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.ShowLegend");
		
		UUI_Screen_Login_PS4_C_ShowLegend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.AttemptAcceptLegalDocument
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLegalDocumentData                          LegalDocumentData                                          (Parm)
	 */
	void UUI_Screen_Login_PS4_C::AttemptAcceptLegalDocument(const struct FLegalDocumentData& LegalDocumentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.AttemptAcceptLegalDocument");
		
		UUI_Screen_Login_PS4_C_AttemptAcceptLegalDocument_Params params {};
		params.LegalDocumentData = LegalDocumentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.SetPolicyContentFunction
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPolicyContentResultData                    policyData                                                 (Parm)
	 */
	void UUI_Screen_Login_PS4_C::SetPolicyContentFunction(const struct FPolicyContentResultData& policyData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.SetPolicyContentFunction");
		
		UUI_Screen_Login_PS4_C_SetPolicyContentFunction_Params params {};
		params.policyData = policyData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleAccountResult
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPS4RequestResultData                       ResultData                                                 (Parm)
	 */
	void UUI_Screen_Login_PS4_C::HandleAccountResult(const struct FPS4RequestResultData& ResultData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleAccountResult");
		
		UUI_Screen_Login_PS4_C_HandleAccountResult_Params params {};
		params.ResultData = ResultData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.UpdateLegend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::UpdateLegend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.UpdateLegend");
		
		UUI_Screen_Login_PS4_C_UpdateLegend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.GoToPreviousScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::GoToPreviousScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.GoToPreviousScreen");
		
		UUI_Screen_Login_PS4_C_GoToPreviousScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.BindScreenEvents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::BindScreenEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.BindScreenEvents");
		
		UUI_Screen_Login_PS4_C_BindScreenEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.ShowErrorPopup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYTitleScreenError                                 Error                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Login_PS4_C::ShowErrorPopup(EYTitleScreenError Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.ShowErrorPopup");
		
		UUI_Screen_Login_PS4_C_ShowErrorPopup_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.PutAllScreensInScreensArray
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::PutAllScreensInScreensArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.PutAllScreensInScreensArray");
		
		UUI_Screen_Login_PS4_C_PutAllScreensInScreensArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HideAllScreens
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::HideAllScreens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HideAllScreens");
		
		UUI_Screen_Login_PS4_C_HideAllScreens_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.GoToSubState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELoginSubScreensPS4                                NewSubState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Login_PS4_C::GoToSubState(ELoginSubScreensPS4 NewSubState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.GoToSubState");
		
		UUI_Screen_Login_PS4_C_GoToSubState_Params params {};
		params.NewSubState = NewSubState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.OnTransitionIn");
		
		UUI_Screen_Login_PS4_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.OnTransitionOut");
		
		UUI_Screen_Login_PS4_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.Construct");
		
		UUI_Screen_Login_PS4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.StartUserProfileSignIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::StartUserProfileSignIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.StartUserProfileSignIn");
		
		UUI_Screen_Login_PS4_C_StartUserProfileSignIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.SetPolicyContent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FPolicyContentResultData                    policyData                                                 (Parm)
	 */
	void UUI_Screen_Login_PS4_C::SetPolicyContent(const struct FPolicyContentResultData& policyData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.SetPolicyContent");
		
		UUI_Screen_Login_PS4_C_SetPolicyContent_Params params {};
		params.policyData = policyData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleRequestProfileSignInComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FRequestProfileSignInResultData             signInResultData                                           (Parm)
	 */
	void UUI_Screen_Login_PS4_C::HandleRequestProfileSignInComplete(const struct FRequestProfileSignInResultData& signInResultData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleRequestProfileSignInComplete");
		
		UUI_Screen_Login_PS4_C_HandleRequestProfileSignInComplete_Params params {};
		params.signInResultData = signInResultData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleOnAcceptLegalDocumentComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               successful                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Login_PS4_C::HandleOnAcceptLegalDocumentComplete(bool successful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleOnAcceptLegalDocumentComplete");
		
		UUI_Screen_Login_PS4_C_HandleOnAcceptLegalDocumentComplete_Params params {};
		params.successful = successful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleRequestToSubState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELoginSubScreensPS4                                NewSubState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Login_PS4_C::HandleRequestToSubState(ELoginSubScreensPS4 NewSubState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleRequestToSubState");
		
		UUI_Screen_Login_PS4_C_HandleRequestToSubState_Params params {};
		params.NewSubState = NewSubState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.AttemptRequestSonyEmail
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::AttemptRequestSonyEmail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.AttemptRequestSonyEmail");
		
		UUI_Screen_Login_PS4_C_AttemptRequestSonyEmail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.AttemptRequestCreateAccount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCreateAccountRequestData                   CreateAccountRequestData                                   (Parm)
	 */
	void UUI_Screen_Login_PS4_C::AttemptRequestCreateAccount(const struct FCreateAccountRequestData& CreateAccountRequestData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.AttemptRequestCreateAccount");
		
		UUI_Screen_Login_PS4_C_AttemptRequestCreateAccount_Params params {};
		params.CreateAccountRequestData = CreateAccountRequestData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleOnRequestSonyEmailComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FRequestSonyEmailResultData                 emailResultData                                            (Parm)
	 */
	void UUI_Screen_Login_PS4_C::HandleOnRequestSonyEmailComplete(const struct FRequestSonyEmailResultData& emailResultData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleOnRequestSonyEmailComplete");
		
		UUI_Screen_Login_PS4_C_HandleOnRequestSonyEmailComplete_Params params {};
		params.emailResultData = emailResultData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleRequestCreateAccountComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FPS4RequestResultData                       Result                                                     (Parm)
	 */
	void UUI_Screen_Login_PS4_C::HandleRequestCreateAccountComplete(const struct FPS4RequestResultData& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleRequestCreateAccountComplete");
		
		UUI_Screen_Login_PS4_C_HandleRequestCreateAccountComplete_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.AttemptRequestLinkAccount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinkAccountRequestData                     LinkAccountRequestData                                     (Parm)
	 */
	void UUI_Screen_Login_PS4_C::AttemptRequestLinkAccount(const struct FLinkAccountRequestData& LinkAccountRequestData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.AttemptRequestLinkAccount");
		
		UUI_Screen_Login_PS4_C_AttemptRequestLinkAccount_Params params {};
		params.LinkAccountRequestData = LinkAccountRequestData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.ProceedFromCongratulations
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::ProceedFromCongratulations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.ProceedFromCongratulations");
		
		UUI_Screen_Login_PS4_C_ProceedFromCongratulations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleRequestLinkAccountComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FPS4RequestResultData                       Result                                                     (Parm)
	 */
	void UUI_Screen_Login_PS4_C::HandleRequestLinkAccountComplete(const struct FPS4RequestResultData& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.HandleRequestLinkAccountComplete");
		
		UUI_Screen_Login_PS4_C_HandleRequestLinkAccountComplete_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.TransitionInAnimationComplete");
		
		UUI_Screen_Login_PS4_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.RequestForceLogin
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::RequestForceLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.RequestForceLogin");
		
		UUI_Screen_Login_PS4_C_RequestForceLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Login_PS4_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.OnNavigationEvent");
		
		UUI_Screen_Login_PS4_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.BndEvt__LinkAccountScreen_K2Node_ComponentBoundEvent_3_OnTextCommited__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::BndEvt__LinkAccountScreen_K2Node_ComponentBoundEvent_3_OnTextCommited__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.BndEvt__LinkAccountScreen_K2Node_ComponentBoundEvent_3_OnTextCommited__DelegateSignature");
		
		UUI_Screen_Login_PS4_C_BndEvt__LinkAccountScreen_K2Node_ComponentBoundEvent_3_OnTextCommited__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.BndEvt__CreateAccountScreen_K2Node_ComponentBoundEvent_55_OnTextCommited__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_Login_PS4_C::BndEvt__CreateAccountScreen_K2Node_ComponentBoundEvent_55_OnTextCommited__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.BndEvt__CreateAccountScreen_K2Node_ComponentBoundEvent_55_OnTextCommited__DelegateSignature");
		
		UUI_Screen_Login_PS4_C_BndEvt__CreateAccountScreen_K2Node_ComponentBoundEvent_55_OnTextCommited__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.ExecuteUbergraph_UI_Screen_Login_PS4
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Login_PS4_C::ExecuteUbergraph_UI_Screen_Login_PS4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Login_PS4.UI_Screen_Login_PS4_C.ExecuteUbergraph_UI_Screen_Login_PS4");
		
		UUI_Screen_Login_PS4_C_ExecuteUbergraph_UI_Screen_Login_PS4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_Login_PS4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_Login_PS4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_Login_PS4.UI_Screen_Login_PS4_C");
		return ptr;
	}

}


