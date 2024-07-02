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
	 * 		Name   -> Function UI_ModulePagination.UI_ModulePagination_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ModuleIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModulePagination_C::HandleUnfocus(int32_t ModuleIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModulePagination.UI_ModulePagination_C.HandleUnfocus");
		
		UUI_ModulePagination_C_HandleUnfocus_Params params {};
		params.ModuleIndex = ModuleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModulePagination.UI_ModulePagination_C.HandleFocus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ModuleIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PageTurned                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModulePagination_C::HandleFocus(int32_t ModuleIndex, bool* PageTurned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModulePagination.UI_ModulePagination_C.HandleFocus");
		
		UUI_ModulePagination_C_HandleFocus_Params params {};
		params.ModuleIndex = ModuleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PageTurned != nullptr)
			*PageTurned = params.PageTurned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModulePagination.UI_ModulePagination_C.GetPageFromIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PageItemIsOn                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModulePagination_C::GetPageFromIndex(int32_t index, int32_t* PageItemIsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModulePagination.UI_ModulePagination_C.GetPageFromIndex");
		
		UUI_ModulePagination_C_GetPageFromIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PageItemIsOn != nullptr)
			*PageItemIsOn = params.PageItemIsOn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModulePagination.UI_ModulePagination_C.FindModuleInArrayByID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ItemIDToFind                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            IndexInArray                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModulePagination_C::FindModuleInArrayByID(int32_t ItemIDToFind, int32_t* IndexInArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModulePagination.UI_ModulePagination_C.FindModuleInArrayByID");
		
		UUI_ModulePagination_C_FindModuleInArrayByID_Params params {};
		params.ItemIDToFind = ItemIDToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexInArray != nullptr)
			*IndexInArray = params.IndexInArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModulePagination.UI_ModulePagination_C.SetItemsPerPage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ItemsPerPage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModulePagination_C::SetItemsPerPage(int32_t ItemsPerPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModulePagination.UI_ModulePagination_C.SetItemsPerPage");
		
		UUI_ModulePagination_C_SetItemsPerPage_Params params {};
		params.ItemsPerPage = ItemsPerPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModulePagination.UI_ModulePagination_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ModulePagination_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModulePagination.UI_ModulePagination_C.Setup");
		
		UUI_ModulePagination_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModulePagination.UI_ModulePagination_C.ChangePage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RequestedPageIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModulePagination_C::ChangePage(int32_t RequestedPageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModulePagination.UI_ModulePagination_C.ChangePage");
		
		UUI_ModulePagination_C_ChangePage_Params params {};
		params.RequestedPageIndex = RequestedPageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModulePagination.UI_ModulePagination_C.SetDisplayedModules
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ModulePagination_C::SetDisplayedModules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModulePagination.UI_ModulePagination_C.SetDisplayedModules");
		
		UUI_ModulePagination_C_SetDisplayedModules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModulePagination.UI_ModulePagination_C.AddItemsToCarousel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UUI_Generic_Button_Module_C*>         Widgets                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            CurrentDisplayedIndex                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModulePagination_C::AddItemsToCarousel(TArray<class UUI_Generic_Button_Module_C*>* Widgets, int32_t CurrentDisplayedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModulePagination.UI_ModulePagination_C.AddItemsToCarousel");
		
		UUI_ModulePagination_C_AddItemsToCarousel_Params params {};
		params.CurrentDisplayedIndex = CurrentDisplayedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widgets != nullptr)
			*Widgets = params.Widgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModulePagination.UI_ModulePagination_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_ModulePagination_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModulePagination.UI_ModulePagination_C.Construct");
		
		UUI_ModulePagination_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModulePagination.UI_ModulePagination_C.LeftButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 ButtonReference                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModulePagination_C::LeftButtonClicked(class UUserWidget* ButtonReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModulePagination.UI_ModulePagination_C.LeftButtonClicked");
		
		UUI_ModulePagination_C_LeftButtonClicked_Params params {};
		params.ButtonReference = ButtonReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModulePagination.UI_ModulePagination_C.RightButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 ButtonReference                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModulePagination_C::RightButtonClicked(class UUserWidget* ButtonReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModulePagination.UI_ModulePagination_C.RightButtonClicked");
		
		UUI_ModulePagination_C_RightButtonClicked_Params params {};
		params.ButtonReference = ButtonReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModulePagination.UI_ModulePagination_C.PaginationClick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DotIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModulePagination_C::PaginationClick(int32_t DotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModulePagination.UI_ModulePagination_C.PaginationClick");
		
		UUI_ModulePagination_C_PaginationClick_Params params {};
		params.DotIndex = DotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModulePagination.UI_ModulePagination_C.ExecuteUbergraph_UI_ModulePagination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModulePagination_C::ExecuteUbergraph_UI_ModulePagination(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModulePagination.UI_ModulePagination_C.ExecuteUbergraph_UI_ModulePagination");
		
		UUI_ModulePagination_C_ExecuteUbergraph_UI_ModulePagination_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModulePagination.UI_ModulePagination_C.ArrowButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModulePagination_C::ArrowButtonClicked__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModulePagination.UI_ModulePagination_C.ArrowButtonClicked__DelegateSignature");
		
		UUI_ModulePagination_C_ArrowButtonClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ModulePagination_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ModulePagination_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ModulePagination.UI_ModulePagination_C");
		return ptr;
	}

}


