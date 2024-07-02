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
	 * 		Name   -> Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.HandleScrollingInput
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        StoredKey                                                  (Parm)
	 */
	void UUI_Login_PS4_Panel_LegalDocumentContainer_C::HandleScrollingInput(const struct FKey& StoredKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.HandleScrollingInput");
		
		UUI_Login_PS4_Panel_LegalDocumentContainer_C_HandleScrollingInput_Params params {};
		params.StoredKey = StoredKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_LegalDocumentContainer_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.Action");
		
		UUI_Login_PS4_Panel_LegalDocumentContainer_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.AcceptDocument
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLegalDocumentData                          DocumentData                                               (Parm)
	 */
	void UUI_Login_PS4_Panel_LegalDocumentContainer_C::AcceptDocument(const struct FLegalDocumentData& DocumentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.AcceptDocument");
		
		UUI_Login_PS4_Panel_LegalDocumentContainer_C_AcceptDocument_Params params {};
		params.DocumentData = DocumentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.SetAsLoading
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_LegalDocumentContainer_C::SetAsLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.SetAsLoading");
		
		UUI_Login_PS4_Panel_LegalDocumentContainer_C_SetAsLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.SetDocumentData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLegalDocumentData                          LegalDocumentData                                          (Parm)
	 */
	void UUI_Login_PS4_Panel_LegalDocumentContainer_C::SetDocumentData(const struct FLegalDocumentData& LegalDocumentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.SetDocumentData");
		
		UUI_Login_PS4_Panel_LegalDocumentContainer_C_SetDocumentData_Params params {};
		params.LegalDocumentData = LegalDocumentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.SetHeader
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Header                                                     (Parm)
	 */
	void UUI_Login_PS4_Panel_LegalDocumentContainer_C::SetHeader(const class FText& Header)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.SetHeader");
		
		UUI_Login_PS4_Panel_LegalDocumentContainer_C_SetHeader_Params params {};
		params.Header = Header;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.OnShow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_LegalDocumentContainer_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.OnShow");
		
		UUI_Login_PS4_Panel_LegalDocumentContainer_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.OnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_LegalDocumentContainer_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.OnHide");
		
		UUI_Login_PS4_Panel_LegalDocumentContainer_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_LegalDocumentContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.Construct");
		
		UUI_Login_PS4_Panel_LegalDocumentContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.ExecuteUbergraph_UI_Login_PS4_Panel_LegalDocumentContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_LegalDocumentContainer_C::ExecuteUbergraph_UI_Login_PS4_Panel_LegalDocumentContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.ExecuteUbergraph_UI_Login_PS4_Panel_LegalDocumentContainer");
		
		UUI_Login_PS4_Panel_LegalDocumentContainer_C_ExecuteUbergraph_UI_Login_PS4_Panel_LegalDocumentContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.AcceptLegalDocument__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLegalDocumentData                          LegalDocumentData                                          (Parm)
	 */
	void UUI_Login_PS4_Panel_LegalDocumentContainer_C::AcceptLegalDocument__DelegateSignature(const struct FLegalDocumentData& LegalDocumentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.AcceptLegalDocument__DelegateSignature");
		
		UUI_Login_PS4_Panel_LegalDocumentContainer_C_AcceptLegalDocument__DelegateSignature_Params params {};
		params.LegalDocumentData = LegalDocumentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Login_PS4_Panel_LegalDocumentContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Login_PS4_Panel_LegalDocumentContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C");
		return ptr;
	}

}


