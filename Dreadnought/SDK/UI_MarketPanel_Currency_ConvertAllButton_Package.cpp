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
	 * 		Name   -> Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.GetIsFocused
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFocused                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_ConvertAllButton_C::GetIsFocused(bool* IsFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.GetIsFocused");
		
		UUI_MarketPanel_Currency_ConvertAllButton_C_GetIsFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFocused != nullptr)
			*IsFocused = params.IsFocused;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_ConvertAllButton_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.Action");
		
		UUI_MarketPanel_Currency_ConvertAllButton_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_ConvertAllButton_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.HandleUnfocus");
		
		UUI_MarketPanel_Currency_ConvertAllButton_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_ConvertAllButton_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.HandleFocus");
		
		UUI_MarketPanel_Currency_ConvertAllButton_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_ConvertAllButton_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.Setup");
		
		UUI_MarketPanel_Currency_ConvertAllButton_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_ConvertAllButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.Construct");
		
		UUI_MarketPanel_Currency_ConvertAllButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.BndEvt__ConvertAllNowButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_ConvertAllButton_C::BndEvt__ConvertAllNowButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UUI_Button_Generic_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.BndEvt__ConvertAllNowButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		UUI_MarketPanel_Currency_ConvertAllButton_C_BndEvt__ConvertAllNowButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.BndEvt__ConvertAllNowButton_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_ConvertAllButton_C::BndEvt__ConvertAllNowButton_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature(class UUI_Button_Generic_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.BndEvt__ConvertAllNowButton_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature");
		
		UUI_MarketPanel_Currency_ConvertAllButton_C_BndEvt__ConvertAllNowButton_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_ConvertAllButton_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.OnActionReceived");
		
		UUI_MarketPanel_Currency_ConvertAllButton_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.ExecuteUbergraph_UI_MarketPanel_Currency_ConvertAllButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_ConvertAllButton_C::ExecuteUbergraph_UI_MarketPanel_Currency_ConvertAllButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.ExecuteUbergraph_UI_MarketPanel_Currency_ConvertAllButton");
		
		UUI_MarketPanel_Currency_ConvertAllButton_C_ExecuteUbergraph_UI_MarketPanel_Currency_ConvertAllButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.OnItemUnfocused__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_ConvertAllButton_C::OnItemUnfocused__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.OnItemUnfocused__DelegateSignature");
		
		UUI_MarketPanel_Currency_ConvertAllButton_C_OnItemUnfocused__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.OnItemFocused__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_ConvertAllButton_C::OnItemFocused__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.OnItemFocused__DelegateSignature");
		
		UUI_MarketPanel_Currency_ConvertAllButton_C_OnItemFocused__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.OnItemHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_ConvertAllButton_C::OnItemHovered__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.OnItemHovered__DelegateSignature");
		
		UUI_MarketPanel_Currency_ConvertAllButton_C_OnItemHovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.OnItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_ConvertAllButton_C::OnItemClicked__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C.OnItemClicked__DelegateSignature");
		
		UUI_MarketPanel_Currency_ConvertAllButton_C_OnItemClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketPanel_Currency_ConvertAllButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketPanel_Currency_ConvertAllButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C");
		return ptr;
	}

}


