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
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.IsAdvancedGraphicsSetting
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FYUIUserSetting                             InSetting                                                  (Parm)
	 * 		bool                                               IsAGS                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::IsAdvancedGraphicsSetting(const struct FYUIUserSetting& InSetting, bool* IsAGS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.IsAdvancedGraphicsSetting");
		
		UUI_SettingsPanel_C_IsAdvancedGraphicsSetting_Params params {};
		params.InSetting = InSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAGS != nullptr)
			*IsAGS = params.IsAGS;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.HandleCustomGraphicsPreset
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIUserSetting                             settingToUpdate                                            (Parm)
	 */
	void UUI_SettingsPanel_C::HandleCustomGraphicsPreset(const struct FYUIUserSetting& settingToUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.HandleCustomGraphicsPreset");
		
		UUI_SettingsPanel_C_HandleCustomGraphicsPreset_Params params {};
		params.settingToUpdate = settingToUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.CanScroll
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               CanScroll                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::CanScroll(bool* CanScroll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.CanScroll");
		
		UUI_SettingsPanel_C_CanScroll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanScroll != nullptr)
			*CanScroll = params.CanScroll;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.HandlePanelScroll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ScrollUp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::HandlePanelScroll(bool ScrollUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.HandlePanelScroll");
		
		UUI_SettingsPanel_C_HandlePanelScroll_Params params {};
		params.ScrollUp = ScrollUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.GetResetAllButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        ResetAllButton                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::GetResetAllButton(class UUI_Button_Generic_C** ResetAllButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.GetResetAllButton");
		
		UUI_SettingsPanel_C_GetResetAllButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResetAllButton != nullptr)
			*ResetAllButton = params.ResetAllButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.SetLegalData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLegalDocumentData                          LegalDocumentData                                          (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UUI_SettingsPanel_C::SetLegalData(const struct FLegalDocumentData& LegalDocumentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.SetLegalData");
		
		UUI_SettingsPanel_C_SetLegalData_Params params {};
		params.LegalDocumentData = LegalDocumentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.SetHotkeyData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FUISettingsGroupData>                GroupData                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_SettingsPanel_C::SetHotkeyData(TArray<struct FUISettingsGroupData>* GroupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.SetHotkeyData");
		
		UUI_SettingsPanel_C_SetHotkeyData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GroupData != nullptr)
			*GroupData = params.GroupData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.NotifySettingsScreenOnHover
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             HoveredWidget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::NotifySettingsScreenOnHover(class UUI_DreadWidget* HoveredWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.NotifySettingsScreenOnHover");
		
		UUI_SettingsPanel_C_NotifySettingsScreenOnHover_Params params {};
		params.HoveredWidget = HoveredWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.SetLegalLayout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SettingsPanel_C::SetLegalLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.SetLegalLayout");
		
		UUI_SettingsPanel_C_SetLegalLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.UpdateControllerLayoutBindings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LayoutIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::UpdateControllerLayoutBindings(int32_t LayoutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.UpdateControllerLayoutBindings");
		
		UUI_SettingsPanel_C_UpdateControllerLayoutBindings_Params params {};
		params.LayoutIndex = LayoutIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.UnfocusAllWidgets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SettingsPanel_C::UnfocusAllWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.UnfocusAllWidgets");
		
		UUI_SettingsPanel_C_UnfocusAllWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.GetResetHotkeysButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::GetResetHotkeysButton(class UUI_Button_Generic_C** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.GetResetHotkeysButton");
		
		UUI_SettingsPanel_C_GetResetHotkeysButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.GetApplyButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        ApplyButton                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::GetApplyButton(class UUI_Button_Generic_C** ApplyButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.GetApplyButton");
		
		UUI_SettingsPanel_C_GetApplyButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ApplyButton != nullptr)
			*ApplyButton = params.ApplyButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.GetSettingWidgetByIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_DreadWidget*                             Widget                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::GetSettingWidgetByIndex(int32_t index, class UUI_DreadWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.GetSettingWidgetByIndex");
		
		UUI_SettingsPanel_C_GetSettingWidgetByIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.SetControlsLayout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SettingsPanel_C::SetControlsLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.SetControlsLayout");
		
		UUI_SettingsPanel_C_SetControlsLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.SetPlatformButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SettingsPanel_C::SetPlatformButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.SetPlatformButtons");
		
		UUI_SettingsPanel_C_SetPlatformButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.CreateGammaPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SettingsPanel_C::CreateGammaPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.CreateGammaPanel");
		
		UUI_SettingsPanel_C_CreateGammaPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IndexToUnfocus                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::HandleUnfocus(int32_t IndexToUnfocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.HandleUnfocus");
		
		UUI_SettingsPanel_C_HandleUnfocus_Params params {};
		params.IndexToUnfocus = IndexToUnfocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IndexToFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::HandleFocus(int32_t IndexToFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.HandleFocus");
		
		UUI_SettingsPanel_C_HandleFocus_Params params {};
		params.IndexToFocus = IndexToFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.AddItemPadding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::AddItemPadding(class UUI_DreadWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.AddItemPadding");
		
		UUI_SettingsPanel_C_AddItemPadding_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.CreateHeader
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Header                                                     (Parm)
	 */
	void UUI_SettingsPanel_C::CreateHeader(const class FText& Header)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.CreateHeader");
		
		UUI_SettingsPanel_C_CreateHeader_Params params {};
		params.Header = Header;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.UpdateUserSetting
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIUserSetting                             settingToUpdate                                            (Parm)
	 */
	void UUI_SettingsPanel_C::UpdateUserSetting(const struct FYUIUserSetting& settingToUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.UpdateUserSetting");
		
		UUI_SettingsPanel_C_UpdateUserSetting_Params params {};
		params.settingToUpdate = settingToUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.HandleSliderValueChange
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::HandleSliderValueChange(float Value, int32_t categoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.HandleSliderValueChange");
		
		UUI_SettingsPanel_C_HandleSliderValueChange_Params params {};
		params.Value = Value;
		params.categoryIndex = categoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.HandleDropdownValueChange
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::HandleDropdownValueChange(int32_t categoryIndex, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.HandleDropdownValueChange");
		
		UUI_SettingsPanel_C_HandleDropdownValueChange_Params params {};
		params.categoryIndex = categoryIndex;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.HandleHotKeyDown
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKey                                        inKey                                                      (Parm)
	 * 		struct FEventReply                                 KeyHandled                                                 (Parm, OutParm)
	 */
	void UUI_SettingsPanel_C::HandleHotKeyDown(const struct FGeometry& MyGeometry, const struct FKey& inKey, struct FEventReply* KeyHandled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.HandleHotKeyDown");
		
		UUI_SettingsPanel_C_HandleHotKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.inKey = inKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyHandled != nullptr)
			*KeyHandled = params.KeyHandled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.SetHotKeysEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::SetHotKeysEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.SetHotKeysEnabled");
		
		UUI_SettingsPanel_C_SetHotKeysEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.HandleHotKeyClick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::HandleHotKeyClick(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.HandleHotKeyClick");
		
		UUI_SettingsPanel_C_HandleHotKeyClick_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.CreateHotKey
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIUserSetting                             SettingData                                                (Parm)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::CreateHotKey(const struct FYUIUserSetting& SettingData, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.CreateHotKey");
		
		UUI_SettingsPanel_C_CreateHotKey_Params params {};
		params.SettingData = SettingData;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.CreateSlider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIUserSetting                             SettingData                                                (Parm)
	 */
	void UUI_SettingsPanel_C::CreateSlider(const struct FYUIUserSetting& SettingData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.CreateSlider");
		
		UUI_SettingsPanel_C_CreateSlider_Params params {};
		params.SettingData = SettingData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.CreateDropdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIUserSetting                             SettingData                                                (Parm)
	 * 		class UUI_Dropdown_Generic_C*                      Widget                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::CreateDropdown(const struct FYUIUserSetting& SettingData, class UUI_Dropdown_Generic_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.CreateDropdown");
		
		UUI_SettingsPanel_C_CreateDropdown_Params params {};
		params.SettingData = SettingData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.GetDropdownOptions
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                Array                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FUIAccordionFilterCategoryOptionData> OptionData                                                 (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_SettingsPanel_C::GetDropdownOptions(TArray<class FText>* Array, TArray<struct FUIAccordionFilterCategoryOptionData>* OptionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.GetDropdownOptions");
		
		UUI_SettingsPanel_C_GetDropdownOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (OptionData != nullptr)
			*OptionData = params.OptionData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.AddSettingsGroupList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYUISettingCategory                                SettingsCategory                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FYUIUserSetting>                     Settings                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_SettingsPanel_C::AddSettingsGroupList(EYUISettingCategory SettingsCategory, TArray<struct FYUIUserSetting>* Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.AddSettingsGroupList");
		
		UUI_SettingsPanel_C_AddSettingsGroupList_Params params {};
		params.SettingsCategory = SettingsCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Settings != nullptr)
			*Settings = params.Settings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.SetGroupData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FUISettingsGroupData>                GroupData                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_SettingsPanel_C::SetGroupData(TArray<struct FUISettingsGroupData>* GroupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.SetGroupData");
		
		UUI_SettingsPanel_C_SetGroupData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GroupData != nullptr)
			*GroupData = params.GroupData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.OnShow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_SettingsPanel_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.OnShow");
		
		UUI_SettingsPanel_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.OnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_SettingsPanel_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.OnHide");
		
		UUI_SettingsPanel_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.HideComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SettingsPanel_C::HideComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.HideComplete");
		
		UUI_SettingsPanel_C_HideComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.PreConstruct");
		
		UUI_SettingsPanel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.ExecuteUbergraph_UI_SettingsPanel
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::ExecuteUbergraph_UI_SettingsPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.ExecuteUbergraph_UI_SettingsPanel");
		
		UUI_SettingsPanel_C_ExecuteUbergraph_UI_SettingsPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.OnSettingWidgetHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            hoveredIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_SettingsPanel_C*                         source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::OnSettingWidgetHovered__DelegateSignature(int32_t hoveredIndex, class UUI_SettingsPanel_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.OnSettingWidgetHovered__DelegateSignature");
		
		UUI_SettingsPanel_C_OnSettingWidgetHovered__DelegateSignature_Params params {};
		params.hoveredIndex = hoveredIndex;
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.OnRequestSettingChange__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYUISettingCategory                                Category                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FYUIUserSetting                             SettingData                                                (Parm)
	 */
	void UUI_SettingsPanel_C::OnRequestSettingChange__DelegateSignature(EYUISettingCategory Category, const struct FYUIUserSetting& SettingData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.OnRequestSettingChange__DelegateSignature");
		
		UUI_SettingsPanel_C_OnRequestSettingChange__DelegateSignature_Params params {};
		params.Category = Category;
		params.SettingData = SettingData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel.UI_SettingsPanel_C.OnRequestHotKeyUpdate__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ActionName                                                 (Parm, ZeroConstructor)
	 * 		struct FKey                                        Key                                                        (Parm)
	 * 		bool                                               shiftDown                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               altDown                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ctrlDown                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_C::OnRequestHotKeyUpdate__DelegateSignature(const class FString& ActionName, const struct FKey& Key, bool shiftDown, bool altDown, bool ctrlDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel.UI_SettingsPanel_C.OnRequestHotKeyUpdate__DelegateSignature");
		
		UUI_SettingsPanel_C_OnRequestHotKeyUpdate__DelegateSignature_Params params {};
		params.ActionName = ActionName;
		params.Key = Key;
		params.shiftDown = shiftDown;
		params.altDown = altDown;
		params.ctrlDown = ctrlDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SettingsPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SettingsPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SettingsPanel.UI_SettingsPanel_C");
		return ptr;
	}

}


