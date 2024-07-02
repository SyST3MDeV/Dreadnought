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
	 * WidgetBlueprintGeneratedClass UI_Screen_Market.UI_Screen_Market_C
	 * Size -> 0x04A0 (FullSize[0x0718] - InheritedSize[0x0278])
	 */
	class UUI_Screen_Market_C : public UUI_MarketScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWrapBox*                                            GridWrapBox;                                             // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        Layout;                                                  // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox6ft*                                       MarketGridScrollBox;                                     // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            OverlayForPanels;                                        // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TabList_Generic_C*                               TabList;                                                 // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<struct FUI_Struct_TabButtonData>                    TabButtonData;                                           // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      PanelClasses;                                            // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_MarketSubPanel*                                  CurrentPanel;                                            // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentTabIndex;                                         // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AXT7[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_MarketSubPanel*>                          InstantiatedPanels;                                      // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FMarketItemUIData                                   ItemToPurchase;                                          // 0x02F8(0x0250) Edit, BlueprintVisible, DisableEditOnInstance
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_Popup_Generic_C*                                 PurchaseConfirmationPopup;                               // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UUI_Popup_Generic_C*                                 PurchaseProcessingPopup;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FText                                                BuyLabelText;                                            // 0x0560(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                CancelLabelText;                                         // 0x0578(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PurchaseConfirmationPopupTitleText;                      // 0x0590(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PurchaseConfirmationPopupMessageText;                    // 0x05A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UUI_DreadWidget*                                     CurrentlyFocusedItem;                                    // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FLegendPromptData>                           ButtonHints;                                             // 0x05C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_Market_Item_C*>                           MarketGridItems;                                         // 0x05D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentMarketGridIndex;                                  // 0x05E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumMarketGridColumns;                                    // 0x05EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentFeaturedIndex;                                    // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentFeaturedGridIndex;                                // 0x05F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UUI_DreadWidget*>                             FeaturedWidgets;                                         // 0x05F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_DreadWidget*>                             FeaturedGridWidgets;                                     // 0x0608(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       FeaturedCarouselFocused;                                 // 0x0618(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MarketGridFocused;                                       // 0x0619(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FZGA[0x6];                                   // 0x061A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_Carousel_Generic_C*                              FeaturedCarousel;                                        // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_Carousel_Quad_C*                                 FeaturedGridCarousel;                                    // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UUI_Market_CategoryButton_C*>                 CurrencyCategoryItems;                                   // 0x0630(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentCurrencyCategoryIndex;                            // 0x0640(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_202Y[0x4];                                   // 0x0644(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_Generic_AccordionFilter_Category_C*>      FilterCategoryWidgets;                                   // 0x0648(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentFilterCategoryIndex;                              // 0x0658(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentFilterIndex;                                      // 0x065C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    DefaultFilterIndex;                                      // 0x0660(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YBLN[0x4];                                   // 0x0664(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_MarketPanel_Currency_ConvertAllButton_C*         ConvertAllXpButton;                                      // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UUI_MarketPanel_Currency_ShipXPConversionItem_C*> XpConversionShipWidgets;                                 // 0x0670(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentXpConversionShipIndex;                            // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMarketGridVisible;                                     // 0x0684(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AnyXpConversionItemFocused;                              // 0x0685(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_URZ8[0x2];                                   // 0x0686(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_MarketPanel_Currency_XPConversion_C*             XpConversionWidget;                                      // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ScrollBoxScrollSpeed;                                    // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsAsyncConvertingXp;                                     // 0x0694(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_99VI[0x3];                                   // 0x0695(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PurchaseCompletedTitle;                                  // 0x0698(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PurchaseCompletedMsg;                                    // 0x06B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PopupOk;                                                 // 0x06C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UUI_MarketPanel_Currency_C*                          currencyPanel;                                           // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UUI_Market_Item_C*>                           MarketItemWidgetCache;                                   // 0x06E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FLegendPromptData                                   RightStickHint;                                          // 0x06F8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void HandleOnTabChanged(EUI_Screen Selection);
		void UpdateHints();
		void HandleTabClicked(int32_t index);
		void UnbindMarketItemEvents(class UUI_Market_Item_C* MarketItemWidget);
		void BindMarketItemEvents(class UUI_Market_Item_C* MarketItemWidget);
		void CreateNewMarketItem(const struct FMarketItemUIData& MarketItemData, class UUI_Market_Item_C** MarketItemWidget);
		void AddMarketItemToGrid(const struct FMarketItemUIData& MarketItemData);
		void ClearMarketGrid();
		bool IsCustomConversionItemFocused();
		void UpdateCurrencies();
		void IsGPPanelPS4Focused(bool* Result);
		void CanConvertXP(bool* Return);
		void HandleAsyncXpConversionCompleted(int32_t NewParam);
		void HandleAsyncXpConversionRequest();
		void NavLeftIntoMarketGrid();
		void ScrollElitePanelDescriptionBox(bool ScrollUp);
		void SetEliteInfoPanelFocus();
		void ShowPanelIfNotVisible(int32_t TabIndex);
		void NavigateToXPConversionScreen();
		void NavigateToGPPurchaseScreen();
		void NavigateToCurrencyScreen();
		void NavigateToHeroShipScreen();
		void NavigateToBundlesScreen();
		void NavigateToFeaturedScreen();
		void IsPanelVisible(int32_t index, bool* IsVisible);
		void NavToFirstSelectableCurrencyCategory();
		void ActionTertiary();
		void Action();
		void UnfocusCurrentWidgetFromHover(class UUI_DreadWidget* NewWidget);
		void SetCustomXpConversionFocus(int32_t ShipItemIndex);
		void SetAllXpConversionFocus();
		void SetupXpConversion();
		void NavRightIntoMarketGrid();
		void NavUpMarketGrid();
		void NavDownMarketGrid();
		void NavRightMarketGrid();
		void SetFilterFocus(int32_t categoryIndex, int32_t filterIndex);
		void NavLeftMarketGrid();
		void SetupBundleOrHeroPanel();
		void GetUpIndexCurrencyCategory(int32_t CurrentIndex, int32_t* index);
		void GetDownIndexCurrencyCategory(int32_t CurrentIndex, int32_t* index);
		void SetCurrencyCategoryFocus(int32_t index);
		void GetFirstSelectableCurrencyCategoryIndex(int32_t* index);
		void SetupCurrencyPanel();
		void OnGpToCreditsButtonSelected(int32_t index);
		void EliteStatusPackMarketItemSelected(const struct FMarketItemUIData& MarketItemData);
		void SetGpToCreditPopupData(class UGpToCreditsDetailsPopupData* PopupData, const struct FMarketItemUIData& MarketItemData, bool IsGpPack);
		void CreditPackMarketItemSelected(const struct FMarketItemUIData& MarketItemData, bool IsGpPack);
		void SetupFeaturedPanel();
		void SetFeaturedGridFocus(int32_t index);
		void SetFeaturedFocus(int32_t index);
		void UnfocusCurrentWidget();
		void HandleItemHovered(class UUI_DreadWidget* source);
		void SetMarketGridFocus(int32_t index);
		void SetWidgetFocus(class UUI_DreadWidget* Widget);
		void HandleNavRightSection();
		void HandleNavLeftSection();
		void HandleNavDownGranular();
		void HandleNavUpGranular();
		void HandleNavRightGranular();
		void HandleNavLeftGranular();
		void Setup();
		void NavigateToCreditsPurchaseScreen();
		void NavigateToElitePurchaseScreen();
		void HandleInput(EUI_MenuActions GamePadInput);
		void ConstructPurchasePopupButtons(struct FMarketItemUIData* MarketItemData, TArray<class UPopupButtonData*>* PopupButtons);
		void ShowInsufficientFundsPopup();
		void HandlePurchaseConfirmationPopupResult(int32_t ButtonIndex);
		void ShowPurchaseConfirmationPopup(const struct FMarketItemUIData& PurchaseItemData);
		void UpdateMarketGridVisibility();
		void HandleItemPreviewClick(const struct FMarketItemUIData& MarketItemData);
		void HandleItemDetailsClick(const struct FMarketItemUIData& MarketItemData);
		void HandleItemPurchaseClick(const struct FMarketItemUIData& MarketItemData);
		void SetMarketGridData();
		void GetPanel(class UClass* PanelClass, class UUI_MarketSubPanel** Panel);
		void ShowPanel(int32_t TabIndex);
		void SetupTabs();
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimComplete();
		void TransitionOutAnimComplete();
		void BndEvt__TabList_K2Node_ComponentBoundEvent_0_OnTabClicked__DelegateSignature(int32_t TabIndex);
		void UpdateCurrentlyFocusedItem(class UUI_DreadScreen* FocusedItem);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void OnChangeTab(EUI_Screen screen);
		void OnXpConversionDataUpdated(bool Result);
		void OnXpConversionRequested();
		void ExecuteUbergraph_UI_Screen_Market(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
