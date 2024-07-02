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
	 * WidgetBlueprintGeneratedClass UI_Screen_ManageFleet.UI_Screen_ManageFleet_C
	 * Size -> 0x00AD (FullSize[0x0325] - InheritedSize[0x0278])
	 */
	class UUI_Screen_ManageFleet_C : public UUI_ManageFleetScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ButtonPlay;                                              // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             HavocOverlay;                                            // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      HorizontalBox_FleetItems;                                // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_ManageFleet_AddShip_C*                    UI_Button_ManageFleet_AddShip;                           // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_ManageFleet_HeroShip_C*                   UI_Button_ManageFleet_HeroShip;                          // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BattleBonus_C*                           UI_Generic_BattleBonus;                                  // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_FleetTier_C*                             UI_Generic_FleetTier;                                    // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<struct FUI_Struct_ShipLoadout>                      DebugFleetData;                                          // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    MaxFleetSize;                                            // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RSNH[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLegendPromptData>                           PS4LegendHints;                                          // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentFleetItemIndex;                                   // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentShipMenuButtonIndex;                              // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_Screen_Persistent_C*                             PersistentScreen;                                        // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLegendPromptData>                           PS4LegendHintsHavocMode;                                 // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_DreadWidget*                                     CurrentlyFocusedItem;                                    // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentFlagshipID;                                       // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bValidFlagship;                                          // 0x0324(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void HandleSetFlagshipID(int32_t flagshipID);
		void HandleSetFlagship();
		void SetInitialFocus();
		void SetGamepadSelection(int32_t index);
		void GetHeaderItemToFocus(class UUI_DreadWidget** HeaderItemToFocus);
		void HandleLeftRightInHeader();
		void IsHeaderFocused(bool* IsHeaderFocused);
		void ShowPlayButton(bool shouldShow);
		void SetupBattleBonus();
		void HandleToFromFleetItems();
		void RemoveAddShipButton();
		void BindShipMenuButtonHover(class UUI_Button_ManageFleet_Ship_C* ShipItem);
		void HandleFleetItemClicked(class UUI_DreadWidget* FleetItem);
		void HandleShipMenuButtonHovered(class UUI_Button_Generic_C* MenuButton);
		void HandleShipItemUnhovered(class UUI_Button_ManageFleet_Ship_C* FleetItem);
		void HandleFleetItemHovered(class UUI_DreadWidget* FleetItem);
		void HandleBack();
		void HandleFleetItemAction(int32_t index);
		void HandleShipMenuButtonAction(int32_t index);
		void HandleShipItemAction(class UUI_Button_ManageFleet_Ship_C* source);
		class UUI_Button_Generic_C* GetShipMenuButton(int32_t index);
		class UUI_DreadWidget* GetFleetItem(int32_t index);
		void UnfocusShipMenuButton(int32_t index);
		void FocusShipMenuButton(int32_t index);
		void UnfocusFleetItem();
		void FocusFleetItem();
		void GetShipMenuIndexWrappingValues(int32_t* CurrentIndex, int32_t* NumColumns, int32_t* listLength);
		void GetFleetItemIndexWrappingValues(int32_t* CurrentIndex, int32_t* NumColumns, int32_t* listLength);
		void IsInShipMenu(bool* Result);
		void HandleDownGranular();
		void HandleUpGranular();
		void HandleRightGranular();
		void HandleLeftGranular();
		void Action();
		void Setup();
		void HandleInput(EUI_MenuActions Selection);
		void HandleViewTechTreeAction(int32_t ShipId);
		void HandlePurchaseHeroShipAction(class UUI_Button_ManageFleet_HeroShip_C* source);
		void SetupPurchaseHeroShipItem();
		void HandleAddShipAction();
		void SetupAddShipItem();
		void SetupDebugFleetData();
		void HandleRemoveFromFleetAction(int32_t ShipId);
		void HandleEditLoadoutAction(int32_t ShipId);
		void HandleEditAppearanceAction(int32_t ShipId);
		void SetupShipItem(const struct FUIShipData& ShipLoadout);
		void PopulateFleetItems();
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimComplete();
		void TransitionOutAnimComplete();
		void OnLoadoutRemovedFromFleet(bool Result);
		void OnLoadoutAddedToFleet(bool Result);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void OnMatchmakingStopped();
		void OnMatchmakingStarted();
		void BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_12_OnButtonClicked__DelegateSignature(int32_t index);
		void OnFleetUpdated();
		void ExecuteUbergraph_UI_Screen_ManageFleet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
