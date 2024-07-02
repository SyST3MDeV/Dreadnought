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
	 * 		Name   -> Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.IsPopupActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UUI_Login_PC_Panel_TitleScreen_C::IsPopupActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.IsPopupActive");
		
		UUI_Login_PC_Panel_TitleScreen_C_IsPopupActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.ResetSessionRequestState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PC_Panel_TitleScreen_C::ResetSessionRequestState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.ResetSessionRequestState");
		
		UUI_Login_PC_Panel_TitleScreen_C_ResetSessionRequestState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.SessionRequestStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PC_Panel_TitleScreen_C::SessionRequestStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.SessionRequestStarted");
		
		UUI_Login_PC_Panel_TitleScreen_C_SessionRequestStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.OnShow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PC_Panel_TitleScreen_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.OnShow");
		
		UUI_Login_PC_Panel_TitleScreen_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.OnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PC_Panel_TitleScreen_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.OnHide");
		
		UUI_Login_PC_Panel_TitleScreen_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PC_Panel_TitleScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.Construct");
		
		UUI_Login_PC_Panel_TitleScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.BndEvt__TitleScreenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Login_PC_Panel_TitleScreen_C::BndEvt__TitleScreenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.BndEvt__TitleScreenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Login_PC_Panel_TitleScreen_C_BndEvt__TitleScreenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.ExecuteUbergraph_UI_Login_PC_Panel_TitleScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PC_Panel_TitleScreen_C::ExecuteUbergraph_UI_Login_PC_Panel_TitleScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.ExecuteUbergraph_UI_Login_PC_Panel_TitleScreen");
		
		UUI_Login_PC_Panel_TitleScreen_C_ExecuteUbergraph_UI_Login_PC_Panel_TitleScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.OnRequestSession__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PC_Panel_TitleScreen_C::OnRequestSession__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.OnRequestSession__DelegateSignature");
		
		UUI_Login_PC_Panel_TitleScreen_C_OnRequestSession__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Login_PC_Panel_TitleScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Login_PC_Panel_TitleScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C");
		return ptr;
	}

}


