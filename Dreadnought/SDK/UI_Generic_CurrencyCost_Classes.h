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
	 * WidgetBlueprintGeneratedClass UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C
	 * Size -> 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
	 */
	class UUI_Generic_CurrencyCost_C : public UUI_DreadWidget
	{
	public:
		class UTextBlock*                                          CostText;                                                // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              CurrencyIconImage;                                       // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void SetCurrencyType(EYUICurrency Price);
		void SetPrice(const class FText& Price);
		void FormatFontColor(EYUICurrency currencyType);
		void FormatPrice(EYUICurrency currencyType, float PriceFloat, const class FString& RealCurrencyCode, int32_t PriceInt, class FText* FormattedPrice);
		void SetPriceData(EYUICurrency currencyType, float PriceFloat, const class FString& RealCurrencyCode, int32_t PriceInt);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
