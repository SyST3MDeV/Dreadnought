#pragma once

/**
 * Name: Dreadnought
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_SettingsPanel.UI_SettingsPanel_C
	 * Size -> 0x0140 (FullSize[0x0380] - InheritedSize[0x0240])
	 */
	class UUI_SettingsPanel_C : public UUI_SettingsPanel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hide;                                                    // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Show;                                                    // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ApplyButton;                                             // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ControllerBacking;                                       // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Divider;                                                 // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            GamepadLayoutBox;                                        // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              LegalBacking;                                            // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          LegalHeader;                                             // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            LegalLayoutBox;                                          // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          LegalText;                                               // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          LegalTextScrollBox;                                      // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UThrobber*                                           LegalThrobber_1;                                         // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ResetAllButton;                                          // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ResetHotKeysButton;                                      // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              SettingsBacking;                                         // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            SettingsPanel;                                           // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          SettingsScrollBox;                                       // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            SettingsSizeBox;                                         // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Settings_GamepadLayoutPanel_C*                   UI_Settings_GamepadLayoutPanel;                          // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		int32_t                                                    SelectedHotKeyIndex;                                     // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NDWE[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_SettingRow_Hotkey_C*                             SelectedHotKeyRow;                                       // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AwaitingHotKeyInput;                                     // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J1AZ[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestHotKeyUpdate;                                   // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ESettingsScreenGroup                                       SettingsScreenGroup;                                     // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_TRYD[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestSettingChange;                                  // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FUI_Struct_SettingsCategoryData>             SettingCategoryData;                                     // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor
		struct FMargin                                             ItemPadding;                                             // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FMargin                                             FirstItemPadding;                                        // 0x0340(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UUI_DreadWidget*>                             SettingsWidgetsArray;                                    // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnSettingWidgetHovered;                                  // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FLegendPromptData>                           PS4Legend;                                               // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void IsAdvancedGraphicsSetting(const struct FYUIUserSetting& InSetting, bool* IsAGS);
		void HandleCustomGraphicsPreset(const struct FYUIUserSetting& settingToUpdate);
		void CanScroll(bool* CanScroll);
		void HandlePanelScroll(bool ScrollUp);
		void GetResetAllButton(class UUI_Button_Generic_C** ResetAllButton);
		void SetLegalData(const struct FLegalDocumentData& LegalDocumentData);
		void SetHotkeyData(TArray<struct FUISettingsGroupData>* GroupData);
		void NotifySettingsScreenOnHover(class UUI_DreadWidget* HoveredWidget);
		void SetLegalLayout();
		void UpdateControllerLayoutBindings(int32_t LayoutIndex);
		void UnfocusAllWidgets();
		void GetResetHotkeysButton(class UUI_Button_Generic_C** NewParam);
		void GetApplyButton(class UUI_Button_Generic_C** ApplyButton);
		void GetSettingWidgetByIndex(int32_t index, class UUI_DreadWidget** Widget);
		void SetControlsLayout();
		void SetPlatformButtons();
		void CreateGammaPanel();
		void HandleUnfocus(int32_t IndexToUnfocus);
		void HandleFocus(int32_t IndexToFocus);
		void AddItemPadding(class UUI_DreadWidget* Widget);
		void CreateHeader(const class FText& Header);
		void UpdateUserSetting(const struct FYUIUserSetting& settingToUpdate);
		void HandleSliderValueChange(float Value, int32_t categoryIndex);
		void HandleDropdownValueChange(int32_t categoryIndex, int32_t Value);
		void HandleHotKeyDown(const struct FGeometry& MyGeometry, const struct FKey& inKey, struct FEventReply* KeyHandled);
		void SetHotKeysEnabled(bool Enabled);
		void HandleHotKeyClick(int32_t index);
		void CreateHotKey(const struct FYUIUserSetting& SettingData, int32_t index);
		void CreateSlider(const struct FYUIUserSetting& SettingData);
		void CreateDropdown(const struct FYUIUserSetting& SettingData, class UUI_Dropdown_Generic_C** Widget);
		void GetDropdownOptions(TArray<class FText>* Array, TArray<struct FUIAccordionFilterCategoryOptionData>* OptionData);
		void AddSettingsGroupList(EYUISettingCategory SettingsCategory, TArray<struct FYUIUserSetting>* Settings);
		void SetGroupData(TArray<struct FUISettingsGroupData>* GroupData);
		void OnShow();
		void OnHide();
		void HideComplete();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_SettingsPanel(int32_t EntryPoint);
		void OnSettingWidgetHovered__DelegateSignature(int32_t hoveredIndex, class UUI_SettingsPanel_C* source);
		void OnRequestSettingChange__DelegateSignature(EYUISettingCategory Category, const struct FYUIUserSetting& SettingData);
		void OnRequestHotKeyUpdate__DelegateSignature(const class FString& ActionName, const struct FKey& Key, bool shiftDown, bool altDown, bool ctrlDown);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
