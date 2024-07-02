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
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.InitCurrentPanelIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_C::InitCurrentPanelIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.InitCurrentPanelIndex");
		
		UUI_MarketPanel_Currency_C_InitCurrentPanelIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.HideMarketGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_C::HideMarketGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.HideMarketGrid");
		
		UUI_MarketPanel_Currency_C_HideMarketGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.ShowMarketGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECurrencyMarketPanels                              currencyPanel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_C::ShowMarketGrid(ECurrencyMarketPanels currencyPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.ShowMarketGrid");
		
		UUI_MarketPanel_Currency_C_ShowMarketGrid_Params params {};
		params.currencyPanel = currencyPanel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.GetXpConversionWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_MarketPanel_Currency_XPConversion_C*     Widget                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_C::GetXpConversionWidget(class UUI_MarketPanel_Currency_XPConversion_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.GetXpConversionWidget");
		
		UUI_MarketPanel_Currency_C_GetXpConversionWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.GetCurrencyCategoryWidgets
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class UUI_Market_CategoryButton_C*>         Widgets                                                    (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_MarketPanel_Currency_C::GetCurrencyCategoryWidgets(TArray<class UUI_Market_CategoryButton_C*>* Widgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.GetCurrencyCategoryWidgets");
		
		UUI_MarketPanel_Currency_C_GetCurrencyCategoryWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widgets != nullptr)
			*Widgets = params.Widgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.UpdateTabs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_C::UpdateTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.UpdateTabs");
		
		UUI_MarketPanel_Currency_C_UpdateTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.SetCurrentPanel
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECurrencyMarketPanels                              index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_C::SetCurrentPanel(ECurrencyMarketPanels index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.SetCurrentPanel");
		
		UUI_MarketPanel_Currency_C_SetCurrentPanel_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.GetPanelTitle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECurrencyMarketPanels                              PanelEnum                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        title                                                      (Parm, OutParm)
	 */
	void UUI_MarketPanel_Currency_C::GetPanelTitle(ECurrencyMarketPanels PanelEnum, class FText* title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.GetPanelTitle");
		
		UUI_MarketPanel_Currency_C_GetPanelTitle_Params params {};
		params.PanelEnum = PanelEnum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (title != nullptr)
			*title = params.title;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.GetDebugGridData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYUIItemPurchaseData>                Array                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_MarketPanel_Currency_C::GetDebugGridData(TArray<struct FYUIItemPurchaseData>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.GetDebugGridData");
		
		UUI_MarketPanel_Currency_C_GetDebugGridData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.Construct");
		
		UUI_MarketPanel_Currency_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.OnShow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.OnShow");
		
		UUI_MarketPanel_Currency_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.OnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.OnHide");
		
		UUI_MarketPanel_Currency_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.HideComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_C::HideComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.HideComplete");
		
		UUI_MarketPanel_Currency_C_HideComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.MarketDataUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_C::MarketDataUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.MarketDataUpdated");
		
		UUI_MarketPanel_Currency_C_MarketDataUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.BndEvt__CPPacksButton_K2Node_ComponentBoundEvent_0_OnLoadoutButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Market_CategoryButton_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_C::BndEvt__CPPacksButton_K2Node_ComponentBoundEvent_0_OnLoadoutButtonClicked__DelegateSignature(class UUI_Market_CategoryButton_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.BndEvt__CPPacksButton_K2Node_ComponentBoundEvent_0_OnLoadoutButtonClicked__DelegateSignature");
		
		UUI_MarketPanel_Currency_C_BndEvt__CPPacksButton_K2Node_ComponentBoundEvent_0_OnLoadoutButtonClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.BndEvt__GPPacksButton_K2Node_ComponentBoundEvent_1_OnLoadoutButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Market_CategoryButton_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_C::BndEvt__GPPacksButton_K2Node_ComponentBoundEvent_1_OnLoadoutButtonClicked__DelegateSignature(class UUI_Market_CategoryButton_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.BndEvt__GPPacksButton_K2Node_ComponentBoundEvent_1_OnLoadoutButtonClicked__DelegateSignature");
		
		UUI_MarketPanel_Currency_C_BndEvt__GPPacksButton_K2Node_ComponentBoundEvent_1_OnLoadoutButtonClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.BndEvt__XPConversionButton_K2Node_ComponentBoundEvent_2_OnLoadoutButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Market_CategoryButton_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_C::BndEvt__XPConversionButton_K2Node_ComponentBoundEvent_2_OnLoadoutButtonClicked__DelegateSignature(class UUI_Market_CategoryButton_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.BndEvt__XPConversionButton_K2Node_ComponentBoundEvent_2_OnLoadoutButtonClicked__DelegateSignature");
		
		UUI_MarketPanel_Currency_C_BndEvt__XPConversionButton_K2Node_ComponentBoundEvent_2_OnLoadoutButtonClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.HandleRequestConvertAllXPShips
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_C::HandleRequestConvertAllXPShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.HandleRequestConvertAllXPShips");
		
		UUI_MarketPanel_Currency_C_HandleRequestConvertAllXPShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.HandleRequestXPConversion
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FRequestXpConversionShip>            RequestData                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_MarketPanel_Currency_C::HandleRequestXPConversion(TArray<struct FRequestXpConversionShip> RequestData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.HandleRequestXPConversion");
		
		UUI_MarketPanel_Currency_C_HandleRequestXPConversion_Params params {};
		params.RequestData = RequestData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.BndEvt__GpStoreButton_PS4_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_C::BndEvt__GpStoreButton_PS4_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.BndEvt__GpStoreButton_PS4_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");
		
		UUI_MarketPanel_Currency_C_BndEvt__GpStoreButton_PS4_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.UpdateXpConversionScreenData
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_C::UpdateXpConversionScreenData(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.UpdateXpConversionScreenData");
		
		UUI_MarketPanel_Currency_C_UpdateXpConversionScreenData_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.ExecuteUbergraph_UI_MarketPanel_Currency
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_C::ExecuteUbergraph_UI_MarketPanel_Currency(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency.UI_MarketPanel_Currency_C.ExecuteUbergraph_UI_MarketPanel_Currency");
		
		UUI_MarketPanel_Currency_C_ExecuteUbergraph_UI_MarketPanel_Currency_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketPanel_Currency_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketPanel_Currency_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MarketPanel_Currency.UI_MarketPanel_Currency_C");
		return ptr;
	}

}


