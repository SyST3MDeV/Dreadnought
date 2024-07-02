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
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HideUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Root_FrontEnd_C::HideUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HideUI");
		
		UUI_Screen_Root_FrontEnd_C_HideUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.ShowUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Root_FrontEnd_C::ShowUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.ShowUI");
		
		UUI_Screen_Root_FrontEnd_C_ShowUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HandleMouseButtonReleased
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Root_FrontEnd_C::HandleMouseButtonReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HandleMouseButtonReleased");
		
		UUI_Screen_Root_FrontEnd_C_HandleMouseButtonReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HandleCameraMoved
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Root_FrontEnd_C::HandleCameraMoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HandleCameraMoved");
		
		UUI_Screen_Root_FrontEnd_C_HandleCameraMoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.ToggleUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Root_FrontEnd_C::ToggleUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.ToggleUI");
		
		UUI_Screen_Root_FrontEnd_C_ToggleUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    MenuAction                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Root_FrontEnd_C::HandleInput(EUI_MenuActions MenuAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HandleInput");
		
		UUI_Screen_Root_FrontEnd_C_HandleInput_Params params {};
		params.MenuAction = MenuAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.ShowPersistentScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Root_FrontEnd_C::ShowPersistentScreen(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.ShowPersistentScreen");
		
		UUI_Screen_Root_FrontEnd_C_ShowPersistentScreen_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HideLegend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Root_FrontEnd_C::HideLegend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HideLegend");
		
		UUI_Screen_Root_FrontEnd_C_HideLegend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.SetLegend
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLegendPromptData>                   legend                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Screen_Root_FrontEnd_C::SetLegend(TArray<struct FLegendPromptData>* legend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.SetLegend");
		
		UUI_Screen_Root_FrontEnd_C_SetLegend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (legend != nullptr)
			*legend = params.legend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HangarScrimHideComplete
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Root_FrontEnd_C::HangarScrimHideComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HangarScrimHideComplete");
		
		UUI_Screen_Root_FrontEnd_C_HangarScrimHideComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.ShowHangarScrim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowScrim                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Root_FrontEnd_C::ShowHangarScrim(bool ShowScrim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.ShowHangarScrim");
		
		UUI_Screen_Root_FrontEnd_C_ShowHangarScrim_Params params {};
		params.ShowScrim = ShowScrim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Root_FrontEnd_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.Construct");
		
		UUI_Screen_Root_FrontEnd_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.BndEvt__HideHangarScrim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_Root_FrontEnd_C::BndEvt__HideHangarScrim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.BndEvt__HideHangarScrim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UUI_Screen_Root_FrontEnd_C_BndEvt__HideHangarScrim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.SetPersistentScreenVisible
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Root_FrontEnd_C::SetPersistentScreenVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.SetPersistentScreenVisible");
		
		UUI_Screen_Root_FrontEnd_C_SetPersistentScreenVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.SetHangarScrimVisible
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Root_FrontEnd_C::SetHangarScrimVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.SetHangarScrimVisible");
		
		UUI_Screen_Root_FrontEnd_C_SetHangarScrimVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Root_FrontEnd_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.OnNavigationEvent");
		
		UUI_Screen_Root_FrontEnd_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.ExecuteUbergraph_UI_Screen_Root_FrontEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Root_FrontEnd_C::ExecuteUbergraph_UI_Screen_Root_FrontEnd(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.ExecuteUbergraph_UI_Screen_Root_FrontEnd");
		
		UUI_Screen_Root_FrontEnd_C_ExecuteUbergraph_UI_Screen_Root_FrontEnd_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.OnScreenTransitionedOut__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Root_FrontEnd_C::OnScreenTransitionedOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.OnScreenTransitionedOut__DelegateSignature");
		
		UUI_Screen_Root_FrontEnd_C_OnScreenTransitionedOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_Root_FrontEnd_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_Root_FrontEnd_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C");
		return ptr;
	}

}


