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
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_CTA_Overlay_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.Setup");
		
		UUI_Persistent_CTA_Overlay_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HandleCTACloseOnConnectionLost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_CTA_Overlay_C::HandleCTACloseOnConnectionLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HandleCTACloseOnConnectionLost");
		
		UUI_Persistent_CTA_Overlay_C_HandleCTACloseOnConnectionLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HasCTAFrequencyBeenReached
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UYCtA*                                       CTAData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FrequencyReached                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_CTA_Overlay_C::HasCTAFrequencyBeenReached(class UYCtA* CTAData, bool* FrequencyReached)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HasCTAFrequencyBeenReached");
		
		UUI_Persistent_CTA_Overlay_C_HasCTAFrequencyBeenReached_Params params {};
		params.CTAData = CTAData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FrequencyReached != nullptr)
			*FrequencyReached = params.FrequencyReached;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Input                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_CTA_Overlay_C::HandleInput(EUI_MenuActions GamePad_Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HandleInput");
		
		UUI_Persistent_CTA_Overlay_C_HandleInput_Params params {};
		params.GamePad_Input = GamePad_Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.IsDisplayingCTA
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsDisplayingCTA                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_CTA_Overlay_C::IsDisplayingCTA(bool* IsDisplayingCTA)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.IsDisplayingCTA");
		
		UUI_Persistent_CTA_Overlay_C_IsDisplayingCTA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDisplayingCTA != nullptr)
			*IsDisplayingCTA = params.IsDisplayingCTA;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HandleCTACloseComplete
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CtAWidget*                               CtAWidget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_CTA_Overlay_C::HandleCTACloseComplete(class UUI_CtAWidget* CtAWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HandleCTACloseComplete");
		
		UUI_Persistent_CTA_Overlay_C_HandleCTACloseComplete_Params params {};
		params.CtAWidget = CtAWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HandleCTACloseRequest
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CtAWidget*                               CtAWidget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_CTA_Overlay_C::HandleCTACloseRequest(class UUI_CtAWidget* CtAWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HandleCTACloseRequest");
		
		UUI_Persistent_CTA_Overlay_C_HandleCTACloseRequest_Params params {};
		params.CtAWidget = CtAWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.CreateCTA
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UYCtA*                                       CTAData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_CTA_Overlay_C::CreateCTA(class UYCtA* CTAData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.CreateCTA");
		
		UUI_Persistent_CTA_Overlay_C_CreateCTA_Params params {};
		params.CTAData = CTAData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.IsScreenValidForCTA
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UYCtA*                                       CTAData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ScreenIsValid                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_CTA_Overlay_C::IsScreenValidForCTA(class UYCtA* CTAData, bool* ScreenIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.IsScreenValidForCTA");
		
		UUI_Persistent_CTA_Overlay_C_IsScreenValidForCTA_Params params {};
		params.CTAData = CTAData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScreenIsValid != nullptr)
			*ScreenIsValid = params.ScreenIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.EnqueueCTA
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UYCtA*                                       CTAData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_CTA_Overlay_C::EnqueueCTA(class UYCtA* CTAData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.EnqueueCTA");
		
		UUI_Persistent_CTA_Overlay_C_EnqueueCTA_Params params {};
		params.CTAData = CTAData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.ShowCTAWidgetByClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CtaClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_CTA_Overlay_C::ShowCTAWidgetByClass(class UClass* CtaClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.ShowCTAWidgetByClass");
		
		UUI_Persistent_CTA_Overlay_C_ShowCTAWidgetByClass_Params params {};
		params.CtaClass = CtaClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.TriggerQueuedCtA
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_CTA_Overlay_C::TriggerQueuedCtA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.TriggerQueuedCtA");
		
		UUI_Persistent_CTA_Overlay_C_TriggerQueuedCtA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HandleScreenChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_CTA_Overlay_C::HandleScreenChanged(EUI_Screen screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HandleScreenChanged");
		
		UUI_Persistent_CTA_Overlay_C_HandleScreenChanged_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.ShowCTA
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UYCtA*                                       CTAData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_CTA_Overlay_C::ShowCTA(class UYCtA* CTAData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.ShowCTA");
		
		UUI_Persistent_CTA_Overlay_C_ShowCTA_Params params {};
		params.CTAData = CTAData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Persistent_CTA_Overlay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.Construct");
		
		UUI_Persistent_CTA_Overlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_CTA_Overlay_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.OnNavigationEvent");
		
		UUI_Persistent_CTA_Overlay_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.ExecuteUbergraph_UI_Persistent_CTA_Overlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_CTA_Overlay_C::ExecuteUbergraph_UI_Persistent_CTA_Overlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.ExecuteUbergraph_UI_Persistent_CTA_Overlay");
		
		UUI_Persistent_CTA_Overlay_C_ExecuteUbergraph_UI_Persistent_CTA_Overlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Persistent_CTA_Overlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Persistent_CTA_Overlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C");
		return ptr;
	}

}


