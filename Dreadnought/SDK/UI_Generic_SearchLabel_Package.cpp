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
	 * 		Name   -> Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.ClearSearchString
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_SearchLabel_C::ClearSearchString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.ClearSearchString");
		
		UUI_Generic_SearchLabel_C_ClearSearchString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_SearchLabel_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.HandleUnfocus");
		
		UUI_Generic_SearchLabel_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_SearchLabel_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.HandleFocus");
		
		UUI_Generic_SearchLabel_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.OnMouseButtonDown_ConfirmSearch
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_Generic_SearchLabel_C::OnMouseButtonDown_ConfirmSearch(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.OnMouseButtonDown_ConfirmSearch");
		
		UUI_Generic_SearchLabel_C_OnMouseButtonDown_ConfirmSearch_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.SetDefaultTextAndReset
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        DefaultText                                                (Parm)
	 */
	void UUI_Generic_SearchLabel_C::SetDefaultTextAndReset(const class FText& DefaultText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.SetDefaultTextAndReset");
		
		UUI_Generic_SearchLabel_C_SetDefaultTextAndReset_Params params {};
		params.DefaultText = DefaultText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.StartSearch
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SearchString                                               (Parm)
	 */
	void UUI_Generic_SearchLabel_C::StartSearch(const class FText& SearchString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.StartSearch");
		
		UUI_Generic_SearchLabel_C_StartSearch_Params params {};
		params.SearchString = SearchString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.BndEvt__SearchTextBox_K2Node_ComponentBoundEvent_62_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_SearchLabel_C::BndEvt__SearchTextBox_K2Node_ComponentBoundEvent_62_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.BndEvt__SearchTextBox_K2Node_ComponentBoundEvent_62_OnEditableTextCommittedEvent__DelegateSignature");
		
		UUI_Generic_SearchLabel_C_BndEvt__SearchTextBox_K2Node_ComponentBoundEvent_62_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Generic_SearchLabel_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.OnActionReceived");
		
		UUI_Generic_SearchLabel_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.ExecuteUbergraph_UI_Generic_SearchLabel
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_SearchLabel_C::ExecuteUbergraph_UI_Generic_SearchLabel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.ExecuteUbergraph_UI_Generic_SearchLabel");
		
		UUI_Generic_SearchLabel_C_ExecuteUbergraph_UI_Generic_SearchLabel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.OnStartSearch__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SearchString                                               (Parm)
	 */
	void UUI_Generic_SearchLabel_C::OnStartSearch__DelegateSignature(const class FText& SearchString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.OnStartSearch__DelegateSignature");
		
		UUI_Generic_SearchLabel_C_OnStartSearch__DelegateSignature_Params params {};
		params.SearchString = SearchString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_SearchLabel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_SearchLabel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_SearchLabel.UI_Generic_SearchLabel_C");
		return ptr;
	}

}


