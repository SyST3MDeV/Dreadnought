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
	 * 		Name   -> Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_Congratulations_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.Action");
		
		UUI_Login_PS4_Panel_Congratulations_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.HandleProceedFromCongratulationsError
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_Congratulations_C::HandleProceedFromCongratulationsError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.HandleProceedFromCongratulationsError");
		
		UUI_Login_PS4_Panel_Congratulations_C_HandleProceedFromCongratulationsError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.Setup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCongratulationsScreenData                  CongratsScreenData                                         (Parm)
	 */
	void UUI_Login_PS4_Panel_Congratulations_C::Setup(const struct FCongratulationsScreenData& CongratsScreenData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.Setup");
		
		UUI_Login_PS4_Panel_Congratulations_C_Setup_Params params {};
		params.CongratsScreenData = CongratsScreenData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.OnShow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_Congratulations_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.OnShow");
		
		UUI_Login_PS4_Panel_Congratulations_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.OnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_Congratulations_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.OnHide");
		
		UUI_Login_PS4_Panel_Congratulations_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_Congratulations_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.Construct");
		
		UUI_Login_PS4_Panel_Congratulations_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.ExecuteUbergraph_UI_Login_PS4_Panel_Congratulations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_Congratulations_C::ExecuteUbergraph_UI_Login_PS4_Panel_Congratulations(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.ExecuteUbergraph_UI_Login_PS4_Panel_Congratulations");
		
		UUI_Login_PS4_Panel_Congratulations_C_ExecuteUbergraph_UI_Login_PS4_Panel_Congratulations_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.ProceedFromCongratulations__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_Congratulations_C::ProceedFromCongratulations__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.ProceedFromCongratulations__DelegateSignature");
		
		UUI_Login_PS4_Panel_Congratulations_C_ProceedFromCongratulations__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Login_PS4_Panel_Congratulations_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Login_PS4_Panel_Congratulations_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C");
		return ptr;
	}

}


