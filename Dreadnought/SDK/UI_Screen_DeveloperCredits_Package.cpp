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
	 * 		Name   -> Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.TickForceScrolling
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_DeveloperCredits_C::TickForceScrolling(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.TickForceScrolling");
		
		UUI_Screen_DeveloperCredits_C_TickForceScrolling_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.HandleForcedScrolling
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ScrollUp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_DeveloperCredits_C::HandleForcedScrolling(bool ScrollUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.HandleForcedScrolling");
		
		UUI_Screen_DeveloperCredits_C_HandleForcedScrolling_Params params {};
		params.ScrollUp = ScrollUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_DeveloperCredits_C::HandleInput(EUI_MenuActions GamePadInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.HandleInput");
		
		UUI_Screen_DeveloperCredits_C_HandleInput_Params params {};
		params.GamePadInput = GamePadInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.SetupCreditsText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_DeveloperCredits_C::SetupCreditsText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.SetupCreditsText");
		
		UUI_Screen_DeveloperCredits_C_SetupCreditsText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_DeveloperCredits_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.Construct");
		
		UUI_Screen_DeveloperCredits_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_DeveloperCredits_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.OnTransitionIn");
		
		UUI_Screen_DeveloperCredits_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_DeveloperCredits_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.OnTransitionOut");
		
		UUI_Screen_DeveloperCredits_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_DeveloperCredits_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.TransitionInAnimationComplete");
		
		UUI_Screen_DeveloperCredits_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_DeveloperCredits_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.TransitionOutAnimationComplete");
		
		UUI_Screen_DeveloperCredits_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_DeveloperCredits_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.Tick");
		
		UUI_Screen_DeveloperCredits_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_DeveloperCredits_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.OnNavigationEvent");
		
		UUI_Screen_DeveloperCredits_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.ResetAutoScrolling
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_DeveloperCredits_C::ResetAutoScrolling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.ResetAutoScrolling");
		
		UUI_Screen_DeveloperCredits_C_ResetAutoScrolling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.ExecuteUbergraph_UI_Screen_DeveloperCredits
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_DeveloperCredits_C::ExecuteUbergraph_UI_Screen_DeveloperCredits(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.ExecuteUbergraph_UI_Screen_DeveloperCredits");
		
		UUI_Screen_DeveloperCredits_C_ExecuteUbergraph_UI_Screen_DeveloperCredits_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_DeveloperCredits_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_DeveloperCredits_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C");
		return ptr;
	}

}


