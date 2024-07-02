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
	 * WidgetBlueprintGeneratedClass UI_Screen_Home.UI_Screen_Home_C
	 * Size -> 0x00F8 (FullSize[0x0380] - InheritedSize[0x0288])
	 */
	class UUI_Screen_Home_C : public UUI_HomeScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Home_C*                                   Button_CaptainCustomization;                             // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Home_C*                                   Button_CaptainProgression;                               // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Home_C*                                   Button_Contracts;                                        // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Home_C*                                   Button_Exit;                                             // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Home_C*                                   Button_Market;                                           // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Home_C*                                   Button_Options;                                          // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Home_C*                                   Button_Play;                                             // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Home_C*                                   Button_QuickPlay;                                        // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Home_C*                                   Button_Ships;                                            // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Home_C*                                   Button_Statistics;                                       // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Home_C*                                   Button_Support;                                          // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Carousel_Generic_C*                              FeaturedItemCarousel;                                    // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        ScreenRoot;                                              // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          ScrollBoxHomeButton;                                     // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Home_C*                                   UI_Button_Social;                                        // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_Popup_Generic_C*                                 ExitPopup;                                               // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UUI_Button_Home_C*>                           ButtonArray;                                             // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       IsFirstTransitionIn;                                     // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O23P[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_DreadWidget*>                             FeaturedItemList;                                        // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class UUI_DreadWidget*                                     CurrentlyFocusedItem;                                    // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLegendPromptData>                           ButtonHints;                                             // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    CurrentlyFocusedHomeButtonIndex;                         // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCarouselFocused;                                       // 0x036C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X2PA[0x3];                                   // 0x036D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLegendPromptData>                           ButtonHintsCarouselFocused;                              // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		void InitiateQuickPlayMatchmaking();
		void OnPurchasePopupResult(class UUI_Button_Generic_C* SelectedButtonRef);
		void ShowBattleBonusPurchaseConfirmPopup();
		void HandleQuickplaySelected();
		void SetQuickplayVisibility();
		void ShowTutorialCTA();
		void UpdateLegend();
		void HandleGamepadSectionLeftRight(int32_t NextIndex);
		void HandleGamepadGranularRight();
		void HandleGamepadGranularLeft();
		void HandleGamepadGranularUpDown(int32_t NextHomeButtonIndex, bool* ButtonEnabled);
		void ReturnAfterDisconnectResult(int32_t ButtonIndex);
		void ShowPromptToReturnAfterDisconnect();
		void HandleItemDetailsClick(const struct FMarketItemUIData& MarketItemData);
		void BindButtonEvents(TArray<class UUI_Button_Home_C*>* Array);
		void UpdateCarousel();
		void Setup();
		void HandleToFromCarousel();
		void HandleInput(EUI_MenuActions GamePadInput);
		void ClearButtonArrayNotificationStatuses();
		void SetupButtonArray();
		void OnExitPopupResult(int32_t SelectedIndex);
		void ShowExitPopup();
		void HandleMenuButtonClicked(class UUI_Button_Home_C* Widget);
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void HandleOnButtonClicked(EUI_Screen ScreenEnum);
		void TransitionOutAnimationComplete();
		void BndEvt__FeaturedCarouselPageDots_K2Node_ComponentBoundEvent_0_OnCurrentPageChanged__DelegateSignature(int32_t DotIndex);
		void MarketDataUpdated();
		void ShowContractCompleted();
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void UpdateCurrentlyFocusedItem(class UUI_DreadWidget* FocusedItem);
		void OnShowPromptForReturnAfterDisconnect();
		void ShowCaptainProgressionCompleted();
		void OnBattleReadinessPurchaseApproved(bool purchaseSuccessful);
		void OnTransitionInAnimationComplete();
		void ExecuteUbergraph_UI_Screen_Home(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
