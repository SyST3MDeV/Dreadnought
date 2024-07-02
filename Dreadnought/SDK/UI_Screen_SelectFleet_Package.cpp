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
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.HandleInputPopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_SelectFleet_C::HandleInputPopup(EUI_MenuActions Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.HandleInputPopup");
		
		UUI_Screen_SelectFleet_C_HandleInputPopup_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.SendFleetAnalytics
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_SelectFleet_C::SendFleetAnalytics(EYFleetType Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.SendFleetAnalytics");
		
		UUI_Screen_SelectFleet_C_SendFleetAnalytics_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.SetupInitialFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_SelectFleet_C::SetupInitialFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.SetupInitialFocus");
		
		UUI_Screen_SelectFleet_C_SetupInitialFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.HandleGranularRightInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_SelectFleet_C::HandleGranularRightInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.HandleGranularRightInput");
		
		UUI_Screen_SelectFleet_C_HandleGranularRightInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.HandleGranularLeftInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_SelectFleet_C::HandleGranularLeftInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.HandleGranularLeftInput");
		
		UUI_Screen_SelectFleet_C_HandleGranularLeftInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_SelectFleet_C::HandleInput(EUI_MenuActions GamePadInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.HandleInput");
		
		UUI_Screen_SelectFleet_C_HandleInput_Params params {};
		params.GamePadInput = GamePadInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.HandleFocusUpdate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             FocusedItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_SelectFleet_C::HandleFocusUpdate(class UUI_DreadWidget* FocusedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.HandleFocusUpdate");
		
		UUI_Screen_SelectFleet_C_HandleFocusUpdate_Params params {};
		params.FocusedItem = FocusedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.InitializeFleetButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_SelectFleet_C*                    FleetButtonWidget                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYFleetType                                        Fleet                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FleetIsLocked                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_SelectFleet_C::InitializeFleetButton(class UUI_Button_SelectFleet_C* FleetButtonWidget, EYFleetType Fleet, bool FleetIsLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.InitializeFleetButton");
		
		UUI_Screen_SelectFleet_C_InitializeFleetButton_Params params {};
		params.FleetButtonWidget = FleetButtonWidget;
		params.Fleet = Fleet;
		params.FleetIsLocked = FleetIsLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.FleetTypeSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        FleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_SelectFleet_C::FleetTypeSelected(EYFleetType FleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.FleetTypeSelected");
		
		UUI_Screen_SelectFleet_C_FleetTypeSelected_Params params {};
		params.FleetType = FleetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_SelectFleet_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.Setup");
		
		UUI_Screen_SelectFleet_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_SelectFleet_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.Construct");
		
		UUI_Screen_SelectFleet_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_SelectFleet_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.OnTransitionIn");
		
		UUI_Screen_SelectFleet_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_SelectFleet_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.OnTransitionOut");
		
		UUI_Screen_SelectFleet_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.TransitionInAnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_SelectFleet_C::TransitionInAnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.TransitionInAnimComplete");
		
		UUI_Screen_SelectFleet_C_TransitionInAnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.TransitionOutAnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_SelectFleet_C::TransitionOutAnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.TransitionOutAnimComplete");
		
		UUI_Screen_SelectFleet_C_TransitionOutAnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_4_FleetClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_SelectFleet_C::BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_4_FleetClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_4_FleetClicked__DelegateSignature");
		
		UUI_Screen_SelectFleet_C_BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_4_FleetClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__RecruitButton_K2Node_ComponentBoundEvent_5_FleetClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_SelectFleet_C::BndEvt__RecruitButton_K2Node_ComponentBoundEvent_5_FleetClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__RecruitButton_K2Node_ComponentBoundEvent_5_FleetClicked__DelegateSignature");
		
		UUI_Screen_SelectFleet_C_BndEvt__RecruitButton_K2Node_ComponentBoundEvent_5_FleetClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__VeteranButton_K2Node_ComponentBoundEvent_6_FleetClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_SelectFleet_C::BndEvt__VeteranButton_K2Node_ComponentBoundEvent_6_FleetClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__VeteranButton_K2Node_ComponentBoundEvent_6_FleetClicked__DelegateSignature");
		
		UUI_Screen_SelectFleet_C_BndEvt__VeteranButton_K2Node_ComponentBoundEvent_6_FleetClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_7_ManageFleetClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_SelectFleet_C::BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_7_ManageFleetClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_7_ManageFleetClicked__DelegateSignature");
		
		UUI_Screen_SelectFleet_C_BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_7_ManageFleetClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__RecruitButton_K2Node_ComponentBoundEvent_8_ManageFleetClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_SelectFleet_C::BndEvt__RecruitButton_K2Node_ComponentBoundEvent_8_ManageFleetClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__RecruitButton_K2Node_ComponentBoundEvent_8_ManageFleetClicked__DelegateSignature");
		
		UUI_Screen_SelectFleet_C_BndEvt__RecruitButton_K2Node_ComponentBoundEvent_8_ManageFleetClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__VeteranButton_K2Node_ComponentBoundEvent_9_ManageFleetClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_SelectFleet_C::BndEvt__VeteranButton_K2Node_ComponentBoundEvent_9_ManageFleetClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.BndEvt__VeteranButton_K2Node_ComponentBoundEvent_9_ManageFleetClicked__DelegateSignature");
		
		UUI_Screen_SelectFleet_C_BndEvt__VeteranButton_K2Node_ComponentBoundEvent_9_ManageFleetClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_SelectFleet_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.OnNavigationEvent");
		
		UUI_Screen_SelectFleet_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.ExecuteUbergraph_UI_Screen_SelectFleet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_SelectFleet_C::ExecuteUbergraph_UI_Screen_SelectFleet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectFleet.UI_Screen_SelectFleet_C.ExecuteUbergraph_UI_Screen_SelectFleet");
		
		UUI_Screen_SelectFleet_C_ExecuteUbergraph_UI_Screen_SelectFleet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_SelectFleet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_SelectFleet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_SelectFleet.UI_Screen_SelectFleet_C");
		return ptr;
	}

}


