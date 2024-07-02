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
	 * WidgetBlueprintGeneratedClass UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C
	 * Size -> 0x01C8 (FullSize[0x0488] - InheritedSize[0x02C0])
	 */
	class UUI_Screen_ModuleDetails_C : public UUI_ModuleDetailsScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    RefreshItemDetails;                                      // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_ModulePagination_C*                              ItemCarousel;                                            // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_ModuleDetailsPanel_C*                            ItemDetailsPanel;                                        // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ModuleVideoPlayerTexture;                                // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ModuleVideoStill;                                        // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             PlayButton;                                              // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_ShipTitleWidget_C*                       UI_Generic_ShipTitleWidget_1;                            // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            VideoPlayerSizeBox;                                      // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              AbilityStillsDirectoryPath;                              // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UTexture2D*                                          DefaultVideoStill;                                       // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              AbilitiesVideoDirectoryPath;                             // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShowComingSoonVideo;                                     // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_INWI[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_Button_ModuleDetails_Purchase_C*                 SharedModuleButton;                                      // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ItemIsLoadoutModule;                                     // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ItemIsOfficerBriefing;                                   // 0x0361(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_75DI[0x6];                                   // 0x0362(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_Screen_Root_FrontEnd_C*                          FrontEndRoot;                                            // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UScrollBox*                                          DescTextScrollBox;                                       // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentlyFocusedIndex;                                   // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    ItemArrayLength;                                         // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UFileMediaSource*                                    VideoSource;                                             // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasAutoplayedVideo;                                      // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShouldReopenVideo;                                       // 0x0389(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsWaitingAsync;                                          // 0x038A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2YBV[0x5];                                   // 0x038B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PopupTitleInsufficientCredits;                           // 0x0390(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PopupBodyInsufficientCredits;                            // 0x03A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PopupButtonCancel;                                       // 0x03C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PopupButtonGetMore;                                      // 0x03D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PopupButtonPurchase;                                     // 0x03F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PopupBodyInsufficientGP;                                 // 0x0408(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PopupTitleUnownedShip;                                   // 0x0420(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PopupBodyUnownedShip;                                    // 0x0438(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PopupTitleInsufficientXP;                                // 0x0450(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PopupBodyInsufficientXP;                                 // 0x0468(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		EYTechTreeItemState                                        PreviousItemState;                                       // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DBY7[0x3];                                   // 0x0481(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastSelectedModuleId;                                    // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetScreenSpecificComponents();
		void CanAffordModuleAndApplyToShip(bool* CanPurchase);
		void HandleNotEnoughXP(int32_t index);
		void GetPopupDataResearch(class FText* PopupTitleInsufficientXP, class FText* PopupBodyInsufficientXP, TArray<class FText>* Array);
		void GetPopupDataPurchase(class FText* PopupTitleInsufficientCredits, class FText* PopupBodyInsufficientCredits, TArray<class FText>* Array);
		void HandleUnownedPurchase(int32_t index);
		void RefreshPlayerCurrencies();
		void HandleNotEnoughCredits(int32_t index);
		void RefreshDetailsPanel();
		void HandleResearchPurchase();
		void UnbindMediaEvents();
		void HandleAsyncVideoLoaded(class UFileMediaSource* Video);
		void IsVideoPlaying(bool* IsPlaying);
		void HandleVideoEndReached();
		void HandleModulePurchase();
		void HandleCarouselPageLeftRight(bool PageLeft);
		void SetWidgetFocus(int32_t IndexToFocus, bool* DidPageTurn);
		void UpdateIndexToFirstModuleShown(class UUI_DreadWidget* source);
		void UpdateFocusedItemOnHover(class UUI_Generic_Button_Module_C* ModuleButton);
		void CallModuleButtonClick();
		void StartPageUpdateTimer();
		void HandleRightGranular();
		void HandleLeftGranular();
		void PlayVideo();
		void UpdatePersistentLegend();
		void HandleInput(EUI_MenuActions GamePadInput);
		void Setup();
		void SetItemTitleAndDesc();
		void SetVanitySpecificComponents();
		void SetModuleSpecificComponents();
		void SetSharedComponents();
		void CheckItemType();
		void HandleCarouselButtonClicked(class UUI_Generic_Button_Module_C* source);
		void HandleSharedButtonPress();
		void SetupItemCarouselData();
		void InitShipTitleData();
		void InitModulePurchaseData();
		void ShouldAutoPlayVideo(bool* ShouldAutoplay);
		void OpenModuleVideoSource(class UFileMediaSource* MediaSource, bool Autoplay);
		void SetupStill(class UTexture2D* Image);
		void SetupVideoAndStill(int32_t itemID);
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_0_OnMediaPlayerMediaOpened__DelegateSignature(const class FString& OpenedUrl);
		void BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void SharedActionButtonClicked(class UUserWidget* source);
		void HandleEquipCompleted(bool wasSuccessful);
		void HandlePurchaseCompleted(bool wasSuccessful);
		void HandleResearchCompleted(bool wasSuccessful);
		void VanityPurchaseButtonClicked(class UUserWidget* source);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_0_OnMediaPlayerMediaEvent__DelegateSignature();
		void BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_2_OnMediaPlayerMediaEvent__DelegateSignature();
		void OnShipXpUpdate(int32_t shipXp);
		void ExecuteUbergraph_UI_Screen_ModuleDetails(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
