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
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.HandleTriangle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::HandleTriangle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.HandleTriangle");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_HandleTriangle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.HandleGranularDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::HandleGranularDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.HandleGranularDown");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_HandleGranularDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.GetIndexWrappingValues
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            CurrentIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumColumns                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            listLength                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::GetIndexWrappingValues(int32_t* CurrentIndex, int32_t* NumColumns, int32_t* listLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.GetIndexWrappingValues");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_GetIndexWrappingValues_Params params {};
		
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
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.HandleGranularUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::HandleGranularUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.HandleGranularUp");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_HandleGranularUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.Action");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.UnfocusItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::UnfocusItem(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.UnfocusItem");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_UnfocusItem_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.FocusItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::FocusItem(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.FocusItem");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_FocusItem_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.Setup");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.SetSonyEmail
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SonyEmail                                                  (Parm, ZeroConstructor)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::SetSonyEmail(const class FString& SonyEmail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.SetSonyEmail");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_SetSonyEmail_Params params {};
		params.SonyEmail = SonyEmail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.HandleCreateAccountError
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::HandleCreateAccountError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.HandleCreateAccountError");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_HandleCreateAccountError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.Construct");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.OnShow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.OnShow");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.OnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.OnHide");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.HandleConfirmButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Unused                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::HandleConfirmButtonClicked(int32_t Unused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.HandleConfirmButtonClicked");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_HandleConfirmButtonClicked_Params params {};
		params.Unused = Unused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.BndEvt__EmailAddressTextField_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUI_TextField_Generic_C*                     source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::BndEvt__EmailAddressTextField_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UUI_TextField_Generic_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.BndEvt__EmailAddressTextField_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_BndEvt__EmailAddressTextField_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.OnTextCommitted
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::OnTextCommitted(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.OnTextCommitted");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_OnTextCommitted_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.ExecuteUbergraph_UI_Login_PS4_Panel_CreateAccountContainer
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::ExecuteUbergraph_UI_Login_PS4_Panel_CreateAccountContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.ExecuteUbergraph_UI_Login_PS4_Panel_CreateAccountContainer");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_ExecuteUbergraph_UI_Login_PS4_Panel_CreateAccountContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.OnTextCommited__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::OnTextCommited__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.OnTextCommited__DelegateSignature");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_OnTextCommited__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.RequestCreateAccount__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCreateAccountRequestData                   RequestData                                                (Parm)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::RequestCreateAccount__DelegateSignature(const struct FCreateAccountRequestData& RequestData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.RequestCreateAccount__DelegateSignature");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_RequestCreateAccount__DelegateSignature_Params params {};
		params.RequestData = RequestData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.RequestSonyEmail__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_CreateAccountContainer_C::RequestSonyEmail__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.RequestSonyEmail__DelegateSignature");
		
		UUI_Login_PS4_Panel_CreateAccountContainer_C_RequestSonyEmail__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Login_PS4_Panel_CreateAccountContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Login_PS4_Panel_CreateAccountContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C");
		return ptr;
	}

}


