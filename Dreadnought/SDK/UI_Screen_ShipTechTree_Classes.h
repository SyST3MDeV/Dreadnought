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
	 * WidgetBlueprintGeneratedClass UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C
	 * Size -> 0x00B8 (FullSize[0x0338] - InheritedSize[0x0280])
	 */
	class UUI_Screen_ShipTechTree_C : public UUI_ShipTechTreeScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_ShipTitleWidget_C*                       CurrentShipTitleWidget;                                  // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        ProgressBox;                                             // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_ShipTechTree_ProgressionPath_C*                  ProgressionPath;                                         // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Stats_Panel_C*                           StatsPanelPopup;                                         // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_Row_C*                                  UI_TechTree_Row_1;                                       // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_Row_C*                                  UI_TechTree_Row_2;                                       // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_Row_C*                                  UI_TechTree_Row_3;                                       // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_Row_C*                                  UI_TechTree_Row_4;                                       // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_Row_C*                                  UI_TechTree_Row_5;                                       // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<struct FLegendPromptData>                           ButtonHints;                                             // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_DreadWidget*                                     CurrentlyFocusedRow;                                     // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UUI_TechTree_Row_C*>                          RowWidgets;                                              // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentTreeRow;                                          // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LCIM[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            RowLength;                                               // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentTreeColumn;                                       // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    ProgressionLength;                                       // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentProgressionIndex;                                 // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ProgressionFocused;                                      // 0x032C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StatsPanelVisible;                                       // 0x032D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WPYN[0x2];                                   // 0x032E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_DreadWidget*                                     CurrentlyFocusedWidget;                                  // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetPositionPanel();
		void UpdateStatsPanelShip(class UUI_Button_ManufacturerTechTreeItem_C* Ship);
		void UpdateStatsPanelButtonModule(class UUI_Generic_Button_Module_C* ButtonModule);
		void GetTopLeftBorderAbsolutePosition(struct FVector2D* TopLeftBorderAbsolutePosition);
		void UnfocusCurrentItem();
		void HandleNavActionTertiary();
		void UpdateStatsPanelPosition();
		void SetProgressionWidgetFocus(int32_t index);
		void Action();
		void HandleNavUpGranular();
		void HandleNavDownGranular();
		void HandleNavLeftGranular();
		void HandleNavRightGranular();
		void SetModuleWidgetFocus(int32_t Row, int32_t column);
		void ClearAll();
		void SetShipDetails(const struct FYUIShipManufacturerTechItemData& Data);
		void SetupTechTreeRow(TArray<struct FUIGenericButtonModuleData>* CategoryData, int32_t Row);
		void HandleInput(EUI_MenuActions GamePadInput);
		void Setup();
		void ProgressionModuleClicked(class UUI_Generic_Button_Module_C* source);
		void ProgressionModuleUnhovered(class UUI_Generic_Button_Module_C* source);
		void ProgressionModuleHovered(class UUI_Generic_Button_Module_C* source);
		void ProgressiomShipClicked(class UUI_Button_ManufacturerTechTreeItem_C* source);
		void ProgressionShipUnhovered(class UUI_Button_ManufacturerTechTreeItem_C* source);
		void ProgressionShipHovered(class UUI_Button_ManufacturerTechTreeItem_C* source);
		void ModuleItemClicked(class UUI_Generic_Button_Module_C* source);
		void ModuleItemUnhovered(class UUI_Generic_Button_Module_C* source);
		void ModuleItemHovered(class UUI_Generic_Button_Module_C* source);
		void RegisterUnhoverListeners();
		void RegisterHoverListeners();
		void RegisterSelectedListeners();
		void ShowStatsPanel(bool IsVisible);
		void SetStatsPanel(int32_t itemID);
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void HandleTechTreeDataReceived(TArray<struct FUIGenericButtonModuleData> moduleUiData, int32_t techTreeRow);
		void HandleShipDataReceived(const struct FYUIShipManufacturerTechItemData& shipUiData);
		void HandleShipProgressionDataReceived(TArray<struct FYUIShipManufacturerTechItemData> shipProgressionUiData);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void UpdateCurrentlyFocusedRow(class UUI_DreadWidget* FocusedItem);
		void OnShipXpUpdate(int32_t shipXp);
		void ExecuteUbergraph_UI_Screen_ShipTechTree(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
