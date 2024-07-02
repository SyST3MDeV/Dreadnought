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
	 * WidgetBlueprintGeneratedClass UI_Carousel_Quad.UI_Carousel_Quad_C
	 * Size -> 0x0054 (FullSize[0x0294] - InheritedSize[0x0240])
	 */
	class UUI_Carousel_Quad_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUniformGridPanel*                                   GridPanel;                                               // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox6ft*                                       GridScrollBox;                                           // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Pagination_Generic_C*                            UI_Pagination_Generic;                                   // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<class UUI_MarketItemWidget*>                        Widgets;                                                 // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       IsAutoScrolling;                                         // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_4KPA[0x3];                                   // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoScrollTime;                                          // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              WidgetClass;                                             // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxItemsToDisplay;                                       // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumberOfColumns;                                         // 0x0284(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsAutoScrollingForced;                                   // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OZU1[0x3];                                   // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumberOfPages;                                           // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentPage;                                             // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetNumberOfPages(int32_t* Pages);
		void GetCurrentPageInitialIndex(int32_t* index);
		void GetPageInitialIndex(int32_t Page, int32_t* index);
		void GetMaxItemsToDisplay(int32_t* MaxItems);
		void GetNumberOfColumns(int32_t* NumberOfColumns);
		void SetAutoScroll(bool IsAutoscroll);
		void GetCurrentPage(int32_t* PageIndex);
		void GetWidgets(TArray<class UUI_MarketItemWidget*>* Widgets);
		void AutoScroll();
		void Init();
		void SetupItemCarousel(TArray<struct FMarketItemUIData>* FeaturedWidgetList, class UClass* WidgetClass);
		void GoToPage(int32_t PageIndex);
		void AddItemsToCarousel();
		void Construct();
		void OnPageDotClicked(int32_t DotIndex);
		void ExecuteUbergraph_UI_Carousel_Quad(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
