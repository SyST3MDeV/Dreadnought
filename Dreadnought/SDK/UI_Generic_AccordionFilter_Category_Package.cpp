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
	 * 		Name   -> Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.GetWidgets
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Market_CategoryButton_C*                 HeaderWidget                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UUI_Generic_AccordionFilter_OptionRow_C*> OptionWidgets                                              (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_Generic_AccordionFilter_Category_C::GetWidgets(class UUI_Market_CategoryButton_C** HeaderWidget, TArray<class UUI_Generic_AccordionFilter_OptionRow_C*>* OptionWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.GetWidgets");
		
		UUI_Generic_AccordionFilter_Category_C_GetWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeaderWidget != nullptr)
			*HeaderWidget = params.HeaderWidget;
		if (OptionWidgets != nullptr)
			*OptionWidgets = params.OptionWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.HandleFilterClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Checked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CheckBoxIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_AccordionFilter_Category_C::HandleFilterClicked(bool Checked, int32_t CheckBoxIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.HandleFilterClicked");
		
		UUI_Generic_AccordionFilter_Category_C_HandleFilterClicked_Params params {};
		params.Checked = Checked;
		params.CheckBoxIndex = CheckBoxIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.Hide
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_AccordionFilter_Category_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.Hide");
		
		UUI_Generic_AccordionFilter_Category_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.Show
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_AccordionFilter_Category_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.Show");
		
		UUI_Generic_AccordionFilter_Category_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.SetupOptionList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_AccordionFilter_Category_C::SetupOptionList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.SetupOptionList");
		
		UUI_Generic_AccordionFilter_Category_C_SetupOptionList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Generic_AccordionFilter_Category_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.Construct");
		
		UUI_Generic_AccordionFilter_Category_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.BndEvt__HeaderButton_K2Node_ComponentBoundEvent_0_OnLoadoutButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Market_CategoryButton_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_AccordionFilter_Category_C::BndEvt__HeaderButton_K2Node_ComponentBoundEvent_0_OnLoadoutButtonClicked__DelegateSignature(class UUI_Market_CategoryButton_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.BndEvt__HeaderButton_K2Node_ComponentBoundEvent_0_OnLoadoutButtonClicked__DelegateSignature");
		
		UUI_Generic_AccordionFilter_Category_C_BndEvt__HeaderButton_K2Node_ComponentBoundEvent_0_OnLoadoutButtonClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.ExecuteUbergraph_UI_Generic_AccordionFilter_Category
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_AccordionFilter_Category_C::ExecuteUbergraph_UI_Generic_AccordionFilter_Category(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.ExecuteUbergraph_UI_Generic_AccordionFilter_Category");
		
		UUI_Generic_AccordionFilter_Category_C_ExecuteUbergraph_UI_Generic_AccordionFilter_Category_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.OnCategoryFilterClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Checked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CheckBoxIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_AccordionFilter_Category_C::OnCategoryFilterClicked__DelegateSignature(bool Checked, int32_t CheckBoxIndex, int32_t categoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.OnCategoryFilterClicked__DelegateSignature");
		
		UUI_Generic_AccordionFilter_Category_C_OnCategoryFilterClicked__DelegateSignature_Params params {};
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
	 * 		Name   -> Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.OnCategoryClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_AccordionFilter_Category_C::OnCategoryClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.OnCategoryClicked__DelegateSignature");
		
		UUI_Generic_AccordionFilter_Category_C_OnCategoryClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_AccordionFilter_Category_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_AccordionFilter_Category_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C");
		return ptr;
	}

}


