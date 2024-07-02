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
	 * 		Name   -> Function UI_Popup_Upsell.UI_Popup_Upsell_C.CreateUpsellItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           MarketItemUIData                                           (Parm)
	 * 		class UUI_Market_Item_C*                           marketItem                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_Upsell_C::CreateUpsellItem(const struct FMarketItemUIData& MarketItemUIData, class UUI_Market_Item_C** marketItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell.UI_Popup_Upsell_C.CreateUpsellItem");
		
		UUI_Popup_Upsell_C_CreateUpsellItem_Params params {};
		params.MarketItemUIData = MarketItemUIData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (marketItem != nullptr)
			*marketItem = params.marketItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_Upsell.UI_Popup_Upsell_C.CheckToClosePopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYPurchaseResult                                   purchaseResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_Upsell_C::CheckToClosePopup(EYPurchaseResult purchaseResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell.UI_Popup_Upsell_C.CheckToClosePopup");
		
		UUI_Popup_Upsell_C_CheckToClosePopup_Params params {};
		params.purchaseResult = purchaseResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_Upsell.UI_Popup_Upsell_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     PopupData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_Upsell_C::Setup(class UObject* PopupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell.UI_Popup_Upsell_C.Setup");
		
		UUI_Popup_Upsell_C_Setup_Params params {};
		params.PopupData = PopupData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_Upsell.UI_Popup_Upsell_C.GetRelevantPlayerCurrency
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	int32_t UUI_Popup_Upsell_C::GetRelevantPlayerCurrency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell.UI_Popup_Upsell_C.GetRelevantPlayerCurrency");
		
		UUI_Popup_Upsell_C_GetRelevantPlayerCurrency_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_Upsell.UI_Popup_Upsell_C.GetPreviousItemCost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ItemCost                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_Upsell_C::GetPreviousItemCost(int32_t* ItemCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell.UI_Popup_Upsell_C.GetPreviousItemCost");
		
		UUI_Popup_Upsell_C_GetPreviousItemCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemCost != nullptr)
			*ItemCost = params.ItemCost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_Upsell.UI_Popup_Upsell_C.CloseCurrentPopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Popup_Upsell_C::CloseCurrentPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell.UI_Popup_Upsell_C.CloseCurrentPopup");
		
		UUI_Popup_Upsell_C_CloseCurrentPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_Upsell.UI_Popup_Upsell_C.GetPreviousItemCurrencyType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EYCurrency UUI_Popup_Upsell_C::GetPreviousItemCurrencyType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell.UI_Popup_Upsell_C.GetPreviousItemCurrencyType");
		
		UUI_Popup_Upsell_C_GetPreviousItemCurrencyType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_Upsell.UI_Popup_Upsell_C.AttemptPurchase
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           itemData                                                   (Parm)
	 */
	void UUI_Popup_Upsell_C::AttemptPurchase(const struct FMarketItemUIData& itemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell.UI_Popup_Upsell_C.AttemptPurchase");
		
		UUI_Popup_Upsell_C_AttemptPurchase_Params params {};
		params.itemData = itemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_Upsell.UI_Popup_Upsell_C.CreateUpsellItems
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMarketItemUIData>                   UpsellItemData                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Popup_Upsell_C::CreateUpsellItems(TArray<struct FMarketItemUIData>* UpsellItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell.UI_Popup_Upsell_C.CreateUpsellItems");
		
		UUI_Popup_Upsell_C_CreateUpsellItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpsellItemData != nullptr)
			*UpsellItemData = params.UpsellItemData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_Upsell.UI_Popup_Upsell_C.OnPopupDataSet
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UPopupData*                                  PopupData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_Upsell_C::OnPopupDataSet(class UPopupData* PopupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell.UI_Popup_Upsell_C.OnPopupDataSet");
		
		UUI_Popup_Upsell_C_OnPopupDataSet_Params params {};
		params.PopupData = PopupData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_Upsell.UI_Popup_Upsell_C.BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_Upsell_C::BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell.UI_Popup_Upsell_C.BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UUI_Popup_Upsell_C_BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_Upsell.UI_Popup_Upsell_C.OnMarketPurchaseComplete
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EYPurchaseResult                                   purchaseResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_Upsell_C::OnMarketPurchaseComplete(EYPurchaseResult purchaseResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell.UI_Popup_Upsell_C.OnMarketPurchaseComplete");
		
		UUI_Popup_Upsell_C_OnMarketPurchaseComplete_Params params {};
		params.purchaseResult = purchaseResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_Upsell.UI_Popup_Upsell_C.ExecuteUbergraph_UI_Popup_Upsell
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_Upsell_C::ExecuteUbergraph_UI_Popup_Upsell(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell.UI_Popup_Upsell_C.ExecuteUbergraph_UI_Popup_Upsell");
		
		UUI_Popup_Upsell_C_ExecuteUbergraph_UI_Popup_Upsell_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Popup_Upsell_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Popup_Upsell_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Popup_Upsell.UI_Popup_Upsell_C");
		return ptr;
	}

}


