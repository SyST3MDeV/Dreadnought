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
	 * WidgetBlueprintGeneratedClass UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C
	 * Size -> 0x0040 (FullSize[0x0278] - InheritedSize[0x0238])
	 */
	class UUI_EditShip_Details_ResearchClaimState_C : public UUserWidget
	{
	public:
		class UImage*                                              IconTop;                                                 // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_CurrencyCost_C*                          PurchaseCostHardCurrency;                                // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_CurrencyCost_C*                          PurchaseCostSoftCurrency;                                // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_CurrencyCost_C*                          ResearchCostFreeXp;                                      // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_CurrencyCost_C*                          ResearchCostShipXp;                                      // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            ResearchLocked;                                          // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextPrimary;                                             // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextSecondary;                                           // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void SetPurchaseCostHardCurrencyVisibility(bool IsVisible);
		void SetPurchaseCostSoftCurrencyVisibility(bool IsVisible);
		void SetResearchCostShipXpVisibility(bool IsVisible);
		void SetResearchCostFreeXpVisibility(bool IsVisible);
		void HideResearchCosts();
		void HidePurchaseCosts();
		void HideAllCosts();
		void SetInfoTextExtraVisibility(bool IsVisible);
		void SetInfoTextExtraColor(const struct FSlateColor& secondaryTextColor);
		void SetInfoTextExtra(const class FText& extraText);
		void SetPurchaseCost(const struct FYShipPrice& ShipPurchaseCost);
		void SetInfoTextColor(const struct FSlateColor& primaryTextColor);
		void SetCostTextColor(const struct FSlateColor& researchCostFreeXpTextColor, const struct FSlateColor& researchCostShipXpTextColor);
		void SetInfoText(const class FText& infoText);
		void SetResearchCost(const struct FYShipPrice& shipResearchCost);
		void SetIconPath(const class FString& iconPath);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
