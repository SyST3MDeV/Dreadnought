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
	 * WidgetBlueprintGeneratedClass UI_MarketPanel_Featured.UI_MarketPanel_Featured_C
	 * Size -> 0x0058 (FullSize[0x02C0] - InheritedSize[0x0268])
	 */
	class UUI_MarketPanel_Featured_C : public UUI_FeaturedMarketSubPanel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hide;                                                    // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Show;                                                    // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Carousel_Generic_C*                              UI_Carousel_Generic;                                     // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Carousel_Quad_C*                                 UI_Carousel_Quad;                                        // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<class UUI_DreadWidget*>                             FeaturedItemsWidgetList;                                 // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_DreadWidget*>                             QuadCarouselWidgetList;                                  // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FVector2D                                           FeaturedItemSize;                                        // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           QuadCarouselSize;                                        // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetWidgets(class UUI_Carousel_Generic_C** CarouselGeneric, class UUI_Carousel_Quad_C** CarouselQuad);
		void HandleItemDetailsClick(const struct FMarketItemUIData& MarketItemData);
		void SetupCarousels();
		void Construct();
		void OnShow();
		void OnHide();
		void HideComplete();
		void MarketDataUpdated();
		void ExecuteUbergraph_UI_MarketPanel_Featured(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
