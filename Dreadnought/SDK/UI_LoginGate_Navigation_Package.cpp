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
	 * 		Name   -> Function UI_LoginGate_Navigation.UI_LoginGate_Navigation_C.BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LoginGate_Navigation_C::BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Navigation.UI_LoginGate_Navigation_C.BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UUI_LoginGate_Navigation_C_BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Navigation.UI_LoginGate_Navigation_C.ExecuteUbergraph_UI_LoginGate_Navigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LoginGate_Navigation_C::ExecuteUbergraph_UI_LoginGate_Navigation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Navigation.UI_LoginGate_Navigation_C.ExecuteUbergraph_UI_LoginGate_Navigation");
		
		UUI_LoginGate_Navigation_C_ExecuteUbergraph_UI_LoginGate_Navigation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Navigation.UI_LoginGate_Navigation_C.OnExitButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_LoginGate_Navigation_C::OnExitButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Navigation.UI_LoginGate_Navigation_C.OnExitButtonClicked__DelegateSignature");
		
		UUI_LoginGate_Navigation_C_OnExitButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LoginGate_Navigation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LoginGate_Navigation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LoginGate_Navigation.UI_LoginGate_Navigation_C");
		return ptr;
	}

}


