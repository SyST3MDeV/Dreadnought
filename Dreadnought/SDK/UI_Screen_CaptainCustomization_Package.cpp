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
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.CanUseBackButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UUI_Screen_CaptainCustomization_C::CanUseBackButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.CanUseBackButton");
		
		UUI_Screen_CaptainCustomization_C_CanUseBackButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UpdateButtonHints
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::UpdateButtonHints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UpdateButtonHints");
		
		UUI_Screen_CaptainCustomization_C_UpdateButtonHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleDescriptionScroll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ScrollUp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleDescriptionScroll(bool ScrollUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleDescriptionScroll");
		
		UUI_Screen_CaptainCustomization_C_HandleDescriptionScroll_Params params {};
		params.ScrollUp = ScrollUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleTutorialStartPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleTutorialStartPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleTutorialStartPressed");
		
		UUI_Screen_CaptainCustomization_C_HandleTutorialStartPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ShouldCallAction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsAlreadySelected                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::ShouldCallAction(bool* IsAlreadySelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ShouldCallAction");
		
		UUI_Screen_CaptainCustomization_C_ShouldCallAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAlreadySelected != nullptr)
			*IsAlreadySelected = params.IsAlreadySelected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BackFromCustomizeItemsToCategories
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::BackFromCustomizeItemsToCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BackFromCustomizeItemsToCategories");
		
		UUI_Screen_CaptainCustomization_C_BackFromCustomizeItemsToCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BackFromNavButtonsToCustomizeItems
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::BackFromNavButtonsToCustomizeItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BackFromNavButtonsToCustomizeItems");
		
		UUI_Screen_CaptainCustomization_C_BackFromNavButtonsToCustomizeItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ScreenSetup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::ScreenSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ScreenSetup");
		
		UUI_Screen_CaptainCustomization_C_ScreenSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ShowDescriptionPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::ShowDescriptionPanel(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ShowDescriptionPanel");
		
		UUI_Screen_CaptainCustomization_C_ShowDescriptionPanel_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ShowCustomizationItems
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::ShowCustomizationItems(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ShowCustomizationItems");
		
		UUI_Screen_CaptainCustomization_C_ShowCustomizationItems_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleBackButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleBackButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleBackButton");
		
		UUI_Screen_CaptainCustomization_C_HandleBackButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.FocusCategoryList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::FocusCategoryList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.FocusCategoryList");
		
		UUI_Screen_CaptainCustomization_C_FocusCategoryList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.FocusCustomizationList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::FocusCustomizationList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.FocusCustomizationList");
		
		UUI_Screen_CaptainCustomization_C_FocusCustomizationList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.FocusNavButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::FocusNavButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.FocusNavButton");
		
		UUI_Screen_CaptainCustomization_C_FocusNavButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleCategoryItemUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleCategoryItemUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleCategoryItemUp");
		
		UUI_Screen_CaptainCustomization_C_HandleCategoryItemUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleCategoryUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleCategoryUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleCategoryUp");
		
		UUI_Screen_CaptainCustomization_C_HandleCategoryUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleCustomizationItemDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleCustomizationItemDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleCustomizationItemDown");
		
		UUI_Screen_CaptainCustomization_C_HandleCustomizationItemDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleCategoryDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleCategoryDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleCategoryDown");
		
		UUI_Screen_CaptainCustomization_C_HandleCategoryDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleFocusNextButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleFocusNextButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleFocusNextButton");
		
		UUI_Screen_CaptainCustomization_C_HandleFocusNextButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleActionButtonLeftRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleActionButtonLeftRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleActionButtonLeftRight");
		
		UUI_Screen_CaptainCustomization_C_HandleActionButtonLeftRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.IsNavButtonFocused
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsNavButton                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::IsNavButtonFocused(bool* IsNavButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.IsNavButtonFocused");
		
		UUI_Screen_CaptainCustomization_C_IsNavButtonFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsNavButton != nullptr)
			*IsNavButton = params.IsNavButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleGranularLeft
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleGranularLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleGranularLeft");
		
		UUI_Screen_CaptainCustomization_C_HandleGranularLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleGranularRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleGranularRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleGranularRight");
		
		UUI_Screen_CaptainCustomization_C_HandleGranularRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleGranularUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleGranularUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleGranularUp");
		
		UUI_Screen_CaptainCustomization_C_HandleGranularUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.IsCategoryListFocused
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsCategory                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::IsCategoryListFocused(bool* IsCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.IsCategoryListFocused");
		
		UUI_Screen_CaptainCustomization_C_IsCategoryListFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsCategory != nullptr)
			*IsCategory = params.IsCategory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleGranularDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleGranularDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleGranularDown");
		
		UUI_Screen_CaptainCustomization_C_HandleGranularDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.FocusMaleTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::FocusMaleTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.FocusMaleTab");
		
		UUI_Screen_CaptainCustomization_C_FocusMaleTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.FocusFemaleTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::FocusFemaleTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.FocusFemaleTab");
		
		UUI_Screen_CaptainCustomization_C_FocusFemaleTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.SetCaptainName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::SetCaptainName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.SetCaptainName");
		
		UUI_Screen_CaptainCustomization_C_SetCaptainName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleTutorialFlow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleTutorialFlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleTutorialFlow");
		
		UUI_Screen_CaptainCustomization_C_HandleTutorialFlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnCustomizationItemClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CptCustomization_CustomizationItem_C*    clickedSlotItemId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::OnCustomizationItemClicked(class UUI_CptCustomization_CustomizationItem_C* clickedSlotItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnCustomizationItemClicked");
		
		UUI_Screen_CaptainCustomization_C_OnCustomizationItemClicked_Params params {};
		params.clickedSlotItemId = clickedSlotItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnCategoryClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CptCustomization_CategoryButton_C*       ClickedCategory                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::OnCategoryClicked(class UUI_CptCustomization_CategoryButton_C* ClickedCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnCategoryClicked");
		
		UUI_Screen_CaptainCustomization_C_OnCategoryClicked_Params params {};
		params.ClickedCategory = ClickedCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnMaleAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::OnMaleAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnMaleAction");
		
		UUI_Screen_CaptainCustomization_C_OnMaleAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnFemaleAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::OnFemaleAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnFemaleAction");
		
		UUI_Screen_CaptainCustomization_C_OnFemaleAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.SwapMaleFemaleTabs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::SwapMaleFemaleTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.SwapMaleFemaleTabs");
		
		UUI_Screen_CaptainCustomization_C_SwapMaleFemaleTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GameInput                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleInput(EUI_MenuActions GameInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleInput");
		
		UUI_Screen_CaptainCustomization_C_HandleInput_Params params {};
		params.GameInput = GameInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UpdateDetailsIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CptCustomization_CategoryButton_C*       CptCustomizationBtn                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::UpdateDetailsIcon(class UUI_CptCustomization_CategoryButton_C* CptCustomizationBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UpdateDetailsIcon");
		
		UUI_Screen_CaptainCustomization_C_UpdateDetailsIcon_Params params {};
		params.CptCustomizationBtn = CptCustomizationBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UnFocusFemaleTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::UnFocusFemaleTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UnFocusFemaleTab");
		
		UUI_Screen_CaptainCustomization_C_UnFocusFemaleTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UnFocusMaleTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::UnFocusMaleTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UnFocusMaleTab");
		
		UUI_Screen_CaptainCustomization_C_UnFocusMaleTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.SetupCategoryList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::SetupCategoryList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.SetupCategoryList");
		
		UUI_Screen_CaptainCustomization_C_SetupCategoryList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.DisplayItemDescription
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           marketData                                                 (Parm)
	 */
	void UUI_Screen_CaptainCustomization_C::DisplayItemDescription(const struct FMarketItemUIData& marketData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.DisplayItemDescription");
		
		UUI_Screen_CaptainCustomization_C_DisplayItemDescription_Params params {};
		params.marketData = marketData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UpdateBuyButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::UpdateBuyButton(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UpdateBuyButton");
		
		UUI_Screen_CaptainCustomization_C_UpdateBuyButton_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UpdateDescriptionButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOwned                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsEquipped                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::UpdateDescriptionButtonVisibility(bool IsOwned, bool IsEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UpdateDescriptionButtonVisibility");
		
		UUI_Screen_CaptainCustomization_C_UpdateDescriptionButtonVisibility_Params params {};
		params.IsOwned = IsOwned;
		params.IsEquipped = IsEquipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UnbindDescriptionButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::UnbindDescriptionButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UnbindDescriptionButtons");
		
		UUI_Screen_CaptainCustomization_C_UnbindDescriptionButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.SetupButtonsAndCategories
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::SetupButtonsAndCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.SetupButtonsAndCategories");
		
		UUI_Screen_CaptainCustomization_C_SetupButtonsAndCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.GetLocalizedCategoryListHeader
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EYUICharacterItemType                              CustomizationCategory                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        HeaderText                                                 (Parm, OutParm)
	 */
	void UUI_Screen_CaptainCustomization_C::GetLocalizedCategoryListHeader(EYUICharacterItemType CustomizationCategory, class FText* HeaderText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.GetLocalizedCategoryListHeader");
		
		UUI_Screen_CaptainCustomization_C_GetLocalizedCategoryListHeader_Params params {};
		params.CustomizationCategory = CustomizationCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeaderText != nullptr)
			*HeaderText = params.HeaderText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.GetLocalizedCategoryName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EYUICharacterItemType                              CustomizationCategory                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        LocalizedTitle                                             (Parm, OutParm)
	 */
	void UUI_Screen_CaptainCustomization_C::GetLocalizedCategoryName(EYUICharacterItemType CustomizationCategory, class FText* LocalizedTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.GetLocalizedCategoryName");
		
		UUI_Screen_CaptainCustomization_C_GetLocalizedCategoryName_Params params {};
		params.CustomizationCategory = CustomizationCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalizedTitle != nullptr)
			*LocalizedTitle = params.LocalizedTitle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UpdateCustomizationCategoriesData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMarketItemUIData>                   equippedItems                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Screen_CaptainCustomization_C::UpdateCustomizationCategoriesData(TArray<struct FMarketItemUIData>* equippedItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UpdateCustomizationCategoriesData");
		
		UUI_Screen_CaptainCustomization_C_UpdateCustomizationCategoriesData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (equippedItems != nullptr)
			*equippedItems = params.equippedItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.DisplayCustomizationItems
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMarketItemUIData>                   itemData                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Screen_CaptainCustomization_C::DisplayCustomizationItems(TArray<struct FMarketItemUIData>* itemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.DisplayCustomizationItems");
		
		UUI_Screen_CaptainCustomization_C_DisplayCustomizationItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (itemData != nullptr)
			*itemData = params.itemData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnTransitionIn");
		
		UUI_Screen_CaptainCustomization_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnTransitionOut");
		
		UUI_Screen_CaptainCustomization_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.TransitionInAnimationComplete");
		
		UUI_Screen_CaptainCustomization_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.TransitionOutAnimationComplete");
		
		UUI_Screen_CaptainCustomization_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleOnCategoryClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CptCustomization_CategoryButton_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleOnCategoryClicked(class UUI_CptCustomization_CategoryButton_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleOnCategoryClicked");
		
		UUI_Screen_CaptainCustomization_C_HandleOnCategoryClicked_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::BndEvt__FemaleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Screen_CaptainCustomization_C_BndEvt__FemaleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::BndEvt__MaleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Screen_CaptainCustomization_C_BndEvt__MaleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleOnCustomizationItemClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CptCustomization_CustomizationItem_C*    source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleOnCustomizationItemClicked(class UUI_CptCustomization_CustomizationItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleOnCustomizationItemClicked");
		
		UUI_Screen_CaptainCustomization_C_HandleOnCustomizationItemClicked_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.RefreshEquippedItemWidgets
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMarketItemUIData>                   equippedItems                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Screen_CaptainCustomization_C::RefreshEquippedItemWidgets(TArray<struct FMarketItemUIData> equippedItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.RefreshEquippedItemWidgets");
		
		UUI_Screen_CaptainCustomization_C_RefreshEquippedItemWidgets_Params params {};
		params.equippedItems = equippedItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.RefreshEquippableItemWidgets
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMarketItemUIData>                   equippableItems                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Screen_CaptainCustomization_C::RefreshEquippableItemWidgets(TArray<struct FMarketItemUIData> equippableItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.RefreshEquippableItemWidgets");
		
		UUI_Screen_CaptainCustomization_C_RefreshEquippableItemWidgets_Params params {};
		params.equippableItems = equippableItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.RefreshEquippableItemDescriptionWidget
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           equippableItem                                             (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Screen_CaptainCustomization_C::RefreshEquippableItemDescriptionWidget(const struct FMarketItemUIData& equippableItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.RefreshEquippableItemDescriptionWidget");
		
		UUI_Screen_CaptainCustomization_C_RefreshEquippableItemDescriptionWidget_Params params {};
		params.equippableItem = equippableItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ShowEquippableItemWidgets
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::ShowEquippableItemWidgets(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ShowEquippableItemWidgets");
		
		UUI_Screen_CaptainCustomization_C_ShowEquippableItemWidgets_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ShowEquippableItemDescriptionWidget
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::ShowEquippableItemDescriptionWidget(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ShowEquippableItemDescriptionWidget");
		
		UUI_Screen_CaptainCustomization_C_ShowEquippableItemDescriptionWidget_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleOnEquipClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            UnusedId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleOnEquipClicked(int32_t UnusedId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleOnEquipClicked");
		
		UUI_Screen_CaptainCustomization_C_HandleOnEquipClicked_Params params {};
		params.UnusedId = UnusedId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleOnViewBundleClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            UnusedId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleOnViewBundleClicked(int32_t UnusedId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleOnViewBundleClicked");
		
		UUI_Screen_CaptainCustomization_C_HandleOnViewBundleClicked_Params params {};
		params.UnusedId = UnusedId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleOnBuyClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            UnusedId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::HandleOnBuyClicked(int32_t UnusedId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleOnBuyClicked");
		
		UUI_Screen_CaptainCustomization_C_HandleOnBuyClicked_Params params {};
		params.UnusedId = UnusedId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Screen_CaptainCustomization_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.Construct");
		
		UUI_Screen_CaptainCustomization_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_365_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::BndEvt__MaleButton_K2Node_ComponentBoundEvent_365_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_365_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Screen_CaptainCustomization_C_BndEvt__MaleButton_K2Node_ComponentBoundEvent_365_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_306_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::BndEvt__FemaleButton_K2Node_ComponentBoundEvent_306_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_306_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Screen_CaptainCustomization_C_BndEvt__FemaleButton_K2Node_ComponentBoundEvent_306_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_397_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::BndEvt__MaleButton_K2Node_ComponentBoundEvent_397_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_397_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Screen_CaptainCustomization_C_BndEvt__MaleButton_K2Node_ComponentBoundEvent_397_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_267_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_CaptainCustomization_C::BndEvt__FemaleButton_K2Node_ComponentBoundEvent_267_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_267_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Screen_CaptainCustomization_C_BndEvt__FemaleButton_K2Node_ComponentBoundEvent_267_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.PreConstruct");
		
		UUI_Screen_CaptainCustomization_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnNavigationEvent");
		
		UUI_Screen_CaptainCustomization_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ExecuteUbergraph_UI_Screen_CaptainCustomization
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CaptainCustomization_C::ExecuteUbergraph_UI_Screen_CaptainCustomization(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ExecuteUbergraph_UI_Screen_CaptainCustomization");
		
		UUI_Screen_CaptainCustomization_C_ExecuteUbergraph_UI_Screen_CaptainCustomization_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_CaptainCustomization_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_CaptainCustomization_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C");
		return ptr;
	}

}


