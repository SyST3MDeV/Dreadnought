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
	 * WidgetBlueprintGeneratedClass UI_MarketPanel_Currency.UI_MarketPanel_Currency_C
	 * Size -> 0x0098 (FullSize[0x0300] - InheritedSize[0x0268])
	 */
	class UUI_MarketPanel_Currency_C : public UUI_CurrencyMarketSubPanel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hide;                                                    // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Show;                                                    // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_AccordionFilter_C*                       AccordionFilter;                                         // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Market_CategoryButton_C*                         CPPacksButton;                                           // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Market_CategoryButton_C*                         GPPacksButton;                                           // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Market_GpStore_PS4_C*                            GpStorePanel_PS4;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     PanelSwitcher;                                           // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Market_CategoryButton_C*                         XPConversionButton;                                      // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_MarketPanel_Currency_XPConversion_C*             XPConversionPanel;                                       // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FUiXpConversionData                                 XpConversionData;                                        // 0x02B8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		ECurrencyMarketPanels                                      CurrentPanelIndex;                                       // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4J5V[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_Market_CategoryButton_C*>                 TabButtonWidgets;                                        // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_Market_Item_C*                                   marketItem;                                              // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void InitCurrentPanelIndex();
		void HideMarketGrid();
		void ShowMarketGrid(ECurrencyMarketPanels currencyPanel);
		void GetXpConversionWidget(class UUI_MarketPanel_Currency_XPConversion_C** Widget);
		void GetCurrencyCategoryWidgets(TArray<class UUI_Market_CategoryButton_C*>* Widgets);
		void UpdateTabs();
		void SetCurrentPanel(ECurrencyMarketPanels index);
		void GetPanelTitle(ECurrencyMarketPanels PanelEnum, class FText* title);
		void GetDebugGridData(TArray<struct FYUIItemPurchaseData>* Array);
		void Construct();
		void OnShow();
		void OnHide();
		void HideComplete();
		void MarketDataUpdated();
		void BndEvt__CPPacksButton_K2Node_ComponentBoundEvent_0_OnLoadoutButtonClicked__DelegateSignature(class UUI_Market_CategoryButton_C* source);
		void BndEvt__GPPacksButton_K2Node_ComponentBoundEvent_1_OnLoadoutButtonClicked__DelegateSignature(class UUI_Market_CategoryButton_C* source);
		void BndEvt__XPConversionButton_K2Node_ComponentBoundEvent_2_OnLoadoutButtonClicked__DelegateSignature(class UUI_Market_CategoryButton_C* source);
		void HandleRequestConvertAllXPShips();
		void HandleRequestXPConversion(TArray<struct FRequestXpConversionShip> RequestData);
		void BndEvt__GpStoreButton_PS4_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
		void UpdateXpConversionScreenData(bool Result);
		void ExecuteUbergraph_UI_MarketPanel_Currency(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
