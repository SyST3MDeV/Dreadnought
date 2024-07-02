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
	 * WidgetBlueprintGeneratedClass UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C
	 * Size -> 0x0088 (FullSize[0x0300] - InheritedSize[0x0278])
	 */
	class UUI_Screen_AddShipToFleet_C : public UUI_AddShipToFleetScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          headerText;                                              // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_ManageFleet_Ship_C*                       ShipDetailsPanel;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_ShipFilter_C*                            ShipFilterWidget;                                        // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          ShipScrollBox;                                           // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWrapBox*                                            ShipWrapBox;                                             // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BattleBonus_C*                           UI_Generic_BattleBonus;                                  // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_FleetTier_C*                             UI_Generic_FleetTier;                                    // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		int32_t                                                    SelectedShipID;                                          // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6465[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_Button_FleetAddShipItem_C*>               ShipList;                                                // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_Button_FleetAddShipItem_C*                       CurrentlyFocusedItem;                                    // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentItemIndex;                                        // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumGridColumns;                                          // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLegendPromptData>                           ButtonHints;                                             // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void UpdateCurrentItemOnHover(class UUI_Button_FleetAddShipItem_C* source);
		void AddAndBindButton(class UUI_Button_FleetAddShipItem_C* AddShipButton);
		void UpdateGridItemFocus(int32_t IndexToFocus);
		void SetupScreen();
		void HandleAddButtonClicked();
		void HandleGranularLeft();
		void HandleGranularRight();
		void HandleGranularUp();
		void HandleGranularDown();
		void HandleInput(EUI_MenuActions Input);
		void PopulateShipDetailsPanel(const struct FYUIShipManufacturerTechItemData& shipData);
		void HandleShipItemClicked(const struct FYUIShipManufacturerTechItemData& shipData, class UUI_Button_FleetAddShipItem_C* source);
		void SetupShipList();
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void BndEvt__ShipFilterWidget_K2Node_ComponentBoundEvent_0_OnFilterUpdated__DelegateSignature();
		void BndEvt__ShipDetailsPanel_K2Node_ComponentBoundEvent_2_ViewShipDetailsClicked__DelegateSignature(int32_t ShipId);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void ExecuteUbergraph_UI_Screen_AddShipToFleet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
