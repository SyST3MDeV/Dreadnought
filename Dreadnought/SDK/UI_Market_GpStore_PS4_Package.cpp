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
	 * 		Name   -> Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.GetIsFocused
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_GpStore_PS4_C::GetIsFocused(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.GetIsFocused");
		
		UUI_Market_GpStore_PS4_C_GetIsFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_GpStore_PS4_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.HandleUnfocus");
		
		UUI_Market_GpStore_PS4_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_GpStore_PS4_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.HandleFocus");
		
		UUI_Market_GpStore_PS4_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Market_GpStore_PS4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.Construct");
		
		UUI_Market_GpStore_PS4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.BndEvt__StoreButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Market_GpStore_PS4_C::BndEvt__StoreButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.BndEvt__StoreButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Market_GpStore_PS4_C_BndEvt__StoreButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Market_GpStore_PS4_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.OnActionReceived");
		
		UUI_Market_GpStore_PS4_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Market_GpStore_PS4_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Market_GpStore_PS4_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Market_GpStore_PS4_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Market_GpStore_PS4_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.ExecuteUbergraph_UI_Market_GpStore_PS4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_GpStore_PS4_C::ExecuteUbergraph_UI_Market_GpStore_PS4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.ExecuteUbergraph_UI_Market_GpStore_PS4");
		
		UUI_Market_GpStore_PS4_C_ExecuteUbergraph_UI_Market_GpStore_PS4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.OnClick__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_GpStore_PS4_C::OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C.OnClick__DelegateSignature");
		
		UUI_Market_GpStore_PS4_C_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Market_GpStore_PS4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Market_GpStore_PS4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Market_GpStore_PS4.UI_Market_GpStore_PS4_C");
		return ptr;
	}

}


