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
	 * WidgetBlueprintGeneratedClass UI_Popup_Upsell.UI_Popup_Upsell_C
	 * Size -> 0x02C4 (FullSize[0x053C] - InheritedSize[0x0278])
	 */
	class UUI_Popup_Upsell_C : public UUI_UpsellPopup
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BG;                                                      // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     BracketsBottom;                                          // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     BracketsTop;                                             // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox6ft*                                       ScrollBox_AvailableItems;                                // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                UI_Button_Generic;                                       // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots;                                   // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Market_Item_C*                                   UI_Market_Item;                                          // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Market_Item_C*                                   UI_Market_Item_1;                                        // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Market_Item_C*                                   UI_Market_Item_2;                                        // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Market_Item_C*                                   UI_Market_Item_3;                                        // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Popup_Upsell_Header_C*                           UI_Popup_Upsell_Header;                                  // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FMarketItemUIData                                   previousItem;                                            // 0x02E0(0x0250) Edit, BlueprintVisible, ExposeOnSpawn
		class UPopupUpsellData*                                    upsellData;                                              // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		int32_t                                                    CachedPrice;                                             // 0x0538(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CreateUpsellItem(const struct FMarketItemUIData& MarketItemUIData, class UUI_Market_Item_C** marketItem);
		void CheckToClosePopup(EYPurchaseResult purchaseResult);
		void Setup(class UObject* PopupData);
		int32_t GetRelevantPlayerCurrency();
		void GetPreviousItemCost(int32_t* ItemCost);
		void CloseCurrentPopup();
		EYCurrency GetPreviousItemCurrencyType();
		void AttemptPurchase(const struct FMarketItemUIData& itemData);
		void CreateUpsellItems(TArray<struct FMarketItemUIData>* UpsellItemData);
		void OnPopupDataSet(class UPopupData* PopupData);
		void BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index);
		void OnMarketPurchaseComplete(EYPurchaseResult purchaseResult);
		void ExecuteUbergraph_UI_Popup_Upsell(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
