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
	 * 		Name   -> Function UI_Pagination_Generic.UI_Pagination_Generic_C.GetCurrentIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Pagination_Generic_C::GetCurrentIndex(int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Pagination_Generic.UI_Pagination_Generic_C.GetCurrentIndex");
		
		UUI_Pagination_Generic_C_GetCurrentIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Pagination_Generic.UI_Pagination_Generic_C.UpdateSelectedDot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewDotIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Pagination_Generic_C::UpdateSelectedDot(int32_t NewDotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Pagination_Generic.UI_Pagination_Generic_C.UpdateSelectedDot");
		
		UUI_Pagination_Generic_C_UpdateSelectedDot_Params params {};
		params.NewDotIndex = NewDotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Pagination_Generic.UI_Pagination_Generic_C.PageDotSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DotIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Pagination_Generic_C::PageDotSelected(int32_t DotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Pagination_Generic.UI_Pagination_Generic_C.PageDotSelected");
		
		UUI_Pagination_Generic_C_PageDotSelected_Params params {};
		params.DotIndex = DotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Pagination_Generic.UI_Pagination_Generic_C.SetNumberOfPages
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumPages                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Pagination_Generic_C::SetNumberOfPages(int32_t NumPages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Pagination_Generic.UI_Pagination_Generic_C.SetNumberOfPages");
		
		UUI_Pagination_Generic_C_SetNumberOfPages_Params params {};
		params.NumPages = NumPages;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Pagination_Generic.UI_Pagination_Generic_C.OnCurrentPageChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DotIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Pagination_Generic_C::OnCurrentPageChanged__DelegateSignature(int32_t DotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Pagination_Generic.UI_Pagination_Generic_C.OnCurrentPageChanged__DelegateSignature");
		
		UUI_Pagination_Generic_C_OnCurrentPageChanged__DelegateSignature_Params params {};
		params.DotIndex = DotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Pagination_Generic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Pagination_Generic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Pagination_Generic.UI_Pagination_Generic_C");
		return ptr;
	}

}


