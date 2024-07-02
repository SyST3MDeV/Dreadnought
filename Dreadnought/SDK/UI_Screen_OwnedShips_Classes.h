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
	 * WidgetBlueprintGeneratedClass UI_Screen_OwnedShips.UI_Screen_OwnedShips_C
	 * Size -> 0x0110 (FullSize[0x0388] - InheritedSize[0x0278])
	 */
	class UUI_Screen_OwnedShips_C : public UUI_OwnedShipsScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            ShipDetailsOverlay;                                      // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_ManageFleet_Ship_C*                       ShipDetailsPanel;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_ShipFilter_C*                            ShipFilterWidget;                                        // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          ShipScrollBox;                                           // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWrapBox*                                            ShipWrapBox;                                             // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots;                                   // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FUIShipData                                         SelectedShipData;                                        // 0x02C8(0x0080) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FYUIShipManufacturerTechItemData>            OwnedShips;                                              // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_Button_FleetAddShipItem_C*>               ShipList;                                                // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FLegendPromptData>                           ButtonHints;                                             // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_Button_FleetAddShipItem_C*                       CurrentlyFocusedItem;                                    // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumGridColumns;                                          // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentShipIndex;                                        // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ShipClicked(const struct FYUIShipManufacturerTechItemData& shipData, class UUI_Button_FleetAddShipItem_C* source);
		void HandleGranularDown();
		void HandleGranularUp();
		void HandleGranularLeft();
		void HandleGranularRight();
		void UpdateGridItemFocus();
		void UnfocusCurrentGridItem();
		void HandleInput(EUI_MenuActions Input);
		void SetupScreen();
		void ShipFocused(class UUI_Button_FleetAddShipItem_C* source);
		void SetupShipList();
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void BndEvt__ShipFilterWidget_K2Node_ComponentBoundEvent_0_OnFilterUpdated__DelegateSignature();
		void BndEvt__ShipDetailsPanel_K2Node_ComponentBoundEvent_819_ViewShipDetailsClicked__DelegateSignature(int32_t ShipId);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void ExecuteUbergraph_UI_Screen_OwnedShips(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
