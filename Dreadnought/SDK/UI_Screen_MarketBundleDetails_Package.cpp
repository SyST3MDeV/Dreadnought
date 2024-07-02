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
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.IsTabVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            CurrentTabIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsTabVisible                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_MarketBundleDetails_C::IsTabVisible(int32_t CurrentTabIndex, bool* IsTabVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.IsTabVisible");
		
		UUI_Screen_MarketBundleDetails_C_IsTabVisible_Params params {};
		params.CurrentTabIndex = CurrentTabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTabVisible != nullptr)
			*IsTabVisible = params.IsTabVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.IsFirstBundleItemGenderSpecific
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsGenderSpecific                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_MarketBundleDetails_C::IsFirstBundleItemGenderSpecific(bool* IsGenderSpecific)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.IsFirstBundleItemGenderSpecific");
		
		UUI_Screen_MarketBundleDetails_C_IsFirstBundleItemGenderSpecific_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsGenderSpecific != nullptr)
			*IsGenderSpecific = params.IsGenderSpecific;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.ShowAlreadyOwnedPopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::ShowAlreadyOwnedPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.ShowAlreadyOwnedPopup");
		
		UUI_Screen_MarketBundleDetails_C_ShowAlreadyOwnedPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.IsValidDescription
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        description                                                (Parm)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_MarketBundleDetails_C::IsValidDescription(const class FText& description, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.IsValidDescription");
		
		UUI_Screen_MarketBundleDetails_C_IsValidDescription_Params params {};
		params.description = description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.FindFirstGenderMatchingBundleItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EYCharacterGender                                  Gender                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IncludeGenderNeutral                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_MarketBundleDetails_BundleItemButton_C*  BundleItem                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ItemIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_MarketBundleDetails_C::FindFirstGenderMatchingBundleItem(EYCharacterGender Gender, bool IncludeGenderNeutral, class UUI_MarketBundleDetails_BundleItemButton_C** BundleItem, int32_t* ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.FindFirstGenderMatchingBundleItem");
		
		UUI_Screen_MarketBundleDetails_C_FindFirstGenderMatchingBundleItem_Params params {};
		params.Gender = Gender;
		params.IncludeGenderNeutral = IncludeGenderNeutral;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BundleItem != nullptr)
			*BundleItem = params.BundleItem;
		if (ItemIndex != nullptr)
			*ItemIndex = params.ItemIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.GetNumBundleItems
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	int32_t UUI_Screen_MarketBundleDetails_C::GetNumBundleItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.GetNumBundleItems");
		
		UUI_Screen_MarketBundleDetails_C_GetNumBundleItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.GetBundleItemByIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_MarketBundleDetails_BundleItemButton_C*  BundleItem                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_MarketBundleDetails_C::GetBundleItemByIndex(int32_t index, class UUI_MarketBundleDetails_BundleItemButton_C** BundleItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.GetBundleItemByIndex");
		
		UUI_Screen_MarketBundleDetails_C_GetBundleItemByIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BundleItem != nullptr)
			*BundleItem = params.BundleItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.DeselectCurrentBundleItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::DeselectCurrentBundleItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.DeselectCurrentBundleItem");
		
		UUI_Screen_MarketBundleDetails_C_DeselectCurrentBundleItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleBundleItemClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_MarketBundleDetails_BundleItemButton_C*  source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_MarketBundleDetails_C::HandleBundleItemClicked(class UUI_MarketBundleDetails_BundleItemButton_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleBundleItemClicked");
		
		UUI_Screen_MarketBundleDetails_C_HandleBundleItemClicked_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleNavRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::HandleNavRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleNavRight");
		
		UUI_Screen_MarketBundleDetails_C_HandleNavRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleNavLeft
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::HandleNavLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleNavLeft");
		
		UUI_Screen_MarketBundleDetails_C_HandleNavLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.SelectTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TabIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_MarketBundleDetails_C::SelectTab(int32_t TabIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.SelectTab");
		
		UUI_Screen_MarketBundleDetails_C_SelectTab_Params params {};
		params.TabIndex = TabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleNavDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::HandleNavDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleNavDown");
		
		UUI_Screen_MarketBundleDetails_C_HandleNavDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleNavUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::HandleNavUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleNavUp");
		
		UUI_Screen_MarketBundleDetails_C_HandleNavUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleTabRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::HandleTabRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleTabRight");
		
		UUI_Screen_MarketBundleDetails_C_HandleTabRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleTabLeft
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::HandleTabLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleTabLeft");
		
		UUI_Screen_MarketBundleDetails_C_HandleTabLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    Input                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_MarketBundleDetails_C::HandleInput(EUI_MenuActions Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleInput");
		
		UUI_Screen_MarketBundleDetails_C_HandleInput_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandlePurchaseConfirmationPopupResult
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_MarketBundleDetails_C::HandlePurchaseConfirmationPopupResult(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandlePurchaseConfirmationPopupResult");
		
		UUI_Screen_MarketBundleDetails_C_HandlePurchaseConfirmationPopupResult_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.ShowInsufficientFundsPopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::ShowInsufficientFundsPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.ShowInsufficientFundsPopup");
		
		UUI_Screen_MarketBundleDetails_C_ShowInsufficientFundsPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.ShowPurchaseConfirmationPopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::ShowPurchaseConfirmationPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.ShowPurchaseConfirmationPopup");
		
		UUI_Screen_MarketBundleDetails_C_ShowPurchaseConfirmationPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleActionButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::HandleActionButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleActionButtonClicked");
		
		UUI_Screen_MarketBundleDetails_C_HandleActionButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.SetupHeaderAndDescriptionText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::SetupHeaderAndDescriptionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.SetupHeaderAndDescriptionText");
		
		UUI_Screen_MarketBundleDetails_C_SetupHeaderAndDescriptionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.ShowPreview
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::ShowPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.ShowPreview");
		
		UUI_Screen_MarketBundleDetails_C_ShowPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.SetupPurchaseButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::SetupPurchaseButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.SetupPurchaseButton");
		
		UUI_Screen_MarketBundleDetails_C_SetupPurchaseButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.SelectBundleItem
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_MarketBundleDetails_BundleItemButton_C*  source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_MarketBundleDetails_C::SelectBundleItem(class UUI_MarketBundleDetails_BundleItemButton_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.SelectBundleItem");
		
		UUI_Screen_MarketBundleDetails_C_SelectBundleItem_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.SetupBundleItemList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           marketItem                                                 (Parm)
	 */
	void UUI_Screen_MarketBundleDetails_C::SetupBundleItemList(const struct FMarketItemUIData& marketItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.SetupBundleItemList");
		
		UUI_Screen_MarketBundleDetails_C_SetupBundleItemList_Params params {};
		params.marketItem = marketItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.Setup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.Setup");
		
		UUI_Screen_MarketBundleDetails_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.OnTransitionIn");
		
		UUI_Screen_MarketBundleDetails_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.OnTransitionOut");
		
		UUI_Screen_MarketBundleDetails_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.TransitionInAnimationComplete");
		
		UUI_Screen_MarketBundleDetails_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.TransitionOutAnimationComplete");
		
		UUI_Screen_MarketBundleDetails_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_MarketBundleDetails_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.Construct");
		
		UUI_Screen_MarketBundleDetails_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.BndEvt__ActionButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_MarketBundleDetails_C::BndEvt__ActionButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.BndEvt__ActionButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UUI_Screen_MarketBundleDetails_C_BndEvt__ActionButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.OnMarketPurchaseComplete
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EYPurchaseResult                                   purchaseResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_MarketBundleDetails_C::OnMarketPurchaseComplete(EYPurchaseResult purchaseResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.OnMarketPurchaseComplete");
		
		UUI_Screen_MarketBundleDetails_C_OnMarketPurchaseComplete_Params params {};
		params.purchaseResult = purchaseResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_MarketBundleDetails_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.OnNavigationEvent");
		
		UUI_Screen_MarketBundleDetails_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.ExecuteUbergraph_UI_Screen_MarketBundleDetails
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_MarketBundleDetails_C::ExecuteUbergraph_UI_Screen_MarketBundleDetails(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.ExecuteUbergraph_UI_Screen_MarketBundleDetails");
		
		UUI_Screen_MarketBundleDetails_C_ExecuteUbergraph_UI_Screen_MarketBundleDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_MarketBundleDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_MarketBundleDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C");
		return ptr;
	}

}


