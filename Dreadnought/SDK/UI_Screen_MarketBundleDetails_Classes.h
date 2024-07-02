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
	 * WidgetBlueprintGeneratedClass UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C
	 * Size -> 0x02C8 (FullSize[0x0540] - InheritedSize[0x0278])
	 */
	class UUI_Screen_MarketBundleDetails_C : public UUI_MarketBundleDetailsScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ActionButton;                                            // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          BundleHeader;                                            // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          BundleItemList;                                          // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            ImagePreviewBox;                                         // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_MarketBundleDetails_InfoPanel_C*                 InfoPanel;                                               // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ItemPreviewImage;                                        // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FMarketItemUIData                                   MarketBundleData;                                        // 0x02C8(0x0250) Edit, BlueprintVisible, DisableEditOnInstance
		class UUI_Popup_Generic_C*                                 PurchaseConfirmationPopup;                               // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentlySelectedBundleItemIndex;                        // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentlySelectedTabIndex;                               // 0x0524(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLegendPromptData>                           PS4LegendHints;                                          // 0x0528(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      ScrollAmount;                                            // 0x0538(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ShowPreviewDelay;                                        // 0x053C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsTabVisible(int32_t CurrentTabIndex, bool* IsTabVisible);
		void IsFirstBundleItemGenderSpecific(bool* IsGenderSpecific);
		void ShowAlreadyOwnedPopup();
		void IsValidDescription(const class FText& description, bool* IsValid);
		void FindFirstGenderMatchingBundleItem(EYCharacterGender Gender, bool IncludeGenderNeutral, class UUI_MarketBundleDetails_BundleItemButton_C** BundleItem, int32_t* ItemIndex);
		int32_t GetNumBundleItems();
		void GetBundleItemByIndex(int32_t index, class UUI_MarketBundleDetails_BundleItemButton_C** BundleItem);
		void DeselectCurrentBundleItem();
		void HandleBundleItemClicked(class UUI_MarketBundleDetails_BundleItemButton_C* source);
		void HandleNavRight();
		void HandleNavLeft();
		void SelectTab(int32_t TabIndex);
		void HandleNavDown();
		void HandleNavUp();
		void HandleTabRight();
		void HandleTabLeft();
		void HandleInput(EUI_MenuActions Input);
		void HandlePurchaseConfirmationPopupResult(int32_t ButtonIndex);
		void ShowInsufficientFundsPopup();
		void ShowPurchaseConfirmationPopup();
		void HandleActionButtonClicked();
		void SetupHeaderAndDescriptionText();
		void ShowPreview();
		void SetupPurchaseButton();
		void SelectBundleItem(class UUI_MarketBundleDetails_BundleItemButton_C* source);
		void SetupBundleItemList(const struct FMarketItemUIData& marketItem);
		void Setup();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void Construct();
		void BndEvt__ActionButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index);
		void OnMarketPurchaseComplete(EYPurchaseResult purchaseResult);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void ExecuteUbergraph_UI_Screen_MarketBundleDetails(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
