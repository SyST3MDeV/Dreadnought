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
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.HandleOnTabChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::HandleOnTabChanged(EUI_Screen Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.HandleOnTabChanged");
		
		UUI_Screen_Market_C_HandleOnTabChanged_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.UpdateHints
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::UpdateHints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.UpdateHints");
		
		UUI_Screen_Market_C_UpdateHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.HandleTabClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::HandleTabClicked(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.HandleTabClicked");
		
		UUI_Screen_Market_C_HandleTabClicked_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.UnbindMarketItemEvents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Market_Item_C*                           MarketItemWidget                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::UnbindMarketItemEvents(class UUI_Market_Item_C* MarketItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.UnbindMarketItemEvents");
		
		UUI_Screen_Market_C_UnbindMarketItemEvents_Params params {};
		params.MarketItemWidget = MarketItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.BindMarketItemEvents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Market_Item_C*                           MarketItemWidget                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::BindMarketItemEvents(class UUI_Market_Item_C* MarketItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.BindMarketItemEvents");
		
		UUI_Screen_Market_C_BindMarketItemEvents_Params params {};
		params.MarketItemWidget = MarketItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.CreateNewMarketItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           MarketItemData                                             (Parm)
	 * 		class UUI_Market_Item_C*                           MarketItemWidget                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::CreateNewMarketItem(const struct FMarketItemUIData& MarketItemData, class UUI_Market_Item_C** MarketItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.CreateNewMarketItem");
		
		UUI_Screen_Market_C_CreateNewMarketItem_Params params {};
		params.MarketItemData = MarketItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MarketItemWidget != nullptr)
			*MarketItemWidget = params.MarketItemWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.AddMarketItemToGrid
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           MarketItemData                                             (Parm)
	 */
	void UUI_Screen_Market_C::AddMarketItemToGrid(const struct FMarketItemUIData& MarketItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.AddMarketItemToGrid");
		
		UUI_Screen_Market_C_AddMarketItemToGrid_Params params {};
		params.MarketItemData = MarketItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.ClearMarketGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::ClearMarketGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.ClearMarketGrid");
		
		UUI_Screen_Market_C_ClearMarketGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.IsCustomConversionItemFocused
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UUI_Screen_Market_C::IsCustomConversionItemFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.IsCustomConversionItemFocused");
		
		UUI_Screen_Market_C_IsCustomConversionItemFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.UpdateCurrencies
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::UpdateCurrencies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.UpdateCurrencies");
		
		UUI_Screen_Market_C_UpdateCurrencies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.IsGPPanelPS4Focused
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::IsGPPanelPS4Focused(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.IsGPPanelPS4Focused");
		
		UUI_Screen_Market_C_IsGPPanelPS4Focused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.CanConvertXP
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::CanConvertXP(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.CanConvertXP");
		
		UUI_Screen_Market_C_CanConvertXP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.HandleAsyncXpConversionCompleted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::HandleAsyncXpConversionCompleted(int32_t NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.HandleAsyncXpConversionCompleted");
		
		UUI_Screen_Market_C_HandleAsyncXpConversionCompleted_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.HandleAsyncXpConversionRequest
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::HandleAsyncXpConversionRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.HandleAsyncXpConversionRequest");
		
		UUI_Screen_Market_C_HandleAsyncXpConversionRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.NavLeftIntoMarketGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::NavLeftIntoMarketGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.NavLeftIntoMarketGrid");
		
		UUI_Screen_Market_C_NavLeftIntoMarketGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.ScrollElitePanelDescriptionBox
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ScrollUp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::ScrollElitePanelDescriptionBox(bool ScrollUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.ScrollElitePanelDescriptionBox");
		
		UUI_Screen_Market_C_ScrollElitePanelDescriptionBox_Params params {};
		params.ScrollUp = ScrollUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.SetEliteInfoPanelFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::SetEliteInfoPanelFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.SetEliteInfoPanelFocus");
		
		UUI_Screen_Market_C_SetEliteInfoPanelFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.ShowPanelIfNotVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TabIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::ShowPanelIfNotVisible(int32_t TabIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.ShowPanelIfNotVisible");
		
		UUI_Screen_Market_C_ShowPanelIfNotVisible_Params params {};
		params.TabIndex = TabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.NavigateToXPConversionScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::NavigateToXPConversionScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.NavigateToXPConversionScreen");
		
		UUI_Screen_Market_C_NavigateToXPConversionScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.NavigateToGPPurchaseScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::NavigateToGPPurchaseScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.NavigateToGPPurchaseScreen");
		
		UUI_Screen_Market_C_NavigateToGPPurchaseScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.NavigateToCurrencyScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::NavigateToCurrencyScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.NavigateToCurrencyScreen");
		
		UUI_Screen_Market_C_NavigateToCurrencyScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.NavigateToHeroShipScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::NavigateToHeroShipScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.NavigateToHeroShipScreen");
		
		UUI_Screen_Market_C_NavigateToHeroShipScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.NavigateToBundlesScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::NavigateToBundlesScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.NavigateToBundlesScreen");
		
		UUI_Screen_Market_C_NavigateToBundlesScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.NavigateToFeaturedScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::NavigateToFeaturedScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.NavigateToFeaturedScreen");
		
		UUI_Screen_Market_C_NavigateToFeaturedScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.IsPanelVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsVisible                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::IsPanelVisible(int32_t index, bool* IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.IsPanelVisible");
		
		UUI_Screen_Market_C_IsPanelVisible_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsVisible != nullptr)
			*IsVisible = params.IsVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.NavToFirstSelectableCurrencyCategory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::NavToFirstSelectableCurrencyCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.NavToFirstSelectableCurrencyCategory");
		
		UUI_Screen_Market_C_NavToFirstSelectableCurrencyCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.ActionTertiary
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::ActionTertiary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.ActionTertiary");
		
		UUI_Screen_Market_C_ActionTertiary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.Action");
		
		UUI_Screen_Market_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.UnfocusCurrentWidgetFromHover
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             NewWidget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::UnfocusCurrentWidgetFromHover(class UUI_DreadWidget* NewWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.UnfocusCurrentWidgetFromHover");
		
		UUI_Screen_Market_C_UnfocusCurrentWidgetFromHover_Params params {};
		params.NewWidget = NewWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.SetCustomXpConversionFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ShipItemIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::SetCustomXpConversionFocus(int32_t ShipItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.SetCustomXpConversionFocus");
		
		UUI_Screen_Market_C_SetCustomXpConversionFocus_Params params {};
		params.ShipItemIndex = ShipItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.SetAllXpConversionFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::SetAllXpConversionFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.SetAllXpConversionFocus");
		
		UUI_Screen_Market_C_SetAllXpConversionFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.SetupXpConversion
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::SetupXpConversion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.SetupXpConversion");
		
		UUI_Screen_Market_C_SetupXpConversion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.NavRightIntoMarketGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::NavRightIntoMarketGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.NavRightIntoMarketGrid");
		
		UUI_Screen_Market_C_NavRightIntoMarketGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.NavUpMarketGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::NavUpMarketGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.NavUpMarketGrid");
		
		UUI_Screen_Market_C_NavUpMarketGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.NavDownMarketGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::NavDownMarketGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.NavDownMarketGrid");
		
		UUI_Screen_Market_C_NavDownMarketGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.NavRightMarketGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::NavRightMarketGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.NavRightMarketGrid");
		
		UUI_Screen_Market_C_NavRightMarketGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.SetFilterFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            filterIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::SetFilterFocus(int32_t categoryIndex, int32_t filterIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.SetFilterFocus");
		
		UUI_Screen_Market_C_SetFilterFocus_Params params {};
		params.categoryIndex = categoryIndex;
		params.filterIndex = filterIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.NavLeftMarketGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::NavLeftMarketGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.NavLeftMarketGrid");
		
		UUI_Screen_Market_C_NavLeftMarketGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.SetupBundleOrHeroPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::SetupBundleOrHeroPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.SetupBundleOrHeroPanel");
		
		UUI_Screen_Market_C_SetupBundleOrHeroPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.GetUpIndexCurrencyCategory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::GetUpIndexCurrencyCategory(int32_t CurrentIndex, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.GetUpIndexCurrencyCategory");
		
		UUI_Screen_Market_C_GetUpIndexCurrencyCategory_Params params {};
		params.CurrentIndex = CurrentIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.GetDownIndexCurrencyCategory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::GetDownIndexCurrencyCategory(int32_t CurrentIndex, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.GetDownIndexCurrencyCategory");
		
		UUI_Screen_Market_C_GetDownIndexCurrencyCategory_Params params {};
		params.CurrentIndex = CurrentIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.SetCurrencyCategoryFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::SetCurrencyCategoryFocus(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.SetCurrencyCategoryFocus");
		
		UUI_Screen_Market_C_SetCurrencyCategoryFocus_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.GetFirstSelectableCurrencyCategoryIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::GetFirstSelectableCurrencyCategoryIndex(int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.GetFirstSelectableCurrencyCategoryIndex");
		
		UUI_Screen_Market_C_GetFirstSelectableCurrencyCategoryIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.SetupCurrencyPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::SetupCurrencyPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.SetupCurrencyPanel");
		
		UUI_Screen_Market_C_SetupCurrencyPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.OnGpToCreditsButtonSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::OnGpToCreditsButtonSelected(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.OnGpToCreditsButtonSelected");
		
		UUI_Screen_Market_C_OnGpToCreditsButtonSelected_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.EliteStatusPackMarketItemSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           MarketItemData                                             (Parm)
	 */
	void UUI_Screen_Market_C::EliteStatusPackMarketItemSelected(const struct FMarketItemUIData& MarketItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.EliteStatusPackMarketItemSelected");
		
		UUI_Screen_Market_C_EliteStatusPackMarketItemSelected_Params params {};
		params.MarketItemData = MarketItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.SetGpToCreditPopupData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGpToCreditsDetailsPopupData*                PopupData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FMarketItemUIData                           MarketItemData                                             (Parm)
	 * 		bool                                               IsGpPack                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::SetGpToCreditPopupData(class UGpToCreditsDetailsPopupData* PopupData, const struct FMarketItemUIData& MarketItemData, bool IsGpPack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.SetGpToCreditPopupData");
		
		UUI_Screen_Market_C_SetGpToCreditPopupData_Params params {};
		params.PopupData = PopupData;
		params.MarketItemData = MarketItemData;
		params.IsGpPack = IsGpPack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.CreditPackMarketItemSelected
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           MarketItemData                                             (Parm)
	 * 		bool                                               IsGpPack                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::CreditPackMarketItemSelected(const struct FMarketItemUIData& MarketItemData, bool IsGpPack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.CreditPackMarketItemSelected");
		
		UUI_Screen_Market_C_CreditPackMarketItemSelected_Params params {};
		params.MarketItemData = MarketItemData;
		params.IsGpPack = IsGpPack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.SetupFeaturedPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::SetupFeaturedPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.SetupFeaturedPanel");
		
		UUI_Screen_Market_C_SetupFeaturedPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.SetFeaturedGridFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::SetFeaturedGridFocus(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.SetFeaturedGridFocus");
		
		UUI_Screen_Market_C_SetFeaturedGridFocus_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.SetFeaturedFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::SetFeaturedFocus(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.SetFeaturedFocus");
		
		UUI_Screen_Market_C_SetFeaturedFocus_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.UnfocusCurrentWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::UnfocusCurrentWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.UnfocusCurrentWidget");
		
		UUI_Screen_Market_C_UnfocusCurrentWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.HandleItemHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::HandleItemHovered(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.HandleItemHovered");
		
		UUI_Screen_Market_C_HandleItemHovered_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.SetMarketGridFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::SetMarketGridFocus(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.SetMarketGridFocus");
		
		UUI_Screen_Market_C_SetMarketGridFocus_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.SetWidgetFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::SetWidgetFocus(class UUI_DreadWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.SetWidgetFocus");
		
		UUI_Screen_Market_C_SetWidgetFocus_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.HandleNavRightSection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::HandleNavRightSection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.HandleNavRightSection");
		
		UUI_Screen_Market_C_HandleNavRightSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.HandleNavLeftSection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::HandleNavLeftSection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.HandleNavLeftSection");
		
		UUI_Screen_Market_C_HandleNavLeftSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.HandleNavDownGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::HandleNavDownGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.HandleNavDownGranular");
		
		UUI_Screen_Market_C_HandleNavDownGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.HandleNavUpGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::HandleNavUpGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.HandleNavUpGranular");
		
		UUI_Screen_Market_C_HandleNavUpGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.HandleNavRightGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::HandleNavRightGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.HandleNavRightGranular");
		
		UUI_Screen_Market_C_HandleNavRightGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.HandleNavLeftGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::HandleNavLeftGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.HandleNavLeftGranular");
		
		UUI_Screen_Market_C_HandleNavLeftGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.Setup");
		
		UUI_Screen_Market_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.NavigateToCreditsPurchaseScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::NavigateToCreditsPurchaseScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.NavigateToCreditsPurchaseScreen");
		
		UUI_Screen_Market_C_NavigateToCreditsPurchaseScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.NavigateToElitePurchaseScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::NavigateToElitePurchaseScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.NavigateToElitePurchaseScreen");
		
		UUI_Screen_Market_C_NavigateToElitePurchaseScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::HandleInput(EUI_MenuActions GamePadInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.HandleInput");
		
		UUI_Screen_Market_C_HandleInput_Params params {};
		params.GamePadInput = GamePadInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.ConstructPurchasePopupButtons
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           MarketItemData                                             (Parm, OutParm, ReferenceParm)
	 * 		TArray<class UPopupButtonData*>                    PopupButtons                                               (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_Screen_Market_C::ConstructPurchasePopupButtons(struct FMarketItemUIData* MarketItemData, TArray<class UPopupButtonData*>* PopupButtons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.ConstructPurchasePopupButtons");
		
		UUI_Screen_Market_C_ConstructPurchasePopupButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MarketItemData != nullptr)
			*MarketItemData = params.MarketItemData;
		if (PopupButtons != nullptr)
			*PopupButtons = params.PopupButtons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.ShowInsufficientFundsPopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::ShowInsufficientFundsPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.ShowInsufficientFundsPopup");
		
		UUI_Screen_Market_C_ShowInsufficientFundsPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.HandlePurchaseConfirmationPopupResult
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::HandlePurchaseConfirmationPopupResult(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.HandlePurchaseConfirmationPopupResult");
		
		UUI_Screen_Market_C_HandlePurchaseConfirmationPopupResult_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.ShowPurchaseConfirmationPopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           PurchaseItemData                                           (Parm)
	 */
	void UUI_Screen_Market_C::ShowPurchaseConfirmationPopup(const struct FMarketItemUIData& PurchaseItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.ShowPurchaseConfirmationPopup");
		
		UUI_Screen_Market_C_ShowPurchaseConfirmationPopup_Params params {};
		params.PurchaseItemData = PurchaseItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.UpdateMarketGridVisibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::UpdateMarketGridVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.UpdateMarketGridVisibility");
		
		UUI_Screen_Market_C_UpdateMarketGridVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.HandleItemPreviewClick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           MarketItemData                                             (Parm)
	 */
	void UUI_Screen_Market_C::HandleItemPreviewClick(const struct FMarketItemUIData& MarketItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.HandleItemPreviewClick");
		
		UUI_Screen_Market_C_HandleItemPreviewClick_Params params {};
		params.MarketItemData = MarketItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.HandleItemDetailsClick
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           MarketItemData                                             (Parm)
	 */
	void UUI_Screen_Market_C::HandleItemDetailsClick(const struct FMarketItemUIData& MarketItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.HandleItemDetailsClick");
		
		UUI_Screen_Market_C_HandleItemDetailsClick_Params params {};
		params.MarketItemData = MarketItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.HandleItemPurchaseClick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           MarketItemData                                             (Parm)
	 */
	void UUI_Screen_Market_C::HandleItemPurchaseClick(const struct FMarketItemUIData& MarketItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.HandleItemPurchaseClick");
		
		UUI_Screen_Market_C_HandleItemPurchaseClick_Params params {};
		params.MarketItemData = MarketItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.SetMarketGridData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::SetMarketGridData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.SetMarketGridData");
		
		UUI_Screen_Market_C_SetMarketGridData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.GetPanel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      PanelClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_MarketSubPanel*                          Panel                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::GetPanel(class UClass* PanelClass, class UUI_MarketSubPanel** Panel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.GetPanel");
		
		UUI_Screen_Market_C_GetPanel_Params params {};
		params.PanelClass = PanelClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Panel != nullptr)
			*Panel = params.Panel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.ShowPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TabIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::ShowPanel(int32_t TabIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.ShowPanel");
		
		UUI_Screen_Market_C_ShowPanel_Params params {};
		params.TabIndex = TabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.SetupTabs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::SetupTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.SetupTabs");
		
		UUI_Screen_Market_C_SetupTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.Construct");
		
		UUI_Screen_Market_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.OnTransitionIn");
		
		UUI_Screen_Market_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.OnTransitionOut");
		
		UUI_Screen_Market_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.TransitionInAnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::TransitionInAnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.TransitionInAnimComplete");
		
		UUI_Screen_Market_C_TransitionInAnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.TransitionOutAnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::TransitionOutAnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.TransitionOutAnimComplete");
		
		UUI_Screen_Market_C_TransitionOutAnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.BndEvt__TabList_K2Node_ComponentBoundEvent_0_OnTabClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TabIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::BndEvt__TabList_K2Node_ComponentBoundEvent_0_OnTabClicked__DelegateSignature(int32_t TabIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.BndEvt__TabList_K2Node_ComponentBoundEvent_0_OnTabClicked__DelegateSignature");
		
		UUI_Screen_Market_C_BndEvt__TabList_K2Node_ComponentBoundEvent_0_OnTabClicked__DelegateSignature_Params params {};
		params.TabIndex = TabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.UpdateCurrentlyFocusedItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadScreen*                             FocusedItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::UpdateCurrentlyFocusedItem(class UUI_DreadScreen* FocusedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.UpdateCurrentlyFocusedItem");
		
		UUI_Screen_Market_C_UpdateCurrentlyFocusedItem_Params params {};
		params.FocusedItem = FocusedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.OnNavigationEvent");
		
		UUI_Screen_Market_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.OnChangeTab
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::OnChangeTab(EUI_Screen screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.OnChangeTab");
		
		UUI_Screen_Market_C_OnChangeTab_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.OnXpConversionDataUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::OnXpConversionDataUpdated(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.OnXpConversionDataUpdated");
		
		UUI_Screen_Market_C_OnXpConversionDataUpdated_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.OnXpConversionRequested
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Market_C::OnXpConversionRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.OnXpConversionRequested");
		
		UUI_Screen_Market_C_OnXpConversionRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Market.UI_Screen_Market_C.ExecuteUbergraph_UI_Screen_Market
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Market_C::ExecuteUbergraph_UI_Screen_Market(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Market.UI_Screen_Market_C.ExecuteUbergraph_UI_Screen_Market");
		
		UUI_Screen_Market_C_ExecuteUbergraph_UI_Screen_Market_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_Market_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_Market_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_Market.UI_Screen_Market_C");
		return ptr;
	}

}


