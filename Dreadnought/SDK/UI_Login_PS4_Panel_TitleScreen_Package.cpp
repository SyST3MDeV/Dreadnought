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
	 * 		Name   -> Function UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_TitleScreen_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C.Action");
		
		UUI_Login_PS4_Panel_TitleScreen_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C.StartSignIn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_TitleScreen_C::StartSignIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C.StartSignIn");
		
		UUI_Login_PS4_Panel_TitleScreen_C_StartSignIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C.ResetSignInState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_TitleScreen_C::ResetSignInState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C.ResetSignInState");
		
		UUI_Login_PS4_Panel_TitleScreen_C_ResetSignInState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C.OnShow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_TitleScreen_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C.OnShow");
		
		UUI_Login_PS4_Panel_TitleScreen_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C.OnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_TitleScreen_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C.OnHide");
		
		UUI_Login_PS4_Panel_TitleScreen_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_TitleScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C.Construct");
		
		UUI_Login_PS4_Panel_TitleScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C.ExecuteUbergraph_UI_Login_PS4_Panel_TitleScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_TitleScreen_C::ExecuteUbergraph_UI_Login_PS4_Panel_TitleScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C.ExecuteUbergraph_UI_Login_PS4_Panel_TitleScreen");
		
		UUI_Login_PS4_Panel_TitleScreen_C_ExecuteUbergraph_UI_Login_PS4_Panel_TitleScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C.StartUserProfileSignIn__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_TitleScreen_C::StartUserProfileSignIn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C.StartUserProfileSignIn__DelegateSignature");
		
		UUI_Login_PS4_Panel_TitleScreen_C_StartUserProfileSignIn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Login_PS4_Panel_TitleScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Login_PS4_Panel_TitleScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Login_PS4_Panel_TitleScreen.UI_Login_PS4_Panel_TitleScreen_C");
		return ptr;
	}

}


