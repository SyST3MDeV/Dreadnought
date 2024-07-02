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
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.UpdateFleetTier
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_GameModeLaunch_C::UpdateFleetTier(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.UpdateFleetTier");
		
		UUI_Screen_GameModeLaunch_C_UpdateFleetTier_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_GameModeLaunch_C::HandleInput(EUI_MenuActions GamePadButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.HandleInput");
		
		UUI_Screen_GameModeLaunch_C_HandleInput_Params params {};
		params.GamePadButton = GamePadButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.SetIconBrush
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYGameModeType                                     gameModeType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_GameModeLaunch_C::SetIconBrush(EYGameModeType gameModeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.SetIconBrush");
		
		UUI_Screen_GameModeLaunch_C_SetIconBrush_Params params {};
		params.gameModeType = gameModeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.SetupScreen
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_GameModeLaunch_C::SetupScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.SetupScreen");
		
		UUI_Screen_GameModeLaunch_C_SetupScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.SetBGBrush
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYGameModeType                                     gameModeType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_GameModeLaunch_C::SetBGBrush(EYGameModeType gameModeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.SetBGBrush");
		
		UUI_Screen_GameModeLaunch_C_SetBGBrush_Params params {};
		params.gameModeType = gameModeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_GameModeLaunch_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.Construct");
		
		UUI_Screen_GameModeLaunch_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_GameModeLaunch_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.OnTransitionIn");
		
		UUI_Screen_GameModeLaunch_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_GameModeLaunch_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.OnTransitionOut");
		
		UUI_Screen_GameModeLaunch_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.TransitionOutAnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_GameModeLaunch_C::TransitionOutAnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.TransitionOutAnimComplete");
		
		UUI_Screen_GameModeLaunch_C_TransitionOutAnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.TransitionInAnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_GameModeLaunch_C::TransitionInAnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.TransitionInAnimComplete");
		
		UUI_Screen_GameModeLaunch_C_TransitionInAnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_GameModeLaunch_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.OnNavigationEvent");
		
		UUI_Screen_GameModeLaunch_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.BndEvt__GameModePlayButton_K2Node_ComponentBoundEvent_435_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_GameModeLaunch_C::BndEvt__GameModePlayButton_K2Node_ComponentBoundEvent_435_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.BndEvt__GameModePlayButton_K2Node_ComponentBoundEvent_435_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Screen_GameModeLaunch_C_BndEvt__GameModePlayButton_K2Node_ComponentBoundEvent_435_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.BndEvt__ManageFleetButton_K2Node_ComponentBoundEvent_469_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_GameModeLaunch_C::BndEvt__ManageFleetButton_K2Node_ComponentBoundEvent_469_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.BndEvt__ManageFleetButton_K2Node_ComponentBoundEvent_469_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Screen_GameModeLaunch_C_BndEvt__ManageFleetButton_K2Node_ComponentBoundEvent_469_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.BndEvt__PrevFleetButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_GameModeLaunch_C::BndEvt__PrevFleetButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.BndEvt__PrevFleetButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Screen_GameModeLaunch_C_BndEvt__PrevFleetButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.BndEvt__NextFleetButton_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_GameModeLaunch_C::BndEvt__NextFleetButton_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.BndEvt__NextFleetButton_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Screen_GameModeLaunch_C_BndEvt__NextFleetButton_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_GameModeLaunch_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Screen_GameModeLaunch_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.OnMatchmakingStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_GameModeLaunch_C::OnMatchmakingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.OnMatchmakingStarted");
		
		UUI_Screen_GameModeLaunch_C_OnMatchmakingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.OnMatchmakingStopped
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_GameModeLaunch_C::OnMatchmakingStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.OnMatchmakingStopped");
		
		UUI_Screen_GameModeLaunch_C_OnMatchmakingStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.ExecuteUbergraph_UI_Screen_GameModeLaunch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_GameModeLaunch_C::ExecuteUbergraph_UI_Screen_GameModeLaunch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.ExecuteUbergraph_UI_Screen_GameModeLaunch");
		
		UUI_Screen_GameModeLaunch_C_ExecuteUbergraph_UI_Screen_GameModeLaunch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_GameModeLaunch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_GameModeLaunch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C");
		return ptr;
	}

}


