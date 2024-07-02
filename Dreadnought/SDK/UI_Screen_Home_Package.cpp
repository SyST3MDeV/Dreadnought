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
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.InitiateQuickPlayMatchmaking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::InitiateQuickPlayMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.InitiateQuickPlayMatchmaking");
		
		UUI_Screen_Home_C_InitiateQuickPlayMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.OnPurchasePopupResult
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        SelectedButtonRef                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Home_C::OnPurchasePopupResult(class UUI_Button_Generic_C* SelectedButtonRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.OnPurchasePopupResult");
		
		UUI_Screen_Home_C_OnPurchasePopupResult_Params params {};
		params.SelectedButtonRef = SelectedButtonRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.ShowBattleBonusPurchaseConfirmPopup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::ShowBattleBonusPurchaseConfirmPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.ShowBattleBonusPurchaseConfirmPopup");
		
		UUI_Screen_Home_C_ShowBattleBonusPurchaseConfirmPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.HandleQuickplaySelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::HandleQuickplaySelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.HandleQuickplaySelected");
		
		UUI_Screen_Home_C_HandleQuickplaySelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.SetQuickplayVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::SetQuickplayVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.SetQuickplayVisibility");
		
		UUI_Screen_Home_C_SetQuickplayVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.ShowTutorialCTA
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::ShowTutorialCTA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.ShowTutorialCTA");
		
		UUI_Screen_Home_C_ShowTutorialCTA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.UpdateLegend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::UpdateLegend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.UpdateLegend");
		
		UUI_Screen_Home_C_UpdateLegend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.HandleGamepadSectionLeftRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NextIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Home_C::HandleGamepadSectionLeftRight(int32_t NextIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.HandleGamepadSectionLeftRight");
		
		UUI_Screen_Home_C_HandleGamepadSectionLeftRight_Params params {};
		params.NextIndex = NextIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.HandleGamepadGranularRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::HandleGamepadGranularRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.HandleGamepadGranularRight");
		
		UUI_Screen_Home_C_HandleGamepadGranularRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.HandleGamepadGranularLeft
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::HandleGamepadGranularLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.HandleGamepadGranularLeft");
		
		UUI_Screen_Home_C_HandleGamepadGranularLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.HandleGamepadGranularUpDown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NextHomeButtonIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ButtonEnabled                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Home_C::HandleGamepadGranularUpDown(int32_t NextHomeButtonIndex, bool* ButtonEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.HandleGamepadGranularUpDown");
		
		UUI_Screen_Home_C_HandleGamepadGranularUpDown_Params params {};
		params.NextHomeButtonIndex = NextHomeButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ButtonEnabled != nullptr)
			*ButtonEnabled = params.ButtonEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.ReturnAfterDisconnectResult
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Home_C::ReturnAfterDisconnectResult(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.ReturnAfterDisconnectResult");
		
		UUI_Screen_Home_C_ReturnAfterDisconnectResult_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.ShowPromptToReturnAfterDisconnect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::ShowPromptToReturnAfterDisconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.ShowPromptToReturnAfterDisconnect");
		
		UUI_Screen_Home_C_ShowPromptToReturnAfterDisconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.HandleItemDetailsClick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           MarketItemData                                             (Parm)
	 */
	void UUI_Screen_Home_C::HandleItemDetailsClick(const struct FMarketItemUIData& MarketItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.HandleItemDetailsClick");
		
		UUI_Screen_Home_C_HandleItemDetailsClick_Params params {};
		params.MarketItemData = MarketItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.BindButtonEvents
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UUI_Button_Home_C*>                   Array                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Screen_Home_C::BindButtonEvents(TArray<class UUI_Button_Home_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.BindButtonEvents");
		
		UUI_Screen_Home_C_BindButtonEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.UpdateCarousel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::UpdateCarousel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.UpdateCarousel");
		
		UUI_Screen_Home_C_UpdateCarousel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.Setup");
		
		UUI_Screen_Home_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.HandleToFromCarousel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::HandleToFromCarousel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.HandleToFromCarousel");
		
		UUI_Screen_Home_C_HandleToFromCarousel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Home_C::HandleInput(EUI_MenuActions GamePadInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.HandleInput");
		
		UUI_Screen_Home_C_HandleInput_Params params {};
		params.GamePadInput = GamePadInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.ClearButtonArrayNotificationStatuses
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::ClearButtonArrayNotificationStatuses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.ClearButtonArrayNotificationStatuses");
		
		UUI_Screen_Home_C_ClearButtonArrayNotificationStatuses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.SetupButtonArray
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::SetupButtonArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.SetupButtonArray");
		
		UUI_Screen_Home_C_SetupButtonArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.OnExitPopupResult
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SelectedIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Home_C::OnExitPopupResult(int32_t SelectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.OnExitPopupResult");
		
		UUI_Screen_Home_C_OnExitPopupResult_Params params {};
		params.SelectedIndex = SelectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.ShowExitPopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::ShowExitPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.ShowExitPopup");
		
		UUI_Screen_Home_C_ShowExitPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.HandleMenuButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Home_C*                           Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Home_C::HandleMenuButtonClicked(class UUI_Button_Home_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.HandleMenuButtonClicked");
		
		UUI_Screen_Home_C_HandleMenuButtonClicked_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.Construct");
		
		UUI_Screen_Home_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.OnTransitionIn");
		
		UUI_Screen_Home_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.OnTransitionOut");
		
		UUI_Screen_Home_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.HandleOnButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         ScreenEnum                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Home_C::HandleOnButtonClicked(EUI_Screen ScreenEnum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.HandleOnButtonClicked");
		
		UUI_Screen_Home_C_HandleOnButtonClicked_Params params {};
		params.ScreenEnum = ScreenEnum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.TransitionOutAnimationComplete");
		
		UUI_Screen_Home_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.BndEvt__FeaturedCarouselPageDots_K2Node_ComponentBoundEvent_0_OnCurrentPageChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DotIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Home_C::BndEvt__FeaturedCarouselPageDots_K2Node_ComponentBoundEvent_0_OnCurrentPageChanged__DelegateSignature(int32_t DotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.BndEvt__FeaturedCarouselPageDots_K2Node_ComponentBoundEvent_0_OnCurrentPageChanged__DelegateSignature");
		
		UUI_Screen_Home_C_BndEvt__FeaturedCarouselPageDots_K2Node_ComponentBoundEvent_0_OnCurrentPageChanged__DelegateSignature_Params params {};
		params.DotIndex = DotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.MarketDataUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::MarketDataUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.MarketDataUpdated");
		
		UUI_Screen_Home_C_MarketDataUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.ShowContractCompleted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::ShowContractCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.ShowContractCompleted");
		
		UUI_Screen_Home_C_ShowContractCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Home_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.OnNavigationEvent");
		
		UUI_Screen_Home_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.UpdateCurrentlyFocusedItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             FocusedItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Home_C::UpdateCurrentlyFocusedItem(class UUI_DreadWidget* FocusedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.UpdateCurrentlyFocusedItem");
		
		UUI_Screen_Home_C_UpdateCurrentlyFocusedItem_Params params {};
		params.FocusedItem = FocusedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.OnShowPromptForReturnAfterDisconnect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::OnShowPromptForReturnAfterDisconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.OnShowPromptForReturnAfterDisconnect");
		
		UUI_Screen_Home_C_OnShowPromptForReturnAfterDisconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.ShowCaptainProgressionCompleted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::ShowCaptainProgressionCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.ShowCaptainProgressionCompleted");
		
		UUI_Screen_Home_C_ShowCaptainProgressionCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.OnBattleReadinessPurchaseApproved
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               purchaseSuccessful                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Home_C::OnBattleReadinessPurchaseApproved(bool purchaseSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.OnBattleReadinessPurchaseApproved");
		
		UUI_Screen_Home_C_OnBattleReadinessPurchaseApproved_Params params {};
		params.purchaseSuccessful = purchaseSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.OnTransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Home_C::OnTransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.OnTransitionInAnimationComplete");
		
		UUI_Screen_Home_C_OnTransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Home.UI_Screen_Home_C.ExecuteUbergraph_UI_Screen_Home
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Home_C::ExecuteUbergraph_UI_Screen_Home(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Home.UI_Screen_Home_C.ExecuteUbergraph_UI_Screen_Home");
		
		UUI_Screen_Home_C_ExecuteUbergraph_UI_Screen_Home_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_Home_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_Home_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_Home.UI_Screen_Home_C");
		return ptr;
	}

}


