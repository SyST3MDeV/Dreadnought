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
	 * WidgetBlueprintGeneratedClass UI_MarketBundleDetails_Stat.UI_MarketBundleDetails_Stat_C
	 * Size -> 0x0048 (FullSize[0x0280] - InheritedSize[0x0238])
	 */
	class UUI_MarketBundleDetails_Stat_C : public UUserWidget
	{
	public:
		class UScrollBox*                                          StatsList;                                               // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_MarketBundleDetails_StatItem_C*                  UI_MarketBundleDetails_StatItem;                         // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_MarketBundleDetails_StatItem_C*                  UI_MarketBundleDetails_StatItem_1;                       // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_MarketBundleDetails_StatItem_C*                  UI_MarketBundleDetails_StatItem_2;                       // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_MarketBundleDetails_StatItem_C*                  UI_MarketBundleDetails_StatItem_3;                       // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_MarketBundleDetails_StatItem_C*                  UI_MarketBundleDetails_StatItem_4;                       // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_MarketBundleDetails_StatItem_C*                  UI_MarketBundleDetails_StatItem_5;                       // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_MarketBundleDetails_StatItem_C*                  UI_MarketBundleDetails_StatItem_6;                       // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_MarketBundleDetails_StatItem_C*                  UI_MarketBundleDetails_StatItem_7;                       // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void SetItemStats(TArray<struct FYUIInformationPanelStatData>* stats);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
