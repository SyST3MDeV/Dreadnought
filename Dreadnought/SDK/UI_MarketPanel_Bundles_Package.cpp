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
	 * 		Name   -> Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.GetFilterWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_Generic_AccordionFilter_C*               Widget                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Bundles_C::GetFilterWidget(class UUI_Generic_AccordionFilter_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.GetFilterWidget");
		
		UUI_MarketPanel_Bundles_C_GetFilterWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.SetupFilters
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Bundles_C::SetupFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.SetupFilters");
		
		UUI_MarketPanel_Bundles_C_SetupFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.UpdateMarketItemData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Bundles_C::UpdateMarketItemData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.UpdateMarketItemData");
		
		UUI_MarketPanel_Bundles_C_UpdateMarketItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_Bundles_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.Construct");
		
		UUI_MarketPanel_Bundles_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.OnShow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_Bundles_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.OnShow");
		
		UUI_MarketPanel_Bundles_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.OnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_Bundles_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.OnHide");
		
		UUI_MarketPanel_Bundles_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.HideComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Bundles_C::HideComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.HideComplete");
		
		UUI_MarketPanel_Bundles_C_HideComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.BndEvt__AccordionFilter_K2Node_ComponentBoundEvent_0_OnCategoryFilterClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Checked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CheckBoxIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Bundles_C::BndEvt__AccordionFilter_K2Node_ComponentBoundEvent_0_OnCategoryFilterClicked__DelegateSignature(bool Checked, int32_t CheckBoxIndex, int32_t categoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.BndEvt__AccordionFilter_K2Node_ComponentBoundEvent_0_OnCategoryFilterClicked__DelegateSignature");
		
		UUI_MarketPanel_Bundles_C_BndEvt__AccordionFilter_K2Node_ComponentBoundEvent_0_OnCategoryFilterClicked__DelegateSignature_Params params {};
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
	 * 		Name   -> Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.MarketDataUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_Bundles_C::MarketDataUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.MarketDataUpdated");
		
		UUI_MarketPanel_Bundles_C_MarketDataUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.ExecuteUbergraph_UI_MarketPanel_Bundles
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Bundles_C::ExecuteUbergraph_UI_MarketPanel_Bundles(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C.ExecuteUbergraph_UI_MarketPanel_Bundles");
		
		UUI_MarketPanel_Bundles_C_ExecuteUbergraph_UI_MarketPanel_Bundles_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketPanel_Bundles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketPanel_Bundles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C");
		return ptr;
	}

}


