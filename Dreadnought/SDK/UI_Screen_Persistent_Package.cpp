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
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.RequestStartQuickplayMatchmaking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::RequestStartQuickplayMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.RequestStartQuickplayMatchmaking");
		
		UUI_Screen_Persistent_C_RequestStartQuickplayMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.GetCurrentFleet
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::GetCurrentFleet(EYFleetType* fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.GetCurrentFleet");
		
		UUI_Screen_Persistent_C_GetCurrentFleet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (fleetType != nullptr)
			*fleetType = params.fleetType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateFavoritedModeState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFavorited                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYGameModeType                                     gameModeType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::UpdateFavoritedModeState(bool isFavorited, EYGameModeType gameModeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateFavoritedModeState");
		
		UUI_Screen_Persistent_C_UpdateFavoritedModeState_Params params {};
		params.isFavorited = isFavorited;
		params.gameModeType = gameModeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.SelectPrevFleet
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::SelectPrevFleet(EYFleetType* fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.SelectPrevFleet");
		
		UUI_Screen_Persistent_C_SelectPrevFleet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (fleetType != nullptr)
			*fleetType = params.fleetType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.SelectNextFleet
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::SelectNextFleet(EYFleetType* fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.SelectNextFleet");
		
		UUI_Screen_Persistent_C_SelectNextFleet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (fleetType != nullptr)
			*fleetType = params.fleetType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.CloseNotificationFlyout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::CloseNotificationFlyout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.CloseNotificationFlyout");
		
		UUI_Screen_Persistent_C_CloseNotificationFlyout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.ShowMatchMakingCancelledMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::ShowMatchMakingCancelledMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.ShowMatchMakingCancelledMessage");
		
		UUI_Screen_Persistent_C_ShowMatchMakingCancelledMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.XpConversionAllCTA
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::XpConversionAllCTA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.XpConversionAllCTA");
		
		UUI_Screen_Persistent_C_XpConversionAllCTA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.XpConversionCTA
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::XpConversionCTA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.XpConversionCTA");
		
		UUI_Screen_Persistent_C_XpConversionCTA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.FrontEndTutorialCTA
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::FrontEndTutorialCTA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.FrontEndTutorialCTA");
		
		UUI_Screen_Persistent_C_FrontEndTutorialCTA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetMatchmakingText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::SetMatchmakingText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetMatchmakingText");
		
		UUI_Screen_Persistent_C_SetMatchmakingText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleInputDefault
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    Input                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::HandleInputDefault(EUI_MenuActions Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleInputDefault");
		
		UUI_Screen_Persistent_C_HandleInputDefault_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.ResetAndHideMatchMakingTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::ResetAndHideMatchMakingTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.ResetAndHideMatchMakingTimer");
		
		UUI_Screen_Persistent_C_ResetAndHideMatchMakingTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateCurrencies
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::UpdateCurrencies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateCurrencies");
		
		UUI_Screen_Persistent_C_UpdateCurrencies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HasFocus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasFocus                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::HasFocus(bool* HasFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HasFocus");
		
		UUI_Screen_Persistent_C_HasFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasFocus != nullptr)
			*HasFocus = params.HasFocus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetEscBackVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::SetEscBackVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetEscBackVisibility");
		
		UUI_Screen_Persistent_C_SetEscBackVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.ShowLegend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::ShowLegend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.ShowLegend");
		
		UUI_Screen_Persistent_C_ShowLegend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleServerStarting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::HandleServerStarting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleServerStarting");
		
		UUI_Screen_Persistent_C_HandleServerStarting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleMatchmakingStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::HandleMatchmakingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleMatchmakingStarted");
		
		UUI_Screen_Persistent_C_HandleMatchmakingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleMatchmakingStopped
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::HandleMatchmakingStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleMatchmakingStopped");
		
		UUI_Screen_Persistent_C_HandleMatchmakingStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HideMatchmakingWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::HideMatchmakingWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HideMatchmakingWidget");
		
		UUI_Screen_Persistent_C_HideMatchmakingWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleFleetScreenEntry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Entered                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::HandleFleetScreenEntry(bool Entered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleFleetScreenEntry");
		
		UUI_Screen_Persistent_C_HandleFleetScreenEntry_Params params {};
		params.Entered = Entered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::HandleInput(EUI_MenuActions InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleInput");
		
		UUI_Screen_Persistent_C_HandleInput_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HideMatchmakingLegend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::HideMatchmakingLegend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HideMatchmakingLegend");
		
		UUI_Screen_Persistent_C_HideMatchmakingLegend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.RequestStopMatchmaking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::RequestStopMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.RequestStopMatchmaking");
		
		UUI_Screen_Persistent_C_RequestStopMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.RequestStartMatchmaking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::RequestStartMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.RequestStartMatchmaking");
		
		UUI_Screen_Persistent_C_RequestStartMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleCancel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::HandleCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleCancel");
		
		UUI_Screen_Persistent_C_HandleCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.ShowOrHidePlayButton
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::ShowOrHidePlayButton(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.ShowOrHidePlayButton");
		
		UUI_Screen_Persistent_C_ShowOrHidePlayButton_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetMatchmakingLegend
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLegendPromptData>                   InputPin                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Screen_Persistent_C::SetMatchmakingLegend(TArray<struct FLegendPromptData>* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetMatchmakingLegend");
		
		UUI_Screen_Persistent_C_SetMatchmakingLegend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputPin != nullptr)
			*InputPin = params.InputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetDNLogoVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::SetDNLogoVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetDNLogoVisibility");
		
		UUI_Screen_Persistent_C_SetDNLogoVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleNotificationInputAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Persistent_NotificationFlyout_C*         source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ENotificationButtonType                            Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::HandleNotificationInputAction(class UUI_Persistent_NotificationFlyout_C* source, ENotificationButtonType Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleNotificationInputAction");
		
		UUI_Screen_Persistent_C_HandleNotificationInputAction_Params params {};
		params.source = source;
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateAverageWaitTimeWidget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AverageWaitTimeSeconds                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::UpdateAverageWaitTimeWidget(int32_t AverageWaitTimeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateAverageWaitTimeWidget");
		
		UUI_Screen_Persistent_C_UpdateAverageWaitTimeWidget_Params params {};
		params.AverageWaitTimeSeconds = AverageWaitTimeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HideLegend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::HideLegend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HideLegend");
		
		UUI_Screen_Persistent_C_HideLegend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetLegend
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLegendPromptData>                   LegendData                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Screen_Persistent_C::SetLegend(TArray<struct FLegendPromptData>* LegendData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetLegend");
		
		UUI_Screen_Persistent_C_SetLegend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LegendData != nullptr)
			*LegendData = params.LegendData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateCurrentNotification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::UpdateCurrentNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateCurrentNotification");
		
		UUI_Screen_Persistent_C_UpdateCurrentNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateNotificationsWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::UpdateNotificationsWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateNotificationsWidget");
		
		UUI_Screen_Persistent_C_UpdateNotificationsWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.InitializeInternal
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::InitializeInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.InitializeInternal");
		
		UUI_Screen_Persistent_C_InitializeInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.ShouldBreadcrumbBarBeVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::ShouldBreadcrumbBarBeVisible(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.ShouldBreadcrumbBarBeVisible");
		
		UUI_Screen_Persistent_C_ShouldBreadcrumbBarBeVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetBreadcrumbBarVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::SetBreadcrumbBarVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetBreadcrumbBarVisibility");
		
		UUI_Screen_Persistent_C_SetBreadcrumbBarVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleBreadcrumbClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BreadcrumbIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::HandleBreadcrumbClicked(int32_t BreadcrumbIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleBreadcrumbClicked");
		
		UUI_Screen_Persistent_C_HandleBreadcrumbClicked_Params params {};
		params.BreadcrumbIndex = BreadcrumbIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleSquadButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::HandleSquadButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleSquadButtonClicked");
		
		UUI_Screen_Persistent_C_HandleSquadButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetupSquad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::SetupSquad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetupSquad");
		
		UUI_Screen_Persistent_C_SetupSquad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.Hide
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.Hide");
		
		UUI_Screen_Persistent_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleTimerHideComplete
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::HandleTimerHideComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleTimerHideComplete");
		
		UUI_Screen_Persistent_C_HandleTimerHideComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.ShowOrHideMatchmakingTimer
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::ShowOrHideMatchmakingTimer(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.ShowOrHideMatchmakingTimer");
		
		UUI_Screen_Persistent_C_ShowOrHideMatchmakingTimer_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateBreadcrumbWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadScreen*                             TargetScreen                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::UpdateBreadcrumbWidget(class UUI_DreadScreen* TargetScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateBreadcrumbWidget");
		
		UUI_Screen_Persistent_C_UpdateBreadcrumbWidget_Params params {};
		params.TargetScreen = TargetScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.Construct");
		
		UUI_Screen_Persistent_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnTransitionIn");
		
		UUI_Screen_Persistent_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnTransitionOut");
		
		UUI_Screen_Persistent_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.TransitionInAnimationComplete");
		
		UUI_Screen_Persistent_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.TransitionOutAnimationComplete");
		
		UUI_Screen_Persistent_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::BndEvt__FriendsButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UUI_Screen_Persistent_C_BndEvt__FriendsButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__PlayerCard_K2Node_ComponentBoundEvent_1_OnPlayerPortraitClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::BndEvt__PlayerCard_K2Node_ComponentBoundEvent_1_OnPlayerPortraitClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__PlayerCard_K2Node_ComponentBoundEvent_1_OnPlayerPortraitClicked__DelegateSignature");
		
		UUI_Screen_Persistent_C_BndEvt__PlayerCard_K2Node_ComponentBoundEvent_1_OnPlayerPortraitClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__NotificationFlyout_K2Node_ComponentBoundEvent_2_OnNotificationClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Persistent_NotificationFlyout_C*         source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ENotificationButtonType                            Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::BndEvt__NotificationFlyout_K2Node_ComponentBoundEvent_2_OnNotificationClicked__DelegateSignature(class UUI_Persistent_NotificationFlyout_C* source, ENotificationButtonType Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__NotificationFlyout_K2Node_ComponentBoundEvent_2_OnNotificationClicked__DelegateSignature");
		
		UUI_Screen_Persistent_C_BndEvt__NotificationFlyout_K2Node_ComponentBoundEvent_2_OnNotificationClicked__DelegateSignature_Params params {};
		params.source = source;
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMatchmakingTimerStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::OnMatchmakingTimerStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMatchmakingTimerStarted");
		
		UUI_Screen_Persistent_C_OnMatchmakingTimerStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMatchmakingTimerStopped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::OnMatchmakingTimerStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMatchmakingTimerStopped");
		
		UUI_Screen_Persistent_C_OnMatchmakingTimerStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__MatchmakingTimer_K2Node_ComponentBoundEvent_0_OnCancelButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::BndEvt__MatchmakingTimer_K2Node_ComponentBoundEvent_0_OnCancelButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__MatchmakingTimer_K2Node_ComponentBoundEvent_0_OnCancelButtonClicked__DelegateSignature");
		
		UUI_Screen_Persistent_C_BndEvt__MatchmakingTimer_K2Node_ComponentBoundEvent_0_OnCancelButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMatchmakingAverageWaitTimeAvailable
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            waitTimeSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::OnMatchmakingAverageWaitTimeAvailable(int32_t waitTimeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMatchmakingAverageWaitTimeAvailable");
		
		UUI_Screen_Persistent_C_OnMatchmakingAverageWaitTimeAvailable_Params params {};
		params.waitTimeSeconds = waitTimeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleSquadUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::HandleSquadUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleSquadUpdated");
		
		UUI_Screen_Persistent_C_HandleSquadUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleNotificationsChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::HandleNotificationsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleNotificationsChanged");
		
		UUI_Screen_Persistent_C_HandleNotificationsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleOnPlayerSpeakingUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FSquadVoiceData                             UpdateData                                                 (Parm)
	 */
	void UUI_Screen_Persistent_C::HandleOnPlayerSpeakingUpdated(const struct FSquadVoiceData& UpdateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleOnPlayerSpeakingUpdated");
		
		UUI_Screen_Persistent_C_HandleOnPlayerSpeakingUpdated_Params params {};
		params.UpdateData = UpdateData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMatchmakingFailed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::OnMatchmakingFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMatchmakingFailed");
		
		UUI_Screen_Persistent_C_OnMatchmakingFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMatchmakingStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::OnMatchmakingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMatchmakingStarted");
		
		UUI_Screen_Persistent_C_OnMatchmakingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandlePlayerCardUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::HandlePlayerCardUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandlePlayerCardUpdated");
		
		UUI_Screen_Persistent_C_HandlePlayerCardUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.Tick");
		
		UUI_Screen_Persistent_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnNavigationEvent");
		
		UUI_Screen_Persistent_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__MatchmakingTimer_K2Node_ComponentBoundEvent_48_OnPlayButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::BndEvt__MatchmakingTimer_K2Node_ComponentBoundEvent_48_OnPlayButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__MatchmakingTimer_K2Node_ComponentBoundEvent_48_OnPlayButtonClicked__DelegateSignature");
		
		UUI_Screen_Persistent_C_BndEvt__MatchmakingTimer_K2Node_ComponentBoundEvent_48_OnPlayButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnServerStarting
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::OnServerStarting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnServerStarting");
		
		UUI_Screen_Persistent_C_OnServerStarting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnCheckCanReturnToMatch
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanReturnToMatch                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::OnCheckCanReturnToMatch(bool CanReturnToMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnCheckCanReturnToMatch");
		
		UUI_Screen_Persistent_C_OnCheckCanReturnToMatch_Params params {};
		params.CanReturnToMatch = CanReturnToMatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnCTATriggered
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UYCtA*                                       cta                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::OnCTATriggered(class UYCtA* cta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnCTATriggered");
		
		UUI_Screen_Persistent_C_OnCTATriggered_Params params {};
		params.cta = cta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnCTAManagerReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::OnCTAManagerReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnCTAManagerReady");
		
		UUI_Screen_Persistent_C_OnCTAManagerReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnBattleServerShutdown
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::OnBattleServerShutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnBattleServerShutdown");
		
		UUI_Screen_Persistent_C_OnBattleServerShutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMmogConnectionLost
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::OnMmogConnectionLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMmogConnectionLost");
		
		UUI_Screen_Persistent_C_OnMmogConnectionLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_Persistent_C::BndEvt__ButtonBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Screen_Persistent_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Persistent.UI_Screen_Persistent_C.ExecuteUbergraph_UI_Screen_Persistent
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Persistent_C::ExecuteUbergraph_UI_Screen_Persistent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Persistent.UI_Screen_Persistent_C.ExecuteUbergraph_UI_Screen_Persistent");
		
		UUI_Screen_Persistent_C_ExecuteUbergraph_UI_Screen_Persistent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_Persistent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_Persistent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_Persistent.UI_Screen_Persistent_C");
		return ptr;
	}

}


