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
	 * 		Name   -> Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_TeamList_Row_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.Action");
		
		UUI_CustomMatch_TeamList_Row_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_TeamList_Row_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.HandleUnfocus");
		
		UUI_CustomMatch_TeamList_Row_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_TeamList_Row_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.HandleFocus");
		
		UUI_CustomMatch_TeamList_Row_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.HasFocus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsChildFocused                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_Row_C::HasFocus(bool* IsChildFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.HasFocus");
		
		UUI_CustomMatch_TeamList_Row_C_HasFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsChildFocused != nullptr)
			*IsChildFocused = params.IsChildFocused;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.GetActiveWidgetNavItems
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class UButton*>                             Output_Get                                                 (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_CustomMatch_TeamList_Row_C::GetActiveWidgetNavItems(TArray<class UButton*>* Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.GetActiveWidgetNavItems");
		
		UUI_CustomMatch_TeamList_Row_C_GetActiveWidgetNavItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.HandleGamePadUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_Row_C::HandleGamePadUnfocus(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.HandleGamePadUnfocus");
		
		UUI_CustomMatch_TeamList_Row_C_HandleGamePadUnfocus_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.HandleGamePadFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_Row_C::HandleGamePadFocus(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.HandleGamePadFocus");
		
		UUI_CustomMatch_TeamList_Row_C_HandleGamePadFocus_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_CustomMatch_TeamList_Row_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.Construct");
		
		UUI_CustomMatch_TeamList_Row_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_CustomMatch_TeamList_Row_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.OnActionReceived");
		
		UUI_CustomMatch_TeamList_Row_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.ExecuteUbergraph_UI_CustomMatch_TeamList_Row
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_Row_C::ExecuteUbergraph_UI_CustomMatch_TeamList_Row(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.ExecuteUbergraph_UI_CustomMatch_TeamList_Row");
		
		UUI_CustomMatch_TeamList_Row_C_ExecuteUbergraph_UI_CustomMatch_TeamList_Row_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.OnUnhover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_TeamList_Row_C::OnUnhover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.OnUnhover__DelegateSignature");
		
		UUI_CustomMatch_TeamList_Row_C_OnUnhover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.OnHover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_TeamList_Row_C::OnHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.OnHover__DelegateSignature");
		
		UUI_CustomMatch_TeamList_Row_C_OnHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_TeamList_Row_C*              TeamListRow                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_Row_C::OnClicked__DelegateSignature(class UUI_CustomMatch_TeamList_Row_C* TeamListRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.OnClicked__DelegateSignature");
		
		UUI_CustomMatch_TeamList_Row_C_OnClicked__DelegateSignature_Params params {};
		params.TeamListRow = TeamListRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CustomMatch_TeamList_Row_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomMatch_TeamList_Row_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C");
		return ptr;
	}

}


