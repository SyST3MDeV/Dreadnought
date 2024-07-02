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
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.OpenKeyboard
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::OpenKeyboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.OpenKeyboard");
		
		UUI_Login_PS4_Panel_LinkAccount_C_OpenKeyboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.HandleGranularDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::HandleGranularDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.HandleGranularDown");
		
		UUI_Login_PS4_Panel_LinkAccount_C_HandleGranularDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.GetIndexWrappingValues
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            CurrentIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumColumns                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            listLength                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::GetIndexWrappingValues(int32_t* CurrentIndex, int32_t* NumColumns, int32_t* listLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.GetIndexWrappingValues");
		
		UUI_Login_PS4_Panel_LinkAccount_C_GetIndexWrappingValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentIndex != nullptr)
			*CurrentIndex = params.CurrentIndex;
		if (NumColumns != nullptr)
			*NumColumns = params.NumColumns;
		if (listLength != nullptr)
			*listLength = params.listLength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.UnfocusItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::UnfocusItem(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.UnfocusItem");
		
		UUI_Login_PS4_Panel_LinkAccount_C_UnfocusItem_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.HandleGranularUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::HandleGranularUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.HandleGranularUp");
		
		UUI_Login_PS4_Panel_LinkAccount_C_HandleGranularUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.Action");
		
		UUI_Login_PS4_Panel_LinkAccount_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.FocusItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::FocusItem(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.FocusItem");
		
		UUI_Login_PS4_Panel_LinkAccount_C_FocusItem_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.Setup");
		
		UUI_Login_PS4_Panel_LinkAccount_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.HandleLinkAccountError
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::HandleLinkAccountError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.HandleLinkAccountError");
		
		UUI_Login_PS4_Panel_LinkAccount_C_HandleLinkAccountError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.OnShow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.OnShow");
		
		UUI_Login_PS4_Panel_LinkAccount_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.OnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.OnHide");
		
		UUI_Login_PS4_Panel_LinkAccount_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.Construct");
		
		UUI_Login_PS4_Panel_LinkAccount_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_63_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_63_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_63_OnButtonClicked__DelegateSignature");
		
		UUI_Login_PS4_Panel_LinkAccount_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_63_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.OnTextCommitted
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::OnTextCommitted(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.OnTextCommitted");
		
		UUI_Login_PS4_Panel_LinkAccount_C_OnTextCommitted_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.BndEvt__EmailAddressTextField_K2Node_ComponentBoundEvent_486_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUI_TextField_Generic_C*                     source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::BndEvt__EmailAddressTextField_K2Node_ComponentBoundEvent_486_OnClicked__DelegateSignature(class UUI_TextField_Generic_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.BndEvt__EmailAddressTextField_K2Node_ComponentBoundEvent_486_OnClicked__DelegateSignature");
		
		UUI_Login_PS4_Panel_LinkAccount_C_BndEvt__EmailAddressTextField_K2Node_ComponentBoundEvent_486_OnClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.BndEvt__PasswordTextField_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUI_PasswordField_Generic_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::BndEvt__PasswordTextField_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature(class UUI_PasswordField_Generic_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.BndEvt__PasswordTextField_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature");
		
		UUI_Login_PS4_Panel_LinkAccount_C_BndEvt__PasswordTextField_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.ExecuteUbergraph_UI_Login_PS4_Panel_LinkAccount
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::ExecuteUbergraph_UI_Login_PS4_Panel_LinkAccount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.ExecuteUbergraph_UI_Login_PS4_Panel_LinkAccount");
		
		UUI_Login_PS4_Panel_LinkAccount_C_ExecuteUbergraph_UI_Login_PS4_Panel_LinkAccount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.OnTextCommited__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::OnTextCommited__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.OnTextCommited__DelegateSignature");
		
		UUI_Login_PS4_Panel_LinkAccount_C_OnTextCommited__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.RequestLinkAccount__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinkAccountRequestData                     LinkAccountData                                            (Parm)
	 */
	void UUI_Login_PS4_Panel_LinkAccount_C::RequestLinkAccount__DelegateSignature(const struct FLinkAccountRequestData& LinkAccountData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.RequestLinkAccount__DelegateSignature");
		
		UUI_Login_PS4_Panel_LinkAccount_C_RequestLinkAccount__DelegateSignature_Params params {};
		params.LinkAccountData = LinkAccountData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Login_PS4_Panel_LinkAccount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Login_PS4_Panel_LinkAccount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C");
		return ptr;
	}

}


