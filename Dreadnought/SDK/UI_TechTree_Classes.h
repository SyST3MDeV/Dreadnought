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
	 * WidgetBlueprintGeneratedClass UI_TechTree.UI_TechTree_C
	 * Size -> 0x0140 (FullSize[0x0380] - InheritedSize[0x0240])
	 */
	class UUI_TechTree_C : public UUI_TechTreeWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    HeroShipsVisibility;                                     // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              CorvetteBG;                                              // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              CorvetteBlackBG;                                         // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              CorvetteIcon;                                            // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_ExpandButton_C*                         ExpandButton;                                            // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              FreeXPIcon;                                              // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      HeroShipHeaderHorizontalBox;                             // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          HeroShipsTitle;                                          // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_Row_C*                                  HeroShipTechTreeRow0;                                    // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_Row_C*                                  HeroShipTechTreeRow1;                                    // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_Row_C*                                  HeroShipTechTreeRow2;                                    // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_Row_C*                                  HeroShipTechTreeRow3;                                    // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_Row_C*                                  HeroShipTechTreeRow4;                                    // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_2;                                                 // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_13;                                                // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_14;                                                // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_15;                                                // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_Row_C*                                  TechTreeRow0;                                            // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_Row_C*                                  TechTreeRow1;                                            // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_Row_C*                                  TechTreeRow2;                                            // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_Row_C*                                  TechTreeRow3;                                            // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_Row_C*                                  TechTreeRow4;                                            // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        TechTreeVerticalBox;                                     // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FVector2D                                           ItemPositionScale;                                       // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           ItemPositionOffset;                                      // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             OnShipTechTreeItemClicked;                               // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UUI_TechTree_Row_C*>                          TechTreeRowList;                                         // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_TechTree_Row_C*>                          HeroShipTechTreeRowList;                                 // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       HeroShipsVisible;                                        // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BWCK[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_Button_ManufacturerTechTreeItem_C*>       ShipWidgets;                                             // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_Button_ManufacturerTechTreeItem_C*>       HeroShipWidgets;                                         // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_DreadWidget*                                     CurrentlyFocusedTreeItem;                                // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_DreadWidget*                                     CurrentlyFocusedHeroTreeItem;                            // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EUI_Enum_ManufacturerTechTreeFocusStates                   CurrentFocusState;                                       // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6TJ7[0x3];                                   // 0x0379(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentRow;                                              // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ClearTechTree();
		void ComposeTechTreePaths(TArray<struct FUITechTreeShipNode>* TechTreeNodesOut);
		void FindClosestShip(int32_t Row, int32_t column, TArray<class UUI_Button_ManufacturerTechTreeItem_C*>* ShipList, class UUI_Button_ManufacturerTechTreeItem_C** Ship);
		void HandleInput(EUI_MenuActions GamePadButton);
		void GetNavShip(EUI_MenuActions Direction, class UUI_Button_ManufacturerTechTreeItem_C* CurrentShip, TArray<class UUI_Button_ManufacturerTechTreeItem_C*>* ShipList, bool* ShipFound, class UUI_Button_ManufacturerTechTreeItem_C** Ship);
		void SetWidgetFocus(class UUI_DreadWidget* NewFocusWidget, EUI_Enum_ManufacturerTechTreeFocusStates NewFocusState);
		void Setup();
		void SetupTechTrees(TArray<struct FYUIShipManufacturerTechTreeStackItemData>* shipData, TArray<struct FYUIShipManufacturerTechTreeStackItemData> HeroShipData);
		void FindInitialTreeFocus(TArray<class UUI_Button_ManufacturerTechTreeItem_C*>* TreeWidgetList, class UUI_Button_ManufacturerTechTreeItem_C** InitialItem);
		void Action();
		void AddItemToHeroGrid(class UUI_TechTree_Row_C* techTreeRow, class UUI_Button_ManufacturerTechTreeItem_C* ManufacturerTechTreeItem);
		void AddHeroItem(TArray<struct FYUIShipManufacturerTechItemData>* Stack);
		void SetupHeroTechTreeItems(TArray<struct FYUIShipManufacturerTechTreeStackItemData>* HeroItems);
		void ShowHeroShips(bool IsVisible);
		void AddItemToGrid(class UUI_TechTree_Row_C* techTreeRow, class UUI_Button_ManufacturerTechTreeItem_C* ManufacturerTechTreeItem);
		void AddToGrid(class UUI_Button_ManufacturerTechTreeItem_C* Item, EYShipClass shipclass, TArray<class UUI_TechTree_Row_C*>* RowList);
		void GetClassFromIcon(const class FString& IconTexture, EYShipClass* shipclass);
		void GetRowFromClass(EYShipClass shipclass, int32_t* Row);
		void ShipTechTreeItemClicked(class UUI_Button_ManufacturerTechTreeItem_C* source);
		void AddItem(TArray<struct FYUIShipManufacturerTechItemData>* Stack);
		void SetupTechTreeItems(TArray<struct FYUIShipManufacturerTechTreeStackItemData>* items);
		void Construct();
		void InitializeTechTree(TArray<struct FYUIShipManufacturerTechTreeStackItemData> shipData, TArray<struct FYUITechTreeConnectionData> ConnectionData, TArray<struct FYUIShipManufacturerTechTreeStackItemData> HeroShipData);
		void ExpandButtonClicked(class UUserWidget* source);
		void OnActionReceived();
		void UpdateCurrentlyFocusedShip(class UUI_DreadWidget* FocusedItem);
		void UpdateCurrentlyFocusedHeroShip(class UUI_DreadWidget* FocusedItem);
		void ExpandButtonFocused(class UUI_DreadWidget* FocusedItem);
		void ExecuteUbergraph_UI_TechTree(int32_t EntryPoint);
		void OnShipTechTreeItemClicked__DelegateSignature(const struct FYUIShipManufacturerTechItemData& shipData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
