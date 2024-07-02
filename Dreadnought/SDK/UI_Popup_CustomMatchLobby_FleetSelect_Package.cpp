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
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.HandleLeftRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NextIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::HandleLeftRight(int32_t NextIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.HandleLeftRight");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_HandleLeftRight_Params params {};
		params.NextIndex = NextIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.CancelAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::CancelAction(int32_t InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.CancelAction");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_CancelAction_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::HandleInput(EUI_MenuActions GamePadInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.HandleInput");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_HandleInput_Params params {};
		params.GamePadInput = GamePadInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.HandlePopupData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCustomMatchLobbyFleetSelectPopupData*       PopupData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::HandlePopupData(class UCustomMatchLobbyFleetSelectPopupData* PopupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.HandlePopupData");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_HandlePopupData_Params params {};
		params.PopupData = PopupData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.Construct");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.OnTransitionIn");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.OnTransitionOut");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.TransitionInAnimationComplete");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.TransitionOutAnimationComplete");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.OnPopupDataSet
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UPopupData*                                  PopupData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::OnPopupDataSet(class UPopupData* PopupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.OnPopupDataSet");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_OnPopupDataSet_Params params {};
		params.PopupData = PopupData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.BndEvt__RecruitButton_K2Node_ComponentBoundEvent_7_OnFleetSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::BndEvt__RecruitButton_K2Node_ComponentBoundEvent_7_OnFleetSelected__DelegateSignature(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.BndEvt__RecruitButton_K2Node_ComponentBoundEvent_7_OnFleetSelected__DelegateSignature");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_BndEvt__RecruitButton_K2Node_ComponentBoundEvent_7_OnFleetSelected__DelegateSignature_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.BndEvt__VeteranButton_K2Node_ComponentBoundEvent_8_OnFleetSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::BndEvt__VeteranButton_K2Node_ComponentBoundEvent_8_OnFleetSelected__DelegateSignature(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.BndEvt__VeteranButton_K2Node_ComponentBoundEvent_8_OnFleetSelected__DelegateSignature");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_BndEvt__VeteranButton_K2Node_ComponentBoundEvent_8_OnFleetSelected__DelegateSignature_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_9_OnFleetSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_9_OnFleetSelected__DelegateSignature(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_9_OnFleetSelected__DelegateSignature");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_9_OnFleetSelected__DelegateSignature_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.OnNavigationEvent");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.ExecuteUbergraph_UI_Popup_CustomMatchLobby_FleetSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::ExecuteUbergraph_UI_Popup_CustomMatchLobby_FleetSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.ExecuteUbergraph_UI_Popup_CustomMatchLobby_FleetSelect");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_ExecuteUbergraph_UI_Popup_CustomMatchLobby_FleetSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.OnFleetSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_CustomMatchLobby_FleetSelect_C::OnFleetSelected__DelegateSignature(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C.OnFleetSelected__DelegateSignature");
		
		UUI_Popup_CustomMatchLobby_FleetSelect_C_OnFleetSelected__DelegateSignature_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Popup_CustomMatchLobby_FleetSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Popup_CustomMatchLobby_FleetSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C");
		return ptr;
	}

}


