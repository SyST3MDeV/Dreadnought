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
	 * WidgetBlueprintGeneratedClass UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C
	 * Size -> 0x01C0 (FullSize[0x0468] - InheritedSize[0x02A8])
	 */
	class UUI_Screen_CaptainCustomization_C : public UUI_CaptainCustomizationScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    MaleFocusUnfocus;                                        // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    FemaleFocusUnfocus;                                      // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             AcceptButton;                                            // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              BlueLine_Female;                                         // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              BlueLine_male;                                           // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          CaptainNameText;                                         // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          CustomizationCategoryHeader;                             // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            CustomizationItemsOverlay;                               // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWrapBox*                                            CustomizationWrapBox;                                    // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_CampaignTags_C*                          DescriptionCampaignTags;                                 // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        DescriptionContainer;                                    // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                EquipButton;                                             // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CptCustomization_CategoryButton_C*               EyesCategoryButton;                                      // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             FemaleButton;                                            // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CptCustomization_CategoryButton_C*               HeadCategoryButton;                                      // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CptCustomization_CategoryButton_C*               HeadwearCategoryButton;                                  // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Icon_L1;                                                 // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Icon_R1;                                                 // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_DetailsText_C*                           ItemDetailsText;                                         // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          ItemScrollBox;                                           // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        ItemsVerticalBox;                                        // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             MaleButton;                                              // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          OwnedText;                                               // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                PurchaseButton;                                          // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScaleBox*                                           ScaleBox_L1;                                             // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScaleBox*                                           ScaleBox_R1;                                             // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CptCustomization_CategoryButton_C*               ScarCategoryButton;                                      // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CptCustomization_CategoryButton_C*               SuitCategoryButton;                                      // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CptCustomization_CategoryButton_C*               TattooCategoryButton;                                    // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CptCustomization_CategoryButton_C*               TintCategoryButton;                                      // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CptCustomization_CustomizationItem_C*            UI_CptCustomization_CustomizationItem;                   // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ViewBundleButton;                                        // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<class UUI_CptCustomization_CategoryButton_C*>       CategoryList;                                            // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_CptCustomization_CustomizationItem_C*>    CustomizationItemsList;                                  // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       isFemale;                                                // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_67AX[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_DreadWidget*                                     CurrentlyFocusedItem;                                    // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentItemIndex;                                        // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentCategoryIndex;                                    // 0x03F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumberOfItemColumns;                                     // 0x03F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_INT3[0x4];                                   // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_CptCustomization_CustomizationItem_C*            CurrentlyEquippedItem;                                   // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_CptCustomization_CustomizationItem_C*            CurrentlyClickedItem;                                    // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLegendPromptData>                           ButtonHintsStandard;                                     // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FLegendPromptData                                   TutorialStartHint;                                       // 0x0420(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      DescriptionScrollSpeed;                                  // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VYIF[0x4];                                   // 0x0444(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLegendPromptData>                           ButtonHintsTutorialCategory;                             // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FLegendPromptData>                           ButtonHintsTutorialSubMenu;                              // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		bool CanUseBackButton();
		void UpdateButtonHints();
		void HandleDescriptionScroll(bool ScrollUp);
		void HandleTutorialStartPressed();
		void ShouldCallAction(bool* IsAlreadySelected);
		void BackFromCustomizeItemsToCategories();
		void BackFromNavButtonsToCustomizeItems();
		void ScreenSetup();
		void ShowDescriptionPanel(bool Show);
		void ShowCustomizationItems(bool Show);
		void HandleBackButton();
		void FocusCategoryList();
		void FocusCustomizationList();
		void FocusNavButton();
		void HandleCategoryItemUp();
		void HandleCategoryUp();
		void HandleCustomizationItemDown();
		void HandleCategoryDown();
		void HandleFocusNextButton();
		void HandleActionButtonLeftRight();
		void IsNavButtonFocused(bool* IsNavButton);
		void HandleGranularLeft();
		void HandleGranularRight();
		void HandleGranularUp();
		void IsCategoryListFocused(bool* IsCategory);
		void HandleGranularDown();
		void FocusMaleTab();
		void FocusFemaleTab();
		void SetCaptainName();
		void HandleTutorialFlow();
		void OnCustomizationItemClicked(class UUI_CptCustomization_CustomizationItem_C* clickedSlotItemId);
		void OnCategoryClicked(class UUI_CptCustomization_CategoryButton_C* ClickedCategory);
		void OnMaleAction();
		void OnFemaleAction();
		void SwapMaleFemaleTabs();
		void HandleInput(EUI_MenuActions GameInput);
		void UpdateDetailsIcon(class UUI_CptCustomization_CategoryButton_C* CptCustomizationBtn);
		void UnFocusFemaleTab();
		void UnFocusMaleTab();
		void SetupCategoryList();
		void DisplayItemDescription(const struct FMarketItemUIData& marketData);
		void UpdateBuyButton(int32_t itemID);
		void UpdateDescriptionButtonVisibility(bool IsOwned, bool IsEquipped);
		void UnbindDescriptionButtons();
		void SetupButtonsAndCategories();
		void GetLocalizedCategoryListHeader(EYUICharacterItemType CustomizationCategory, class FText* HeaderText);
		void GetLocalizedCategoryName(EYUICharacterItemType CustomizationCategory, class FText* LocalizedTitle);
		void UpdateCustomizationCategoriesData(TArray<struct FMarketItemUIData>* equippedItems);
		void DisplayCustomizationItems(TArray<struct FMarketItemUIData>* itemData);
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void HandleOnCategoryClicked(class UUI_CptCustomization_CategoryButton_C* source);
		void BndEvt__FemaleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MaleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void HandleOnCustomizationItemClicked(class UUI_CptCustomization_CustomizationItem_C* source);
		void RefreshEquippedItemWidgets(TArray<struct FMarketItemUIData> equippedItems);
		void RefreshEquippableItemWidgets(TArray<struct FMarketItemUIData> equippableItems);
		void RefreshEquippableItemDescriptionWidget(const struct FMarketItemUIData& equippableItem);
		void ShowEquippableItemWidgets(bool IsVisible);
		void ShowEquippableItemDescriptionWidget(bool IsVisible);
		void HandleOnEquipClicked(int32_t UnusedId);
		void HandleOnViewBundleClicked(int32_t UnusedId);
		void HandleOnBuyClicked(int32_t UnusedId);
		void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void BndEvt__MaleButton_K2Node_ComponentBoundEvent_365_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__FemaleButton_K2Node_ComponentBoundEvent_306_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__MaleButton_K2Node_ComponentBoundEvent_397_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__FemaleButton_K2Node_ComponentBoundEvent_267_OnButtonHoverEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void ExecuteUbergraph_UI_Screen_CaptainCustomization(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
