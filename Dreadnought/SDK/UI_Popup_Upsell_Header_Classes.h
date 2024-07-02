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
	 * WidgetBlueprintGeneratedClass UI_Popup_Upsell_Header.UI_Popup_Upsell_Header_C
	 * Size -> 0x0034 (FullSize[0x0274] - InheritedSize[0x0240])
	 */
	class UUI_Popup_Upsell_Header_C : public UUI_DreadWidget
	{
	public:
		class UUI_Generic_CurrencyCost_C*                          CurrencyNeeded;                                          // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_CurrencyCost_C*                          CurrencyRequired;                                        // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              itemImage;                                               // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Text_ItemName;                                           // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Market_Item_C*                                   UI_Market_Item;                                          // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPopupUpsellData*                                    PreviousItemData;                                        // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PlayerCurrency;                                          // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetNeededPrice(int32_t RequiredPrice);
		void GetPreviousItemCurrencyType(EYUICurrency* currencyType);
		void GetRequiredPriceData(class FText* Price, int32_t* CurrencyAmount);
		void SetData(float PlayerCurrency, class UPopupUpsellData* previousItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
