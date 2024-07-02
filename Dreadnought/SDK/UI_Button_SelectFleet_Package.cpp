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
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.SetColorFromConfigColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::SetColorFromConfigColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.SetColorFromConfigColor");
		
		UUI_Button_SelectFleet_C_SetColorFromConfigColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleInitialFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::HandleInitialFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleInitialFocus");
		
		UUI_Button_SelectFleet_C_HandleInitialFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.CheckForManageFleetIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::CheckForManageFleetIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.CheckForManageFleetIndex");
		
		UUI_Button_SelectFleet_C_CheckForManageFleetIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.CheckForBattleBonusIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsNavigatingUp                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_SelectFleet_C::CheckForBattleBonusIndex(bool IsNavigatingUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.CheckForBattleBonusIndex");
		
		UUI_Button_SelectFleet_C_CheckForBattleBonusIndex_Params params {};
		params.IsNavigatingUp = IsNavigatingUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.UnfocusSelectFleetButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::UnfocusSelectFleetButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.UnfocusSelectFleetButton");
		
		UUI_Button_SelectFleet_C_UnfocusSelectFleetButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.FocusSelectFleetButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::FocusSelectFleetButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.FocusSelectFleetButton");
		
		UUI_Button_SelectFleet_C_FocusSelectFleetButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.SetButtonStyle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UButton*                                     Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFocused                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_SelectFleet_C::SetButtonStyle(class UButton* Button, bool IsFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.SetButtonStyle");
		
		UUI_Button_SelectFleet_C_SetButtonStyle_Params params {};
		params.Button = Button;
		params.IsFocused = IsFocused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleButtonFocusing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonToFocus                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PreviousIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_SelectFleet_C::HandleButtonFocusing(int32_t ButtonToFocus, int32_t PreviousIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleButtonFocusing");
		
		UUI_Button_SelectFleet_C_HandleButtonFocusing_Params params {};
		params.ButtonToFocus = ButtonToFocus;
		params.PreviousIndex = PreviousIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleGranularUpInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::HandleGranularUpInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleGranularUpInput");
		
		UUI_Button_SelectFleet_C_HandleGranularUpInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleGranularDownInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::HandleGranularDownInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleGranularDownInput");
		
		UUI_Button_SelectFleet_C_HandleGranularDownInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.Action");
		
		UUI_Button_SelectFleet_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.SetManageFleetButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_SelectFleet_C::SetManageFleetButtonVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.SetManageFleetButtonVisibility");
		
		UUI_Button_SelectFleet_C_SetManageFleetButtonVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.SetLockedState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FleetIsLocked                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_SelectFleet_C::SetLockedState(bool FleetIsLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.SetLockedState");
		
		UUI_Button_SelectFleet_C_SetLockedState_Params params {};
		params.FleetIsLocked = FleetIsLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.OnPurchasePopupResult
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        SelectedButtonRef                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_SelectFleet_C::OnPurchasePopupResult(class UUI_Button_Generic_C* SelectedButtonRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.OnPurchasePopupResult");
		
		UUI_Button_SelectFleet_C_OnPurchasePopupResult_Params params {};
		params.SelectedButtonRef = SelectedButtonRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_SelectFleet_C::Setup(EYFleetType Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.Setup");
		
		UUI_Button_SelectFleet_C_Setup_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleFocus");
		
		UUI_Button_SelectFleet_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.HandleUnfocus");
		
		UUI_Button_SelectFleet_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.Construct");
		
		UUI_Button_SelectFleet_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Button_SelectFleet_C_BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.BndEvt__ManageFleetButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_SelectFleet_C::BndEvt__ManageFleetButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.BndEvt__ManageFleetButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");
		
		UUI_Button_SelectFleet_C_BndEvt__ManageFleetButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Button_SelectFleet_C_BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Button_SelectFleet_C_BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.OnActionReceived");
		
		UUI_Button_SelectFleet_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.ExecuteUbergraph_UI_Button_SelectFleet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_SelectFleet_C::ExecuteUbergraph_UI_Button_SelectFleet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.ExecuteUbergraph_UI_Button_SelectFleet");
		
		UUI_Button_SelectFleet_C_ExecuteUbergraph_UI_Button_SelectFleet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.OnReceivedFocus__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_SelectFleet_C::OnReceivedFocus__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.OnReceivedFocus__DelegateSignature");
		
		UUI_Button_SelectFleet_C_OnReceivedFocus__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.ActivateBattleReadinessClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::ActivateBattleReadinessClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.ActivateBattleReadinessClicked__DelegateSignature");
		
		UUI_Button_SelectFleet_C_ActivateBattleReadinessClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.ManageFleetClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::ManageFleetClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.ManageFleetClicked__DelegateSignature");
		
		UUI_Button_SelectFleet_C_ManageFleetClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.FleetClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectFleet_C::FleetClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectFleet.UI_Button_SelectFleet_C.FleetClicked__DelegateSignature");
		
		UUI_Button_SelectFleet_C_FleetClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Button_SelectFleet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Button_SelectFleet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Button_SelectFleet.UI_Button_SelectFleet_C");
		return ptr;
	}

}


