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
	 * 		Name   -> Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.ButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        ButtonRef                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_ActivateBattleBonusConfirmation_C::ButtonClicked(class UUI_Button_Generic_C* ButtonRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.ButtonClicked");
		
		UUI_Popup_ActivateBattleBonusConfirmation_C_ButtonClicked_Params params {};
		params.ButtonRef = ButtonRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.HandlePS4
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Popup_ActivateBattleBonusConfirmation_C::HandlePS4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.HandlePS4");
		
		UUI_Popup_ActivateBattleBonusConfirmation_C_HandlePS4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.HandlePopupData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UActivateBattleBonusConfirmationPopupData*   PopupData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_ActivateBattleBonusConfirmation_C::HandlePopupData(class UActivateBattleBonusConfirmationPopupData* PopupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.HandlePopupData");
		
		UUI_Popup_ActivateBattleBonusConfirmation_C_HandlePopupData_Params params {};
		params.PopupData = PopupData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Popup_ActivateBattleBonusConfirmation_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.Construct");
		
		UUI_Popup_ActivateBattleBonusConfirmation_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Popup_ActivateBattleBonusConfirmation_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.TransitionInAnimationComplete");
		
		UUI_Popup_ActivateBattleBonusConfirmation_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Popup_ActivateBattleBonusConfirmation_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.TransitionOutAnimationComplete");
		
		UUI_Popup_ActivateBattleBonusConfirmation_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_ActivateBattleBonusConfirmation_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UUI_Popup_ActivateBattleBonusConfirmation_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_ActivateBattleBonusConfirmation_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UUI_Popup_ActivateBattleBonusConfirmation_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_ActivateBattleBonusConfirmation_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.OnNavigationEvent");
		
		UUI_Popup_ActivateBattleBonusConfirmation_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.OnPopupDataSet
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UPopupData*                                  PopupData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_ActivateBattleBonusConfirmation_C::OnPopupDataSet(class UPopupData* PopupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.OnPopupDataSet");
		
		UUI_Popup_ActivateBattleBonusConfirmation_C_OnPopupDataSet_Params params {};
		params.PopupData = PopupData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Popup_ActivateBattleBonusConfirmation_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.OnTransitionOut");
		
		UUI_Popup_ActivateBattleBonusConfirmation_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Popup_ActivateBattleBonusConfirmation_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.OnTransitionIn");
		
		UUI_Popup_ActivateBattleBonusConfirmation_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.ExecuteUbergraph_UI_Popup_ActivateBattleBonusConfirmation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_ActivateBattleBonusConfirmation_C::ExecuteUbergraph_UI_Popup_ActivateBattleBonusConfirmation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.ExecuteUbergraph_UI_Popup_ActivateBattleBonusConfirmation");
		
		UUI_Popup_ActivateBattleBonusConfirmation_C_ExecuteUbergraph_UI_Popup_ActivateBattleBonusConfirmation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.OnButtonSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        ButtonRef                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_ActivateBattleBonusConfirmation_C::OnButtonSelected__DelegateSignature(class UUI_Button_Generic_C* ButtonRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C.OnButtonSelected__DelegateSignature");
		
		UUI_Popup_ActivateBattleBonusConfirmation_C_OnButtonSelected__DelegateSignature_Params params {};
		params.ButtonRef = ButtonRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Popup_ActivateBattleBonusConfirmation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Popup_ActivateBattleBonusConfirmation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C");
		return ptr;
	}

}


