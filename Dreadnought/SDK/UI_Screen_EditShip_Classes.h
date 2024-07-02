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
	 * WidgetBlueprintGeneratedClass UI_Screen_EditShip.UI_Screen_EditShip_C
	 * Size -> 0x0154 (FullSize[0x03CC] - InheritedSize[0x0278])
	 */
	class UUI_Screen_EditShip_C : public UUI_EditShipScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_ButtonLoadout_C*                        Button_Loadout_A;                                        // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_ButtonLoadout_C*                        Button_Loadout_B;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_ShipTitleWidget_C*                       CurrentShipTitleWidget;                                  // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_CurrencyCost_C*                          FreeXpAvailableWidget;                                   // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_5;                                                 // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            LoadoutsButtonContainer;                                 // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TabList_Generic_C*                               PanelTabs;                                               // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_CurrencyCost_C*                          ShipXPAvailableWidget;                                   // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Stats_Panel_C*                           StatsPanel;                                              // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_Panel_Appearance_C*                     UI_EditShip_Panel_Appearance;                            // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_Panel_EditLoadout_C*                    UI_EditShip_Panel_EditLoadout;                           // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_Panel_ShipDetails_C*                    UI_EditShip_Panel_ShipDetails;                           // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots_1;                                 // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditLoadout_ModuleDetails_C*                     ModuleDetailsPanel;                                      // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UUI_EditShip_LoadoutButton_Container_C*>      CurrentLoadoutModuleContainers;                          // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FUI_Struct_ShipModule>                       AvailableModules;                                        // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_Generic_Button_Module_C*>                 CurrentAvailableModules;                                 // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            AvailableModulePositions;                                // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentAvailableIndex;                                   // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentLoadoutModuleIndex;                               // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentLoadoutIndex;                                     // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentTabIndex;                                         // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UUI_EditShipSubPanel*>                        Panels;                                                  // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_DreadWidget*                                     CurrentlyFocusedItem;                                    // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FUI_Struct_TabButtonData>                    TabButtonData;                                           // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_EditShip_ButtonLoadout_C*>                CurrentLoadoutButtons;                                   // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FLegendPromptData>                           ButtonHints;                                             // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      DescriptionScrollSpeed;                                  // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U51U[0x4];                                   // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLegendPromptData                                   EditLoadoutHint;                                         // 0x03A8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    NumberOfColumns;                                         // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HandleGranularDownAvailableLoadout(int32_t NumColumns, class UUI_EditShipSubPanel* CurrentPanel);
		void HandleGranularUpAvailableLoadout(int32_t NumColumns, class UUI_EditShipSubPanel* CurrentPanel);
		void ShowStats(bool Show);
		void HandleLeftStickClick();
		void UpdateCurrencies();
		void EditLoadoutName();
		void FocusInitialDetailsPanelItem();
		void UpdateFocusedItemAvailable(class UUI_EditShipSubPanel* CurrentPanel, int32_t index);
		void UpdateFocusedItemLoadout(class UUI_EditShipSubPanel* Panel, int32_t loadoutindex);
		void SelectDetailsTab();
		void SelectAppearanceTab();
		void SelectLoadoutTab();
		void GetCurrentPanelTab(class UUI_Button_Tab_Generic_C** Item);
		bool ShouldShowEditLoadoutNameButton(class UUI_EditShip_ButtonLoadout_C* LoadoutButton);
		void UnfocusCurrentLoadoutModuleContainer();
		void HandlePanelPostAction();
		void SetButtonHints(TArray<struct FLegendPromptData>* Hints);
		void HandleGranularLeftRightDetails();
		int32_t GetNavigableLoadoutModulesCount();
		void HandleGranularUpAvailableModules();
		void HandleGranularUpLoadoutButton();
		void HandleGranularUp();
		void HandleGranularDownAvailableModules();
		void IsAvailableModuleButtonFocused(bool* IsAvailableModule);
		void HandleGranularDownLoadoutButton();
		void HandleGranularDown();
		void HandleGranularLeftFromAppearanceLoadoutButton();
		void HandleGranularLeftFromCaptainCustomization();
		void GetAvailableColumns(int32_t* NumColumns);
		void HandleGranularRightFromCaptainCustomization();
		bool IsCaptainCustomizationButtonFocused();
		void HandleGranularRightOnAvailableModules(int32_t NumberOfAvailableColumns, class UUI_EditShipSubPanel* CurrentPanel);
		void HandleGranularRightOnAppearanceModules();
		void HandleGranularLeftOnAppearanceModules();
		void HandleGranularRightOnLoadoutModules();
		void HandleGranularRightFromLoadoutButton();
		void HandleGranularRightAppearance();
		void HandleGranularRightLoadout();
		void HandleGranularRight();
		void HandleGranularLeftAppearance();
		void HandleGranularLeftOnAvailableModules(int32_t NumberOfAvailableColumns, class UUI_EditShipSubPanel* CurrentPanel);
		void HandleGranularLeftOnLoadoutModules();
		void HandleGranularLeftFromLoadoutButton();
		void HandleGranularLeftLoadout();
		void HandleGranularLeft();
		void UpdateBackFocus();
		void UpdateLoadoutReferences(TArray<class UUI_EditShip_LoadoutButton_Container_C*>* CurrentLoadoutModulesContainers, TArray<class UUI_Generic_Button_Module_C*>* CurrentAvailableModules);
		void UpdateFocusFromAction();
		void IsLoadoutButtonFocused(bool* FoundLoadoutButtonTemp, class UUI_EditShip_ButtonLoadout_C** ButtonLoadout);
		void FocusInitialPanelItem();
		void IsLoadoutModuleButtonFocused(class UUI_EditShip_LoadoutButton_Container_C** LoadoutContainer, bool* IsLoadoutModuleButton);
		void TabLeft();
		void FocusNewTab();
		void UnfocusCurrentTab();
		void tabRight();
		void HandleInput(EUI_MenuActions Input);
		void SetupLoadoutButtons();
		void HandleTabSelected(class UUI_Button_Tab_Generic_C* SelectedTab);
		void SetupNavigationTabs();
		void Setup();
		void SetLoadoutButtonContainerVisibility(bool IsVisible);
		void SelectInitialPanel();
		void HandleLoadoutSelection(class UUI_EditShip_ButtonLoadout_C* SelectedLoadoutButton);
		void ShowSubPanel(class UUserWidget* PanelToShow);
		void GetLoadoutData();
		void SetupShipTitleWidget();
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimComplete();
		void TransitionOutAnimComplete();
		void HandleResearchCompleted(bool wasSuccessful);
		void HandlePurchaseCompleted(bool wasSuccessful);
		void OnNavigationTabClicked(class UUI_Button_Tab_Generic_C* source);
		void OnSaveLoadoutNameRequest(class UUI_EditShip_ButtonLoadout_C* source);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void OnChangeTab(EUI_Screen screen);
		void ExecuteUbergraph_UI_Screen_EditShip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
