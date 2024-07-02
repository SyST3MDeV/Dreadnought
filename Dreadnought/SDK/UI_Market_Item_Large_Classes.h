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
	 * WidgetBlueprintGeneratedClass UI_Market_Item_Large.UI_Market_Item_Large_C
	 * Size -> 0x0360 (FullSize[0x05C0] - InheritedSize[0x0260])
	 */
	class UUI_Market_Item_Large_C : public UUI_MarketItemWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FocusUnfocus;                                            // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_CampaignTags_C*                          CampaignTagsWidget;                                      // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              DiscountStrikeThrough;                                   // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              DropShadowImg;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              hrBtm;                                                   // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              hrTop;                                                   // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ItemCategoryIcon1;                                       // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_CurrencyCost_C*                          ItemCost;                                                // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_CurrencyCost_C*                          ItemCostDiscounted;                                      // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ItemDetailsButton;                                       // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             ItemDetailsContainer;                                    // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ItemGenericBG;                                           // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              itemImage;                                               // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          ItemNameText;                                            // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          ItemOwnedStatusText;                                     // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             ItemTierContainerTop;                                    // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          ItemTierText;                                            // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UThrobber*                                           LoadingIndicator;                                        // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots;                                   // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     VanityBottomBrackets;                                    // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     VanityTopBrackets;                                       // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FMarketItemUIData                                   MarketItemUIData;                                        // 0x0310(0x0250) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnItemDetailsClicked;                                    // 0x0560(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnBuyClicked;                                            // 0x0570(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPreviewClicked;                                        // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ShowItemDetailsButton;                                   // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_30DF[0x7];                                   // 0x0591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnReceivedFocus;                                         // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnItemHovered;                                           // 0x05A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsFocused;                                               // 0x05B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EYUICurrency                                               ItemCurrencyType;                                        // 0x05B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESlateVisibility                                           ImageVisibility;                                         // 0x05BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SFI1[0x1];                                   // 0x05BB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DownloadRetryTimer;                                      // 0x05BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetImageIfAvailable(const class FString& URL, bool* shouldDownload);
		void SetImage(class UTexture2D* Image);
		void SetupPriceCurrency(const struct FYUIItemPriceData& YUIItemPriceData, const struct FYMenuOfferCampaingData& CampaignData);
		void HandleDownloadImage();
		void Action();
		void SetCampaignData(const struct FYMenuOfferCampaingData& CampaignData, bool ShowPrice, EYUICurrency currencyType);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void HandleFocus();
		void HandleUnfocus();
		void SetupButtons();
		void SetupImages();
		void SetupText();
		void SetupPrice();
		void SetIconImage(class UTexture2D* Texture);
		void Setup();
		void OnFailure_E6489A394F3A098224B43FB32411E061(class UTexture2D* Texture);
		void OnSuccess_E6489A394F3A098224B43FB32411E061(class UTexture2D* Texture);
		void Construct();
		void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void DownloadImage(const class FString& URL);
		void BndEvt__ItemDetailsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PreviewButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index);
		void BndEvt__BuyButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(int32_t index);
		void SetData(const struct FMarketItemUIData& itemData);
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		void OnActionReceived();
		void ExecuteUbergraph_UI_Market_Item_Large(int32_t EntryPoint);
		void OnItemHovered__DelegateSignature(class UUI_DreadWidget* source);
		void OnReceivedFocus__DelegateSignature(class UUI_DreadWidget* source);
		void OnPreviewClicked__DelegateSignature(const struct FMarketItemUIData& MarketItemData);
		void OnBuyClicked__DelegateSignature(const struct FMarketItemUIData& MarketItemData);
		void OnItemDetailsClicked__DelegateSignature(const struct FMarketItemUIData& MarketItemData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
