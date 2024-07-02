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
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.GetPreviousFocusableWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentWidgetIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_DreadWidget*                             FocusableWidget                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            WidgetIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_AccordionFilter_C::GetPreviousFocusableWidget(int32_t CurrentWidgetIndex, class UUI_DreadWidget** FocusableWidget, int32_t* WidgetIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.GetPreviousFocusableWidget");
		
		UUI_Generic_AccordionFilter_C_GetPreviousFocusableWidget_Params params {};
		params.CurrentWidgetIndex = CurrentWidgetIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FocusableWidget != nullptr)
			*FocusableWidget = params.FocusableWidget;
		if (WidgetIndex != nullptr)
			*WidgetIndex = params.WidgetIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_AccordionFilter_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.HandleUnfocus");
		
		UUI_Generic_AccordionFilter_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_AccordionFilter_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.HandleFocus");
		
		UUI_Generic_AccordionFilter_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.FindCategoryWidgetForRow
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_AccordionFilter_OptionRow_C*     RowWidget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_Generic_AccordionFilter_Category_C*      Category                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            filterIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_AccordionFilter_C::FindCategoryWidgetForRow(class UUI_Generic_AccordionFilter_OptionRow_C* RowWidget, class UUI_Generic_AccordionFilter_Category_C** Category, int32_t* filterIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.FindCategoryWidgetForRow");
		
		UUI_Generic_AccordionFilter_C_FindCategoryWidgetForRow_Params params {};
		params.RowWidget = RowWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Category != nullptr)
			*Category = params.Category;
		if (filterIndex != nullptr)
			*filterIndex = params.filterIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.GetNextFocusableWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentWidgetIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_DreadWidget*                             FocusableWidget                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            WidgetIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_AccordionFilter_C::GetNextFocusableWidget(int32_t CurrentWidgetIndex, class UUI_DreadWidget** FocusableWidget, int32_t* WidgetIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.GetNextFocusableWidget");
		
		UUI_Generic_AccordionFilter_C_GetNextFocusableWidget_Params params {};
		params.CurrentWidgetIndex = CurrentWidgetIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FocusableWidget != nullptr)
			*FocusableWidget = params.FocusableWidget;
		if (WidgetIndex != nullptr)
			*WidgetIndex = params.WidgetIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.SelectCategory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            filterIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_AccordionFilter_C::SelectCategory(int32_t categoryIndex, int32_t filterIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.SelectCategory");
		
		UUI_Generic_AccordionFilter_C_SelectCategory_Params params {};
		params.categoryIndex = categoryIndex;
		params.filterIndex = filterIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.ScrollCategoryIntoView
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_AccordionFilter_C::ScrollCategoryIntoView(class UUI_DreadWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.ScrollCategoryIntoView");
		
		UUI_Generic_AccordionFilter_C_ScrollCategoryIntoView_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.GetFilterCategoryWidgets
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class UUI_Generic_AccordionFilter_Category_C*> Widgets                                                    (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_Generic_AccordionFilter_C::GetFilterCategoryWidgets(TArray<class UUI_Generic_AccordionFilter_Category_C*>* Widgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.GetFilterCategoryWidgets");
		
		UUI_Generic_AccordionFilter_C_GetFilterCategoryWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widgets != nullptr)
			*Widgets = params.Widgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.HandleCategoryFilterClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Checked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CheckBoxIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_AccordionFilter_C::HandleCategoryFilterClicked(bool Checked, int32_t CheckBoxIndex, int32_t categoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.HandleCategoryFilterClicked");
		
		UUI_Generic_AccordionFilter_C_HandleCategoryFilterClicked_Params params {};
		params.Checked = Checked;
		params.CheckBoxIndex = CheckBoxIndex;
		params.categoryIndex = categoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.HandleCategoryClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_AccordionFilter_C::HandleCategoryClicked(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.HandleCategoryClicked");
		
		UUI_Generic_AccordionFilter_C_HandleCategoryClicked_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.SetupCategoryList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_AccordionFilter_C::SetupCategoryList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.SetupCategoryList");
		
		UUI_Generic_AccordionFilter_C_SetupCategoryList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.SetData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUIAccordionFilterData                      AccordionFilterData                                        (Parm)
	 */
	void UUI_Generic_AccordionFilter_C::SetData(const struct FUIAccordionFilterData& AccordionFilterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.SetData");
		
		UUI_Generic_AccordionFilter_C_SetData_Params params {};
		params.AccordionFilterData = AccordionFilterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Generic_AccordionFilter_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Generic_AccordionFilter_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.BndEvt__AccordianButton_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Generic_AccordionFilter_C::BndEvt__AccordianButton_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.BndEvt__AccordianButton_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Generic_AccordionFilter_C_BndEvt__AccordianButton_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.ExecuteUbergraph_UI_Generic_AccordionFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_AccordionFilter_C::ExecuteUbergraph_UI_Generic_AccordionFilter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.ExecuteUbergraph_UI_Generic_AccordionFilter");
		
		UUI_Generic_AccordionFilter_C_ExecuteUbergraph_UI_Generic_AccordionFilter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.OnCategoryFilterClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Checked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CheckBoxIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_AccordionFilter_C::OnCategoryFilterClicked__DelegateSignature(bool Checked, int32_t CheckBoxIndex, int32_t categoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.OnCategoryFilterClicked__DelegateSignature");
		
		UUI_Generic_AccordionFilter_C_OnCategoryFilterClicked__DelegateSignature_Params params {};
		params.Checked = Checked;
		params.CheckBoxIndex = CheckBoxIndex;
		params.categoryIndex = categoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.OnCategoryClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_AccordionFilter_C::OnCategoryClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.OnCategoryClicked__DelegateSignature");
		
		UUI_Generic_AccordionFilter_C_OnCategoryClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_AccordionFilter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_AccordionFilter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C");
		return ptr;
	}

}


