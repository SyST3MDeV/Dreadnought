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
	 * Class DreadGameUI.FrontendComponent
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class UFrontendComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.FrontendInterpreter
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class UFrontendInterpreter : public UFrontendComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.MmogConnectionInterpreter
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class UMmogConnectionInterpreter : public UFrontendInterpreter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.AsyncTaskDownloadEula
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAsyncTaskDownloadEula : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UAsyncTaskDownloadEula* STATIC_DownloadEula();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.ContextComponent
	 * Size -> 0x00A8 (FullSize[0x01A0] - InheritedSize[0x00F8])
	 */
	class UContextComponent : public UFrontendComponent
	{
	public:
		int32_t                                                    m_maxContextHistoryCount;                                // 0x00F8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OKH7[0xA4];                                  // 0x00FC(0x00A4) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.BattleReadinessInterpreter
	 * Size -> 0x0018 (FullSize[0x0110] - InheritedSize[0x00F8])
	 */
	class UBattleReadinessInterpreter : public UFrontendInterpreter
	{
	public:
		unsigned char                                              UnknownData_O5YH[0x18];                                  // 0x00F8(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnBattleReadinessPurchaseApproved__DelegateSignature(bool purchaseSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.CareerProgressionInterpreter
	 * Size -> 0x01E8 (FullSize[0x02E0] - InheritedSize[0x00F8])
	 */
	class UCareerProgressionInterpreter : public UFrontendInterpreter
	{
	public:
		unsigned char                                              UnknownData_9HW4[0x1E8];                                 // 0x00F8(0x01E8) MISSED OFFSET (PADDING)

	public:
		void OnCareerProgressionPinnedGoalChanged(const class FName& newPinnedGoalId);
		void OnCareerProgressionGoalStageUpdated(const class FName& goalId, const struct FYUICareerProgressionGoalStageData& newStage, bool bHasUIListBeenSorted);
		void OnCareerProgressionGoalStageRewardUpdated(const class FName& goalId, bool bSucceeded, const class FString& message);
		void OnCareerProgressionCategoryUnlocked(EYGoalCategory unlockedCategory);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.ChatInterpreter
	 * Size -> 0x0208 (FullSize[0x0300] - InheritedSize[0x00F8])
	 */
	class UChatInterpreter : public UFrontendInterpreter
	{
	public:
		unsigned char                                              UnknownData_2MVO[0x208];                                 // 0x00F8(0x0208) MISSED OFFSET (PADDING)

	public:
		void OnChatMessagesChangedDelegate__DelegateSignature();
		void OnChatChannelAddedDelegate__DelegateSignature();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.ContractsInterpreter
	 * Size -> 0x0088 (FullSize[0x0180] - InheritedSize[0x00F8])
	 */
	class UContractsInterpreter : public UFrontendInterpreter
	{
	public:
		unsigned char                                              UnknownData_RU0Z[0x88];                                  // 0x00F8(0x0088) MISSED OFFSET (PADDING)

	public:
		void HandleOnPlayerContractsUpdated();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.GameDownloadInterpreter
	 * Size -> 0x00F8 (FullSize[0x01F0] - InheritedSize[0x00F8])
	 */
	class UGameDownloadInterpreter : public UFrontendInterpreter
	{
	public:
		unsigned char                                              UnknownData_DKTX[0xF8];                                  // 0x00F8(0x00F8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.IdleKickInterpreter
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class UIdleKickInterpreter : public UFrontendInterpreter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.LegalItemsInterpreter
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class ULegalItemsInterpreter : public UFrontendInterpreter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.LoginGateInterpreter
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class ULoginGateInterpreter : public UFrontendInterpreter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.PopupButtonData
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UPopupButtonData : public UObject
	{
	public:
		class FText                                                m_label;                                                 // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		struct FLinearColor                                        m_buttonColor;                                           // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EYUICurrency                                               m_currencyType;                                          // 0x0050(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7LET[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_currencyAmountStrText;                                 // 0x0058(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		int32_t                                                    m_index;                                                 // 0x0070(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EYPS4ButtonIcon                                            m_ps4ButtonIconType;                                     // 0x0074(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       m_bCustomButtonColor;                                    // 0x0075(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PJ7E[0x2];                                   // 0x0076(0x0002) MISSED OFFSET (PADDING)

	public:
		void SetPS4ButtonIconMapping(EYPS4ButtonIcon buttonIconType);
		void SetLabel(const class FText& label);
		void SetIndex(int32_t index);
		void SetCurrencyType(EYUICurrency currencyType);
		void SetCurrencyAmountStringText(const class FText& currencyAmountStrText);
		void SetButtonColor(const struct FLinearColor& Color);
		bool IsCurrencyEnabled();
		bool IsButtonColorCustom();
		bool HasPS4ButtonIconMapping();
		EYPS4ButtonIcon GetPS4ButtonIconMapping();
		class FText GetLabel();
		int32_t GetIndex();
		struct FLinearColor GetCustomButtonColor();
		EYUICurrency GetCurrencyType();
		class FText GetCurrencyAmountStringText();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.PopupData
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UPopupData : public UObject
	{
	public:
		class FText                                                title;                                                   // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                message;                                                 // 0x0040(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class UPopupButtonData*>                            buttons;                                                 // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.PopupManager
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UPopupManager : public UObject
	{
	public:
		TArray<struct FPopupStackData>                             m_popupStack;                                            // 0x0028(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UClass*                                              m_defaultGenericPopupWidgetClass;                        // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              m_defaultWebPopupWidgetClass;                            // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              m_defaultUpsellPopupWidgetClass;                         // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              m_defaultLoginStreakPopupWidgetClass;                    // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P6RS[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetDefaultWebPopupWidgetClass(class UClass* userWidgetClass);
		void SetDefaultUpsellPopupWidgetClass(class UClass* userWidgetClass);
		void SetDefaultLoginStreakPopupWidgetClass(class UClass* userWidgetClass);
		void SetDefaultGenericPopupWidgetClass(class UClass* userWidgetClass);
		void OnPopupButtonSelected(class UUserWidget* popupWidget, int32_t ButtonIndex);
		bool IsPopupDisplayed();
		class UPopupData* GetCurrentPopupData();
		class UUserWidget* GetCurrentPopup();
		void ClosePopup(class UUserWidget* popupWidget);
		void CloseCurrentPopup();
		void CloseAllPopups();
		struct FPopupStackData AddWebPopup(const class FString& webURL);
		struct FPopupStackData AddUpsellPopup(class UPopupUpsellData* upsellData);
		struct FPopupStackData AddGenericPopupFromButtonDataList(class UClass* userWidgetClass, const class FText& titleText, const class FText& bodyText, TArray<class UPopupButtonData*> buttons);
		struct FPopupStackData AddGenericPopup(class UClass* userWidgetClass, const class FText& titleText, const class FText& bodyText, TArray<class FText> buttonTexts);
		struct FPopupStackData AddCustomPopup(class UClass* userWidgetClass, class UPopupData* PopupData);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.MarketInterpreter
	 * Size -> 0x01E8 (FullSize[0x02E0] - InheritedSize[0x00F8])
	 */
	class UMarketInterpreter : public UFrontendInterpreter
	{
	public:
		unsigned char                                              UnknownData_PNQU[0x158];                                 // 0x00F8(0x0158) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UYShop*                                              m_shop;                                                  // 0x0250(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUserWidget*                                         m_processingPurchasePopupWidget;                         // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUserWidget*                                         m_insufficientFundsPopupWidget;                          // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_97PV[0x78];                                  // 0x0268(0x0078) MISSED OFFSET (PADDING)

	public:
		void OnPaywallUrlReceived(const class FString& URL, const class FString& transactionId);
		void OnMarketPurchaseComplete__DelegateSignature(EYPurchaseResult purchaseResult);
		void OnMarketDataRebuilt__DelegateSignature();
		void OnMarketCatalogUpdated__DelegateSignature();
		void MarketPurchaseComplete(int32_t purchaseResult, const class FString& offerId, int32_t quantity);
		void MarketManifestInitialized();
		void MarketDataRebuilt();
		void MarketCatalogUpdated();
		void HandlePlayerConversionRequestDone(bool Result);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.NotificationData
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UNotificationData : public UObject
	{
	public:
		unsigned char                                              UnknownData_JIQT[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ENotificationButtonType>                            m_buttons;                                               // 0x0058(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GYQ4[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetIsNew(bool Value);
		bool IsNew();
		EYAnnouncementType GetType();
		class FText GetText();
		int32_t GetNumButtons();
		int32_t GetID();
		TArray<ENotificationButtonType> GetButtons();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.NotificationsInterpreter
	 * Size -> 0x0038 (FullSize[0x0130] - InheritedSize[0x00F8])
	 */
	class UNotificationsInterpreter : public UFrontendInterpreter
	{
	public:
		unsigned char                                              UnknownData_IYR9[0x10];                                  // 0x00F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UNotificationData*>                           m_allNotificationDataList;                               // 0x0108(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UNotificationData*>                           m_newNotificationDataList;                               // 0x0118(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_21C5[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnAnnouncementsChanged__DelegateSignature();
		void HandleOnAnnouncementsChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.OnboardingInterpreter
	 * Size -> 0x0058 (FullSize[0x0150] - InheritedSize[0x00F8])
	 */
	class UOnboardingInterpreter : public UFrontendInterpreter
	{
	public:
		unsigned char                                              UnknownData_QLHD[0x58];                                  // 0x00F8(0x0058) MISSED OFFSET (PADDING)

	public:
		void OnFleetUnlocked(EYFleetType fleetType);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.PS4SystemsInterpreter
	 * Size -> 0x03C8 (FullSize[0x04C0] - InheritedSize[0x00F8])
	 */
	class UPS4SystemsInterpreter : public UFrontendInterpreter
	{
	public:
		unsigned char                                              UnknownData_UZND[0x3C8];                                 // 0x00F8(0x03C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.ShipInterpreter
	 * Size -> 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
	 */
	class UShipInterpreter : public UFrontendInterpreter
	{
	public:
		unsigned char                                              UnknownData_NOYE[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.SocialInterpreter
	 * Size -> 0x0010 (FullSize[0x0108] - InheritedSize[0x00F8])
	 */
	class USocialInterpreter : public UFrontendInterpreter
	{
	public:
		unsigned char                                              UnknownData_ARNL[0x10];                                  // 0x00F8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UIThemeComponent
	 * Size -> 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
	 */
	class UUIThemeComponent : public UFrontendComponent
	{
	public:
		unsigned char                                              UnknownData_TU9N[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_DreadWidget
	 * Size -> 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
	 */
	class UUI_DreadWidget : public UUserWidget
	{
	public:
		struct FVector2D                                           m_cachedAbsoluteLocation;                                // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void SetUITheme(EUI_Theme theme);
		void SendAnalyticsEvent(EUI_Screen screenId, EAnalyticsButtonId buttonID, int32_t granularId);
		void OnUIThemeReceived(EUI_Theme theme);
		void OnSynchronizeProperties();
		void OnActionReceived();
		void NavigateToTab(EUI_Screen screen);
		void NavigateToScreen(EUI_Screen screen);
		void NavigateToPreviousScreen();
		bool IsPlatform(EPlatform platform);
		bool IsCurrentShipOwned();
		bool IsCurrentModuleAVanityItem();
		void HandleAction();
		struct FVector2D GetViewportPosition();
		struct FYItemUIData GetUIDataForItemId(int32_t itemID);
		TArray<struct FYToolTipValue> GetTooltipDataForItemData(const struct FYUIShipTechTreeItemData& itemData);
		class UYImageLoader* GetImageLoader();
		struct FVector2D GetCachedAbsolutePosition();
		bool DoesCurrentModuleHaveItemOffer();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_GenericButtonModuleWidget
	 * Size -> 0x00C0 (FullSize[0x0300] - InheritedSize[0x0240])
	 */
	class UUI_GenericButtonModuleWidget : public UUI_DreadWidget
	{
	public:
		unsigned char                                              UnknownData_27TZ[0xC0];                                  // 0x0240(0x00C0) MISSED OFFSET (PADDING)

	public:
		bool ShouldShowTierIcon();
		bool ShouldShowPreviousCost();
		bool ShouldShowNewTag();
		bool ShouldShowLockIcon();
		bool ShouldShowDiscountTag();
		bool ShouldShowCurrentCost();
		void SetDataStruct(const struct FUIGenericButtonModuleData& Data);
		bool IsTechTreeItemAndNotOwned();
		bool IsOwned();
		bool IsOnSale();
		bool IsNew();
		bool IsEquipped();
		bool IsCurrentModuleAVanityItem();
		bool HasPriceDiscount();
		int32_t GetTier();
		struct FYUIItemPriceData GetTechTreeResearchPrice();
		struct FYUIItemPriceData GetTechTreePurchasePrice();
		EYTechTreeItemState GetTechTreeItemState();
		EYUICurrency GetPriceCurrency();
		float GetPriceAmount();
		EYUICurrency GetOriginalPriceCurrency();
		float GetOriginalPriceAmount();
		float GetNewPriceAsPercentOfOldPrice();
		class FString GetModuleTexturePath();
		class FText GetModuleName();
		int32_t GetItemID();
		int32_t GetIndex();
		class FString GetIconTexturePath();
		class FText GetDiscountTagText();
		struct FUIGenericButtonModuleData GetDataStruct();
		bool DoesCurrentModuleHaveItemOffer();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.TechTreeInterpreter
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class UTechTreeInterpreter : public UFrontendInterpreter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.YMatchmakingInterpreter
	 * Size -> 0x0178 (FullSize[0x0270] - InheritedSize[0x00F8])
	 */
	class UYMatchmakingInterpreter : public UFrontendInterpreter
	{
	public:
		unsigned char                                              UnknownData_N3I3[0x178];                                 // 0x00F8(0x0178) MISSED OFFSET (PADDING)

	public:
		void StartQuickPlayMatchmaking();
		void StartMatchmaking(EYGameModeType gameModeType, const class FString& fullMapPath);
		void StartFavoritesMatchmaking(TArray<uint32_t> gameModeTypes, const class FString& fullMapPath);
		void SquadMatchmakingStartedDelegate__DelegateSignature();
		void ServerStartingDelegate__DelegateSignature();
		void QueueWaitingTimeAvailableDelegate__DelegateSignature(int32_t waitTimeSeconds);
		void MatchmakingTimerStoppedDelegate__DelegateSignature();
		void MatchmakingTimerStartedDelegate__DelegateSignature();
		void MatchmakingFailedDelegate__DelegateSignature();
		void CancelMatchmaking();
		void BattleServerShutDownDelegate__DelegateSignature();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.HangarPreviewComponent
	 * Size -> 0x0178 (FullSize[0x0270] - InheritedSize[0x00F8])
	 */
	class UHangarPreviewComponent : public UFrontendComponent
	{
	public:
		class FScriptMulticastDelegate                             OnPreviewStarted;                                        // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPreviewEnded;                                          // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XL8P[0xF0];                                  // 0x0118(0x00F0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FShopPreviewHelper                                  m_shopPreviewHelper;                                     // 0x0208(0x0058) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UBMM[0x10];                                  // 0x0260(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnPreviewStarted__DelegateSignature();
		void OnPreviewEnded__DelegateSignature();
		void HandleOnSubLevelLoaded();
		void HandleOnPreviewActorLoadoutAsyncLoaded(class UYShipLoadout* loadout);
		void HandleOnOutpostTransitionCompleted(EYOutpostSection newSection);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.FrontendHUD
	 * Size -> 0x00D8 (FullSize[0x0580] - InheritedSize[0x04A8])
	 */
	class AFrontendHUD : public AHUD
	{
	public:
		class UUI_RootFrontendScreen*                              m_rootScreen;                                            // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              m_globalData;                                            // 0x04B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              m_globalDataPS4;                                         // 0x04B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UYProgressionUnlockContainerFunction*                m_contractsUnlock;                                       // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UContextComponent*                                   m_contextComponent;                                      // 0x04C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHangarPreviewComponent*                             m_hangarPreviewComponent;                                // 0x04D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUIThemeComponent*                                   m_uiThemeComponent;                                      // 0x04D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMmogConnectionInterpreter*                          m_mmogConnectionInterpreter;                             // 0x04E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMarketInterpreter*                                  m_marketInterpreter;                                     // 0x04E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBattleReadinessInterpreter*                         m_battleReadinessInterpreter;                            // 0x04F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UYMatchmakingInterpreter*                            m_matchmakingInterpreter;                                // 0x04F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USocialInterpreter*                                  m_socialInterpreter;                                     // 0x0500(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCareerProgressionInterpreter*                       m_careerProgressionInterpreter;                          // 0x0508(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChatInterpreter*                                    m_chatInterpreter;                                       // 0x0510(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UContractsInterpreter*                               m_contractsInterpreter;                                  // 0x0518(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UShipInterpreter*                                    m_shipInterpreter;                                       // 0x0520(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTechTreeInterpreter*                                m_techTreeInterpreter;                                   // 0x0528(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOnboardingInterpreter*                              m_onboardingInterpreter;                                 // 0x0530(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPS4SystemsInterpreter*                              m_PS4SystemsInterpreter;                                 // 0x0538(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNotificationsInterpreter*                           m_notificationsInterpreter;                              // 0x0540(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGameDownloadInterpreter*                            m_gameDownloadInterpreter;                               // 0x0548(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPopupManager*                                       m_popupManager;                                          // 0x0550(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UYImageLoader*                                       m_imageLoader;                                           // 0x0558(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULoginGateInterpreter*                               m_loginGateInterpreter;                                  // 0x0560(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULegalItemsInterpreter*                              m_legalItemsInterpreter;                                 // 0x0568(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UIdleKickInterpreter*                                m_idleKickInterpreter;                                   // 0x0570(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L6TI[0x8];                                   // 0x0578(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnHangarStateChanged(EHangarState hangarState);
		void NavigateToTab(EUI_Screen screen);
		void NavigateToScreen(EUI_Screen screen);
		void LoadHangar();
		void HangarScreenTransitioned(EUI_Screen previousScreen, EUI_Screen newScreen);
		void HangarPreviewStarted();
		void HangarPreviewEnded();
		void HangarLoadFinished();
		void HandleShipPreviewFinalized();
		void HandleOnControllerConnectionChange(bool isConnected, int32_t userId, int32_t userIndex);
		void HandleLogout();
		void HandleLogin();
		class UPopupManager* GetPopupManager();
		class UYImageLoader* GetImageLoader();
		class UYCtAManagerInterface* GetCtAManagerInterface();
		void CheckLoginStreakPopup();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.ActivateBattleBonusConfirmationPopupData
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UActivateBattleBonusConfirmationPopupData : public UPopupData
	{
	public:
		EYFleetType                                                m_fleetType;                                             // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EG90[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.CustomMatchLobbyFleetSelectPopupData
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UCustomMatchLobbyFleetSelectPopupData : public UPopupData
	{
	public:
		TArray<struct FUICustomMatchLobbyFleetAvailabilityData>    m_fleetAvailability;                                     // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.GpToCreditsDetailsPopupData
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UGpToCreditsDetailsPopupData : public UPopupData
	{
	public:
		int32_t                                                    m_gpCost;                                                // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_creditsGained;                                         // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.LoginStreakPopupData
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class ULoginStreakPopupData : public UPopupData
	{
	public:
		int32_t                                                    loginStreakLength;                                       // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    creditsAwarded;                                          // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    gpAwarded;                                               // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    freeXpAwarded;                                           // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.PopupUpsellData
	 * Size -> 0x02A0 (FullSize[0x0308] - InheritedSize[0x0068])
	 */
	class UPopupUpsellData : public UPopupData
	{
	public:
		class FText                                                itemName;                                                // 0x0068(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                itemPrice;                                               // 0x0080(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              itemImage;                                               // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMarketItemUIData>                           purchaseButtons;                                         // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FMarketItemUIData                                   previousItem;                                            // 0x00B8(0x0250) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.WebPopupData
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UWebPopupData : public UPopupData
	{
	public:
		class FString                                              URL;                                                     // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_BattleBonusWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_BattleBonusWidget : public UUI_DreadWidget
	{
	public:
		void RegisterListeners();
		void OnFleetUpdated(bool Result);
		void OnBattleBonusPurcahsed(bool Result);
		bool HasBattleBonus(EYFleetType fleetType);
		int32_t GetShipXpBonus(EYFleetType fleetType);
		int32_t GetFreeXpBonus(EYFleetType fleetType);
		int32_t GetCreditsBonus(EYFleetType fleetType);
		int32_t GetBattleBonusCreditsCost(EYFleetType fleetType);
		float GetBattleBonusCooldown(EYFleetType fleetType);
		void AttemptBattleReadinessPurchase(EYFleetType fleetType);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_ChatMessageListWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_ChatMessageListWidget : public UUI_DreadWidget
	{
	public:
		void RegisterWidget();
		class FString GetGroomedChatMessage(const struct FChatMessageDefinition& message);
		TArray<struct FChatMessageDefinition> GetChatMessages();
		void ChatMessagesChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_ChatWidget
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class UUI_ChatWidget : public UUI_DreadWidget
	{
	public:
		unsigned char                                              UnknownData_30BH[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (PADDING)

	public:
		void ShowChatWidgetRequested(int32_t roomIndex);
		void ShowChatWidget(int32_t roomIndex);
		void SetSelectedRoomIndex(int32_t index);
		void SetIsVisible(bool IsVisible);
		void SendChatMessage(const class FText& message);
		void RegisterWidget();
		bool IsTextChatEnabled();
		void HandleChatRoomCreated(int32_t roomIndex, bool shouldShow);
		void HandleChatMessageReceived(int32_t roomIndex);
		int32_t GetSelectedRoomIndex();
		bool GetIsVisible();
		TArray<struct FChatRoomDefinition> GetCurrentChatRooms();
		void CloseChatRoom(int32_t index);
		void ChatRoomsChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_CustomMatchPlayerCardWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_CustomMatchPlayerCardWidget : public UUI_DreadWidget
	{
	public:
		struct FPlayerUIData GetPlayerUiData();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_CustomMatchPlayerInviteCardWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_CustomMatchPlayerInviteCardWidget : public UUI_DreadWidget
	{
	public:
		struct FPlayerUIData GetPlayerUiData();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_DreadScreen
	 * Size -> 0x0038 (FullSize[0x0278] - InheritedSize[0x0240])
	 */
	class UUI_DreadScreen : public UUI_DreadWidget
	{
	public:
		class FScriptMulticastDelegate                             OnTransitionInCompleteEvent;                             // 0x0240(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTransitionOutCompleteEvent;                            // 0x0250(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTransitionOutCompleteWithScreenEvent;                  // 0x0260(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EUI_Screen                                                 m_Screen;                                                // 0x0270(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0L2Q[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (PADDING)

	public:
		void TransitionOutComplete();
		void TransitionInComplete();
		void StartTransitionOut();
		void StartTransitionIn();
		void OnTransitionOut();
		void OnTransitionIn();
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void OnChangeTab(EUI_Screen screen);
		void HandleNavigationEvent(EUI_MenuActions GamePad_Input);
		EUI_Theme GetCurrentUITheme();
		void ChangeTab(EUI_Screen screen);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_ManageFleetScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_ManageFleetScreen : public UUI_DreadScreen
	{
	public:
		bool ShouldBlockForHavocMode();
		void SetFleetFlagship(int32_t shipID, int32_t loadoutindex);
		void SetCurrentShipId(int32_t shipID);
		void RemoveShipFromFleet(int32_t shipID);
		void OnMatchmakingStopped();
		void OnMatchmakingStarted();
		void OnLoadoutRemovedFromFleet(bool Result);
		void OnLoadoutAddedToFleet(bool Result);
		void OnFleetUpdated();
		bool HasBattleBonus();
		TArray<int32_t> GetShipBonuses(int32_t shipTier);
		EYFleetType GetFleetType();
		int32_t GetFleetFlagshipID();
		TArray<struct FUIShipData> GetFleetData();
		int32_t GetFlagshipLoadoutIndex();
		bool CanStartMatchmaking();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_CustomMatchSettingsWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_CustomMatchSettingsWidget : public UUI_DreadWidget
	{
	public:
		void SettingsChanged(const struct FYCustomMatchScreenSettings& Settings);
		void SetTeamSize(int32_t teamSize);
		void SetMap(const class FText& Map);
		void SetGameMode(const class FText& GameMode);
		void SetFillTeamWithAiFlag(EYCustomMatchTeam Team, bool fillWithAi);
		void RoomStateChanged(EYCustomRoomState oldRoomState, EYCustomRoomState newRoomState);
		bool IsLocalPlayerHost();
		int32_t GetTeamSize();
		EYCustomRoomState GetRoomState();
		int32_t GetMinTeamSize();
		class UTexture2D* GetMapTexture();
		TArray<struct FUIAccordionFilterCategoryOptionData> GetMapFilterOptions();
		int32_t GetMapFilterIndex(const class FText& Map);
		struct FStringAssetReference GetGameModeIconPath();
		TArray<struct FUIAccordionFilterCategoryOptionData> GetGameModeFilterOptions();
		int32_t GetGameModeFilterIndex(const class FText& GameMode);
		void DoRefresh();
		void DataReady();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.I_CustomMatchScreen
	 * Size -> 0x00A8 (FullSize[0x0320] - InheritedSize[0x0278])
	 */
	class UI_CustomMatchScreen : public UUI_DreadScreen
	{
	public:
		unsigned char                                              UnknownData_4GJ0[0xA8];                                  // 0x0278(0x00A8) MISSED OFFSET (PADDING)

	public:
		void UserDataRefreshed();
		void StartMatchCountdown();
		void StartMatch();
		void SetFleetType(EYFleetType fleetType);
		void SetDefaultCustomRoomSettings(class UYCustomMatchSettingsDataAsset* defaultSettings);
		void SendInviteToFriends(TArray<struct FFriendsUserData> friendsList);
		void RoomStateChanged(EYCustomRoomState oldRoomState, EYCustomRoomState newRoomState);
		void RemoveUserFromTeamSlot(EYCustomMatchTeam Team, int32_t SlotIndex);
		void MoveUserToOtherTeam(EYCustomMatchTeam Team, int32_t SlotIndex);
		bool IsUserHost(EYCustomMatchTeam Team, int32_t SlotIndex);
		bool IsLocalPlayerHost();
		bool IsFillTeamWithAiFlagSet(EYCustomMatchTeam Team);
		void HandleOnPlayerSpeakingUpdated(const struct FSquadVoiceData& UpdateData);
		TArray<struct FPlayerUIData> GetTeamUserData(EYCustomMatchTeam Team);
		class FText GetTeamSlotUserName(EYCustomMatchTeam Team, int32_t SlotIndex);
		EYCustomRoomSlotType GetTeamSlotType(EYCustomMatchTeam Team, int32_t SlotIndex);
		EYCustomRoomState GetRoomState();
		TArray<EFriendOptionButton> GetListOfOptionsForPlayer(EYCustomMatchTeam Team, int32_t SlotIndex);
		TArray<struct FFriendsUserData> GetFriendsAvailableToInvite();
		void FleetTypeSelected(EYFleetType oldFleetType, EYFleetType newFleetType);
		void FleetTypeChanged(EYFleetType oldFleetType, EYFleetType newFleetType);
		void FleetSelectReady(EYFleetType maxFleetType);
		void ExitFleetSelect();
		void EnterFleetSelect();
		void DoFriendOptionActionOnUser(const class FName& userId, EFriendOptionButton option);
		void DataReady();
		void CountdownTimerUpdated(int32_t timeLeft);
		void CloseScreen(EYCustomMatchScreenCloseReason reason);
		bool CanRemoveUserFromTeamSlot(EYCustomMatchTeam Team, int32_t SlotIndex);
		bool CanMoveUserToOtherTeam(EYCustomMatchTeam Team, int32_t SlotIndex);
		void CancelMatchCountdown();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_ShipFilterWidget
	 * Size -> 0x0050 (FullSize[0x0290] - InheritedSize[0x0240])
	 */
	class UUI_ShipFilterWidget : public UUI_DreadWidget
	{
	public:
		unsigned char                                              UnknownData_4E5C[0x10];                                  // 0x0240(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUIAccordionFilterData                              m_accordionFilterData;                                   // 0x0250(0x0040) Transient, NativeAccessSpecifierPrivate

	public:
		void SelectCategoryFilter(int32_t categoryIndex, int32_t filterIndex);
		struct FUIShipData GetUIShipData(const struct FYUIShipManufacturerTechItemData& shipTechData);
		struct FUIAccordionFilterData GetCategoryFilters();
		TArray<struct FYUIShipManufacturerTechItemData> FilterShipsByLoadouts(TArray<class UYShipLoadoutMmogbrain*> shipLoadouts);
		TArray<struct FYUIShipManufacturerTechItemData> FilterShipsByDataStructs(TArray<struct FYUIShipManufacturerTechItemData> shipDataArray);
		bool DoesShipPassCurrentFilter(const struct FYUIShipManufacturerTechItemData& shipLoadout);
		bool DoesLoudoutPassCurrentFilter(class UYShipLoadoutMmogbrain* shipLoadout, struct FYUIShipManufacturerTechItemData* shipData);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_AddShipToFleetScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_AddShipToFleetScreen : public UUI_DreadScreen
	{
	public:
		void SetSelectedShip(int32_t shipID);
		TArray<int32_t> GetShipBonuses(int32_t shipTier);
		EYFleetType GetFleetType();
		class FText GetCurrentFleetTypeText();
		TArray<struct FYUIShipManufacturerTechItemData> GetAvailableShipsForActiveFleetType();
		bool AreMoreShipsAvailable();
		void AddShipToFleet(int32_t shipID);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_BugReportScreen
	 * Size -> 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
	 */
	class UUI_BugReportScreen : public UUI_DreadScreen
	{
	public:
		class FString                                              m_customerSupportURL;                                    // 0x0278(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SubmitBugReport(const class FText& issueType, const class FText& description, const class FText& title);
		void HandleOnBugReportSubmittedResult(bool succeeded);
		TArray<struct FUIAccordionFilterCategoryOptionData> GetIssueDropdownOptions();
		class FString GetCustomerSupportURL();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_CaptainCustomizationScreen
	 * Size -> 0x0030 (FullSize[0x02A8] - InheritedSize[0x0278])
	 */
	class UUI_CaptainCustomizationScreen : public UUI_DreadScreen
	{
	public:
		unsigned char                                              UnknownData_LG7I[0x30];                                  // 0x0278(0x0030) MISSED OFFSET (PADDING)

	public:
		void StopCaptainItemPreview(bool bKeepCaptainInPreview);
		void ShowEquippableItemWidgets(bool IsVisible);
		void ShowEquippableItemDescriptionWidget(bool IsVisible);
		bool RequestViewMarketBundle();
		bool RequestSetCharacterGender(bool isFemale);
		bool RequestSelectEquippableItem(int32_t clickedSlotItemId);
		bool RequestSelectCategoryItem(int32_t clickedCategoryItemId);
		bool RequestEquipSelectedItem();
		bool RequestBuySelectedItem();
		void RefreshEquippedItemWidgets(TArray<struct FMarketItemUIData> equippedItems);
		void RefreshEquippableItemWidgets(TArray<struct FMarketItemUIData> equippableItems);
		void RefreshEquippableItemDescriptionWidget(const struct FMarketItemUIData& equippableItem);
		void RefreshCharacterGenderWidgets(bool isFemale);
		bool IsItemOwnedByPlayer(int32_t itemID);
		bool IsItemEquipped(int32_t itemID);
		bool IsInTutorialMode();
		struct FPlayerUIData GetPlayerUiData();
		EYCurrency GetCurrencyTypeForItem(int32_t itemID);
		int32_t GetCostForItem(int32_t itemID);
		void FinalizeFirstTimeCaptainCustomization();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_CareerProgressionScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_CareerProgressionScreen : public UUI_DreadScreen
	{
	public:
		void RequestPinCareerProgressionGoal(const class FName& goalId);
		void RequestClaimCareerProgressionGoal(const class FName& goalId);
		void HandleCareerProgressionRewardClaimHandled(const class FName& goalId, bool success);
		void HandleCareerProgressionDataUpdated();
		void HandleCareerProgressionCategoryUnlocked(EYGoalCategory unlockedCategory);
		struct FCareerProgressionUIData GetCareerProgressionUIData();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_ContractsScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_ContractsScreen : public UUI_DreadScreen
	{
	public:
		void RerollContract(const class FString& questId);
		void HandleOnContractsUpdated();
		float GetTimeUntilNextContractUpdate();
		int32_t GetRankRequiredToUnlockContracts();
		TArray<struct FContractData> GetListOfContracts();
		bool DoesPlayerHaveEliteStatus();
		bool AreContractsUnlocked();
		void AcknowledgeCompletedContract(const class FString& questId);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_SubPanel
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_SubPanel : public UUI_DreadWidget
	{
	public:
		void Show(bool ShowPanel);
		void SetData(class UObject* Data);
		void OnShow();
		void OnInputReceived(const struct FKey& Key);
		void OnHide();
		void OnDataReceived(class UObject* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_CtAWidget
	 * Size -> 0x0020 (FullSize[0x0298] - InheritedSize[0x0278])
	 */
	class UUI_CtAWidget : public UUI_DreadScreen
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCtAClose;                                       // 0x0278(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCtAClosed;                                             // 0x0288(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic

	public:
		void OnRequestCtAClose__DelegateSignature(class UUI_CtAWidget* CtAWidget);
		void OnCtAClosed__DelegateSignature(class UUI_CtAWidget* CtAWidget);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_DreadPopup
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_DreadPopup : public UUI_DreadScreen
	{
	public:
		void SetPopupData(class UPopupData* PopupData);
		void OnPopupDataSet(class UPopupData* PopupData);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_BattleBonusPurchasePopup
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_BattleBonusPurchasePopup : public UUI_DreadPopup
	{
	public:
		int32_t GetShipXpBonus(EYFleetType fleetType);
		int32_t GetFreeXpBonus(EYFleetType fleetType);
		int32_t GetCreditsBonus(EYFleetType fleetType);
		int32_t GetBattleBonusCreditsCost(EYFleetType fleetType);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_UpsellPopup
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_UpsellPopup : public UUI_DreadPopup
	{
	public:
		void OnMarketPurchaseComplete(EYPurchaseResult purchaseResult);
		bool HandlePurchase(const struct FMarketItemUIData& marketItem);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_EditShipScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_EditShipScreen : public UUI_DreadScreen
	{
	public:
		void StartTransitionOut();
		void StartTransitionIn();
		void SetLoadoutName(EYLoadoutCategory loadoutCategory, const class FString& Name);
		void SetLoadoutCategory(EYLoadoutCategory loadoutCategory);
		bool IsLoadoutNameEditable();
		void HandleResearchCompleted(bool wasSuccessful);
		void HandlePurchaseCompleted(bool wasSuccessful);
		class FText GetLoadoutName(EYLoadoutCategory loadoutCategory);
		int32_t GetFreeXP();
		int32_t GetCurrentShipXp();
		struct FYUIShipManufacturerTechItemData GetCurrentShipItemData();
		bool CanCurrentShipHaveLoadoutsBeEdited();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_FindNewFriendsScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_FindNewFriendsScreen : public UUI_DreadScreen
	{
	public:
		void StartSearchForUsers(const class FText& filterText);
		void SendFriendInvites(TArray<class FName> newFriendInviteIds);
		void OnSearchForUsersResult(TArray<struct FFindNewFriendUserData> foundUsers);
		void HandleOnShow();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_FleetSelection
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_FleetSelection : public UUI_DreadScreen
	{
	public:
		void SetSelectedFleetType(EYFleetType fleetType);
		void OnBattleReadinessPurchaseApproved(bool purchaseSuccessful);
		EYFleetType GetHighestUnlockedFleet();
		void AttemptBattleReadinessPurchase(EYFleetType fleetType);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_GameModeLaunchScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_GameModeLaunchScreen : public UUI_DreadScreen
	{
	public:
		void SetSelectedFleetType(EYFleetType fleetType);
		void OnMatchmakingStopped();
		void OnMatchmakingStarted();
		EYGameModeType GetSelectedGameModeType();
		class FText GetMatchmakingGameModeText();
		class FText GetMatchmakingGameModeDescText();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_GameModeSelectionScreen
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UUI_GameModeSelectionScreen : public UUI_DreadScreen
	{
	public:
		bool                                                       m_bUseNewPlayBranchFlow;                                 // 0x0278(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XHYG[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (PADDING)

	public:
		void StartTutorial();
		bool ShouldUseNewPlayBranchFlow();
		void SetGameMode(const struct FYMenuGameModeDefinition& GameMode);
		void RequestSaveFavorites();
		TArray<struct FYMenuGameModeDefinition> GetAvailableGameModes();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_HomeLoadingScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_HomeLoadingScreen : public UUI_DreadScreen
	{
	public:
		void StartTutorial();
		void StartTrainingMatch();
		void DownloadProgressUpdated(float currentProgressPercentage);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_HomeScreen
	 * Size -> 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
	 */
	class UUI_HomeScreen : public UUI_DreadScreen
	{
	public:
		class FString                                              m_customerSupportURL;                                    // 0x0278(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void StartQuickPlayMatchmaking();
		void ShowContractCompleted();
		void ShowCaptainProgressionCompleted();
		bool ShouldShowQuickplayButton();
		bool ShouldShowExitButton();
		bool ShouldAttemptToPurchaseQuickplayBattleBonus();
		void RefreshCaptainProgressionNotification();
		void OnShowPromptForReturnAfterDisconnect();
		void OnBattleReadinessPurchaseApproved(bool purchaseSuccessful);
		void MarketItemSelected(const struct FMarketItemUIData& marketItem);
		void MarketDataUpdated();
		void HandleResponseToReturnAfterDisconnectPrompt(bool reconnectToMatch);
		EYFleetType GetQuickplayFleetType();
		TArray<struct FMarketItemUIData> GetFeaturedMarketItems();
		class FString GetCustomerSupportURL();
		void ExitGame();
		void AttemptBattleReadinessPurchase();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_IdleKickScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_IdleKickScreen : public UUI_DreadScreen
	{
	public:
		void Reconnect();
		void ExitGame();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_Leaderboard_Screen
	 * Size -> 0x0100 (FullSize[0x0378] - InheritedSize[0x0278])
	 */
	class UUI_Leaderboard_Screen : public UUI_DreadScreen
	{
	public:
		unsigned char                                              UnknownData_LWWB[0x100];                                 // 0x0278(0x0100) MISSED OFFSET (PADDING)

	public:
		void UserDataRefreshed();
		void StartTransitionOut();
		void StartTransitionIn();
		void SocialListUpdated();
		void RequestSocialUpdate();
		void RequestLeaderboardData(EYGameModeType GameMode, int32_t Timespan, EYFleetType fleetType, bool Previous);
		void HandleLeaderboardDataRecieved();
		TArray<EFriendOptionButton> GetListOfOptionsForPlayer(const struct FLeaderboardUIEntry& entry);
		TArray<struct FPlayerUIData> GetLeaderboardUserData();
		struct FLeaderboardUIData GetLeaderboardData();
		void DoFriendOptionActionOnUser(const class FName& userId, EFriendOptionButton option);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_LegalScreen
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UUI_LegalScreen : public UUI_DreadScreen
	{
	public:
		unsigned char                                              UnknownData_665O[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (PADDING)

	public:
		void StartTransitionOut();
		void StartTransitionIn();
		bool ShouldDisplayAnotherLegalItem();
		void RejectCurrentLegalDocument();
		void QuitLegalScreen();
		void NavigateToNextScreen();
		bool IsCurrentLegalItemAttestation();
		bool IsAcceptanceRequiredToProceed();
		void HandlePlayerDataAvailable();
		void HandleOnboardingInitialized();
		void HandleLegalItemActionProcessed();
		class FText GetCurrentLegalItemTitle();
		class FText GetCurrentLegalItemBody();
		void ExitGame();
		void EnterGame();
		void AdvanceLegalItemQueue();
		void AcceptCurrentLegalDocument();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_LoginGateScreen
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UUI_LoginGateScreen : public UUI_DreadScreen
	{
	public:
		unsigned char                                              UnknownData_DKH7[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (PADDING)

	public:
		void StartTransitionOut();
		void StartTransitionIn();
		bool ShouldShowQueueText();
		bool ShouldShowMessage();
		bool ShouldShowEstimatedWait();
		bool ShouldShowCheckingProgressText();
		bool ShouldShowBurstSmoothingText();
		void SetupLoginGateScreen();
		void QuitLoginGate();
		void NavigateToNextScreen();
		void HandlePlayerDataAvailable();
		void HandleOnboardingInitialized();
		class FText GetQueuePositionAsText();
		class FText GetLoginGateTitle();
		EUILoginGateMessageType GetLoginGateMessageState();
		class FText GetEstimatedWaitTimeAsText();
		EUILoginGateState GetCurrentLoginState();
		class FText GetCheckingProgressTimeAsText();
		void ExitGame();
		void EnterGame();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_LoginScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_LoginScreen : public UUI_DreadScreen
	{
	public:
		void SubmitLogin(const class FString& user, const class FString& password, bool rememberUsername);
		void OnLoginResultReceived();
		class FString GetUsername();
		class FString GetPassword();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_LoginScreen_PS4
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UUI_LoginScreen_PS4 : public UUI_DreadScreen
	{
	public:
		unsigned char                                              UnknownData_M6HA[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (PADDING)

	public:
		void TryCreateSession();
		void ShowReturnFromDisconnectMessages();
		void SetPolicyContent(const struct FPolicyContentResultData& policyData);
		void SessionRequestFailed();
		void RequestUserProfileSignIn();
		void RequestTermsOfUse();
		void RequestSonyEmail();
		void RequestPrivacyPolicy();
		void RequestLinkAccount(const class FString& email, const class FString& password);
		void RequestForceLogin();
		void RequestCreateAccount(const class FString& email, bool allowPromotions);
		bool IsSceaBuild();
		void HandleRequestProfileSignInComplete(const struct FRequestProfileSignInResultData& signInResultData);
		void HandleRequestLinkAccountComplete(const struct FPS4RequestResultData& Result);
		void HandleRequestCreateAccountComplete(const struct FPS4RequestResultData& Result);
		void HandleOnRequestSonyEmailComplete(const struct FRequestSonyEmailResultData& emailResultData);
		void HandleOnReceivePlayerEmail(const class FString& emailAddress);
		void HandleOnAcceptLegalDocumentComplete(bool successful);
		class FString GetPSNId();
		struct FLoginScreenErrorPopupData GetErrorDisplayInfo(EYTitleScreenError screenError);
		void AcceptLegalDocument(const class FString& documentType, int32_t Version);
		void AcceptAllLegalDocuments(TArray<struct FLegalDocumentData> documents);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_ManufacturersScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_ManufacturersScreen : public UUI_DreadScreen
	{
	public:
		void SetSelectedManufacturer(int32_t manufacturerId);
		TArray<struct FYUIManufacturerInformationEntry> GetManufacturersData();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_ManufacturerTechTreeScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_ManufacturerTechTreeScreen : public UUI_DreadScreen
	{
	public:
		void SetSelectedShip(int32_t shipID);
		void InitializeTechTreePaths(TArray<struct FUITechTreeShipNode> techTreePathNodes);
		void InitializeTechTree(class UUI_TechTreeWidget* Widget);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_MarketScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_MarketScreen : public UUI_DreadScreen
	{
	public:
		bool RequestMarketItemPurchase(const struct FMarketItemUIData& marketItem);
		bool PlayerHasSufficientFundsToPurchaseItem(const struct FMarketItemUIData& marketData);
		void OnXpConversionRequested();
		void OnXpConversionDataUpdated(bool Result);
		void OnPlayerCurrencyAmountsUpdated();
		void MarketItemSelected(const struct FMarketItemUIData& marketItem);
		void GpPackMarketItemSelected(const struct FMarketItemUIData& marketItem);
		EYUICurrency GetUICurrencyTypeFromMarketItemUIData(const struct FMarketItemUIData& marketData);
		EYUICurrency GetUICurrencyTypeFromCurrency(EYCurrency currency);
		int32_t GetPriceValueFromMarketItemUIData(const struct FMarketItemUIData& marketData);
		struct FPlayerCurrencyAmountsData GetPlayerCurrencyAmounts();
		EUIColorTheme GetColorTheme(const struct FMarketItemUIData& marketData);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_MarketBundleDetailsScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_MarketBundleDetailsScreen : public UUI_DreadScreen
	{
	public:
		void RequestPreview(int32_t itemID);
		bool RequestMarketItemPurchase(const struct FMarketItemUIData& marketItem);
		bool PlayerHasSufficientFundsToPurchaseItem(const struct FMarketItemUIData& marketData);
		void OnMarketPurchaseComplete(EYPurchaseResult purchaseResult);
		struct FPlayerCurrencyAmountsData GetPlayerCurrencyAmounts();
		class UTexture2D* GetMarketBundleItemTexture(const struct FYMenuItemData& marketItem);
		void GetMarketBundleItemDescriptions(int32_t itemID, class FText* outOfferDescription, class FText* outCatalogDescription);
		struct FYItemUIData GetMarketBundleItemData(const struct FYMenuItemData& marketItem);
		struct FMarketItemUIData GetMarketBundleData();
		EYCharacterGender GetCaptainCharacterGender();
		bool CanShipItemBeEquipped(int32_t itemID);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_MarketShipDetailsScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_MarketShipDetailsScreen : public UUI_DreadScreen
	{
	public:
		struct FMarketItemUIData GetMarketItemData();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_ModuleDetailsScreen
	 * Size -> 0x0048 (FullSize[0x02C0] - InheritedSize[0x0278])
	 */
	class UUI_ModuleDetailsScreen : public UUI_DreadScreen
	{
	public:
		class FScriptMulticastDelegate                             OnAsyncVideoLoaded;                                      // 0x0278(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TAssetPtr<class UFileMediaSource>                          m_movieMediaSource;                                      // 0x0288(0x001C) ELEMENT_SIZE_MISMATCH BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_28FS[0x4];                                   // 0x02A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FStringAssetReference                               m_movieAsset;                                            // 0x02A8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XH3Q[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void StartTransitionOut();
		void StartTransitionIn();
		void SetSelectedModule(int32_t moduleId);
		void ResearchModule();
		void PurchaseModule();
		void OnShipXpUpdate(int32_t shipXp);
		void OnAsyncVideoLoaded__DelegateSignature(class UFileMediaSource* VideoMovieSource);
		bool IsModuleLockedPrecastLoadout(int32_t moduleId);
		bool IsModuleEquippedOnShip(int32_t moduleId);
		bool IsCurrentShipOwned();
		bool IsCurrentModuleOwned();
		bool IsCurrentModuleEquippedOnShip();
		bool HasEnoughCurrencyToResearchCurrentModule();
		bool HasEnoughCurrencyToPurchaseCurrentModule();
		void HandleResearchCompleted(bool wasSuccessful);
		void HandlePurchaseCompleted(bool wasSuccessful);
		void HandlePlayerPurchasesListUpdated();
		void HandleEquipCompleted(bool wasSuccessful);
		TArray<struct FUIGenericButtonModuleData> GetVanityItemData(EYUILoadoutItemType loadoutSlot);
		struct FYItemUIData GetUiDataForItem(int32_t itemID);
		struct FYItemUIData GetUiDataForCurrentItem();
		TArray<struct FUIGenericButtonModuleData> GetTechTreeData();
		int32_t GetTechItemsRequiredForShip();
		int32_t GetTechItemsRequiredForModule();
		int32_t GetTechItemsOwnedForShip();
		struct FYUIShipManufacturerTechItemData GetShipData();
		int32_t GetSelectedModule();
		int32_t GetRawShipXpCost();
		struct FYUITechTreeItemPurchaseData GetPurchaseData();
		struct FShipCurrencyAmountsData GetPlayerCurrencyAmounts();
		int32_t GetOwnedTechTreeModuleCountForCurrentShip();
		class UTexture2D* GetModuleStillFromPath(const class FString& imagePath, const class FString& directory);
		EYTechTreeItemState GetModulePurchaseState(int32_t itemID);
		class FString GetModuleDescription(const struct FYUITechTreeItemPurchaseData& moduleData);
		struct FUIGenericButtonModuleData GetModuleData();
		EYUILoadoutItemType GetItemType(int32_t itemID);
		EYTechTreeItemState GetCurrentModulePurchaseState();
		EYCurrency GetCurrentModuleOfferCurrencyType();
		int32_t GetCurrentModuleId();
		EYUILoadoutItemType GetCurrentItemType();
		int32_t GetCreditsCost();
		int32_t GetAdjustedShipXpCost();
		int32_t GetAdjustedFreeXpCost();
		void EquipModule();
		bool DoesModuleRequireProgressToUnlock();
		bool DoesCurrentModuleBelongToAnyOwnedShip();
		bool CanPurchaseModule(int32_t itemID);
		bool CanPurchaseCurrentModule();
		void AsyncLoadVideoFromPath(const class FString& videoPath, const class FString& directory);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_NotificationsScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_NotificationsScreen : public UUI_DreadScreen
	{
	public:
		void RegisterWidget();
		void HandleNotificationsChanged();
		void HandleNotificationActionSelected(class UNotificationData* NotificationData, ENotificationButtonType notificationAction);
		TArray<class UNotificationData*> GetNotificationsByType(EYAnnouncementType notificationType);
		class UNotificationData* GetNotification(EYAnnouncementType notificationType, int32_t notificationId);
		class UNotificationData* GetCurrentNotification();
		class FText GetCategoryName(EYAnnouncementType notificationType);
		struct FUIAccordionFilterData GetCategoryFilters();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_OwnedShipsScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_OwnedShipsScreen : public UUI_DreadScreen
	{
	public:
		void SetSelectedShip(int32_t shipID);
		TArray<class UYShipLoadoutMmogbrain*> GetOwnedShipLoadouts();
		TArray<struct FYUIShipManufacturerTechItemData> GetOwnedShipDataStructs();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_PersistentScreen
	 * Size -> 0x0020 (FullSize[0x0298] - InheritedSize[0x0278])
	 */
	class UUI_PersistentScreen : public UUI_DreadScreen
	{
	public:
		class UYHUDWidget_ComWindow*                               m_ComWindowWidget;                                       // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_VOTriggerSearchForBattle;                              // 0x0280(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVX3[0x10];                                  // 0x0288(0x0010) MISSED OFFSET (PADDING)

	public:
		bool XpConversionNotificationCheck(float xpMultiplier, int32_t minTier);
		void StartTransitionOut();
		void StartTransitionIn();
		void StartQuickPlayMatchmaking();
		void StartMatchmaking();
		EYFleetType SetPrevFleetType();
		EYFleetType SetNextFleetType();
		void SetFavoriteMode(EYGameModeType GameMode, bool isFavorite);
		void RegisterWidget();
		void OnServerStarting();
		void OnMmogConnectionLost();
		void OnMatchmakingTimerStopped();
		void OnMatchmakingTimerStarted();
		void OnMatchmakingStarted();
		void OnMatchmakingFailed();
		void OnMatchmakingAverageWaitTimeAvailable(int32_t waitTimeSeconds);
		void OnCTATriggered(class UYCtA* cta);
		void OnCTAManagerReady();
		void OnCheckCanReturnToMatch(bool CanReturnToMatch);
		void OnBattleServerShutdown();
		void OnAnnouncementsChanged__DelegateSignature();
		bool IsTutorialMatchCompleted();
		bool IsMatchmakingInProgress();
		bool IsFirstTimeCaptainCustomizationCompleted();
		bool IsFavoriteMode(EYGameModeType GameMode);
		bool IsBattleServerStarting();
		bool HasGpToConvertAllShipXp(int32_t minTier);
		void HandleSquadUpdated();
		void HandlePlayerCardUpdated();
		void HandleOnPlayerSpeakingUpdated(const struct FSquadVoiceData& UpdateData);
		void HandleNotificationsChanged();
		void HandleNotificationActionSelected(int32_t notificationId, ENotificationButtonType notificationAction);
		TArray<struct FSquadUserData> GetSquadData();
		int32_t GetNumNotifications();
		class FText GetNavigationContextFleetTier();
		class FText GetMatchmakingGameMode();
		class FText GetMatchmakingFleetTier();
		class UNotificationData* GetCurrentNotification();
		EYFleetType GetCurrentFleetType();
		class UYCtAManagerInterface* GetCtAManagerInterface();
		void ClearCurrentNotification();
		bool CanStartQuickStartMatchmaking();
		bool CanStartMatchmaking();
		bool CanReturnToMatch();
		void CancelMatchmaking();
		bool CanBeFavorited(EYGameModeType GameMode);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_RibbonsScreen
	 * Size -> 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
	 */
	class UUI_RibbonsScreen : public UUI_DreadScreen
	{
	public:
		TArray<struct FPlayerRibbonButtonData>                     m_RibbonDataList;                                        // 0x0278(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		TArray<struct FPlayerRibbonButtonData> GetRibbonDataList();
		TArray<struct FPlayerRibbonButtonData> CreateRibbonsButtonWidgetsAndPopulateDataList(class UClass* buttonWidgetClass);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_RootFrontendScreen
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UUI_RootFrontendScreen : public UUI_DreadScreen
	{
	public:
		class UUI_NavigationWidget*                                m_navigationHandler;                                     // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetPersistentScreenVisible(bool Visible);
		void SetHangarScrimVisible(bool Visible);
		bool IsMmogConnected();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_SettingsScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_SettingsScreen : public UUI_DreadScreen
	{
	public:
		struct FYUIUserSetting UpdateSettingValue(const struct FYUIUserSetting& settingToUpdate, float newValue);
		void ResetAllSettingsToDefault();
		void RequestSettingsChange(TArray<struct FYUIUserSetting> Audio, TArray<struct FYUIUserSetting> Controls, TArray<struct FYUIUserSetting> gameSettings, TArray<struct FYUIUserSetting> Graphics, TArray<struct FYUIUserSetting> advancedGraphics);
		void RequestSettingChangePreview(EYUISettingCategory uniqueCategory, EYUISettingCategory groupCategory, int32_t GroupIndex, float Value);
		void RequestKeybindChange(const class FString& ActionName, const struct FKey& Key, bool shiftDown, bool altDown, bool ctrlDown);
		void RequestHotKeysReset();
		void ReloadSavedSettings();
		void OnSettingsUpdated();
		void OnHotKeysUpdated();
		TArray<struct FUISettingsGroupData> GetSettingsGroupData(ESettingsScreenGroup Group);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_ShipDetailsScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_ShipDetailsScreen : public UUI_DreadScreen
	{
	public:
		struct FYUITechTreeItemPurchaseData GetPurchaseData(int32_t itemID);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_ShipTechTreeScreen
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UUI_ShipTechTreeScreen : public UUI_DreadScreen
	{
	public:
		struct FVector2D                                           m_statsPanelOffset;                                      // 0x0278(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSelectedShip(int32_t shipItemId);
		void SetSelectedModule(int32_t moduleItemId);
		void RegisterWidget();
		void OnShipXpUpdate(int32_t shipXp);
		bool IsHeroShip(const struct FYUIShipManufacturerTechItemData& shipData);
		void InitializeTechTree(int32_t numModuleRows);
		void HandleTechTreeDataReceived(TArray<struct FUIGenericButtonModuleData> moduleUiData, int32_t techTreeRow);
		void HandleShipProgressionDataReceived(TArray<struct FYUIShipManufacturerTechItemData> shipProgressionUiData);
		void HandleShipDataReceived(const struct FYUIShipManufacturerTechItemData& shipUiData);
		struct FYItemUIData GetUiDataForItem(int32_t itemID);
		int32_t GetShipTier(const struct FYUIShipManufacturerTechItemData& shipData);
		class FText GetShipName(const struct FYUIShipManufacturerTechItemData& shipData);
		class FString GetShipClassificationIconPath(const struct FYUIShipManufacturerTechItemData& shipData);
		struct FVector2D GetPositionForStatsPopup(const struct FVector2D& popupSize, class UUI_DreadWidget* moduleWidget);
		struct FShipCurrencyAmountsData GetPlayerCurrencyAmounts();
		EYUILoadoutItemType GetItemType(int32_t itemID);
		class FString GetClassificationIconPathForType(EYUILoadoutItemType itemType);
		class FString GetClassificationIconPathForItemId(int32_t itemID);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_SocialScreen
	 * Size -> 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
	 */
	class UUI_SocialScreen : public UUI_DreadScreen
	{
	public:
		void UpdateSquadPlayerCard();
		void SocialListUpdated();
		bool IsVirtualKeyboardFocused();
		bool IsBattleServerStarting();
		void InviteUserToSquad_PS4(const class FString& sceAccountId);
		void HandleOnPlayerSpeakingUpdated(const struct FSquadVoiceData& UpdateData);
		TArray<struct FSquadUserData> GetSquadList();
		struct FPlayerUserData GetPlayerUserData();
		TArray<EFriendOptionButton> GetListOfOptionsForFriend(const struct FFriendsUserData& friendData);
		TArray<struct FFriendsUserData> GetFriendsListData();
		TArray<struct FFriendsUserData> GetFilteredFriendsListData(const class FText& filterText);
		void DoFriendOptionActionOnUser(const class FName& userId, EFriendOptionButton option);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_StatisticsScreen
	 * Size -> 0x0140 (FullSize[0x03B8] - InheritedSize[0x0278])
	 */
	class UUI_StatisticsScreen : public UUI_DreadScreen
	{
	public:
		unsigned char                                              UnknownData_XDMT[0x140];                                 // 0x0278(0x0140) MISSED OFFSET (PADDING)

	public:
		void UpdateStats();
		void StartTransitionOut();
		void StartTransitionIn();
		void SortFriendList(EStatisticsUIType sortCategory);
		void SetPlayerForStats(int32_t index, const class FName& PlayerId);
		void InitPlayerComparison();
		void HandleStatisticsUIUpdated();
		void HandleFriendsUIUpdated();
		class FText STATIC_GetStringForStatisticsUIType(EStatisticsUIType statType);
		TArray<class FText> GetStringArrayForLeaderboardFilter();
		float GetStatValueForPlayer(EStatisticsUIType statType, const class FName& PlayerId);
		float GetStatValueForCurrentPlayer(EStatisticsUIType statType);
		class FText GetStatTextForPlayer(EStatisticsUIType statType, const class FName& PlayerId);
		class FText GetStatTextForCurrentPlayer(EStatisticsUIType statType);
		EStatisticsUIType GetStatForLeaderboardIndex(int32_t index);
		struct FStatComparison GetStatComparisonByUsername(EStatisticsUIType statType, const class FName& player1Id, const class FName& player2Id);
		struct FStatComparison GetStatComparisonBySlot(EStatisticsUIType statType, int32_t player1SlotIndex, int32_t player2SlotIndex);
		class FText GetPlayerUsernameForSlot(int32_t SlotIndex);
		int32_t GetPlayerStatisticsListCount();
		TArray<struct FStatisticsUIListPlayerData> GetPlayerStatisticsList(int32_t startIndex, int32_t endIndex);
		struct FStatisticsUIFullPlayerData GetPlayerStatisticsForSlot(int32_t SlotIndex);
		struct FStatisticsUIFullPlayerData GetPlayerStatisticsForId(const class FName& PlayerId);
		int32_t GetPlayerRankForSlot(int32_t SlotIndex);
		int32_t GetPlayerNumberForSlot(int32_t SlotIndex);
		class FName GetPlayerIdForSlot(int32_t SlotIndex);
		int32_t GetPageStartIndexForPlayerSlot(int32_t playersPerPage, int32_t playerSlot);
		int32_t GetPageStartIndexForPlayer(int32_t playersPerPage, const class FName& PlayerId);
		int32_t GetPageStartIndexForCurrentPlayer(int32_t playersPerPage);
		int32_t GetIndexForPlayerSlotOnLeaderboard(int32_t playerSlot);
		int32_t GetIndexForPlayerOnLeaderboard(const class FName& PlayerId);
		int32_t GetIndexForCurrentPlayerOnLeaderboard();
		class FName GetFriendIdAtIndex(int32_t index);
		TArray<struct FShipUIStatData> GetFlightLogStatsForAllShipsForPlayerInSlot(int32_t SlotIndex);
		TArray<struct FShipUIStatData> GetFlightLogStatsForAllShipsForPlayer(const class FName& PlayerId);
		TArray<struct FShipUIStatData> GetFlightLogStatsForAllShipsForCurrentPlayer();
		struct FStatisticsUIFullPlayerData GetCurrentPlayerStatistics();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_TitleScreen
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UUI_TitleScreen : public UUI_DreadScreen
	{
	public:
		unsigned char                                              UnknownData_CVFC[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (PADDING)

	public:
		void WebServicesConnectionFailed();
		void TryCreateSession();
		void StartTransitionOut();
		void StartTransitionIn();
		void ShowReturnFromDisconnectMessages();
		void HandlePlayerDataAvailable();
		void HandleOnboardingInitialized();
		void ExitGame();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_EditAppearanceButtonCaptainCustomizationWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_EditAppearanceButtonCaptainCustomizationWidget : public UUI_DreadWidget
	{
	public:
		struct FPlayerUIData GetPlayerUiData();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_GenericModuleTitleWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_GenericModuleTitleWidget : public UUI_DreadWidget
	{
	public:
		int32_t GetModuleTier(const struct FYUIShipTechTreeItemData& moduleData);
		class FText GetModuleName(const struct FYUIShipTechTreeItemData& moduleData);
		class FString GetModuleClassificationIconPath(const struct FYUIShipTechTreeItemData& moduleData);
		EYUILoadoutItemType GetItemType(int32_t itemID);
		class FString GetClassificationIconPathForType(EYUILoadoutItemType itemType);
		class FString GetClassificationIconPathForItemId(int32_t itemID);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_GenericShipTitleWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_GenericShipTitleWidget : public UUI_DreadWidget
	{
	public:
		bool IsHeroShip(const struct FYUIShipManufacturerTechItemData& shipData);
		int32_t GetShipTier(const struct FYUIShipManufacturerTechItemData& shipData);
		class FText GetShipName(const struct FYUIShipManufacturerTechItemData& shipData);
		class FString GetShipClassificationIconPath(const struct FYUIShipManufacturerTechItemData& shipData);
		EYUILoadoutItemType GetItemType(int32_t itemID);
		class FString GetClassificationIconPathForType(EYUILoadoutItemType itemType);
		class FString GetClassificationIconPathForItemId(int32_t itemID);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_ManufacturerTechTreeWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_ManufacturerTechTreeWidget : public UUI_DreadWidget
	{
	public:
		bool IsShipOwned(const struct FYUIShipManufacturerTechItemData& shipData);
		bool IsShipAvailable(const struct FYUIShipManufacturerTechItemData& shipData);
		bool IsItemHeroShip(const struct FYUIShipManufacturerTechItemData& shipData);
		int32_t GetTier(const struct FYUIShipManufacturerTechItemData& shipData);
		class FText GetShipName(const struct FYUIShipManufacturerTechItemData& shipData);
		int32_t GetItemID(const struct FYUIShipManufacturerTechItemData& shipData);
		class FString GetIconPath(const struct FYUIShipManufacturerTechItemData& shipData);
		int32_t GetCurrentShipXp(const struct FYUIShipManufacturerTechItemData& shipData);
		class FString GetClassificationIconPath(const struct FYUIShipManufacturerTechItemData& shipData);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_EliteStatusInfoPanelData
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UUI_EliteStatusInfoPanelData : public UObject
	{
	public:
		class FText                                                m_selfCreditsQtyText;                                    // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FText                                                m_selfShipXpQtyText;                                     // 0x0040(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FText                                                m_selfFreeXpQtyText;                                     // 0x0058(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FText                                                m_teamCreditsQtyText;                                    // 0x0070(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FText                                                m_teamShipXpQtyText;                                     // 0x0088(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FText                                                m_teamFreeXpQtyText;                                     // 0x00A0(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		bool                                                       m_isBoostsTextSet;                                       // 0x00B8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LYIO[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	public:
		class FText GetEliteStatusBoostMultiplierTexts(EYBoostedTarget boostTarget, EYBoostedCurrency boostCurrency);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_MarketBundleDetails_InfoPanel
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class UUI_MarketBundleDetails_InfoPanel : public UUI_DreadWidget
	{
	public:
		class UUI_EliteStatusInfoPanelData*                        m_eliteStatusInfoPanelData;                              // 0x0240(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		struct FMarketItemUIData GetShipDetails(const struct FYMenuItemData& marketData);
		class UUI_EliteStatusInfoPanelData* GetEliteStatusInfoPanelData();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_MarketItemWidget
	 * Size -> 0x0020 (FullSize[0x0260] - InheritedSize[0x0240])
	 */
	class UUI_MarketItemWidget : public UUI_DreadWidget
	{
	public:
		class FScriptMulticastDelegate                             OnMarketItemHovered;                                     // 0x0240(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMarketItemUnhovered;                                   // 0x0250(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void SetData(const struct FMarketItemUIData& itemData);
		void OnMarketItemUnhovered__DelegateSignature();
		void OnMarketItemHovered__DelegateSignature();
		void HandleItemUnhovered();
		void HandleItemHovered();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_NavigationWidget
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class UUI_NavigationWidget : public UUI_DreadWidget
	{
	public:
		class UDataTable*                                          m_screenDataTable;                                       // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnPopupAdded(const struct FPopupStackData& PopupData);
		void OnNavigateToTabRequested(EUI_Screen screen);
		void OnNavigateToScreenRequested(EUI_Screen screen);
		void NavigateToTab(EUI_Screen screen);
		void NavigateToScreen(EUI_Screen screen);
		void NavigateToPreviousScreen();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_PersistentLegendWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_PersistentLegendWidget : public UUI_DreadWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_PersistentPlayerCardWidget
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class UUI_PersistentPlayerCardWidget : public UUI_DreadWidget
	{
	public:
		unsigned char                                              UnknownData_3UED[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateEliteTimeRemaining(float DeltaTime);
		void SetEliteTimeRemaining(float Time);
		bool HasEliteTimeRemaining();
		struct FPlayerUIData GetPlayerUiData();
		int32_t GetEliteTimeRemainingInSeconds();
		class FText ComposeEliteStatusString();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_PersistentSquadListWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_PersistentSquadListWidget : public UUI_DreadWidget
	{
	public:
		TArray<struct FSquadUserData> GetSquadData();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_ShipTechTreeItemButtonWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_ShipTechTreeItemButtonWidget : public UUI_DreadWidget
	{
	public:
		int32_t DetermineCurrencyAmount(const struct FYUIItemPriceData& priceData);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_ShipTechTreeProgressionPathWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_ShipTechTreeProgressionPathWidget : public UUI_DreadWidget
	{
	public:
		bool IsItemAShip(const struct FYUIShipManufacturerTechItemData& Item);
		EYUILoadoutItemType GetItemTypeFromStruct(const struct FYUIShipManufacturerTechItemData& Item);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_ShipTechTreeProgressionWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_ShipTechTreeProgressionWidget : public UUI_DreadWidget
	{
	public:
		bool IsItemAShip(const struct FYUIShipManufacturerTechItemData& Item);
		EYUILoadoutItemType GetItemTypeFromStruct(const struct FYUIShipManufacturerTechItemData& Item);
		EYUILoadoutItemType GetItemType(int32_t itemID);
		struct FUIGenericButtonModuleData ComposeModuleDataForItem(const struct FYUIShipManufacturerTechItemData& Item);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_CongratsLoginPS4SubPanel
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_CongratsLoginPS4SubPanel : public UUI_SubPanel
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_CreateAccountLoginPS4SubPanel
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_CreateAccountLoginPS4SubPanel : public UUI_SubPanel
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_EditShipSubPanel
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class UUI_EditShipSubPanel : public UUI_SubPanel
	{
	public:
		struct FVector2D                                           m_statsPanelOffset;                                      // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetItemOnCurrentShipAndSaveLoadout(const struct FUIGenericButtonModuleData& itemToSet);
		void RequestPreview(int32_t itemID);
		void RequestClearLoadoutPreview();
		void NavigateToScreenForItem(const struct FUIGenericButtonModuleData& Item);
		bool IsItemOwnedByPlayer(const struct FUIGenericButtonModuleData& Item);
		bool IsHeroShip();
		bool IsCurrentShipOwnedByPlayer();
		struct FYItemUIData GetUIDataForItemId(int32_t itemID);
		struct FYItemUIData GetUiDataForItem(const struct FUIGenericButtonModuleData& itemToSet);
		struct FVector2D GetPositionForStatsPopup(const struct FVector2D& popupSize, class UUI_DreadWidget* moduleWidget);
		struct FUIGenericButtonModuleData GetModuleDataFromId(int32_t itemID);
		struct FUIGenericButtonModuleData GetModuleData(const struct FUIGenericButtonModuleData& itemData);
		int32_t GetIdForItem(const struct FUIGenericButtonModuleData& Item);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_EditShipAppearanceSubPanel
	 * Size -> 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
	 */
	class UUI_EditShipAppearanceSubPanel : public UUI_EditShipSubPanel
	{
	public:
		void SetCurrentShipModule(int32_t moduleId);
		TArray<struct FUIGenericButtonModuleData> GetPossibleAppearanceDataForShipSlot(EYUILoadoutItemType loadoutSlot);
		struct FUIGenericButtonModuleData GetCurrentAppearanceDataForShipSlot(EYUILoadoutItemType loadoutSlot);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_EditShipLoadoutSubPanel
	 * Size -> 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
	 */
	class UUI_EditShipLoadoutSubPanel : public UUI_EditShipSubPanel
	{
	public:
		void SetNextShipModule(int32_t moduleId);
		TArray<struct FUIGenericButtonModuleData> GetPossibleLoadoutDataForShipSlot(EYUILoadoutItemType loadoutSlot);
		struct FUIGenericButtonModuleData GetCurrentLoadoutDataForShipSlot(EYUILoadoutItemType loadoutSlot);
		bool AreOfficerModulesAvailable();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_ShipDetailsSubPanel
	 * Size -> 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
	 */
	class UUI_ShipDetailsSubPanel : public UUI_EditShipSubPanel
	{
	public:
		void ResearchShip();
		void PurchaseShip();
		void HandleInventoryUpdated();
		struct FYTechTreeProgressData GetTechTreeProgressionData(bool includePrecastModules);
		TArray<struct FYShipStatsEntry> GetShipStats();
		EYShipResearchPurchaseState GetShipResearchPurchaseState();
		struct FYShipPrice GetShipResearchCost();
		struct FYShipPrice GetShipPurchaseCost();
		class FText GetShipDescription();
		class FString GetShipClassIconPath();
		struct FYPurchaseRequirementsData GetPurchaseRequirementsData();
		class FString GetManufacturerIconPath();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_LinkAccountLoginPS4SubPanel
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_LinkAccountLoginPS4SubPanel : public UUI_SubPanel
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_MarketSubPanel
	 * Size -> 0x0028 (FullSize[0x0268] - InheritedSize[0x0240])
	 */
	class UUI_MarketSubPanel : public UUI_SubPanel
	{
	public:
		class FScriptMulticastDelegate                             OnMarketGridDataReadyEvent;                              // 0x0240(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       m_ShouldShowMarketGrid;                                  // 0x0250(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_71LA[0x7];                                   // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMarketItemUIData>                           m_MarketGridData;                                        // 0x0258(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void Show(bool ShowPanel);
		void SetMarketGridDataReady();
		void MarketDataUpdated();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_BundlesMarketSubPanel
	 * Size -> 0x0058 (FullSize[0x02C0] - InheritedSize[0x0268])
	 */
	class UUI_BundlesMarketSubPanel : public UUI_MarketSubPanel
	{
	public:
		unsigned char                                              UnknownData_UPIV[0x58];                                  // 0x0268(0x0058) MISSED OFFSET (PADDING)

	public:
		void UpdateBundleCategoryFilters(int32_t categoryIndex, int32_t filterIndex, bool filterEnabled);
		void Show(bool ShowPanel);
		TArray<struct FMarketItemUIData> GetMarketBundles(TArray<struct FUIPromotionFilterData> filters);
		TArray<struct FUIPromotionFilterData> GetMarketBundleFilters();
		struct FUIAccordionFilterData GetMarketBundleCategoryFilters();
		TArray<struct FMarketItemUIData> GetFilteredMarketBundles();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_CurrencyMarketSubPanel
	 * Size -> 0x0000 (FullSize[0x0268] - InheritedSize[0x0268])
	 */
	class UUI_CurrencyMarketSubPanel : public UUI_MarketSubPanel
	{
	public:
		void UpdateXpConversionScreenData(bool Result);
		void Show(bool ShowPanel);
		void RequestXpConvertAllShips();
		void RequestXpConversion(TArray<struct FRequestXpConversionShip> shipsToConvertXpFrom);
		void RequestGpPackItemPsnPurchase();
		struct FUiXpConversionData GetXpConversionData();
		TArray<struct FMarketItemUIData> GetMarketItemsByCurrencyPanelID(ECurrencyMarketPanels currencyPanel);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_EliteStatusMarketSubPanel
	 * Size -> 0x0020 (FullSize[0x0288] - InheritedSize[0x0268])
	 */
	class UUI_EliteStatusMarketSubPanel : public UUI_MarketSubPanel
	{
	public:
		TArray<int32_t>                                            m_selfBoosts;                                            // 0x0268(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            m_teamBoosts;                                            // 0x0278(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void Show(bool ShowPanel);
		void SetBoostArrays();
		TArray<struct FMarketItemUIData> GetEliteStatusMarketItems();
		int32_t GetEliteBoostDisplayPercentage(EYBoostedTarget boostTarget, EYBoostedCurrency currencyType);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_FeaturedMarketSubPanel
	 * Size -> 0x0000 (FullSize[0x0268] - InheritedSize[0x0268])
	 */
	class UUI_FeaturedMarketSubPanel : public UUI_MarketSubPanel
	{
	public:
		void Show(bool ShowPanel);
		void MarketItemSelected(const struct FMarketItemUIData& marketItem);
		TArray<struct FMarketItemUIData> GetMarketItemsByPromotionType(EYMarketItemPromotionFlags promotionType);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_HeroShipMarketSubPanel
	 * Size -> 0x0068 (FullSize[0x02D0] - InheritedSize[0x0268])
	 */
	class UUI_HeroShipMarketSubPanel : public UUI_MarketSubPanel
	{
	public:
		unsigned char                                              UnknownData_QPW4[0x68];                                  // 0x0268(0x0068) MISSED OFFSET (PADDING)

	public:
		void UpdateHeroShipCategoryFilter(int32_t categoryIndex, int32_t filterIndex, bool filterEnabled);
		void Show(bool ShowPanel);
		TArray<struct FMarketItemUIData> GetHeroShips();
		struct FUIAccordionFilterData GetHeroShipCategoryFilters();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_NotificationPanelWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_NotificationPanelWidget : public UUI_SubPanel
	{
	public:
		void SetNotificationData(class UNotificationData* NotificationData);
		void NotificationDataReceived(class UNotificationData* NotificationData);
		struct FYSquadInviteAnnouncement GetSquadInviteAnnouncementData(class UNotificationData* NotificationData);
		struct FYFriendRequestAnnouncement GetFriendAnnouncementData(class UNotificationData* NotificationData);
		struct FYCustomMatchInviteAnnouncement GetCustomMatchAnnouncementData(class UNotificationData* NotificationData);
		struct FYAnnouncement GetBaseAnnouncementData(class UNotificationData* NotificationData);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_SettingsPanel
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_SettingsPanel : public UUI_SubPanel
	{
	public:
		bool IsUsingVitaRemoteConnection();
		struct FLegalDocumentData GetTermsOfUseLegalData();
		struct FLegalDocumentData GetPrivacyPolicyLegalData();
		struct FLegalDocumentData GetEulaLegalData();
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_TechTreePathNodeWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_TechTreePathNodeWidget : public UUI_DreadWidget
	{
	public:
		void CreatePathToOtherNode(class UUI_TechTreePathNodeWidget* otherNode, bool IsActive);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UI_TechTreeWidget
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UUI_TechTreeWidget : public UUI_DreadWidget
	{
	public:
		void InitializeTechTree(TArray<struct FYUIShipManufacturerTechTreeStackItemData> shipData, TArray<struct FYUITechTreeConnectionData> ConnectionData, TArray<struct FYUIShipManufacturerTechTreeStackItemData> HeroShipData);
		static UClass* StaticClass();
	};

	/**
	 * Class DreadGameUI.UiManager
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UUiManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_DP9H[0x88];                                  // 0x0028(0x0088) MISSED OFFSET (PADDING)

	public:
		void HandleOnPlayerControllerSet(class AYPlayerControllerBase* PlayerController);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
