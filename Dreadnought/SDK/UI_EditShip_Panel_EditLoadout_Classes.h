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
	 * WidgetBlueprintGeneratedClass UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C
	 * Size -> 0x0190 (FullSize[0x03D8] - InheritedSize[0x0248])
	 */
	class UUI_EditShip_Panel_EditLoadout_C : public UUI_EditShipLoadoutSubPanel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hide;                                                    // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Show;                                                    // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      HboxModules;                                             // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      HBoxOfficerModules;                                      // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      HBoxWeapons;                                             // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            ModuleBorderDots;                                        // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     ModuleBottomBracket;                                     // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ModuleContainerButton;                                   // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     ModuleTopBracket;                                        // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              OfficerBriefingBG;                                       // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            OfficerBriefingBorderDots;                               // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     OfficerBriefingBottomBracket;                            // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             OfficerBriefingButtonContainer;                          // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     OfficerBriefingTopBracket;                               // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditLoadout_OfficerLock_C*                       OfficerLock;                                             // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_HorizontalModuleList_Loadout_C*         UI_EditShip_HorizontalModuleList;                        // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container;                     // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_1;                   // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_2;                   // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_C_3;                 // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_C_4;                 // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_C_5;                 // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_C_6;                 // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_C_7;                 // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_C_8;                 // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_C_9;                 // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              WeaponBG;                                                // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            WeaponBorderDots;                                        // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     WeaponBottomBracket;                                     // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             WeaponContainerButton;                                   // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            WeaponOverlay;                                           // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     WeaponTopBracket;                                        // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Button_Module_C*                         CurrentLoadoutModuleButton;                              // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentLoadoutModuleIndex;                               // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XZEQ[0x4];                                   // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            AvailableModulePositions;                                // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_Generic_Button_Module_C*>                 CurrentAvailableModules;                                 // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_Generic_Button_Module_C*>                 LoadoutModules;                                          // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_EditShip_LoadoutButton_Container_C*>      LoadoutModuleContainers;                                 // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentAvailableHoverIndex;                              // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XKVM[0x4];                                   // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FUIGenericButtonModuleData>                  AvailableModuleData;                                     // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_Generic_Stats_Panel_C*                           StatsPanelPopup;                                         // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsModuleDetailsClamped;                                  // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QV7O[0x7];                                   // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_DreadWidget*                                     CurrentlyFocusedWidget;                                  // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SafeZonePadding;                                         // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DetailsOffsetOverride;                                   // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetScrollBox(class UScrollBox** ScrollBox);
		void GetAvailableNumColumns(int32_t* NumColumns);
		void HandleModuleButtonClicked(class UUI_Generic_Button_Module_C* ModuleButton);
		void SetOfficerModuleVisibility(bool IsBriefingLocked, EYUILoadoutItemType index, class UWidget* LoadoutModule);
		float GetAvailableModulesXPos();
		float GetListPosition();
		void InitStatsPanelPopup(class UUI_Generic_Stats_Panel_C* StatsPanel);
		void HandleLoadoutButtonUnfocused();
		void HandleLoadoutButtonFocused(class UUI_Generic_Button_Module_C* ButtonModule);
		void UpdateStatsPanelButtonModule(class UUI_Generic_Button_Module_C* ButtonModule);
		void UpdateStatsPanelPosition();
		void ShowStatsPanel(bool IsVisible);
		void SetStatsPanel(int32_t itemID);
		void HandleModuleIndexClicked(int32_t index);
		void IsCurrentItemAnOfficerBriefing(bool* IsBriefing);
		void GetItemSlotFromIndex(int32_t index, EYUILoadoutItemType* ItemSlotType);
		void PopulateModule(EYUILoadoutItemType Slot, class UUI_Generic_Button_Module_C* ModuleButton);
		void UpdateCurrentLoadout();
		void FindSelectedModuleButton(class UUI_Generic_Button_Module_C* ModuleButtonToFind, TArray<class UUI_Generic_Button_Module_C*>* ModuleList, class UUI_Generic_Button_Module_C** ModuleButton, int32_t* index);
		void UpdateSelectedLoadoutModule(int32_t selectedIndex);
		void SetDetailsPanelData(int32_t index);
		void ShowModuleDetails();
		void HideModuleList();
		void ShowModuleList();
		void AddHorizontalBoxChildrenToArray(class UPanelWidget* TargetHBox);
		void SetupLoadoutModules();
		void HideModuleDetails();
		void PopulateAvailableModulesForCurrentItem(int32_t CurrentIndex);
		void SetOfficerLockVisibility();
		void BndEvt__WeaponContainerButton_K2Node_ComponentBoundEvent_305_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WeaponContainerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ModuleContainerButton_K2Node_ComponentBoundEvent_970_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ModuleContainerButton_K2Node_ComponentBoundEvent_987_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__OfficerBriefingButtonContainer_K2Node_ComponentBoundEvent_1338_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__OfficerBriefingButtonContainer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void OnLoadoutModuleButtonClicked(class UUI_Generic_Button_Module_C* ClickedModuleButton);
		void OnAvailableModuleHovered(class UUI_Generic_Button_Module_C* ModuleButton);
		void OnAvailableModuleClicked(class UUI_Generic_Button_Module_C* AvailableModuleClicked);
		void Construct();
		void OnShow();
		void OnHide();
		void HideComplete();
		void OnLoadoutModuleButtonHovered(class UUI_Generic_Button_Module_C* HoveredModuleButton);
		void OnLoadoutModuleButtonUnhovered();
		void ExecuteUbergraph_UI_EditShip_Panel_EditLoadout(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
