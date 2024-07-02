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
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.UnfocusCurrentWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             NewWidget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_GpToCreditsDetails_C::UnfocusCurrentWidget(class UUI_DreadWidget* NewWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.UnfocusCurrentWidget");
		
		UUI_Popup_GpToCreditsDetails_C_UnfocusCurrentWidget_Params params {};
		params.NewWidget = NewWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.HandleItemHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_GpToCreditsDetails_C::HandleItemHovered(class UUI_Button_Generic_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.HandleItemHovered");
		
		UUI_Popup_GpToCreditsDetails_C_HandleItemHovered_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.SetWidgetFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_GpToCreditsDetails_C::SetWidgetFocus(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.SetWidgetFocus");
		
		UUI_Popup_GpToCreditsDetails_C_SetWidgetFocus_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Popup_GpToCreditsDetails_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.Setup");
		
		UUI_Popup_GpToCreditsDetails_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    Input                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_GpToCreditsDetails_C::HandleInput(EUI_MenuActions Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.HandleInput");
		
		UUI_Popup_GpToCreditsDetails_C_HandleInput_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.ButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_GpToCreditsDetails_C::ButtonClicked(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.ButtonClicked");
		
		UUI_Popup_GpToCreditsDetails_C_ButtonClicked_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.HandlePopupData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGpToCreditsDetailsPopupData*                PopupData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_GpToCreditsDetails_C::HandlePopupData(class UGpToCreditsDetailsPopupData* PopupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.HandlePopupData");
		
		UUI_Popup_GpToCreditsDetails_C_HandlePopupData_Params params {};
		params.PopupData = PopupData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Popup_GpToCreditsDetails_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.Construct");
		
		UUI_Popup_GpToCreditsDetails_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.OnPopupDataSet
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UPopupData*                                  PopupData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_GpToCreditsDetails_C::OnPopupDataSet(class UPopupData* PopupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.OnPopupDataSet");
		
		UUI_Popup_GpToCreditsDetails_C_OnPopupDataSet_Params params {};
		params.PopupData = PopupData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Popup_GpToCreditsDetails_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.OnTransitionIn");
		
		UUI_Popup_GpToCreditsDetails_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Popup_GpToCreditsDetails_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.OnTransitionOut");
		
		UUI_Popup_GpToCreditsDetails_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Popup_GpToCreditsDetails_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.TransitionInAnimationComplete");
		
		UUI_Popup_GpToCreditsDetails_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Popup_GpToCreditsDetails_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.TransitionOutAnimationComplete");
		
		UUI_Popup_GpToCreditsDetails_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_GpToCreditsDetails_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UUI_Popup_GpToCreditsDetails_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_17_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_GpToCreditsDetails_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_17_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_17_OnButtonClicked__DelegateSignature");
		
		UUI_Popup_GpToCreditsDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_17_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_GpToCreditsDetails_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.OnNavigationEvent");
		
		UUI_Popup_GpToCreditsDetails_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.ExecuteUbergraph_UI_Popup_GpToCreditsDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_GpToCreditsDetails_C::ExecuteUbergraph_UI_Popup_GpToCreditsDetails(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.ExecuteUbergraph_UI_Popup_GpToCreditsDetails");
		
		UUI_Popup_GpToCreditsDetails_C_ExecuteUbergraph_UI_Popup_GpToCreditsDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.OnButtonSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_GpToCreditsDetails_C::OnButtonSelected__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C.OnButtonSelected__DelegateSignature");
		
		UUI_Popup_GpToCreditsDetails_C_OnButtonSelected__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Popup_GpToCreditsDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Popup_GpToCreditsDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Popup_GpToCreditsDetails.UI_Popup_GpToCreditsDetails_C");
		return ptr;
	}

}


