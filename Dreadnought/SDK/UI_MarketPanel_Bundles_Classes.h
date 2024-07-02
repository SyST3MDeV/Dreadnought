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
	 * WidgetBlueprintGeneratedClass UI_MarketPanel_Bundles.UI_MarketPanel_Bundles_C
	 * Size -> 0x0030 (FullSize[0x02F0] - InheritedSize[0x02C0])
	 */
	class UUI_MarketPanel_Bundles_C : public UUI_BundlesMarketSubPanel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hide;                                                    // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Show;                                                    // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_AccordionFilter_C*                       AccordionFilter;                                         // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<struct FUIPromotionFilterData>                      MarketBundleFilters;                                     // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void GetFilterWidget(class UUI_Generic_AccordionFilter_C** Widget);
		void SetupFilters();
		void UpdateMarketItemData();
		void Construct();
		void OnShow();
		void OnHide();
		void HideComplete();
		void BndEvt__AccordionFilter_K2Node_ComponentBoundEvent_0_OnCategoryFilterClicked__DelegateSignature(bool Checked, int32_t CheckBoxIndex, int32_t categoryIndex);
		void MarketDataUpdated();
		void ExecuteUbergraph_UI_MarketPanel_Bundles(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
