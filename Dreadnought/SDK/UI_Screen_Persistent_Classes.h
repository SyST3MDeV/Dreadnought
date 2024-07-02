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
	 * WidgetBlueprintGeneratedClass UI_Screen_Persistent.UI_Screen_Persistent_C
	 * Size -> 0x0138 (FullSize[0x03D0] - InheritedSize[0x0298])
	 */
	class UUI_Screen_Persistent_C : public UUI_PersistentScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowLegendOnly;                                          // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    hidden;                                                  // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             BottomBarBorder;                                         // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ButtonBack;                                              // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ButtonSquad;                                             // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Persistent_Chat_C*                               ChatWidget;                                              // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_FrontEnd_ComWindow_C*                            ComWindow;                                               // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Persistent_CTA_Overlay_C*                        CTA_Overlay;                                             // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Persistent_CurrencyBar_C*                        CurrencyBar;                                             // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_DNLogo_C*                                        DNLogo;                                                  // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            DNLogoSizeBox;                                           // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      HorizontalBoxESCBack;                                    // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      HorizontalBoxPS4Legend;                                  // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Persistent_Legend_C*                             LegendWidget;                                            // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Persistent_Legend_C*                             MatchmakingLegendWidget;                                 // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Persistent_MatchmakingTimer_C*                   MatchmakingTimer;                                        // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Persistent_NotificationFlyout_C*                 NotificationFlyout;                                      // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Persistent_Breadcrumb_C*                         PersistentBreadcrumb;                                    // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Persistent_PlayerCard_C*                         PlayerCard;                                              // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     SquadWidgetSwitcher;                                     // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              TopBarTileImg;                                           // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Persistent_Squad_C*                       UI_Button_Persistent_Squad;                              // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Persistent_SquadList_C*                          UI_Persistent_SquadList;                                 // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UObject*                                             AnnouncementManager;                                     // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    InvalidNotificationID;                                   // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AHJW[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLegendPromptData>                           StartMatchmakingLegend;                                  // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FLegendPromptData>                           CancelMatchmakingLegend;                                 // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       IsServerStarting;                                        // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JMVZ[0x7];                                   // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UYCtA*                                               CtaFrontendTutorial;                                     // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      XpConversionNotificationMultiplier;                      // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4PQR[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UYCtA*                                               CtaXpConversion;                                         // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UYCtA*                                               CtaXpConversionAll;                                      // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    XpConversionMinTier;                                     // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    HackNumNotifs;                                           // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void RequestStartQuickplayMatchmaking();
		void GetCurrentFleet(EYFleetType* fleetType);
		void UpdateFavoritedModeState(bool isFavorited, EYGameModeType gameModeType);
		void SelectPrevFleet(EYFleetType* fleetType);
		void SelectNextFleet(EYFleetType* fleetType);
		void CloseNotificationFlyout();
		void ShowMatchMakingCancelledMessage();
		void XpConversionAllCTA();
		void XpConversionCTA();
		void FrontEndTutorialCTA();
		void SetMatchmakingText();
		void HandleInputDefault(EUI_MenuActions Input);
		void ResetAndHideMatchMakingTimer();
		void UpdateCurrencies();
		void HasFocus(bool* HasFocus);
		void SetEscBackVisibility();
		void ShowLegend();
		void HandleServerStarting();
		void HandleMatchmakingStarted();
		void HandleMatchmakingStopped();
		void HideMatchmakingWidget();
		void HandleFleetScreenEntry(bool Entered);
		void HandleInput(EUI_MenuActions InputPin);
		void HideMatchmakingLegend();
		void RequestStopMatchmaking();
		void RequestStartMatchmaking();
		void HandleCancel();
		void ShowOrHidePlayButton(bool Show);
		void SetMatchmakingLegend(TArray<struct FLegendPromptData>* InputPin);
		void SetDNLogoVisibility();
		void HandleNotificationInputAction(class UUI_Persistent_NotificationFlyout_C* source, ENotificationButtonType Action);
		void UpdateAverageWaitTimeWidget(int32_t AverageWaitTimeSeconds);
		void HideLegend();
		void SetLegend(TArray<struct FLegendPromptData>* LegendData);
		void UpdateCurrentNotification();
		void UpdateNotificationsWidget();
		void InitializeInternal();
		void ShouldBreadcrumbBarBeVisible(bool* Result);
		void SetBreadcrumbBarVisibility(bool IsVisible);
		void HandleBreadcrumbClicked(int32_t BreadcrumbIndex);
		void HandleSquadButtonClicked();
		void SetupSquad();
		void Hide();
		void HandleTimerHideComplete();
		void ShowOrHideMatchmakingTimer(bool Show);
		void UpdateBreadcrumbWidget(class UUI_DreadScreen* TargetScreen);
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void BndEvt__FriendsButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index);
		void BndEvt__PlayerCard_K2Node_ComponentBoundEvent_1_OnPlayerPortraitClicked__DelegateSignature();
		void BndEvt__NotificationFlyout_K2Node_ComponentBoundEvent_2_OnNotificationClicked__DelegateSignature(class UUI_Persistent_NotificationFlyout_C* source, ENotificationButtonType Action);
		void OnMatchmakingTimerStarted();
		void OnMatchmakingTimerStopped();
		void BndEvt__MatchmakingTimer_K2Node_ComponentBoundEvent_0_OnCancelButtonClicked__DelegateSignature();
		void OnMatchmakingAverageWaitTimeAvailable(int32_t waitTimeSeconds);
		void HandleSquadUpdated();
		void HandleNotificationsChanged();
		void HandleOnPlayerSpeakingUpdated(const struct FSquadVoiceData& UpdateData);
		void OnMatchmakingFailed();
		void OnMatchmakingStarted();
		void HandlePlayerCardUpdated();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void BndEvt__MatchmakingTimer_K2Node_ComponentBoundEvent_48_OnPlayButtonClicked__DelegateSignature();
		void OnServerStarting();
		void OnCheckCanReturnToMatch(bool CanReturnToMatch);
		void OnCTATriggered(class UYCtA* cta);
		void OnCTAManagerReady();
		void OnBattleServerShutdown();
		void OnMmogConnectionLost();
		void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_UI_Screen_Persistent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
