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
	 * WidgetBlueprintGeneratedClass UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C
	 * Size -> 0x0129 (FullSize[0x0369] - InheritedSize[0x0240])
	 */
	class UUI_Button_ShipTechTreeItem_C : public UUI_ShipTechTreeItemButtonWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          AbilityCost;                                             // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              abilityIcon;                                             // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          AbilityNameText;                                         // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ColoredTierBar;                                          // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              CurrencyBackground;                                      // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            CurrencyOverlay;                                         // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              EquippedIcon;                                            // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              SelectedBackground;                                      // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              SelectedBorder;                                          // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ShipTechTreeItemButton;                                  // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                itemName;                                                // 0x0298(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FString                                              iconPath;                                                // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		int32_t                                                    tier;                                                    // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_9ONG[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FYUIItemPriceData                                   PurchasePriceData;                                       // 0x02C8(0x0030) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnShipAbilityTreeItemClicked;                            // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    itemID;                                                  // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_VXE2[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnShipAbilityTreeItemHovered;                            // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FYUIItemPriceData                                   ResearchPriceData;                                       // 0x0320(0x0030) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       IsEquipped;                                              // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_D94E[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnShipAbilityTreeItemUnhovered;                          // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsOwned;                                                 // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void SetSelected(bool isSelected);
		void Setup();
		void Construct();
		void BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_UI_Button_ShipTechTreeItem(int32_t EntryPoint);
		void OnShipAbilityTreeItemUnhovered__DelegateSignature(int32_t itemID);
		void OnShipAbilityTreeItemHovered__DelegateSignature(int32_t itemID);
		void OnShipAbilityTreeItemClicked__DelegateSignature(int32_t itemID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
