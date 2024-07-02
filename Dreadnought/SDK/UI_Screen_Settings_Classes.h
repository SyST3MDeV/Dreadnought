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
	 * WidgetBlueprintGeneratedClass UI_Screen_Settings.UI_Screen_Settings_C
	 * Size -> 0x0100 (FullSize[0x0378] - InheritedSize[0x0278])
	 */
	class UUI_Screen_Settings_C : public UUI_SettingsScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        Layout;                                                  // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            OverlayPanel;                                            // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        ScreenRoot;                                              // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TabList_Generic_C*                               TabList;                                                 // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_SettingsPanel_C*                                 CurrentSettingsPanel;                                    // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentTabIndex;                                         // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WEYY[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_SettingsPanel_C*>                         Panels;                                                  // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FUISettingsGroupData>                        SettingsGroups;                                          // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentFocusedSettingIndex;                              // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DropdownIsOpen;                                          // 0x02EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XUX4[0x3];                                   // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_DreadWidget*                                     CurrentlyFocusedWidget;                                  // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    SettingsArrayLength;                                     // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LegalScrollSpeed;                                        // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SettingsChanged;                                         // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_41X6[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_Popup_Generic_C*                                 UnsavedSettingsPopup;                                    // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FText                                                ApplyLabelText;                                          // 0x0318(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                DiscardLabelText;                                        // 0x0330(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                UnsavedSettingsPopupTitleText;                           // 0x0348(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                UnsavedSettingsPopupMessageText;                         // 0x0360(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void HandleUnsavedSettingsPopupResult(int32_t ButtonIndex);
		void ConstructSettingsPopupButtons(TArray<class UPopupButtonData*>* PopupButtons);
		void ShowUnsavedSettingsPopup();
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void ResetAllSettings(class UUI_Button_Generic_C* Souce);
		void RefreshHotkeys();
		void ScrollLegalPanel(bool ScrollUp);
		bool IsLegalPanelOpen();
		void HandleTabRight();
		void HandleTabLeft();
		void ResetHotkeys(class UUI_Button_Generic_C* source);
		void HandleRightGranular();
		void IsCurrentWidgetSlider(bool* IsSlider);
		void HandleLeftGranular();
		void SetTabFocus(int32_t IndexToFocus);
		void HandleDropdown(bool DropdownOpen);
		void HandleDownGranular();
		void HandleUpGranular();
		void SetSettingsFocus(int32_t IndexToFocus, class UUI_SettingsPanel_C* SettingsPanel);
		void HandleInput(EUI_MenuActions GamePadInput);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void HandleSettingChange(EYUISettingCategory SettingCategory, const struct FYUIUserSetting& settingToUpdate);
		void ApplyUserSettings(class UUI_Button_Generic_C* source);
		void RefreshPanels();
		void HandleHotKeyUpdate(const class FString& ActionName, const struct FKey& Key, bool shiftDown, bool altDown, bool ctrlDown);
		void CreatePanel(ESettingsScreenGroup SettingsScreenGroup, class UUI_SettingsPanel_C** SettingsPanel);
		void HideCurrentPanel();
		void GetPanelName(ESettingsScreenGroup Group, class FText* Name);
		void ShowPanel(int32_t PanelIndex);
		void TabClicked(int32_t TabIndex);
		void SetupTabs();
		void Construct();
		void BndEvt__TabList_K2Node_ComponentBoundEvent_0_OnTabClicked__DelegateSignature(int32_t TabIndex);
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void OnSettingsUpdated();
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void OnHotKeysUpdated();
		void ExecuteUbergraph_UI_Screen_Settings(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
