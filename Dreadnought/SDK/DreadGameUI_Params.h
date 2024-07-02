#pragma once

/**
 * Name: Dreadnought
 * Version: Latest
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function DreadGameUI.AsyncTaskDownloadEula.DownloadEula
	 */
	struct UAsyncTaskDownloadEula_DownloadEula_Params
	{
	public:
		class UAsyncTaskDownloadEula*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DreadGameUI.BattleReadinessInterpreter.OnBattleReadinessPurchaseApproved__DelegateSignature
	 */
	struct UBattleReadinessInterpreter_OnBattleReadinessPurchaseApproved__DelegateSignature_Params
	{
	public:
		bool                                                       purchaseSuccessful;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.CareerProgressionInterpreter.OnCareerProgressionPinnedGoalChanged
	 */
	struct UCareerProgressionInterpreter_OnCareerProgressionPinnedGoalChanged_Params
	{
	public:
		class FName                                                newPinnedGoalId;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.CareerProgressionInterpreter.OnCareerProgressionGoalStageUpdated
	 */
	struct UCareerProgressionInterpreter_OnCareerProgressionGoalStageUpdated_Params
	{
	public:
		class FName                                                goalId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FYUICareerProgressionGoalStageData                  newStage;                                                // 0x0008(0x0218)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bHasUIListBeenSorted;                                    // 0x0220(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.CareerProgressionInterpreter.OnCareerProgressionGoalStageRewardUpdated
	 */
	struct UCareerProgressionInterpreter_OnCareerProgressionGoalStageRewardUpdated_Params
	{
	public:
		class FName                                                goalId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSucceeded;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IJTG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              message;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.CareerProgressionInterpreter.OnCareerProgressionCategoryUnlocked
	 */
	struct UCareerProgressionInterpreter_OnCareerProgressionCategoryUnlocked_Params
	{
	public:
		EYGoalCategory                                             unlockedCategory;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DreadGameUI.ChatInterpreter.OnChatMessagesChangedDelegate__DelegateSignature
	 */
	struct UChatInterpreter_OnChatMessagesChangedDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction DreadGameUI.ChatInterpreter.OnChatChannelAddedDelegate__DelegateSignature
	 */
	struct UChatInterpreter_OnChatChannelAddedDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function DreadGameUI.ContractsInterpreter.HandleOnPlayerContractsUpdated
	 */
	struct UContractsInterpreter_HandleOnPlayerContractsUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.PopupButtonData.SetPS4ButtonIconMapping
	 */
	struct UPopupButtonData_SetPS4ButtonIconMapping_Params
	{
	public:
		EYPS4ButtonIcon                                            buttonIconType;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupButtonData.SetLabel
	 */
	struct UPopupButtonData_SetLabel_Params
	{
	public:
		class FText                                                label;                                                   // 0x0000(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupButtonData.SetIndex
	 */
	struct UPopupButtonData_SetIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupButtonData.SetCurrencyType
	 */
	struct UPopupButtonData_SetCurrencyType_Params
	{
	public:
		EYUICurrency                                               currencyType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupButtonData.SetCurrencyAmountStringText
	 */
	struct UPopupButtonData_SetCurrencyAmountStringText_Params
	{
	public:
		class FText                                                currencyAmountStrText;                                   // 0x0000(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupButtonData.SetButtonColor
	 */
	struct UPopupButtonData_SetButtonColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupButtonData.IsCurrencyEnabled
	 */
	struct UPopupButtonData_IsCurrencyEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupButtonData.IsButtonColorCustom
	 */
	struct UPopupButtonData_IsButtonColorCustom_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupButtonData.HasPS4ButtonIconMapping
	 */
	struct UPopupButtonData_HasPS4ButtonIconMapping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupButtonData.GetPS4ButtonIconMapping
	 */
	struct UPopupButtonData_GetPS4ButtonIconMapping_Params
	{
	public:
		EYPS4ButtonIcon                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupButtonData.GetLabel
	 */
	struct UPopupButtonData_GetLabel_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupButtonData.GetIndex
	 */
	struct UPopupButtonData_GetIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupButtonData.GetCustomButtonColor
	 */
	struct UPopupButtonData_GetCustomButtonColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupButtonData.GetCurrencyType
	 */
	struct UPopupButtonData_GetCurrencyType_Params
	{
	public:
		EYUICurrency                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupButtonData.GetCurrencyAmountStringText
	 */
	struct UPopupButtonData_GetCurrencyAmountStringText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupManager.SetDefaultWebPopupWidgetClass
	 */
	struct UPopupManager_SetDefaultWebPopupWidgetClass_Params
	{
	public:
		class UClass*                                              userWidgetClass;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupManager.SetDefaultUpsellPopupWidgetClass
	 */
	struct UPopupManager_SetDefaultUpsellPopupWidgetClass_Params
	{
	public:
		class UClass*                                              userWidgetClass;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupManager.SetDefaultLoginStreakPopupWidgetClass
	 */
	struct UPopupManager_SetDefaultLoginStreakPopupWidgetClass_Params
	{
	public:
		class UClass*                                              userWidgetClass;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupManager.SetDefaultGenericPopupWidgetClass
	 */
	struct UPopupManager_SetDefaultGenericPopupWidgetClass_Params
	{
	public:
		class UClass*                                              userWidgetClass;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupManager.OnPopupButtonSelected
	 */
	struct UPopupManager_OnPopupButtonSelected_Params
	{
	public:
		class UUserWidget*                                         popupWidget;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ButtonIndex;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupManager.IsPopupDisplayed
	 */
	struct UPopupManager_IsPopupDisplayed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupManager.GetCurrentPopupData
	 */
	struct UPopupManager_GetCurrentPopupData_Params
	{
	public:
		class UPopupData*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupManager.GetCurrentPopup
	 */
	struct UPopupManager_GetCurrentPopup_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupManager.ClosePopup
	 */
	struct UPopupManager_ClosePopup_Params
	{
	public:
		class UUserWidget*                                         popupWidget;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupManager.CloseCurrentPopup
	 */
	struct UPopupManager_CloseCurrentPopup_Params
	{	};

	/**
	 * Function DreadGameUI.PopupManager.CloseAllPopups
	 */
	struct UPopupManager_CloseAllPopups_Params
	{	};

	/**
	 * Function DreadGameUI.PopupManager.AddWebPopup
	 */
	struct UPopupManager_AddWebPopup_Params
	{
	public:
		class FString                                              webURL;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPopupStackData                                     ReturnValue;                                             // 0x0010(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupManager.AddUpsellPopup
	 */
	struct UPopupManager_AddUpsellPopup_Params
	{
	public:
		class UPopupUpsellData*                                    upsellData;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8P44[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPopupStackData                                     ReturnValue;                                             // 0x0010(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupManager.AddGenericPopupFromButtonDataList
	 */
	struct UPopupManager_AddGenericPopupFromButtonDataList_Params
	{
	public:
		class UClass*                                              userWidgetClass;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                titleText;                                               // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                bodyText;                                                // 0x0020(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class UPopupButtonData*>                            buttons;                                                 // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KNGT[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPopupStackData                                     ReturnValue;                                             // 0x0050(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupManager.AddGenericPopup
	 */
	struct UPopupManager_AddGenericPopup_Params
	{
	public:
		class UClass*                                              userWidgetClass;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                titleText;                                               // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                bodyText;                                                // 0x0020(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FText>                                        buttonTexts;                                             // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7WFU[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPopupStackData                                     ReturnValue;                                             // 0x0050(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.PopupManager.AddCustomPopup
	 */
	struct UPopupManager_AddCustomPopup_Params
	{
	public:
		class UClass*                                              userWidgetClass;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPopupData*                                          PopupData;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPopupStackData                                     ReturnValue;                                             // 0x0010(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.MarketInterpreter.OnPaywallUrlReceived
	 */
	struct UMarketInterpreter_OnPaywallUrlReceived_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              transactionId;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DreadGameUI.MarketInterpreter.OnMarketPurchaseComplete__DelegateSignature
	 */
	struct UMarketInterpreter_OnMarketPurchaseComplete__DelegateSignature_Params
	{
	public:
		EYPurchaseResult                                           purchaseResult;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DreadGameUI.MarketInterpreter.OnMarketDataRebuilt__DelegateSignature
	 */
	struct UMarketInterpreter_OnMarketDataRebuilt__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction DreadGameUI.MarketInterpreter.OnMarketCatalogUpdated__DelegateSignature
	 */
	struct UMarketInterpreter_OnMarketCatalogUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function DreadGameUI.MarketInterpreter.MarketPurchaseComplete
	 */
	struct UMarketInterpreter_MarketPurchaseComplete_Params
	{
	public:
		int32_t                                                    purchaseResult;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RNO9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              offerId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    quantity;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.MarketInterpreter.MarketManifestInitialized
	 */
	struct UMarketInterpreter_MarketManifestInitialized_Params
	{	};

	/**
	 * Function DreadGameUI.MarketInterpreter.MarketDataRebuilt
	 */
	struct UMarketInterpreter_MarketDataRebuilt_Params
	{	};

	/**
	 * Function DreadGameUI.MarketInterpreter.MarketCatalogUpdated
	 */
	struct UMarketInterpreter_MarketCatalogUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.MarketInterpreter.HandlePlayerConversionRequestDone
	 */
	struct UMarketInterpreter_HandlePlayerConversionRequestDone_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.NotificationData.SetIsNew
	 */
	struct UNotificationData_SetIsNew_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.NotificationData.IsNew
	 */
	struct UNotificationData_IsNew_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.NotificationData.GetType
	 */
	struct UNotificationData_GetType_Params
	{
	public:
		EYAnnouncementType                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.NotificationData.GetText
	 */
	struct UNotificationData_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.NotificationData.GetNumButtons
	 */
	struct UNotificationData_GetNumButtons_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.NotificationData.GetID
	 */
	struct UNotificationData_GetID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.NotificationData.GetButtons
	 */
	struct UNotificationData_GetButtons_Params
	{
	public:
		TArray<ENotificationButtonType>                            ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DreadGameUI.NotificationsInterpreter.OnAnnouncementsChanged__DelegateSignature
	 */
	struct UNotificationsInterpreter_OnAnnouncementsChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DreadGameUI.NotificationsInterpreter.HandleOnAnnouncementsChanged
	 */
	struct UNotificationsInterpreter_HandleOnAnnouncementsChanged_Params
	{	};

	/**
	 * Function DreadGameUI.OnboardingInterpreter.OnFleetUnlocked
	 */
	struct UOnboardingInterpreter_OnFleetUnlocked_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.SetUITheme
	 */
	struct UUI_DreadWidget_SetUITheme_Params
	{
	public:
		EUI_Theme                                                  theme;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.SendAnalyticsEvent
	 */
	struct UUI_DreadWidget_SendAnalyticsEvent_Params
	{
	public:
		EUI_Screen                                                 screenId;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAnalyticsButtonId                                         buttonID;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VZK2[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    granularId;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.OnUIThemeReceived
	 */
	struct UUI_DreadWidget_OnUIThemeReceived_Params
	{
	public:
		EUI_Theme                                                  theme;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.OnSynchronizeProperties
	 */
	struct UUI_DreadWidget_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.OnActionReceived
	 */
	struct UUI_DreadWidget_OnActionReceived_Params
	{	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.NavigateToTab
	 */
	struct UUI_DreadWidget_NavigateToTab_Params
	{
	public:
		EUI_Screen                                                 screen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.NavigateToScreen
	 */
	struct UUI_DreadWidget_NavigateToScreen_Params
	{
	public:
		EUI_Screen                                                 screen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.NavigateToPreviousScreen
	 */
	struct UUI_DreadWidget_NavigateToPreviousScreen_Params
	{	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.IsPlatform
	 */
	struct UUI_DreadWidget_IsPlatform_Params
	{
	public:
		EPlatform                                                  platform;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.IsCurrentShipOwned
	 */
	struct UUI_DreadWidget_IsCurrentShipOwned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.IsCurrentModuleAVanityItem
	 */
	struct UUI_DreadWidget_IsCurrentModuleAVanityItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.HandleAction
	 */
	struct UUI_DreadWidget_HandleAction_Params
	{	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.GetViewportPosition
	 */
	struct UUI_DreadWidget_GetViewportPosition_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.GetUIDataForItemId
	 */
	struct UUI_DreadWidget_GetUIDataForItemId_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N62L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FYItemUIData                                        ReturnValue;                                             // 0x0008(0x00D0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.GetTooltipDataForItemData
	 */
	struct UUI_DreadWidget_GetTooltipDataForItemData_Params
	{
	public:
		struct FYUIShipTechTreeItemData                            itemData;                                                // 0x0000(0x0158)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FYToolTipValue>                              ReturnValue;                                             // 0x0158(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.GetImageLoader
	 */
	struct UUI_DreadWidget_GetImageLoader_Params
	{
	public:
		class UYImageLoader*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.GetCachedAbsolutePosition
	 */
	struct UUI_DreadWidget_GetCachedAbsolutePosition_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadWidget.DoesCurrentModuleHaveItemOffer
	 */
	struct UUI_DreadWidget_DoesCurrentModuleHaveItemOffer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowTierIcon
	 */
	struct UUI_GenericButtonModuleWidget_ShouldShowTierIcon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowPreviousCost
	 */
	struct UUI_GenericButtonModuleWidget_ShouldShowPreviousCost_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowNewTag
	 */
	struct UUI_GenericButtonModuleWidget_ShouldShowNewTag_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowLockIcon
	 */
	struct UUI_GenericButtonModuleWidget_ShouldShowLockIcon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowDiscountTag
	 */
	struct UUI_GenericButtonModuleWidget_ShouldShowDiscountTag_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowCurrentCost
	 */
	struct UUI_GenericButtonModuleWidget_ShouldShowCurrentCost_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.SetDataStruct
	 */
	struct UUI_GenericButtonModuleWidget_SetDataStruct_Params
	{
	public:
		struct FUIGenericButtonModuleData                          Data;                                                    // 0x0000(0x00C0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.IsTechTreeItemAndNotOwned
	 */
	struct UUI_GenericButtonModuleWidget_IsTechTreeItemAndNotOwned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.IsOwned
	 */
	struct UUI_GenericButtonModuleWidget_IsOwned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.IsOnSale
	 */
	struct UUI_GenericButtonModuleWidget_IsOnSale_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.IsNew
	 */
	struct UUI_GenericButtonModuleWidget_IsNew_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.IsEquipped
	 */
	struct UUI_GenericButtonModuleWidget_IsEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.IsCurrentModuleAVanityItem
	 */
	struct UUI_GenericButtonModuleWidget_IsCurrentModuleAVanityItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.HasPriceDiscount
	 */
	struct UUI_GenericButtonModuleWidget_HasPriceDiscount_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.GetTier
	 */
	struct UUI_GenericButtonModuleWidget_GetTier_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.GetTechTreeResearchPrice
	 */
	struct UUI_GenericButtonModuleWidget_GetTechTreeResearchPrice_Params
	{
	public:
		struct FYUIItemPriceData                                   ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.GetTechTreePurchasePrice
	 */
	struct UUI_GenericButtonModuleWidget_GetTechTreePurchasePrice_Params
	{
	public:
		struct FYUIItemPriceData                                   ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.GetTechTreeItemState
	 */
	struct UUI_GenericButtonModuleWidget_GetTechTreeItemState_Params
	{
	public:
		EYTechTreeItemState                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.GetPriceCurrency
	 */
	struct UUI_GenericButtonModuleWidget_GetPriceCurrency_Params
	{
	public:
		EYUICurrency                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.GetPriceAmount
	 */
	struct UUI_GenericButtonModuleWidget_GetPriceAmount_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.GetOriginalPriceCurrency
	 */
	struct UUI_GenericButtonModuleWidget_GetOriginalPriceCurrency_Params
	{
	public:
		EYUICurrency                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.GetOriginalPriceAmount
	 */
	struct UUI_GenericButtonModuleWidget_GetOriginalPriceAmount_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.GetNewPriceAsPercentOfOldPrice
	 */
	struct UUI_GenericButtonModuleWidget_GetNewPriceAsPercentOfOldPrice_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.GetModuleTexturePath
	 */
	struct UUI_GenericButtonModuleWidget_GetModuleTexturePath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.GetModuleName
	 */
	struct UUI_GenericButtonModuleWidget_GetModuleName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.GetItemID
	 */
	struct UUI_GenericButtonModuleWidget_GetItemID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.GetIndex
	 */
	struct UUI_GenericButtonModuleWidget_GetIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.GetIconTexturePath
	 */
	struct UUI_GenericButtonModuleWidget_GetIconTexturePath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.GetDiscountTagText
	 */
	struct UUI_GenericButtonModuleWidget_GetDiscountTagText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.GetDataStruct
	 */
	struct UUI_GenericButtonModuleWidget_GetDataStruct_Params
	{
	public:
		struct FUIGenericButtonModuleData                          ReturnValue;                                             // 0x0000(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericButtonModuleWidget.DoesCurrentModuleHaveItemOffer
	 */
	struct UUI_GenericButtonModuleWidget_DoesCurrentModuleHaveItemOffer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.YMatchmakingInterpreter.StartQuickPlayMatchmaking
	 */
	struct UYMatchmakingInterpreter_StartQuickPlayMatchmaking_Params
	{	};

	/**
	 * Function DreadGameUI.YMatchmakingInterpreter.StartMatchmaking
	 */
	struct UYMatchmakingInterpreter_StartMatchmaking_Params
	{
	public:
		EYGameModeType                                             gameModeType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9PEZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              fullMapPath;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.YMatchmakingInterpreter.StartFavoritesMatchmaking
	 */
	struct UYMatchmakingInterpreter_StartFavoritesMatchmaking_Params
	{
	public:
		TArray<uint32_t>                                           gameModeTypes;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              fullMapPath;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DreadGameUI.YMatchmakingInterpreter.SquadMatchmakingStartedDelegate__DelegateSignature
	 */
	struct UYMatchmakingInterpreter_SquadMatchmakingStartedDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction DreadGameUI.YMatchmakingInterpreter.ServerStartingDelegate__DelegateSignature
	 */
	struct UYMatchmakingInterpreter_ServerStartingDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction DreadGameUI.YMatchmakingInterpreter.QueueWaitingTimeAvailableDelegate__DelegateSignature
	 */
	struct UYMatchmakingInterpreter_QueueWaitingTimeAvailableDelegate__DelegateSignature_Params
	{
	public:
		int32_t                                                    waitTimeSeconds;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DreadGameUI.YMatchmakingInterpreter.MatchmakingTimerStoppedDelegate__DelegateSignature
	 */
	struct UYMatchmakingInterpreter_MatchmakingTimerStoppedDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction DreadGameUI.YMatchmakingInterpreter.MatchmakingTimerStartedDelegate__DelegateSignature
	 */
	struct UYMatchmakingInterpreter_MatchmakingTimerStartedDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction DreadGameUI.YMatchmakingInterpreter.MatchmakingFailedDelegate__DelegateSignature
	 */
	struct UYMatchmakingInterpreter_MatchmakingFailedDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function DreadGameUI.YMatchmakingInterpreter.CancelMatchmaking
	 */
	struct UYMatchmakingInterpreter_CancelMatchmaking_Params
	{	};

	/**
	 * DelegateFunction DreadGameUI.YMatchmakingInterpreter.BattleServerShutDownDelegate__DelegateSignature
	 */
	struct UYMatchmakingInterpreter_BattleServerShutDownDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction DreadGameUI.HangarPreviewComponent.OnPreviewStarted__DelegateSignature
	 */
	struct UHangarPreviewComponent_OnPreviewStarted__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction DreadGameUI.HangarPreviewComponent.OnPreviewEnded__DelegateSignature
	 */
	struct UHangarPreviewComponent_OnPreviewEnded__DelegateSignature_Params
	{	};

	/**
	 * Function DreadGameUI.HangarPreviewComponent.HandleOnSubLevelLoaded
	 */
	struct UHangarPreviewComponent_HandleOnSubLevelLoaded_Params
	{	};

	/**
	 * Function DreadGameUI.HangarPreviewComponent.HandleOnPreviewActorLoadoutAsyncLoaded
	 */
	struct UHangarPreviewComponent_HandleOnPreviewActorLoadoutAsyncLoaded_Params
	{
	public:
		class UYShipLoadout*                                       loadout;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.HangarPreviewComponent.HandleOnOutpostTransitionCompleted
	 */
	struct UHangarPreviewComponent_HandleOnOutpostTransitionCompleted_Params
	{
	public:
		EYOutpostSection                                           newSection;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.FrontendHUD.OnHangarStateChanged
	 */
	struct AFrontendHUD_OnHangarStateChanged_Params
	{
	public:
		EHangarState                                               hangarState;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.FrontendHUD.NavigateToTab
	 */
	struct AFrontendHUD_NavigateToTab_Params
	{
	public:
		EUI_Screen                                                 screen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.FrontendHUD.NavigateToScreen
	 */
	struct AFrontendHUD_NavigateToScreen_Params
	{
	public:
		EUI_Screen                                                 screen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.FrontendHUD.LoadHangar
	 */
	struct AFrontendHUD_LoadHangar_Params
	{	};

	/**
	 * Function DreadGameUI.FrontendHUD.HangarScreenTransitioned
	 */
	struct AFrontendHUD_HangarScreenTransitioned_Params
	{
	public:
		EUI_Screen                                                 previousScreen;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUI_Screen                                                 newScreen;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.FrontendHUD.HangarPreviewStarted
	 */
	struct AFrontendHUD_HangarPreviewStarted_Params
	{	};

	/**
	 * Function DreadGameUI.FrontendHUD.HangarPreviewEnded
	 */
	struct AFrontendHUD_HangarPreviewEnded_Params
	{	};

	/**
	 * Function DreadGameUI.FrontendHUD.HangarLoadFinished
	 */
	struct AFrontendHUD_HangarLoadFinished_Params
	{	};

	/**
	 * Function DreadGameUI.FrontendHUD.HandleShipPreviewFinalized
	 */
	struct AFrontendHUD_HandleShipPreviewFinalized_Params
	{	};

	/**
	 * Function DreadGameUI.FrontendHUD.HandleOnControllerConnectionChange
	 */
	struct AFrontendHUD_HandleOnControllerConnectionChange_Params
	{
	public:
		bool                                                       isConnected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WSE8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    userId;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    userIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.FrontendHUD.HandleLogout
	 */
	struct AFrontendHUD_HandleLogout_Params
	{	};

	/**
	 * Function DreadGameUI.FrontendHUD.HandleLogin
	 */
	struct AFrontendHUD_HandleLogin_Params
	{	};

	/**
	 * Function DreadGameUI.FrontendHUD.GetPopupManager
	 */
	struct AFrontendHUD_GetPopupManager_Params
	{
	public:
		class UPopupManager*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.FrontendHUD.GetImageLoader
	 */
	struct AFrontendHUD_GetImageLoader_Params
	{
	public:
		class UYImageLoader*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.FrontendHUD.GetCtAManagerInterface
	 */
	struct AFrontendHUD_GetCtAManagerInterface_Params
	{
	public:
		class UYCtAManagerInterface*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.FrontendHUD.CheckLoginStreakPopup
	 */
	struct AFrontendHUD_CheckLoginStreakPopup_Params
	{	};

	/**
	 * Function DreadGameUI.UI_BattleBonusWidget.RegisterListeners
	 */
	struct UUI_BattleBonusWidget_RegisterListeners_Params
	{	};

	/**
	 * Function DreadGameUI.UI_BattleBonusWidget.OnFleetUpdated
	 */
	struct UUI_BattleBonusWidget_OnFleetUpdated_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BattleBonusWidget.OnBattleBonusPurcahsed
	 */
	struct UUI_BattleBonusWidget_OnBattleBonusPurcahsed_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BattleBonusWidget.HasBattleBonus
	 */
	struct UUI_BattleBonusWidget_HasBattleBonus_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BattleBonusWidget.GetShipXpBonus
	 */
	struct UUI_BattleBonusWidget_GetShipXpBonus_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_US6J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BattleBonusWidget.GetFreeXpBonus
	 */
	struct UUI_BattleBonusWidget_GetFreeXpBonus_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XFY3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BattleBonusWidget.GetCreditsBonus
	 */
	struct UUI_BattleBonusWidget_GetCreditsBonus_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z2G8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BattleBonusWidget.GetBattleBonusCreditsCost
	 */
	struct UUI_BattleBonusWidget_GetBattleBonusCreditsCost_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AOW5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BattleBonusWidget.GetBattleBonusCooldown
	 */
	struct UUI_BattleBonusWidget_GetBattleBonusCooldown_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6GWO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BattleBonusWidget.AttemptBattleReadinessPurchase
	 */
	struct UUI_BattleBonusWidget_AttemptBattleReadinessPurchase_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ChatMessageListWidget.RegisterWidget
	 */
	struct UUI_ChatMessageListWidget_RegisterWidget_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ChatMessageListWidget.GetGroomedChatMessage
	 */
	struct UUI_ChatMessageListWidget_GetGroomedChatMessage_Params
	{
	public:
		struct FChatMessageDefinition                              message;                                                 // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ChatMessageListWidget.GetChatMessages
	 */
	struct UUI_ChatMessageListWidget_GetChatMessages_Params
	{
	public:
		TArray<struct FChatMessageDefinition>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ChatMessageListWidget.ChatMessagesChanged
	 */
	struct UUI_ChatMessageListWidget_ChatMessagesChanged_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ChatWidget.ShowChatWidgetRequested
	 */
	struct UUI_ChatWidget_ShowChatWidgetRequested_Params
	{
	public:
		int32_t                                                    roomIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ChatWidget.ShowChatWidget
	 */
	struct UUI_ChatWidget_ShowChatWidget_Params
	{
	public:
		int32_t                                                    roomIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ChatWidget.SetSelectedRoomIndex
	 */
	struct UUI_ChatWidget_SetSelectedRoomIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ChatWidget.SetIsVisible
	 */
	struct UUI_ChatWidget_SetIsVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ChatWidget.SendChatMessage
	 */
	struct UUI_ChatWidget_SendChatMessage_Params
	{
	public:
		class FText                                                message;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ChatWidget.RegisterWidget
	 */
	struct UUI_ChatWidget_RegisterWidget_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ChatWidget.IsTextChatEnabled
	 */
	struct UUI_ChatWidget_IsTextChatEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ChatWidget.HandleChatRoomCreated
	 */
	struct UUI_ChatWidget_HandleChatRoomCreated_Params
	{
	public:
		int32_t                                                    roomIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       shouldShow;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ChatWidget.HandleChatMessageReceived
	 */
	struct UUI_ChatWidget_HandleChatMessageReceived_Params
	{
	public:
		int32_t                                                    roomIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ChatWidget.GetSelectedRoomIndex
	 */
	struct UUI_ChatWidget_GetSelectedRoomIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ChatWidget.GetIsVisible
	 */
	struct UUI_ChatWidget_GetIsVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ChatWidget.GetCurrentChatRooms
	 */
	struct UUI_ChatWidget_GetCurrentChatRooms_Params
	{
	public:
		TArray<struct FChatRoomDefinition>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ChatWidget.CloseChatRoom
	 */
	struct UUI_ChatWidget_CloseChatRoom_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ChatWidget.ChatRoomsChanged
	 */
	struct UUI_ChatWidget_ChatRoomsChanged_Params
	{	};

	/**
	 * Function DreadGameUI.UI_CustomMatchPlayerCardWidget.GetPlayerUiData
	 */
	struct UUI_CustomMatchPlayerCardWidget_GetPlayerUiData_Params
	{
	public:
		struct FPlayerUIData                                       ReturnValue;                                             // 0x0000(0x0080)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchPlayerInviteCardWidget.GetPlayerUiData
	 */
	struct UUI_CustomMatchPlayerInviteCardWidget_GetPlayerUiData_Params
	{
	public:
		struct FPlayerUIData                                       ReturnValue;                                             // 0x0000(0x0080)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadScreen.TransitionOutComplete
	 */
	struct UUI_DreadScreen_TransitionOutComplete_Params
	{	};

	/**
	 * Function DreadGameUI.UI_DreadScreen.TransitionInComplete
	 */
	struct UUI_DreadScreen_TransitionInComplete_Params
	{	};

	/**
	 * Function DreadGameUI.UI_DreadScreen.StartTransitionOut
	 */
	struct UUI_DreadScreen_StartTransitionOut_Params
	{	};

	/**
	 * Function DreadGameUI.UI_DreadScreen.StartTransitionIn
	 */
	struct UUI_DreadScreen_StartTransitionIn_Params
	{	};

	/**
	 * Function DreadGameUI.UI_DreadScreen.OnTransitionOut
	 */
	struct UUI_DreadScreen_OnTransitionOut_Params
	{	};

	/**
	 * Function DreadGameUI.UI_DreadScreen.OnTransitionIn
	 */
	struct UUI_DreadScreen_OnTransitionIn_Params
	{	};

	/**
	 * Function DreadGameUI.UI_DreadScreen.OnNavigationEvent
	 */
	struct UUI_DreadScreen_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadScreen.OnChangeTab
	 */
	struct UUI_DreadScreen_OnChangeTab_Params
	{
	public:
		EUI_Screen                                                 screen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadScreen.HandleNavigationEvent
	 */
	struct UUI_DreadScreen_HandleNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Input;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadScreen.GetCurrentUITheme
	 */
	struct UUI_DreadScreen_GetCurrentUITheme_Params
	{
	public:
		EUI_Theme                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadScreen.ChangeTab
	 */
	struct UUI_DreadScreen_ChangeTab_Params
	{
	public:
		EUI_Screen                                                 screen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManageFleetScreen.ShouldBlockForHavocMode
	 */
	struct UUI_ManageFleetScreen_ShouldBlockForHavocMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManageFleetScreen.SetFleetFlagship
	 */
	struct UUI_ManageFleetScreen_SetFleetFlagship_Params
	{
	public:
		int32_t                                                    shipID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    loadoutindex;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManageFleetScreen.SetCurrentShipId
	 */
	struct UUI_ManageFleetScreen_SetCurrentShipId_Params
	{
	public:
		int32_t                                                    shipID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManageFleetScreen.RemoveShipFromFleet
	 */
	struct UUI_ManageFleetScreen_RemoveShipFromFleet_Params
	{
	public:
		int32_t                                                    shipID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManageFleetScreen.OnMatchmakingStopped
	 */
	struct UUI_ManageFleetScreen_OnMatchmakingStopped_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ManageFleetScreen.OnMatchmakingStarted
	 */
	struct UUI_ManageFleetScreen_OnMatchmakingStarted_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ManageFleetScreen.OnLoadoutRemovedFromFleet
	 */
	struct UUI_ManageFleetScreen_OnLoadoutRemovedFromFleet_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManageFleetScreen.OnLoadoutAddedToFleet
	 */
	struct UUI_ManageFleetScreen_OnLoadoutAddedToFleet_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManageFleetScreen.OnFleetUpdated
	 */
	struct UUI_ManageFleetScreen_OnFleetUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ManageFleetScreen.HasBattleBonus
	 */
	struct UUI_ManageFleetScreen_HasBattleBonus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManageFleetScreen.GetShipBonuses
	 */
	struct UUI_ManageFleetScreen_GetShipBonuses_Params
	{
	public:
		int32_t                                                    shipTier;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HTQD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManageFleetScreen.GetFleetType
	 */
	struct UUI_ManageFleetScreen_GetFleetType_Params
	{
	public:
		EYFleetType                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManageFleetScreen.GetFleetFlagshipID
	 */
	struct UUI_ManageFleetScreen_GetFleetFlagshipID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManageFleetScreen.GetFleetData
	 */
	struct UUI_ManageFleetScreen_GetFleetData_Params
	{
	public:
		TArray<struct FUIShipData>                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManageFleetScreen.GetFlagshipLoadoutIndex
	 */
	struct UUI_ManageFleetScreen_GetFlagshipLoadoutIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManageFleetScreen.CanStartMatchmaking
	 */
	struct UUI_ManageFleetScreen_CanStartMatchmaking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.SettingsChanged
	 */
	struct UUI_CustomMatchSettingsWidget_SettingsChanged_Params
	{
	public:
		struct FYCustomMatchScreenSettings                         Settings;                                                // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.SetTeamSize
	 */
	struct UUI_CustomMatchSettingsWidget_SetTeamSize_Params
	{
	public:
		int32_t                                                    teamSize;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.SetMap
	 */
	struct UUI_CustomMatchSettingsWidget_SetMap_Params
	{
	public:
		class FText                                                Map;                                                     // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.SetGameMode
	 */
	struct UUI_CustomMatchSettingsWidget_SetGameMode_Params
	{
	public:
		class FText                                                GameMode;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.SetFillTeamWithAiFlag
	 */
	struct UUI_CustomMatchSettingsWidget_SetFillTeamWithAiFlag_Params
	{
	public:
		EYCustomMatchTeam                                          Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       fillWithAi;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.RoomStateChanged
	 */
	struct UUI_CustomMatchSettingsWidget_RoomStateChanged_Params
	{
	public:
		EYCustomRoomState                                          oldRoomState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYCustomRoomState                                          newRoomState;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.IsLocalPlayerHost
	 */
	struct UUI_CustomMatchSettingsWidget_IsLocalPlayerHost_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.GetTeamSize
	 */
	struct UUI_CustomMatchSettingsWidget_GetTeamSize_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.GetRoomState
	 */
	struct UUI_CustomMatchSettingsWidget_GetRoomState_Params
	{
	public:
		EYCustomRoomState                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.GetMinTeamSize
	 */
	struct UUI_CustomMatchSettingsWidget_GetMinTeamSize_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.GetMapTexture
	 */
	struct UUI_CustomMatchSettingsWidget_GetMapTexture_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.GetMapFilterOptions
	 */
	struct UUI_CustomMatchSettingsWidget_GetMapFilterOptions_Params
	{
	public:
		TArray<struct FUIAccordionFilterCategoryOptionData>        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.GetMapFilterIndex
	 */
	struct UUI_CustomMatchSettingsWidget_GetMapFilterIndex_Params
	{
	public:
		class FText                                                Map;                                                     // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.GetGameModeIconPath
	 */
	struct UUI_CustomMatchSettingsWidget_GetGameModeIconPath_Params
	{
	public:
		struct FStringAssetReference                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.GetGameModeFilterOptions
	 */
	struct UUI_CustomMatchSettingsWidget_GetGameModeFilterOptions_Params
	{
	public:
		TArray<struct FUIAccordionFilterCategoryOptionData>        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.GetGameModeFilterIndex
	 */
	struct UUI_CustomMatchSettingsWidget_GetGameModeFilterIndex_Params
	{
	public:
		class FText                                                GameMode;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.DoRefresh
	 */
	struct UUI_CustomMatchSettingsWidget_DoRefresh_Params
	{	};

	/**
	 * Function DreadGameUI.UI_CustomMatchSettingsWidget.DataReady
	 */
	struct UUI_CustomMatchSettingsWidget_DataReady_Params
	{	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.UserDataRefreshed
	 */
	struct UI_CustomMatchScreen_UserDataRefreshed_Params
	{	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.StartMatchCountdown
	 */
	struct UI_CustomMatchScreen_StartMatchCountdown_Params
	{	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.StartMatch
	 */
	struct UI_CustomMatchScreen_StartMatch_Params
	{	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.SetFleetType
	 */
	struct UI_CustomMatchScreen_SetFleetType_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.SetDefaultCustomRoomSettings
	 */
	struct UI_CustomMatchScreen_SetDefaultCustomRoomSettings_Params
	{
	public:
		class UYCustomMatchSettingsDataAsset*                      defaultSettings;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.SendInviteToFriends
	 */
	struct UI_CustomMatchScreen_SendInviteToFriends_Params
	{
	public:
		TArray<struct FFriendsUserData>                            friendsList;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.RoomStateChanged
	 */
	struct UI_CustomMatchScreen_RoomStateChanged_Params
	{
	public:
		EYCustomRoomState                                          oldRoomState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYCustomRoomState                                          newRoomState;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.RemoveUserFromTeamSlot
	 */
	struct UI_CustomMatchScreen_RemoveUserFromTeamSlot_Params
	{
	public:
		EYCustomMatchTeam                                          Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C9LK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SlotIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.MoveUserToOtherTeam
	 */
	struct UI_CustomMatchScreen_MoveUserToOtherTeam_Params
	{
	public:
		EYCustomMatchTeam                                          Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JW64[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SlotIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.IsUserHost
	 */
	struct UI_CustomMatchScreen_IsUserHost_Params
	{
	public:
		EYCustomMatchTeam                                          Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IGR3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SlotIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.IsLocalPlayerHost
	 */
	struct UI_CustomMatchScreen_IsLocalPlayerHost_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.IsFillTeamWithAiFlagSet
	 */
	struct UI_CustomMatchScreen_IsFillTeamWithAiFlagSet_Params
	{
	public:
		EYCustomMatchTeam                                          Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.HandleOnPlayerSpeakingUpdated
	 */
	struct UI_CustomMatchScreen_HandleOnPlayerSpeakingUpdated_Params
	{
	public:
		struct FSquadVoiceData                                     UpdateData;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.GetTeamUserData
	 */
	struct UI_CustomMatchScreen_GetTeamUserData_Params
	{
	public:
		EYCustomMatchTeam                                          Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J046[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPlayerUIData>                               ReturnValue;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.GetTeamSlotUserName
	 */
	struct UI_CustomMatchScreen_GetTeamSlotUserName_Params
	{
	public:
		EYCustomMatchTeam                                          Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7EFA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SlotIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.GetTeamSlotType
	 */
	struct UI_CustomMatchScreen_GetTeamSlotType_Params
	{
	public:
		EYCustomMatchTeam                                          Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5DFG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SlotIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYCustomRoomSlotType                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.GetRoomState
	 */
	struct UI_CustomMatchScreen_GetRoomState_Params
	{
	public:
		EYCustomRoomState                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.GetListOfOptionsForPlayer
	 */
	struct UI_CustomMatchScreen_GetListOfOptionsForPlayer_Params
	{
	public:
		EYCustomMatchTeam                                          Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NX2V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SlotIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<EFriendOptionButton>                                ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.GetFriendsAvailableToInvite
	 */
	struct UI_CustomMatchScreen_GetFriendsAvailableToInvite_Params
	{
	public:
		TArray<struct FFriendsUserData>                            ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.FleetTypeSelected
	 */
	struct UI_CustomMatchScreen_FleetTypeSelected_Params
	{
	public:
		EYFleetType                                                oldFleetType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYFleetType                                                newFleetType;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.FleetTypeChanged
	 */
	struct UI_CustomMatchScreen_FleetTypeChanged_Params
	{
	public:
		EYFleetType                                                oldFleetType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYFleetType                                                newFleetType;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.FleetSelectReady
	 */
	struct UI_CustomMatchScreen_FleetSelectReady_Params
	{
	public:
		EYFleetType                                                maxFleetType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.ExitFleetSelect
	 */
	struct UI_CustomMatchScreen_ExitFleetSelect_Params
	{	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.EnterFleetSelect
	 */
	struct UI_CustomMatchScreen_EnterFleetSelect_Params
	{	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.DoFriendOptionActionOnUser
	 */
	struct UI_CustomMatchScreen_DoFriendOptionActionOnUser_Params
	{
	public:
		class FName                                                userId;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFriendOptionButton                                        option;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.DataReady
	 */
	struct UI_CustomMatchScreen_DataReady_Params
	{	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.CountdownTimerUpdated
	 */
	struct UI_CustomMatchScreen_CountdownTimerUpdated_Params
	{
	public:
		int32_t                                                    timeLeft;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.CloseScreen
	 */
	struct UI_CustomMatchScreen_CloseScreen_Params
	{
	public:
		EYCustomMatchScreenCloseReason                             reason;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.CanRemoveUserFromTeamSlot
	 */
	struct UI_CustomMatchScreen_CanRemoveUserFromTeamSlot_Params
	{
	public:
		EYCustomMatchTeam                                          Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GFY2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SlotIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.CanMoveUserToOtherTeam
	 */
	struct UI_CustomMatchScreen_CanMoveUserToOtherTeam_Params
	{
	public:
		EYCustomMatchTeam                                          Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W0UV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SlotIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.I_CustomMatchScreen.CancelMatchCountdown
	 */
	struct UI_CustomMatchScreen_CancelMatchCountdown_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ShipFilterWidget.SelectCategoryFilter
	 */
	struct UUI_ShipFilterWidget_SelectCategoryFilter_Params
	{
	public:
		int32_t                                                    categoryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    filterIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipFilterWidget.GetUIShipData
	 */
	struct UUI_ShipFilterWidget_GetUIShipData_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipTechData;                                            // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FUIShipData                                         ReturnValue;                                             // 0x0180(0x0080)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipFilterWidget.GetCategoryFilters
	 */
	struct UUI_ShipFilterWidget_GetCategoryFilters_Params
	{
	public:
		struct FUIAccordionFilterData                              ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipFilterWidget.FilterShipsByLoadouts
	 */
	struct UUI_ShipFilterWidget_FilterShipsByLoadouts_Params
	{
	public:
		TArray<class UYShipLoadoutMmogbrain*>                      shipLoadouts;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FYUIShipManufacturerTechItemData>            ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipFilterWidget.FilterShipsByDataStructs
	 */
	struct UUI_ShipFilterWidget_FilterShipsByDataStructs_Params
	{
	public:
		TArray<struct FYUIShipManufacturerTechItemData>            shipDataArray;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FYUIShipManufacturerTechItemData>            ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipFilterWidget.DoesShipPassCurrentFilter
	 */
	struct UUI_ShipFilterWidget_DoesShipPassCurrentFilter_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipLoadout;                                             // 0x0000(0x0180)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0180(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipFilterWidget.DoesLoudoutPassCurrentFilter
	 */
	struct UUI_ShipFilterWidget_DoesLoudoutPassCurrentFilter_Params
	{
	public:
		class UYShipLoadoutMmogbrain*                              shipLoadout;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0008(0x0180)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0188(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_AddShipToFleetScreen.SetSelectedShip
	 */
	struct UUI_AddShipToFleetScreen_SetSelectedShip_Params
	{
	public:
		int32_t                                                    shipID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_AddShipToFleetScreen.GetShipBonuses
	 */
	struct UUI_AddShipToFleetScreen_GetShipBonuses_Params
	{
	public:
		int32_t                                                    shipTier;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DO4J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_AddShipToFleetScreen.GetFleetType
	 */
	struct UUI_AddShipToFleetScreen_GetFleetType_Params
	{
	public:
		EYFleetType                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_AddShipToFleetScreen.GetCurrentFleetTypeText
	 */
	struct UUI_AddShipToFleetScreen_GetCurrentFleetTypeText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_AddShipToFleetScreen.GetAvailableShipsForActiveFleetType
	 */
	struct UUI_AddShipToFleetScreen_GetAvailableShipsForActiveFleetType_Params
	{
	public:
		TArray<struct FYUIShipManufacturerTechItemData>            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_AddShipToFleetScreen.AreMoreShipsAvailable
	 */
	struct UUI_AddShipToFleetScreen_AreMoreShipsAvailable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_AddShipToFleetScreen.AddShipToFleet
	 */
	struct UUI_AddShipToFleetScreen_AddShipToFleet_Params
	{
	public:
		int32_t                                                    shipID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BugReportScreen.SubmitBugReport
	 */
	struct UUI_BugReportScreen_SubmitBugReport_Params
	{
	public:
		class FText                                                issueType;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                description;                                             // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                title;                                                   // 0x0030(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BugReportScreen.HandleOnBugReportSubmittedResult
	 */
	struct UUI_BugReportScreen_HandleOnBugReportSubmittedResult_Params
	{
	public:
		bool                                                       succeeded;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BugReportScreen.GetIssueDropdownOptions
	 */
	struct UUI_BugReportScreen_GetIssueDropdownOptions_Params
	{
	public:
		TArray<struct FUIAccordionFilterCategoryOptionData>        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BugReportScreen.GetCustomerSupportURL
	 */
	struct UUI_BugReportScreen_GetCustomerSupportURL_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.StopCaptainItemPreview
	 */
	struct UUI_CaptainCustomizationScreen_StopCaptainItemPreview_Params
	{
	public:
		bool                                                       bKeepCaptainInPreview;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.ShowEquippableItemWidgets
	 */
	struct UUI_CaptainCustomizationScreen_ShowEquippableItemWidgets_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.ShowEquippableItemDescriptionWidget
	 */
	struct UUI_CaptainCustomizationScreen_ShowEquippableItemDescriptionWidget_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.RequestViewMarketBundle
	 */
	struct UUI_CaptainCustomizationScreen_RequestViewMarketBundle_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.RequestSetCharacterGender
	 */
	struct UUI_CaptainCustomizationScreen_RequestSetCharacterGender_Params
	{
	public:
		bool                                                       isFemale;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.RequestSelectEquippableItem
	 */
	struct UUI_CaptainCustomizationScreen_RequestSelectEquippableItem_Params
	{
	public:
		int32_t                                                    clickedSlotItemId;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.RequestSelectCategoryItem
	 */
	struct UUI_CaptainCustomizationScreen_RequestSelectCategoryItem_Params
	{
	public:
		int32_t                                                    clickedCategoryItemId;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.RequestEquipSelectedItem
	 */
	struct UUI_CaptainCustomizationScreen_RequestEquipSelectedItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.RequestBuySelectedItem
	 */
	struct UUI_CaptainCustomizationScreen_RequestBuySelectedItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.RefreshEquippedItemWidgets
	 */
	struct UUI_CaptainCustomizationScreen_RefreshEquippedItemWidgets_Params
	{
	public:
		TArray<struct FMarketItemUIData>                           equippedItems;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.RefreshEquippableItemWidgets
	 */
	struct UUI_CaptainCustomizationScreen_RefreshEquippableItemWidgets_Params
	{
	public:
		TArray<struct FMarketItemUIData>                           equippableItems;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.RefreshEquippableItemDescriptionWidget
	 */
	struct UUI_CaptainCustomizationScreen_RefreshEquippableItemDescriptionWidget_Params
	{
	public:
		struct FMarketItemUIData                                   equippableItem;                                          // 0x0000(0x0250)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.RefreshCharacterGenderWidgets
	 */
	struct UUI_CaptainCustomizationScreen_RefreshCharacterGenderWidgets_Params
	{
	public:
		bool                                                       isFemale;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.IsItemOwnedByPlayer
	 */
	struct UUI_CaptainCustomizationScreen_IsItemOwnedByPlayer_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.IsItemEquipped
	 */
	struct UUI_CaptainCustomizationScreen_IsItemEquipped_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.IsInTutorialMode
	 */
	struct UUI_CaptainCustomizationScreen_IsInTutorialMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.GetPlayerUiData
	 */
	struct UUI_CaptainCustomizationScreen_GetPlayerUiData_Params
	{
	public:
		struct FPlayerUIData                                       ReturnValue;                                             // 0x0000(0x0080)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.GetCurrencyTypeForItem
	 */
	struct UUI_CaptainCustomizationScreen_GetCurrencyTypeForItem_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYCurrency                                                 ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.GetCostForItem
	 */
	struct UUI_CaptainCustomizationScreen_GetCostForItem_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CaptainCustomizationScreen.FinalizeFirstTimeCaptainCustomization
	 */
	struct UUI_CaptainCustomizationScreen_FinalizeFirstTimeCaptainCustomization_Params
	{	};

	/**
	 * Function DreadGameUI.UI_CareerProgressionScreen.RequestPinCareerProgressionGoal
	 */
	struct UUI_CareerProgressionScreen_RequestPinCareerProgressionGoal_Params
	{
	public:
		class FName                                                goalId;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CareerProgressionScreen.RequestClaimCareerProgressionGoal
	 */
	struct UUI_CareerProgressionScreen_RequestClaimCareerProgressionGoal_Params
	{
	public:
		class FName                                                goalId;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CareerProgressionScreen.HandleCareerProgressionRewardClaimHandled
	 */
	struct UUI_CareerProgressionScreen_HandleCareerProgressionRewardClaimHandled_Params
	{
	public:
		class FName                                                goalId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CareerProgressionScreen.HandleCareerProgressionDataUpdated
	 */
	struct UUI_CareerProgressionScreen_HandleCareerProgressionDataUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.UI_CareerProgressionScreen.HandleCareerProgressionCategoryUnlocked
	 */
	struct UUI_CareerProgressionScreen_HandleCareerProgressionCategoryUnlocked_Params
	{
	public:
		EYGoalCategory                                             unlockedCategory;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CareerProgressionScreen.GetCareerProgressionUIData
	 */
	struct UUI_CareerProgressionScreen_GetCareerProgressionUIData_Params
	{
	public:
		struct FCareerProgressionUIData                            ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ContractsScreen.RerollContract
	 */
	struct UUI_ContractsScreen_RerollContract_Params
	{
	public:
		class FString                                              questId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ContractsScreen.HandleOnContractsUpdated
	 */
	struct UUI_ContractsScreen_HandleOnContractsUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ContractsScreen.GetTimeUntilNextContractUpdate
	 */
	struct UUI_ContractsScreen_GetTimeUntilNextContractUpdate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ContractsScreen.GetRankRequiredToUnlockContracts
	 */
	struct UUI_ContractsScreen_GetRankRequiredToUnlockContracts_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ContractsScreen.GetListOfContracts
	 */
	struct UUI_ContractsScreen_GetListOfContracts_Params
	{
	public:
		TArray<struct FContractData>                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ContractsScreen.DoesPlayerHaveEliteStatus
	 */
	struct UUI_ContractsScreen_DoesPlayerHaveEliteStatus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ContractsScreen.AreContractsUnlocked
	 */
	struct UUI_ContractsScreen_AreContractsUnlocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ContractsScreen.AcknowledgeCompletedContract
	 */
	struct UUI_ContractsScreen_AcknowledgeCompletedContract_Params
	{
	public:
		class FString                                              questId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SubPanel.Show
	 */
	struct UUI_SubPanel_Show_Params
	{
	public:
		bool                                                       ShowPanel;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SubPanel.SetData
	 */
	struct UUI_SubPanel_SetData_Params
	{
	public:
		class UObject*                                             Data;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SubPanel.OnShow
	 */
	struct UUI_SubPanel_OnShow_Params
	{	};

	/**
	 * Function DreadGameUI.UI_SubPanel.OnInputReceived
	 */
	struct UUI_SubPanel_OnInputReceived_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SubPanel.OnHide
	 */
	struct UUI_SubPanel_OnHide_Params
	{	};

	/**
	 * Function DreadGameUI.UI_SubPanel.OnDataReceived
	 */
	struct UUI_SubPanel_OnDataReceived_Params
	{
	public:
		class UObject*                                             Data;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DreadGameUI.UI_CtAWidget.OnRequestCtAClose__DelegateSignature
	 */
	struct UUI_CtAWidget_OnRequestCtAClose__DelegateSignature_Params
	{
	public:
		class UUI_CtAWidget*                                       CtAWidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DreadGameUI.UI_CtAWidget.OnCtAClosed__DelegateSignature
	 */
	struct UUI_CtAWidget_OnCtAClosed__DelegateSignature_Params
	{
	public:
		class UUI_CtAWidget*                                       CtAWidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadPopup.SetPopupData
	 */
	struct UUI_DreadPopup_SetPopupData_Params
	{
	public:
		class UPopupData*                                          PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_DreadPopup.OnPopupDataSet
	 */
	struct UUI_DreadPopup_OnPopupDataSet_Params
	{
	public:
		class UPopupData*                                          PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BattleBonusPurchasePopup.GetShipXpBonus
	 */
	struct UUI_BattleBonusPurchasePopup_GetShipXpBonus_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5OH6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BattleBonusPurchasePopup.GetFreeXpBonus
	 */
	struct UUI_BattleBonusPurchasePopup_GetFreeXpBonus_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1MWZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BattleBonusPurchasePopup.GetCreditsBonus
	 */
	struct UUI_BattleBonusPurchasePopup_GetCreditsBonus_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8PWK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BattleBonusPurchasePopup.GetBattleBonusCreditsCost
	 */
	struct UUI_BattleBonusPurchasePopup_GetBattleBonusCreditsCost_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0M3J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_UpsellPopup.OnMarketPurchaseComplete
	 */
	struct UUI_UpsellPopup_OnMarketPurchaseComplete_Params
	{
	public:
		EYPurchaseResult                                           purchaseResult;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_UpsellPopup.HandlePurchase
	 */
	struct UUI_UpsellPopup_HandlePurchase_Params
	{
	public:
		struct FMarketItemUIData                                   marketItem;                                              // 0x0000(0x0250)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0250(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipScreen.StartTransitionOut
	 */
	struct UUI_EditShipScreen_StartTransitionOut_Params
	{	};

	/**
	 * Function DreadGameUI.UI_EditShipScreen.StartTransitionIn
	 */
	struct UUI_EditShipScreen_StartTransitionIn_Params
	{	};

	/**
	 * Function DreadGameUI.UI_EditShipScreen.SetLoadoutName
	 */
	struct UUI_EditShipScreen_SetLoadoutName_Params
	{
	public:
		EYLoadoutCategory                                          loadoutCategory;                                         // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4KSZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipScreen.SetLoadoutCategory
	 */
	struct UUI_EditShipScreen_SetLoadoutCategory_Params
	{
	public:
		EYLoadoutCategory                                          loadoutCategory;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipScreen.IsLoadoutNameEditable
	 */
	struct UUI_EditShipScreen_IsLoadoutNameEditable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipScreen.HandleResearchCompleted
	 */
	struct UUI_EditShipScreen_HandleResearchCompleted_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipScreen.HandlePurchaseCompleted
	 */
	struct UUI_EditShipScreen_HandlePurchaseCompleted_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipScreen.GetLoadoutName
	 */
	struct UUI_EditShipScreen_GetLoadoutName_Params
	{
	public:
		EYLoadoutCategory                                          loadoutCategory;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NF5N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipScreen.GetFreeXP
	 */
	struct UUI_EditShipScreen_GetFreeXP_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipScreen.GetCurrentShipXp
	 */
	struct UUI_EditShipScreen_GetCurrentShipXp_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipScreen.GetCurrentShipItemData
	 */
	struct UUI_EditShipScreen_GetCurrentShipItemData_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    ReturnValue;                                             // 0x0000(0x0180)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipScreen.CanCurrentShipHaveLoadoutsBeEdited
	 */
	struct UUI_EditShipScreen_CanCurrentShipHaveLoadoutsBeEdited_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_FindNewFriendsScreen.StartSearchForUsers
	 */
	struct UUI_FindNewFriendsScreen_StartSearchForUsers_Params
	{
	public:
		class FText                                                filterText;                                              // 0x0000(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_FindNewFriendsScreen.SendFriendInvites
	 */
	struct UUI_FindNewFriendsScreen_SendFriendInvites_Params
	{
	public:
		TArray<class FName>                                        newFriendInviteIds;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_FindNewFriendsScreen.OnSearchForUsersResult
	 */
	struct UUI_FindNewFriendsScreen_OnSearchForUsersResult_Params
	{
	public:
		TArray<struct FFindNewFriendUserData>                      foundUsers;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_FindNewFriendsScreen.HandleOnShow
	 */
	struct UUI_FindNewFriendsScreen_HandleOnShow_Params
	{	};

	/**
	 * Function DreadGameUI.UI_FleetSelection.SetSelectedFleetType
	 */
	struct UUI_FleetSelection_SetSelectedFleetType_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_FleetSelection.OnBattleReadinessPurchaseApproved
	 */
	struct UUI_FleetSelection_OnBattleReadinessPurchaseApproved_Params
	{
	public:
		bool                                                       purchaseSuccessful;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_FleetSelection.GetHighestUnlockedFleet
	 */
	struct UUI_FleetSelection_GetHighestUnlockedFleet_Params
	{
	public:
		EYFleetType                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_FleetSelection.AttemptBattleReadinessPurchase
	 */
	struct UUI_FleetSelection_AttemptBattleReadinessPurchase_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GameModeLaunchScreen.SetSelectedFleetType
	 */
	struct UUI_GameModeLaunchScreen_SetSelectedFleetType_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GameModeLaunchScreen.OnMatchmakingStopped
	 */
	struct UUI_GameModeLaunchScreen_OnMatchmakingStopped_Params
	{	};

	/**
	 * Function DreadGameUI.UI_GameModeLaunchScreen.OnMatchmakingStarted
	 */
	struct UUI_GameModeLaunchScreen_OnMatchmakingStarted_Params
	{	};

	/**
	 * Function DreadGameUI.UI_GameModeLaunchScreen.GetSelectedGameModeType
	 */
	struct UUI_GameModeLaunchScreen_GetSelectedGameModeType_Params
	{
	public:
		EYGameModeType                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GameModeLaunchScreen.GetMatchmakingGameModeText
	 */
	struct UUI_GameModeLaunchScreen_GetMatchmakingGameModeText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GameModeLaunchScreen.GetMatchmakingGameModeDescText
	 */
	struct UUI_GameModeLaunchScreen_GetMatchmakingGameModeDescText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GameModeSelectionScreen.StartTutorial
	 */
	struct UUI_GameModeSelectionScreen_StartTutorial_Params
	{	};

	/**
	 * Function DreadGameUI.UI_GameModeSelectionScreen.ShouldUseNewPlayBranchFlow
	 */
	struct UUI_GameModeSelectionScreen_ShouldUseNewPlayBranchFlow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GameModeSelectionScreen.SetGameMode
	 */
	struct UUI_GameModeSelectionScreen_SetGameMode_Params
	{
	public:
		struct FYMenuGameModeDefinition                            GameMode;                                                // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GameModeSelectionScreen.RequestSaveFavorites
	 */
	struct UUI_GameModeSelectionScreen_RequestSaveFavorites_Params
	{	};

	/**
	 * Function DreadGameUI.UI_GameModeSelectionScreen.GetAvailableGameModes
	 */
	struct UUI_GameModeSelectionScreen_GetAvailableGameModes_Params
	{
	public:
		TArray<struct FYMenuGameModeDefinition>                    ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_HomeLoadingScreen.StartTutorial
	 */
	struct UUI_HomeLoadingScreen_StartTutorial_Params
	{	};

	/**
	 * Function DreadGameUI.UI_HomeLoadingScreen.StartTrainingMatch
	 */
	struct UUI_HomeLoadingScreen_StartTrainingMatch_Params
	{	};

	/**
	 * Function DreadGameUI.UI_HomeLoadingScreen.DownloadProgressUpdated
	 */
	struct UUI_HomeLoadingScreen_DownloadProgressUpdated_Params
	{
	public:
		float                                                      currentProgressPercentage;                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.StartQuickPlayMatchmaking
	 */
	struct UUI_HomeScreen_StartQuickPlayMatchmaking_Params
	{	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.ShowContractCompleted
	 */
	struct UUI_HomeScreen_ShowContractCompleted_Params
	{	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.ShowCaptainProgressionCompleted
	 */
	struct UUI_HomeScreen_ShowCaptainProgressionCompleted_Params
	{	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.ShouldShowQuickplayButton
	 */
	struct UUI_HomeScreen_ShouldShowQuickplayButton_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.ShouldShowExitButton
	 */
	struct UUI_HomeScreen_ShouldShowExitButton_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.ShouldAttemptToPurchaseQuickplayBattleBonus
	 */
	struct UUI_HomeScreen_ShouldAttemptToPurchaseQuickplayBattleBonus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.RefreshCaptainProgressionNotification
	 */
	struct UUI_HomeScreen_RefreshCaptainProgressionNotification_Params
	{	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.OnShowPromptForReturnAfterDisconnect
	 */
	struct UUI_HomeScreen_OnShowPromptForReturnAfterDisconnect_Params
	{	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.OnBattleReadinessPurchaseApproved
	 */
	struct UUI_HomeScreen_OnBattleReadinessPurchaseApproved_Params
	{
	public:
		bool                                                       purchaseSuccessful;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.MarketItemSelected
	 */
	struct UUI_HomeScreen_MarketItemSelected_Params
	{
	public:
		struct FMarketItemUIData                                   marketItem;                                              // 0x0000(0x0250)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.MarketDataUpdated
	 */
	struct UUI_HomeScreen_MarketDataUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.HandleResponseToReturnAfterDisconnectPrompt
	 */
	struct UUI_HomeScreen_HandleResponseToReturnAfterDisconnectPrompt_Params
	{
	public:
		bool                                                       reconnectToMatch;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.GetQuickplayFleetType
	 */
	struct UUI_HomeScreen_GetQuickplayFleetType_Params
	{
	public:
		EYFleetType                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.GetFeaturedMarketItems
	 */
	struct UUI_HomeScreen_GetFeaturedMarketItems_Params
	{
	public:
		TArray<struct FMarketItemUIData>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.GetCustomerSupportURL
	 */
	struct UUI_HomeScreen_GetCustomerSupportURL_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.ExitGame
	 */
	struct UUI_HomeScreen_ExitGame_Params
	{	};

	/**
	 * Function DreadGameUI.UI_HomeScreen.AttemptBattleReadinessPurchase
	 */
	struct UUI_HomeScreen_AttemptBattleReadinessPurchase_Params
	{	};

	/**
	 * Function DreadGameUI.UI_IdleKickScreen.Reconnect
	 */
	struct UUI_IdleKickScreen_Reconnect_Params
	{	};

	/**
	 * Function DreadGameUI.UI_IdleKickScreen.ExitGame
	 */
	struct UUI_IdleKickScreen_ExitGame_Params
	{	};

	/**
	 * Function DreadGameUI.UI_Leaderboard_Screen.UserDataRefreshed
	 */
	struct UUI_Leaderboard_Screen_UserDataRefreshed_Params
	{	};

	/**
	 * Function DreadGameUI.UI_Leaderboard_Screen.StartTransitionOut
	 */
	struct UUI_Leaderboard_Screen_StartTransitionOut_Params
	{	};

	/**
	 * Function DreadGameUI.UI_Leaderboard_Screen.StartTransitionIn
	 */
	struct UUI_Leaderboard_Screen_StartTransitionIn_Params
	{	};

	/**
	 * Function DreadGameUI.UI_Leaderboard_Screen.SocialListUpdated
	 */
	struct UUI_Leaderboard_Screen_SocialListUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.UI_Leaderboard_Screen.RequestSocialUpdate
	 */
	struct UUI_Leaderboard_Screen_RequestSocialUpdate_Params
	{	};

	/**
	 * Function DreadGameUI.UI_Leaderboard_Screen.RequestLeaderboardData
	 */
	struct UUI_Leaderboard_Screen_RequestLeaderboardData_Params
	{
	public:
		EYGameModeType                                             GameMode;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WZST[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Timespan;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYFleetType                                                fleetType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Previous;                                                // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_Leaderboard_Screen.HandleLeaderboardDataRecieved
	 */
	struct UUI_Leaderboard_Screen_HandleLeaderboardDataRecieved_Params
	{	};

	/**
	 * Function DreadGameUI.UI_Leaderboard_Screen.GetListOfOptionsForPlayer
	 */
	struct UUI_Leaderboard_Screen_GetListOfOptionsForPlayer_Params
	{
	public:
		struct FLeaderboardUIEntry                                 entry;                                                   // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
		TArray<EFriendOptionButton>                                ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_Leaderboard_Screen.GetLeaderboardUserData
	 */
	struct UUI_Leaderboard_Screen_GetLeaderboardUserData_Params
	{
	public:
		TArray<struct FPlayerUIData>                               ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_Leaderboard_Screen.GetLeaderboardData
	 */
	struct UUI_Leaderboard_Screen_GetLeaderboardData_Params
	{
	public:
		struct FLeaderboardUIData                                  ReturnValue;                                             // 0x0000(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_Leaderboard_Screen.DoFriendOptionActionOnUser
	 */
	struct UUI_Leaderboard_Screen_DoFriendOptionActionOnUser_Params
	{
	public:
		class FName                                                userId;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFriendOptionButton                                        option;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.StartTransitionOut
	 */
	struct UUI_LegalScreen_StartTransitionOut_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.StartTransitionIn
	 */
	struct UUI_LegalScreen_StartTransitionIn_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.ShouldDisplayAnotherLegalItem
	 */
	struct UUI_LegalScreen_ShouldDisplayAnotherLegalItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.RejectCurrentLegalDocument
	 */
	struct UUI_LegalScreen_RejectCurrentLegalDocument_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.QuitLegalScreen
	 */
	struct UUI_LegalScreen_QuitLegalScreen_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.NavigateToNextScreen
	 */
	struct UUI_LegalScreen_NavigateToNextScreen_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.IsCurrentLegalItemAttestation
	 */
	struct UUI_LegalScreen_IsCurrentLegalItemAttestation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.IsAcceptanceRequiredToProceed
	 */
	struct UUI_LegalScreen_IsAcceptanceRequiredToProceed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.HandlePlayerDataAvailable
	 */
	struct UUI_LegalScreen_HandlePlayerDataAvailable_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.HandleOnboardingInitialized
	 */
	struct UUI_LegalScreen_HandleOnboardingInitialized_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.HandleLegalItemActionProcessed
	 */
	struct UUI_LegalScreen_HandleLegalItemActionProcessed_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.GetCurrentLegalItemTitle
	 */
	struct UUI_LegalScreen_GetCurrentLegalItemTitle_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.GetCurrentLegalItemBody
	 */
	struct UUI_LegalScreen_GetCurrentLegalItemBody_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.ExitGame
	 */
	struct UUI_LegalScreen_ExitGame_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.EnterGame
	 */
	struct UUI_LegalScreen_EnterGame_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.AdvanceLegalItemQueue
	 */
	struct UUI_LegalScreen_AdvanceLegalItemQueue_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LegalScreen.AcceptCurrentLegalDocument
	 */
	struct UUI_LegalScreen_AcceptCurrentLegalDocument_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.StartTransitionOut
	 */
	struct UUI_LoginGateScreen_StartTransitionOut_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.StartTransitionIn
	 */
	struct UUI_LoginGateScreen_StartTransitionIn_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.ShouldShowQueueText
	 */
	struct UUI_LoginGateScreen_ShouldShowQueueText_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.ShouldShowMessage
	 */
	struct UUI_LoginGateScreen_ShouldShowMessage_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.ShouldShowEstimatedWait
	 */
	struct UUI_LoginGateScreen_ShouldShowEstimatedWait_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.ShouldShowCheckingProgressText
	 */
	struct UUI_LoginGateScreen_ShouldShowCheckingProgressText_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.ShouldShowBurstSmoothingText
	 */
	struct UUI_LoginGateScreen_ShouldShowBurstSmoothingText_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.SetupLoginGateScreen
	 */
	struct UUI_LoginGateScreen_SetupLoginGateScreen_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.QuitLoginGate
	 */
	struct UUI_LoginGateScreen_QuitLoginGate_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.NavigateToNextScreen
	 */
	struct UUI_LoginGateScreen_NavigateToNextScreen_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.HandlePlayerDataAvailable
	 */
	struct UUI_LoginGateScreen_HandlePlayerDataAvailable_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.HandleOnboardingInitialized
	 */
	struct UUI_LoginGateScreen_HandleOnboardingInitialized_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.GetQueuePositionAsText
	 */
	struct UUI_LoginGateScreen_GetQueuePositionAsText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.GetLoginGateTitle
	 */
	struct UUI_LoginGateScreen_GetLoginGateTitle_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.GetLoginGateMessageState
	 */
	struct UUI_LoginGateScreen_GetLoginGateMessageState_Params
	{
	public:
		EUILoginGateMessageType                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.GetEstimatedWaitTimeAsText
	 */
	struct UUI_LoginGateScreen_GetEstimatedWaitTimeAsText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.GetCurrentLoginState
	 */
	struct UUI_LoginGateScreen_GetCurrentLoginState_Params
	{
	public:
		EUILoginGateState                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.GetCheckingProgressTimeAsText
	 */
	struct UUI_LoginGateScreen_GetCheckingProgressTimeAsText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.ExitGame
	 */
	struct UUI_LoginGateScreen_ExitGame_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginGateScreen.EnterGame
	 */
	struct UUI_LoginGateScreen_EnterGame_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginScreen.SubmitLogin
	 */
	struct UUI_LoginScreen_SubmitLogin_Params
	{
	public:
		class FString                                              user;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              password;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       rememberUsername;                                        // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginScreen.OnLoginResultReceived
	 */
	struct UUI_LoginScreen_OnLoginResultReceived_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginScreen.GetUsername
	 */
	struct UUI_LoginScreen_GetUsername_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginScreen.GetPassword
	 */
	struct UUI_LoginScreen_GetPassword_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.TryCreateSession
	 */
	struct UUI_LoginScreen_PS4_TryCreateSession_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.ShowReturnFromDisconnectMessages
	 */
	struct UUI_LoginScreen_PS4_ShowReturnFromDisconnectMessages_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.SetPolicyContent
	 */
	struct UUI_LoginScreen_PS4_SetPolicyContent_Params
	{
	public:
		struct FPolicyContentResultData                            policyData;                                              // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.SessionRequestFailed
	 */
	struct UUI_LoginScreen_PS4_SessionRequestFailed_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.RequestUserProfileSignIn
	 */
	struct UUI_LoginScreen_PS4_RequestUserProfileSignIn_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.RequestTermsOfUse
	 */
	struct UUI_LoginScreen_PS4_RequestTermsOfUse_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.RequestSonyEmail
	 */
	struct UUI_LoginScreen_PS4_RequestSonyEmail_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.RequestPrivacyPolicy
	 */
	struct UUI_LoginScreen_PS4_RequestPrivacyPolicy_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.RequestLinkAccount
	 */
	struct UUI_LoginScreen_PS4_RequestLinkAccount_Params
	{
	public:
		class FString                                              email;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              password;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.RequestForceLogin
	 */
	struct UUI_LoginScreen_PS4_RequestForceLogin_Params
	{	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.RequestCreateAccount
	 */
	struct UUI_LoginScreen_PS4_RequestCreateAccount_Params
	{
	public:
		class FString                                              email;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       allowPromotions;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.IsSceaBuild
	 */
	struct UUI_LoginScreen_PS4_IsSceaBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.HandleRequestProfileSignInComplete
	 */
	struct UUI_LoginScreen_PS4_HandleRequestProfileSignInComplete_Params
	{
	public:
		struct FRequestProfileSignInResultData                     signInResultData;                                        // 0x0000(0x0003)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.HandleRequestLinkAccountComplete
	 */
	struct UUI_LoginScreen_PS4_HandleRequestLinkAccountComplete_Params
	{
	public:
		struct FPS4RequestResultData                               Result;                                                  // 0x0000(0x0002)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.HandleRequestCreateAccountComplete
	 */
	struct UUI_LoginScreen_PS4_HandleRequestCreateAccountComplete_Params
	{
	public:
		struct FPS4RequestResultData                               Result;                                                  // 0x0000(0x0002)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.HandleOnRequestSonyEmailComplete
	 */
	struct UUI_LoginScreen_PS4_HandleOnRequestSonyEmailComplete_Params
	{
	public:
		struct FRequestSonyEmailResultData                         emailResultData;                                         // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.HandleOnReceivePlayerEmail
	 */
	struct UUI_LoginScreen_PS4_HandleOnReceivePlayerEmail_Params
	{
	public:
		class FString                                              emailAddress;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.HandleOnAcceptLegalDocumentComplete
	 */
	struct UUI_LoginScreen_PS4_HandleOnAcceptLegalDocumentComplete_Params
	{
	public:
		bool                                                       successful;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.GetPSNId
	 */
	struct UUI_LoginScreen_PS4_GetPSNId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.GetErrorDisplayInfo
	 */
	struct UUI_LoginScreen_PS4_GetErrorDisplayInfo_Params
	{
	public:
		EYTitleScreenError                                         screenError;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W1GA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLoginScreenErrorPopupData                          ReturnValue;                                             // 0x0008(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.AcceptLegalDocument
	 */
	struct UUI_LoginScreen_PS4_AcceptLegalDocument_Params
	{
	public:
		class FString                                              documentType;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Version;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_LoginScreen_PS4.AcceptAllLegalDocuments
	 */
	struct UUI_LoginScreen_PS4_AcceptAllLegalDocuments_Params
	{
	public:
		TArray<struct FLegalDocumentData>                          documents;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManufacturersScreen.SetSelectedManufacturer
	 */
	struct UUI_ManufacturersScreen_SetSelectedManufacturer_Params
	{
	public:
		int32_t                                                    manufacturerId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManufacturersScreen.GetManufacturersData
	 */
	struct UUI_ManufacturersScreen_GetManufacturersData_Params
	{
	public:
		TArray<struct FYUIManufacturerInformationEntry>            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManufacturerTechTreeScreen.SetSelectedShip
	 */
	struct UUI_ManufacturerTechTreeScreen_SetSelectedShip_Params
	{
	public:
		int32_t                                                    shipID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManufacturerTechTreeScreen.InitializeTechTreePaths
	 */
	struct UUI_ManufacturerTechTreeScreen_InitializeTechTreePaths_Params
	{
	public:
		TArray<struct FUITechTreeShipNode>                         techTreePathNodes;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManufacturerTechTreeScreen.InitializeTechTree
	 */
	struct UUI_ManufacturerTechTreeScreen_InitializeTechTree_Params
	{
	public:
		class UUI_TechTreeWidget*                                  Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketScreen.RequestMarketItemPurchase
	 */
	struct UUI_MarketScreen_RequestMarketItemPurchase_Params
	{
	public:
		struct FMarketItemUIData                                   marketItem;                                              // 0x0000(0x0250)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0250(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketScreen.PlayerHasSufficientFundsToPurchaseItem
	 */
	struct UUI_MarketScreen_PlayerHasSufficientFundsToPurchaseItem_Params
	{
	public:
		struct FMarketItemUIData                                   marketData;                                              // 0x0000(0x0250)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0250(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketScreen.OnXpConversionRequested
	 */
	struct UUI_MarketScreen_OnXpConversionRequested_Params
	{	};

	/**
	 * Function DreadGameUI.UI_MarketScreen.OnXpConversionDataUpdated
	 */
	struct UUI_MarketScreen_OnXpConversionDataUpdated_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketScreen.OnPlayerCurrencyAmountsUpdated
	 */
	struct UUI_MarketScreen_OnPlayerCurrencyAmountsUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.UI_MarketScreen.MarketItemSelected
	 */
	struct UUI_MarketScreen_MarketItemSelected_Params
	{
	public:
		struct FMarketItemUIData                                   marketItem;                                              // 0x0000(0x0250)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketScreen.GpPackMarketItemSelected
	 */
	struct UUI_MarketScreen_GpPackMarketItemSelected_Params
	{
	public:
		struct FMarketItemUIData                                   marketItem;                                              // 0x0000(0x0250)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketScreen.GetUICurrencyTypeFromMarketItemUIData
	 */
	struct UUI_MarketScreen_GetUICurrencyTypeFromMarketItemUIData_Params
	{
	public:
		struct FMarketItemUIData                                   marketData;                                              // 0x0000(0x0250)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EYUICurrency                                               ReturnValue;                                             // 0x0250(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketScreen.GetUICurrencyTypeFromCurrency
	 */
	struct UUI_MarketScreen_GetUICurrencyTypeFromCurrency_Params
	{
	public:
		EYCurrency                                                 currency;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYUICurrency                                               ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketScreen.GetPriceValueFromMarketItemUIData
	 */
	struct UUI_MarketScreen_GetPriceValueFromMarketItemUIData_Params
	{
	public:
		struct FMarketItemUIData                                   marketData;                                              // 0x0000(0x0250)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0250(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketScreen.GetPlayerCurrencyAmounts
	 */
	struct UUI_MarketScreen_GetPlayerCurrencyAmounts_Params
	{
	public:
		struct FPlayerCurrencyAmountsData                          ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketScreen.GetColorTheme
	 */
	struct UUI_MarketScreen_GetColorTheme_Params
	{
	public:
		struct FMarketItemUIData                                   marketData;                                              // 0x0000(0x0250)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EUIColorTheme                                              ReturnValue;                                             // 0x0250(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketBundleDetailsScreen.RequestPreview
	 */
	struct UUI_MarketBundleDetailsScreen_RequestPreview_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketBundleDetailsScreen.RequestMarketItemPurchase
	 */
	struct UUI_MarketBundleDetailsScreen_RequestMarketItemPurchase_Params
	{
	public:
		struct FMarketItemUIData                                   marketItem;                                              // 0x0000(0x0250)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0250(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketBundleDetailsScreen.PlayerHasSufficientFundsToPurchaseItem
	 */
	struct UUI_MarketBundleDetailsScreen_PlayerHasSufficientFundsToPurchaseItem_Params
	{
	public:
		struct FMarketItemUIData                                   marketData;                                              // 0x0000(0x0250)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0250(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketBundleDetailsScreen.OnMarketPurchaseComplete
	 */
	struct UUI_MarketBundleDetailsScreen_OnMarketPurchaseComplete_Params
	{
	public:
		EYPurchaseResult                                           purchaseResult;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketBundleDetailsScreen.GetPlayerCurrencyAmounts
	 */
	struct UUI_MarketBundleDetailsScreen_GetPlayerCurrencyAmounts_Params
	{
	public:
		struct FPlayerCurrencyAmountsData                          ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketBundleDetailsScreen.GetMarketBundleItemTexture
	 */
	struct UUI_MarketBundleDetailsScreen_GetMarketBundleItemTexture_Params
	{
	public:
		struct FYMenuItemData                                      marketItem;                                              // 0x0000(0x0088)  (Parm, NativeAccessSpecifierPublic)
		class UTexture2D*                                          ReturnValue;                                             // 0x0088(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketBundleDetailsScreen.GetMarketBundleItemDescriptions
	 */
	struct UUI_MarketBundleDetailsScreen_GetMarketBundleItemDescriptions_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y770[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                outOfferDescription;                                     // 0x0008(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FText                                                outCatalogDescription;                                   // 0x0020(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketBundleDetailsScreen.GetMarketBundleItemData
	 */
	struct UUI_MarketBundleDetailsScreen_GetMarketBundleItemData_Params
	{
	public:
		struct FYMenuItemData                                      marketItem;                                              // 0x0000(0x0088)  (Parm, NativeAccessSpecifierPublic)
		struct FYItemUIData                                        ReturnValue;                                             // 0x0088(0x00D0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketBundleDetailsScreen.GetMarketBundleData
	 */
	struct UUI_MarketBundleDetailsScreen_GetMarketBundleData_Params
	{
	public:
		struct FMarketItemUIData                                   ReturnValue;                                             // 0x0000(0x0250)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketBundleDetailsScreen.GetCaptainCharacterGender
	 */
	struct UUI_MarketBundleDetailsScreen_GetCaptainCharacterGender_Params
	{
	public:
		EYCharacterGender                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketBundleDetailsScreen.CanShipItemBeEquipped
	 */
	struct UUI_MarketBundleDetailsScreen_CanShipItemBeEquipped_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketShipDetailsScreen.GetMarketItemData
	 */
	struct UUI_MarketShipDetailsScreen_GetMarketItemData_Params
	{
	public:
		struct FMarketItemUIData                                   ReturnValue;                                             // 0x0000(0x0250)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.StartTransitionOut
	 */
	struct UUI_ModuleDetailsScreen_StartTransitionOut_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.StartTransitionIn
	 */
	struct UUI_ModuleDetailsScreen_StartTransitionIn_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.SetSelectedModule
	 */
	struct UUI_ModuleDetailsScreen_SetSelectedModule_Params
	{
	public:
		int32_t                                                    moduleId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.ResearchModule
	 */
	struct UUI_ModuleDetailsScreen_ResearchModule_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.PurchaseModule
	 */
	struct UUI_ModuleDetailsScreen_PurchaseModule_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.OnShipXpUpdate
	 */
	struct UUI_ModuleDetailsScreen_OnShipXpUpdate_Params
	{
	public:
		int32_t                                                    shipXp;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DreadGameUI.UI_ModuleDetailsScreen.OnAsyncVideoLoaded__DelegateSignature
	 */
	struct UUI_ModuleDetailsScreen_OnAsyncVideoLoaded__DelegateSignature_Params
	{
	public:
		class UFileMediaSource*                                    VideoMovieSource;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.IsModuleLockedPrecastLoadout
	 */
	struct UUI_ModuleDetailsScreen_IsModuleLockedPrecastLoadout_Params
	{
	public:
		int32_t                                                    moduleId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.IsModuleEquippedOnShip
	 */
	struct UUI_ModuleDetailsScreen_IsModuleEquippedOnShip_Params
	{
	public:
		int32_t                                                    moduleId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.IsCurrentShipOwned
	 */
	struct UUI_ModuleDetailsScreen_IsCurrentShipOwned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.IsCurrentModuleOwned
	 */
	struct UUI_ModuleDetailsScreen_IsCurrentModuleOwned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.IsCurrentModuleEquippedOnShip
	 */
	struct UUI_ModuleDetailsScreen_IsCurrentModuleEquippedOnShip_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.HasEnoughCurrencyToResearchCurrentModule
	 */
	struct UUI_ModuleDetailsScreen_HasEnoughCurrencyToResearchCurrentModule_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.HasEnoughCurrencyToPurchaseCurrentModule
	 */
	struct UUI_ModuleDetailsScreen_HasEnoughCurrencyToPurchaseCurrentModule_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.HandleResearchCompleted
	 */
	struct UUI_ModuleDetailsScreen_HandleResearchCompleted_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.HandlePurchaseCompleted
	 */
	struct UUI_ModuleDetailsScreen_HandlePurchaseCompleted_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.HandlePlayerPurchasesListUpdated
	 */
	struct UUI_ModuleDetailsScreen_HandlePlayerPurchasesListUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.HandleEquipCompleted
	 */
	struct UUI_ModuleDetailsScreen_HandleEquipCompleted_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetVanityItemData
	 */
	struct UUI_ModuleDetailsScreen_GetVanityItemData_Params
	{
	public:
		EYUILoadoutItemType                                        loadoutSlot;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2XFA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FUIGenericButtonModuleData>                  ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetUiDataForItem
	 */
	struct UUI_ModuleDetailsScreen_GetUiDataForItem_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q90H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FYItemUIData                                        ReturnValue;                                             // 0x0008(0x00D0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetUiDataForCurrentItem
	 */
	struct UUI_ModuleDetailsScreen_GetUiDataForCurrentItem_Params
	{
	public:
		struct FYItemUIData                                        ReturnValue;                                             // 0x0000(0x00D0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetTechTreeData
	 */
	struct UUI_ModuleDetailsScreen_GetTechTreeData_Params
	{
	public:
		TArray<struct FUIGenericButtonModuleData>                  ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetTechItemsRequiredForShip
	 */
	struct UUI_ModuleDetailsScreen_GetTechItemsRequiredForShip_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetTechItemsRequiredForModule
	 */
	struct UUI_ModuleDetailsScreen_GetTechItemsRequiredForModule_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetTechItemsOwnedForShip
	 */
	struct UUI_ModuleDetailsScreen_GetTechItemsOwnedForShip_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetShipData
	 */
	struct UUI_ModuleDetailsScreen_GetShipData_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    ReturnValue;                                             // 0x0000(0x0180)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetSelectedModule
	 */
	struct UUI_ModuleDetailsScreen_GetSelectedModule_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetRawShipXpCost
	 */
	struct UUI_ModuleDetailsScreen_GetRawShipXpCost_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetPurchaseData
	 */
	struct UUI_ModuleDetailsScreen_GetPurchaseData_Params
	{
	public:
		struct FYUITechTreeItemPurchaseData                        ReturnValue;                                             // 0x0000(0x0200)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetPlayerCurrencyAmounts
	 */
	struct UUI_ModuleDetailsScreen_GetPlayerCurrencyAmounts_Params
	{
	public:
		struct FShipCurrencyAmountsData                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetOwnedTechTreeModuleCountForCurrentShip
	 */
	struct UUI_ModuleDetailsScreen_GetOwnedTechTreeModuleCountForCurrentShip_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetModuleStillFromPath
	 */
	struct UUI_ModuleDetailsScreen_GetModuleStillFromPath_Params
	{
	public:
		class FString                                              imagePath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              directory;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetModulePurchaseState
	 */
	struct UUI_ModuleDetailsScreen_GetModulePurchaseState_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYTechTreeItemState                                        ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetModuleDescription
	 */
	struct UUI_ModuleDetailsScreen_GetModuleDescription_Params
	{
	public:
		struct FYUITechTreeItemPurchaseData                        moduleData;                                              // 0x0000(0x0200)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0200(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetModuleData
	 */
	struct UUI_ModuleDetailsScreen_GetModuleData_Params
	{
	public:
		struct FUIGenericButtonModuleData                          ReturnValue;                                             // 0x0000(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetItemType
	 */
	struct UUI_ModuleDetailsScreen_GetItemType_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYUILoadoutItemType                                        ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetCurrentModulePurchaseState
	 */
	struct UUI_ModuleDetailsScreen_GetCurrentModulePurchaseState_Params
	{
	public:
		EYTechTreeItemState                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetCurrentModuleOfferCurrencyType
	 */
	struct UUI_ModuleDetailsScreen_GetCurrentModuleOfferCurrencyType_Params
	{
	public:
		EYCurrency                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetCurrentModuleId
	 */
	struct UUI_ModuleDetailsScreen_GetCurrentModuleId_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetCurrentItemType
	 */
	struct UUI_ModuleDetailsScreen_GetCurrentItemType_Params
	{
	public:
		EYUILoadoutItemType                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetCreditsCost
	 */
	struct UUI_ModuleDetailsScreen_GetCreditsCost_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetAdjustedShipXpCost
	 */
	struct UUI_ModuleDetailsScreen_GetAdjustedShipXpCost_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.GetAdjustedFreeXpCost
	 */
	struct UUI_ModuleDetailsScreen_GetAdjustedFreeXpCost_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.EquipModule
	 */
	struct UUI_ModuleDetailsScreen_EquipModule_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.DoesModuleRequireProgressToUnlock
	 */
	struct UUI_ModuleDetailsScreen_DoesModuleRequireProgressToUnlock_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.DoesCurrentModuleBelongToAnyOwnedShip
	 */
	struct UUI_ModuleDetailsScreen_DoesCurrentModuleBelongToAnyOwnedShip_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.CanPurchaseModule
	 */
	struct UUI_ModuleDetailsScreen_CanPurchaseModule_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.CanPurchaseCurrentModule
	 */
	struct UUI_ModuleDetailsScreen_CanPurchaseCurrentModule_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ModuleDetailsScreen.AsyncLoadVideoFromPath
	 */
	struct UUI_ModuleDetailsScreen_AsyncLoadVideoFromPath_Params
	{
	public:
		class FString                                              videoPath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              directory;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NotificationsScreen.RegisterWidget
	 */
	struct UUI_NotificationsScreen_RegisterWidget_Params
	{	};

	/**
	 * Function DreadGameUI.UI_NotificationsScreen.HandleNotificationsChanged
	 */
	struct UUI_NotificationsScreen_HandleNotificationsChanged_Params
	{	};

	/**
	 * Function DreadGameUI.UI_NotificationsScreen.HandleNotificationActionSelected
	 */
	struct UUI_NotificationsScreen_HandleNotificationActionSelected_Params
	{
	public:
		class UNotificationData*                                   NotificationData;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ENotificationButtonType                                    notificationAction;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NotificationsScreen.GetNotificationsByType
	 */
	struct UUI_NotificationsScreen_GetNotificationsByType_Params
	{
	public:
		EYAnnouncementType                                         notificationType;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TC1S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UNotificationData*>                           ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NotificationsScreen.GetNotification
	 */
	struct UUI_NotificationsScreen_GetNotification_Params
	{
	public:
		EYAnnouncementType                                         notificationType;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OBSY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    notificationId;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNotificationData*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NotificationsScreen.GetCurrentNotification
	 */
	struct UUI_NotificationsScreen_GetCurrentNotification_Params
	{
	public:
		class UNotificationData*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NotificationsScreen.GetCategoryName
	 */
	struct UUI_NotificationsScreen_GetCategoryName_Params
	{
	public:
		EYAnnouncementType                                         notificationType;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZXF6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NotificationsScreen.GetCategoryFilters
	 */
	struct UUI_NotificationsScreen_GetCategoryFilters_Params
	{
	public:
		struct FUIAccordionFilterData                              ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_OwnedShipsScreen.SetSelectedShip
	 */
	struct UUI_OwnedShipsScreen_SetSelectedShip_Params
	{
	public:
		int32_t                                                    shipID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_OwnedShipsScreen.GetOwnedShipLoadouts
	 */
	struct UUI_OwnedShipsScreen_GetOwnedShipLoadouts_Params
	{
	public:
		TArray<class UYShipLoadoutMmogbrain*>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_OwnedShipsScreen.GetOwnedShipDataStructs
	 */
	struct UUI_OwnedShipsScreen_GetOwnedShipDataStructs_Params
	{
	public:
		TArray<struct FYUIShipManufacturerTechItemData>            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.XpConversionNotificationCheck
	 */
	struct UUI_PersistentScreen_XpConversionNotificationCheck_Params
	{
	public:
		float                                                      xpMultiplier;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    minTier;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.StartTransitionOut
	 */
	struct UUI_PersistentScreen_StartTransitionOut_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.StartTransitionIn
	 */
	struct UUI_PersistentScreen_StartTransitionIn_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.StartQuickPlayMatchmaking
	 */
	struct UUI_PersistentScreen_StartQuickPlayMatchmaking_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.StartMatchmaking
	 */
	struct UUI_PersistentScreen_StartMatchmaking_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.SetPrevFleetType
	 */
	struct UUI_PersistentScreen_SetPrevFleetType_Params
	{
	public:
		EYFleetType                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.SetNextFleetType
	 */
	struct UUI_PersistentScreen_SetNextFleetType_Params
	{
	public:
		EYFleetType                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.SetFavoriteMode
	 */
	struct UUI_PersistentScreen_SetFavoriteMode_Params
	{
	public:
		EYGameModeType                                             GameMode;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isFavorite;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.RegisterWidget
	 */
	struct UUI_PersistentScreen_RegisterWidget_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.OnServerStarting
	 */
	struct UUI_PersistentScreen_OnServerStarting_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.OnMmogConnectionLost
	 */
	struct UUI_PersistentScreen_OnMmogConnectionLost_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.OnMatchmakingTimerStopped
	 */
	struct UUI_PersistentScreen_OnMatchmakingTimerStopped_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.OnMatchmakingTimerStarted
	 */
	struct UUI_PersistentScreen_OnMatchmakingTimerStarted_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.OnMatchmakingStarted
	 */
	struct UUI_PersistentScreen_OnMatchmakingStarted_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.OnMatchmakingFailed
	 */
	struct UUI_PersistentScreen_OnMatchmakingFailed_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.OnMatchmakingAverageWaitTimeAvailable
	 */
	struct UUI_PersistentScreen_OnMatchmakingAverageWaitTimeAvailable_Params
	{
	public:
		int32_t                                                    waitTimeSeconds;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.OnCTATriggered
	 */
	struct UUI_PersistentScreen_OnCTATriggered_Params
	{
	public:
		class UYCtA*                                               cta;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.OnCTAManagerReady
	 */
	struct UUI_PersistentScreen_OnCTAManagerReady_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.OnCheckCanReturnToMatch
	 */
	struct UUI_PersistentScreen_OnCheckCanReturnToMatch_Params
	{
	public:
		bool                                                       CanReturnToMatch;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.OnBattleServerShutdown
	 */
	struct UUI_PersistentScreen_OnBattleServerShutdown_Params
	{	};

	/**
	 * DelegateFunction DreadGameUI.UI_PersistentScreen.OnAnnouncementsChanged__DelegateSignature
	 */
	struct UUI_PersistentScreen_OnAnnouncementsChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.IsTutorialMatchCompleted
	 */
	struct UUI_PersistentScreen_IsTutorialMatchCompleted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.IsMatchmakingInProgress
	 */
	struct UUI_PersistentScreen_IsMatchmakingInProgress_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.IsFirstTimeCaptainCustomizationCompleted
	 */
	struct UUI_PersistentScreen_IsFirstTimeCaptainCustomizationCompleted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.IsFavoriteMode
	 */
	struct UUI_PersistentScreen_IsFavoriteMode_Params
	{
	public:
		EYGameModeType                                             GameMode;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.IsBattleServerStarting
	 */
	struct UUI_PersistentScreen_IsBattleServerStarting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.HasGpToConvertAllShipXp
	 */
	struct UUI_PersistentScreen_HasGpToConvertAllShipXp_Params
	{
	public:
		int32_t                                                    minTier;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.HandleSquadUpdated
	 */
	struct UUI_PersistentScreen_HandleSquadUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.HandlePlayerCardUpdated
	 */
	struct UUI_PersistentScreen_HandlePlayerCardUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.HandleOnPlayerSpeakingUpdated
	 */
	struct UUI_PersistentScreen_HandleOnPlayerSpeakingUpdated_Params
	{
	public:
		struct FSquadVoiceData                                     UpdateData;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.HandleNotificationsChanged
	 */
	struct UUI_PersistentScreen_HandleNotificationsChanged_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.HandleNotificationActionSelected
	 */
	struct UUI_PersistentScreen_HandleNotificationActionSelected_Params
	{
	public:
		int32_t                                                    notificationId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ENotificationButtonType                                    notificationAction;                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.GetSquadData
	 */
	struct UUI_PersistentScreen_GetSquadData_Params
	{
	public:
		TArray<struct FSquadUserData>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.GetNumNotifications
	 */
	struct UUI_PersistentScreen_GetNumNotifications_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.GetNavigationContextFleetTier
	 */
	struct UUI_PersistentScreen_GetNavigationContextFleetTier_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.GetMatchmakingGameMode
	 */
	struct UUI_PersistentScreen_GetMatchmakingGameMode_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.GetMatchmakingFleetTier
	 */
	struct UUI_PersistentScreen_GetMatchmakingFleetTier_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.GetCurrentNotification
	 */
	struct UUI_PersistentScreen_GetCurrentNotification_Params
	{
	public:
		class UNotificationData*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.GetCurrentFleetType
	 */
	struct UUI_PersistentScreen_GetCurrentFleetType_Params
	{
	public:
		EYFleetType                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.GetCtAManagerInterface
	 */
	struct UUI_PersistentScreen_GetCtAManagerInterface_Params
	{
	public:
		class UYCtAManagerInterface*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.ClearCurrentNotification
	 */
	struct UUI_PersistentScreen_ClearCurrentNotification_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.CanStartQuickStartMatchmaking
	 */
	struct UUI_PersistentScreen_CanStartQuickStartMatchmaking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.CanStartMatchmaking
	 */
	struct UUI_PersistentScreen_CanStartMatchmaking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.CanReturnToMatch
	 */
	struct UUI_PersistentScreen_CanReturnToMatch_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.CancelMatchmaking
	 */
	struct UUI_PersistentScreen_CancelMatchmaking_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentScreen.CanBeFavorited
	 */
	struct UUI_PersistentScreen_CanBeFavorited_Params
	{
	public:
		EYGameModeType                                             GameMode;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_RibbonsScreen.GetRibbonDataList
	 */
	struct UUI_RibbonsScreen_GetRibbonDataList_Params
	{
	public:
		TArray<struct FPlayerRibbonButtonData>                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_RibbonsScreen.CreateRibbonsButtonWidgetsAndPopulateDataList
	 */
	struct UUI_RibbonsScreen_CreateRibbonsButtonWidgetsAndPopulateDataList_Params
	{
	public:
		class UClass*                                              buttonWidgetClass;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPlayerRibbonButtonData>                     ReturnValue;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_RootFrontendScreen.SetPersistentScreenVisible
	 */
	struct UUI_RootFrontendScreen_SetPersistentScreenVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_RootFrontendScreen.SetHangarScrimVisible
	 */
	struct UUI_RootFrontendScreen_SetHangarScrimVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_RootFrontendScreen.IsMmogConnected
	 */
	struct UUI_RootFrontendScreen_IsMmogConnected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SettingsScreen.UpdateSettingValue
	 */
	struct UUI_SettingsScreen_UpdateSettingValue_Params
	{
	public:
		struct FYUIUserSetting                                     settingToUpdate;                                         // 0x0000(0x0100)  (Parm, NativeAccessSpecifierPublic)
		float                                                      newValue;                                                // 0x0100(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RSBR[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FYUIUserSetting                                     ReturnValue;                                             // 0x0108(0x0100)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SettingsScreen.ResetAllSettingsToDefault
	 */
	struct UUI_SettingsScreen_ResetAllSettingsToDefault_Params
	{	};

	/**
	 * Function DreadGameUI.UI_SettingsScreen.RequestSettingsChange
	 */
	struct UUI_SettingsScreen_RequestSettingsChange_Params
	{
	public:
		TArray<struct FYUIUserSetting>                             Audio;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FYUIUserSetting>                             Controls;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FYUIUserSetting>                             gameSettings;                                            // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FYUIUserSetting>                             Graphics;                                                // 0x0030(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FYUIUserSetting>                             advancedGraphics;                                        // 0x0040(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SettingsScreen.RequestSettingChangePreview
	 */
	struct UUI_SettingsScreen_RequestSettingChangePreview_Params
	{
	public:
		EYUISettingCategory                                        uniqueCategory;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYUISettingCategory                                        groupCategory;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XKDX[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    GroupIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SettingsScreen.RequestKeybindChange
	 */
	struct UUI_SettingsScreen_RequestKeybindChange_Params
	{
	public:
		class FString                                              ActionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                Key;                                                     // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       shiftDown;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       altDown;                                                 // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ctrlDown;                                                // 0x002A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SettingsScreen.RequestHotKeysReset
	 */
	struct UUI_SettingsScreen_RequestHotKeysReset_Params
	{	};

	/**
	 * Function DreadGameUI.UI_SettingsScreen.ReloadSavedSettings
	 */
	struct UUI_SettingsScreen_ReloadSavedSettings_Params
	{	};

	/**
	 * Function DreadGameUI.UI_SettingsScreen.OnSettingsUpdated
	 */
	struct UUI_SettingsScreen_OnSettingsUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.UI_SettingsScreen.OnHotKeysUpdated
	 */
	struct UUI_SettingsScreen_OnHotKeysUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.UI_SettingsScreen.GetSettingsGroupData
	 */
	struct UUI_SettingsScreen_GetSettingsGroupData_Params
	{
	public:
		ESettingsScreenGroup                                       Group;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PT84[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FUISettingsGroupData>                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipDetailsScreen.GetPurchaseData
	 */
	struct UUI_ShipDetailsScreen_GetPurchaseData_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SB72[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FYUITechTreeItemPurchaseData                        ReturnValue;                                             // 0x0008(0x0200)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.SetSelectedShip
	 */
	struct UUI_ShipTechTreeScreen_SetSelectedShip_Params
	{
	public:
		int32_t                                                    shipItemId;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.SetSelectedModule
	 */
	struct UUI_ShipTechTreeScreen_SetSelectedModule_Params
	{
	public:
		int32_t                                                    moduleItemId;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.RegisterWidget
	 */
	struct UUI_ShipTechTreeScreen_RegisterWidget_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.OnShipXpUpdate
	 */
	struct UUI_ShipTechTreeScreen_OnShipXpUpdate_Params
	{
	public:
		int32_t                                                    shipXp;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.IsHeroShip
	 */
	struct UUI_ShipTechTreeScreen_IsHeroShip_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0180(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.InitializeTechTree
	 */
	struct UUI_ShipTechTreeScreen_InitializeTechTree_Params
	{
	public:
		int32_t                                                    numModuleRows;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.HandleTechTreeDataReceived
	 */
	struct UUI_ShipTechTreeScreen_HandleTechTreeDataReceived_Params
	{
	public:
		TArray<struct FUIGenericButtonModuleData>                  moduleUiData;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    techTreeRow;                                             // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.HandleShipProgressionDataReceived
	 */
	struct UUI_ShipTechTreeScreen_HandleShipProgressionDataReceived_Params
	{
	public:
		TArray<struct FYUIShipManufacturerTechItemData>            shipProgressionUiData;                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.HandleShipDataReceived
	 */
	struct UUI_ShipTechTreeScreen_HandleShipDataReceived_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipUiData;                                              // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.GetUiDataForItem
	 */
	struct UUI_ShipTechTreeScreen_GetUiDataForItem_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IBW1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FYItemUIData                                        ReturnValue;                                             // 0x0008(0x00D0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.GetShipTier
	 */
	struct UUI_ShipTechTreeScreen_GetShipTier_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0180(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.GetShipName
	 */
	struct UUI_ShipTechTreeScreen_GetShipName_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0180(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.GetShipClassificationIconPath
	 */
	struct UUI_ShipTechTreeScreen_GetShipClassificationIconPath_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0180(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.GetPositionForStatsPopup
	 */
	struct UUI_ShipTechTreeScreen_GetPositionForStatsPopup_Params
	{
	public:
		struct FVector2D                                           popupSize;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UUI_DreadWidget*                                     moduleWidget;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.GetPlayerCurrencyAmounts
	 */
	struct UUI_ShipTechTreeScreen_GetPlayerCurrencyAmounts_Params
	{
	public:
		struct FShipCurrencyAmountsData                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.GetItemType
	 */
	struct UUI_ShipTechTreeScreen_GetItemType_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYUILoadoutItemType                                        ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.GetClassificationIconPathForType
	 */
	struct UUI_ShipTechTreeScreen_GetClassificationIconPathForType_Params
	{
	public:
		EYUILoadoutItemType                                        itemType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1KB9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeScreen.GetClassificationIconPathForItemId
	 */
	struct UUI_ShipTechTreeScreen_GetClassificationIconPathForItemId_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O84M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SocialScreen.UpdateSquadPlayerCard
	 */
	struct UUI_SocialScreen_UpdateSquadPlayerCard_Params
	{	};

	/**
	 * Function DreadGameUI.UI_SocialScreen.SocialListUpdated
	 */
	struct UUI_SocialScreen_SocialListUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.UI_SocialScreen.IsVirtualKeyboardFocused
	 */
	struct UUI_SocialScreen_IsVirtualKeyboardFocused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SocialScreen.IsBattleServerStarting
	 */
	struct UUI_SocialScreen_IsBattleServerStarting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SocialScreen.InviteUserToSquad_PS4
	 */
	struct UUI_SocialScreen_InviteUserToSquad_PS4_Params
	{
	public:
		class FString                                              sceAccountId;                                            // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SocialScreen.HandleOnPlayerSpeakingUpdated
	 */
	struct UUI_SocialScreen_HandleOnPlayerSpeakingUpdated_Params
	{
	public:
		struct FSquadVoiceData                                     UpdateData;                                              // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SocialScreen.GetSquadList
	 */
	struct UUI_SocialScreen_GetSquadList_Params
	{
	public:
		TArray<struct FSquadUserData>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SocialScreen.GetPlayerUserData
	 */
	struct UUI_SocialScreen_GetPlayerUserData_Params
	{
	public:
		struct FPlayerUserData                                     ReturnValue;                                             // 0x0000(0x0080)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SocialScreen.GetListOfOptionsForFriend
	 */
	struct UUI_SocialScreen_GetListOfOptionsForFriend_Params
	{
	public:
		struct FFriendsUserData                                    friendData;                                              // 0x0000(0x0080)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		TArray<EFriendOptionButton>                                ReturnValue;                                             // 0x0080(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SocialScreen.GetFriendsListData
	 */
	struct UUI_SocialScreen_GetFriendsListData_Params
	{
	public:
		TArray<struct FFriendsUserData>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SocialScreen.GetFilteredFriendsListData
	 */
	struct UUI_SocialScreen_GetFilteredFriendsListData_Params
	{
	public:
		class FText                                                filterText;                                              // 0x0000(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		TArray<struct FFriendsUserData>                            ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SocialScreen.DoFriendOptionActionOnUser
	 */
	struct UUI_SocialScreen_DoFriendOptionActionOnUser_Params
	{
	public:
		class FName                                                userId;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFriendOptionButton                                        option;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.UpdateStats
	 */
	struct UUI_StatisticsScreen_UpdateStats_Params
	{	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.StartTransitionOut
	 */
	struct UUI_StatisticsScreen_StartTransitionOut_Params
	{	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.StartTransitionIn
	 */
	struct UUI_StatisticsScreen_StartTransitionIn_Params
	{	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.SortFriendList
	 */
	struct UUI_StatisticsScreen_SortFriendList_Params
	{
	public:
		EStatisticsUIType                                          sortCategory;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.SetPlayerForStats
	 */
	struct UUI_StatisticsScreen_SetPlayerForStats_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_56QL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PlayerId;                                                // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.InitPlayerComparison
	 */
	struct UUI_StatisticsScreen_InitPlayerComparison_Params
	{	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.HandleStatisticsUIUpdated
	 */
	struct UUI_StatisticsScreen_HandleStatisticsUIUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.HandleFriendsUIUpdated
	 */
	struct UUI_StatisticsScreen_HandleFriendsUIUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetStringForStatisticsUIType
	 */
	struct UUI_StatisticsScreen_GetStringForStatisticsUIType_Params
	{
	public:
		EStatisticsUIType                                          statType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YMD6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetStringArrayForLeaderboardFilter
	 */
	struct UUI_StatisticsScreen_GetStringArrayForLeaderboardFilter_Params
	{
	public:
		TArray<class FText>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetStatValueForPlayer
	 */
	struct UUI_StatisticsScreen_GetStatValueForPlayer_Params
	{
	public:
		EStatisticsUIType                                          statType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LO5W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PlayerId;                                                // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetStatValueForCurrentPlayer
	 */
	struct UUI_StatisticsScreen_GetStatValueForCurrentPlayer_Params
	{
	public:
		EStatisticsUIType                                          statType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HX3C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetStatTextForPlayer
	 */
	struct UUI_StatisticsScreen_GetStatTextForPlayer_Params
	{
	public:
		EStatisticsUIType                                          statType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T42G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PlayerId;                                                // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetStatTextForCurrentPlayer
	 */
	struct UUI_StatisticsScreen_GetStatTextForCurrentPlayer_Params
	{
	public:
		EStatisticsUIType                                          statType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ADNT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetStatForLeaderboardIndex
	 */
	struct UUI_StatisticsScreen_GetStatForLeaderboardIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EStatisticsUIType                                          ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetStatComparisonByUsername
	 */
	struct UUI_StatisticsScreen_GetStatComparisonByUsername_Params
	{
	public:
		EStatisticsUIType                                          statType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TG5O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                player1Id;                                               // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                player2Id;                                               // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FStatComparison                                     ReturnValue;                                             // 0x0018(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetStatComparisonBySlot
	 */
	struct UUI_StatisticsScreen_GetStatComparisonBySlot_Params
	{
	public:
		EStatisticsUIType                                          statType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FSAF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    player1SlotIndex;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    player2SlotIndex;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IPF3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStatComparison                                     ReturnValue;                                             // 0x0010(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetPlayerUsernameForSlot
	 */
	struct UUI_StatisticsScreen_GetPlayerUsernameForSlot_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IA4H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetPlayerStatisticsListCount
	 */
	struct UUI_StatisticsScreen_GetPlayerStatisticsListCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetPlayerStatisticsList
	 */
	struct UUI_StatisticsScreen_GetPlayerStatisticsList_Params
	{
	public:
		int32_t                                                    startIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    endIndex;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FStatisticsUIListPlayerData>                 ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetPlayerStatisticsForSlot
	 */
	struct UUI_StatisticsScreen_GetPlayerStatisticsForSlot_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8EG7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStatisticsUIFullPlayerData                         ReturnValue;                                             // 0x0008(0x0088)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetPlayerStatisticsForId
	 */
	struct UUI_StatisticsScreen_GetPlayerStatisticsForId_Params
	{
	public:
		class FName                                                PlayerId;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FStatisticsUIFullPlayerData                         ReturnValue;                                             // 0x0008(0x0088)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetPlayerRankForSlot
	 */
	struct UUI_StatisticsScreen_GetPlayerRankForSlot_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetPlayerNumberForSlot
	 */
	struct UUI_StatisticsScreen_GetPlayerNumberForSlot_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetPlayerIdForSlot
	 */
	struct UUI_StatisticsScreen_GetPlayerIdForSlot_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AW1A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetPageStartIndexForPlayerSlot
	 */
	struct UUI_StatisticsScreen_GetPageStartIndexForPlayerSlot_Params
	{
	public:
		int32_t                                                    playersPerPage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    playerSlot;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetPageStartIndexForPlayer
	 */
	struct UUI_StatisticsScreen_GetPageStartIndexForPlayer_Params
	{
	public:
		int32_t                                                    playersPerPage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0MRN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PlayerId;                                                // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetPageStartIndexForCurrentPlayer
	 */
	struct UUI_StatisticsScreen_GetPageStartIndexForCurrentPlayer_Params
	{
	public:
		int32_t                                                    playersPerPage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetIndexForPlayerSlotOnLeaderboard
	 */
	struct UUI_StatisticsScreen_GetIndexForPlayerSlotOnLeaderboard_Params
	{
	public:
		int32_t                                                    playerSlot;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetIndexForPlayerOnLeaderboard
	 */
	struct UUI_StatisticsScreen_GetIndexForPlayerOnLeaderboard_Params
	{
	public:
		class FName                                                PlayerId;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetIndexForCurrentPlayerOnLeaderboard
	 */
	struct UUI_StatisticsScreen_GetIndexForCurrentPlayerOnLeaderboard_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetFriendIdAtIndex
	 */
	struct UUI_StatisticsScreen_GetFriendIdAtIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WSHM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetFlightLogStatsForAllShipsForPlayerInSlot
	 */
	struct UUI_StatisticsScreen_GetFlightLogStatsForAllShipsForPlayerInSlot_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W5FR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FShipUIStatData>                             ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetFlightLogStatsForAllShipsForPlayer
	 */
	struct UUI_StatisticsScreen_GetFlightLogStatsForAllShipsForPlayer_Params
	{
	public:
		class FName                                                PlayerId;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FShipUIStatData>                             ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetFlightLogStatsForAllShipsForCurrentPlayer
	 */
	struct UUI_StatisticsScreen_GetFlightLogStatsForAllShipsForCurrentPlayer_Params
	{
	public:
		TArray<struct FShipUIStatData>                             ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_StatisticsScreen.GetCurrentPlayerStatistics
	 */
	struct UUI_StatisticsScreen_GetCurrentPlayerStatistics_Params
	{
	public:
		struct FStatisticsUIFullPlayerData                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_TitleScreen.WebServicesConnectionFailed
	 */
	struct UUI_TitleScreen_WebServicesConnectionFailed_Params
	{	};

	/**
	 * Function DreadGameUI.UI_TitleScreen.TryCreateSession
	 */
	struct UUI_TitleScreen_TryCreateSession_Params
	{	};

	/**
	 * Function DreadGameUI.UI_TitleScreen.StartTransitionOut
	 */
	struct UUI_TitleScreen_StartTransitionOut_Params
	{	};

	/**
	 * Function DreadGameUI.UI_TitleScreen.StartTransitionIn
	 */
	struct UUI_TitleScreen_StartTransitionIn_Params
	{	};

	/**
	 * Function DreadGameUI.UI_TitleScreen.ShowReturnFromDisconnectMessages
	 */
	struct UUI_TitleScreen_ShowReturnFromDisconnectMessages_Params
	{	};

	/**
	 * Function DreadGameUI.UI_TitleScreen.HandlePlayerDataAvailable
	 */
	struct UUI_TitleScreen_HandlePlayerDataAvailable_Params
	{	};

	/**
	 * Function DreadGameUI.UI_TitleScreen.HandleOnboardingInitialized
	 */
	struct UUI_TitleScreen_HandleOnboardingInitialized_Params
	{	};

	/**
	 * Function DreadGameUI.UI_TitleScreen.ExitGame
	 */
	struct UUI_TitleScreen_ExitGame_Params
	{	};

	/**
	 * Function DreadGameUI.UI_EditAppearanceButtonCaptainCustomizationWidget.GetPlayerUiData
	 */
	struct UUI_EditAppearanceButtonCaptainCustomizationWidget_GetPlayerUiData_Params
	{
	public:
		struct FPlayerUIData                                       ReturnValue;                                             // 0x0000(0x0080)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericModuleTitleWidget.GetModuleTier
	 */
	struct UUI_GenericModuleTitleWidget_GetModuleTier_Params
	{
	public:
		struct FYUIShipTechTreeItemData                            moduleData;                                              // 0x0000(0x0158)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0158(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericModuleTitleWidget.GetModuleName
	 */
	struct UUI_GenericModuleTitleWidget_GetModuleName_Params
	{
	public:
		struct FYUIShipTechTreeItemData                            moduleData;                                              // 0x0000(0x0158)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0158(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericModuleTitleWidget.GetModuleClassificationIconPath
	 */
	struct UUI_GenericModuleTitleWidget_GetModuleClassificationIconPath_Params
	{
	public:
		struct FYUIShipTechTreeItemData                            moduleData;                                              // 0x0000(0x0158)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0158(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericModuleTitleWidget.GetItemType
	 */
	struct UUI_GenericModuleTitleWidget_GetItemType_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYUILoadoutItemType                                        ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericModuleTitleWidget.GetClassificationIconPathForType
	 */
	struct UUI_GenericModuleTitleWidget_GetClassificationIconPathForType_Params
	{
	public:
		EYUILoadoutItemType                                        itemType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SYPM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericModuleTitleWidget.GetClassificationIconPathForItemId
	 */
	struct UUI_GenericModuleTitleWidget_GetClassificationIconPathForItemId_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6EEJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericShipTitleWidget.IsHeroShip
	 */
	struct UUI_GenericShipTitleWidget_IsHeroShip_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0180(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericShipTitleWidget.GetShipTier
	 */
	struct UUI_GenericShipTitleWidget_GetShipTier_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0180(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericShipTitleWidget.GetShipName
	 */
	struct UUI_GenericShipTitleWidget_GetShipName_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0180(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericShipTitleWidget.GetShipClassificationIconPath
	 */
	struct UUI_GenericShipTitleWidget_GetShipClassificationIconPath_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0180(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericShipTitleWidget.GetItemType
	 */
	struct UUI_GenericShipTitleWidget_GetItemType_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYUILoadoutItemType                                        ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericShipTitleWidget.GetClassificationIconPathForType
	 */
	struct UUI_GenericShipTitleWidget_GetClassificationIconPathForType_Params
	{
	public:
		EYUILoadoutItemType                                        itemType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_99H6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_GenericShipTitleWidget.GetClassificationIconPathForItemId
	 */
	struct UUI_GenericShipTitleWidget_GetClassificationIconPathForItemId_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H68O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManufacturerTechTreeWidget.IsShipOwned
	 */
	struct UUI_ManufacturerTechTreeWidget_IsShipOwned_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0180(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManufacturerTechTreeWidget.IsShipAvailable
	 */
	struct UUI_ManufacturerTechTreeWidget_IsShipAvailable_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0180(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManufacturerTechTreeWidget.IsItemHeroShip
	 */
	struct UUI_ManufacturerTechTreeWidget_IsItemHeroShip_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0180(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetTier
	 */
	struct UUI_ManufacturerTechTreeWidget_GetTier_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0180(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetShipName
	 */
	struct UUI_ManufacturerTechTreeWidget_GetShipName_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0180(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetItemID
	 */
	struct UUI_ManufacturerTechTreeWidget_GetItemID_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0180(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetIconPath
	 */
	struct UUI_ManufacturerTechTreeWidget_GetIconPath_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0180(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetCurrentShipXp
	 */
	struct UUI_ManufacturerTechTreeWidget_GetCurrentShipXp_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0180(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetClassificationIconPath
	 */
	struct UUI_ManufacturerTechTreeWidget_GetClassificationIconPath_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0180(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EliteStatusInfoPanelData.GetEliteStatusBoostMultiplierTexts
	 */
	struct UUI_EliteStatusInfoPanelData_GetEliteStatusBoostMultiplierTexts_Params
	{
	public:
		EYBoostedTarget                                            boostTarget;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYBoostedCurrency                                          boostCurrency;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LO65[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketBundleDetails_InfoPanel.GetShipDetails
	 */
	struct UUI_MarketBundleDetails_InfoPanel_GetShipDetails_Params
	{
	public:
		struct FYMenuItemData                                      marketData;                                              // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FMarketItemUIData                                   ReturnValue;                                             // 0x0088(0x0250)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketBundleDetails_InfoPanel.GetEliteStatusInfoPanelData
	 */
	struct UUI_MarketBundleDetails_InfoPanel_GetEliteStatusInfoPanelData_Params
	{
	public:
		class UUI_EliteStatusInfoPanelData*                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketItemWidget.SetData
	 */
	struct UUI_MarketItemWidget_SetData_Params
	{
	public:
		struct FMarketItemUIData                                   itemData;                                                // 0x0000(0x0250)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DreadGameUI.UI_MarketItemWidget.OnMarketItemUnhovered__DelegateSignature
	 */
	struct UUI_MarketItemWidget_OnMarketItemUnhovered__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction DreadGameUI.UI_MarketItemWidget.OnMarketItemHovered__DelegateSignature
	 */
	struct UUI_MarketItemWidget_OnMarketItemHovered__DelegateSignature_Params
	{	};

	/**
	 * Function DreadGameUI.UI_MarketItemWidget.HandleItemUnhovered
	 */
	struct UUI_MarketItemWidget_HandleItemUnhovered_Params
	{	};

	/**
	 * Function DreadGameUI.UI_MarketItemWidget.HandleItemHovered
	 */
	struct UUI_MarketItemWidget_HandleItemHovered_Params
	{	};

	/**
	 * Function DreadGameUI.UI_NavigationWidget.OnPopupAdded
	 */
	struct UUI_NavigationWidget_OnPopupAdded_Params
	{
	public:
		struct FPopupStackData                                     PopupData;                                               // 0x0000(0x0090)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NavigationWidget.OnNavigateToTabRequested
	 */
	struct UUI_NavigationWidget_OnNavigateToTabRequested_Params
	{
	public:
		EUI_Screen                                                 screen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NavigationWidget.OnNavigateToScreenRequested
	 */
	struct UUI_NavigationWidget_OnNavigateToScreenRequested_Params
	{
	public:
		EUI_Screen                                                 screen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NavigationWidget.NavigateToTab
	 */
	struct UUI_NavigationWidget_NavigateToTab_Params
	{
	public:
		EUI_Screen                                                 screen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NavigationWidget.NavigateToScreen
	 */
	struct UUI_NavigationWidget_NavigateToScreen_Params
	{
	public:
		EUI_Screen                                                 screen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NavigationWidget.NavigateToPreviousScreen
	 */
	struct UUI_NavigationWidget_NavigateToPreviousScreen_Params
	{	};

	/**
	 * Function DreadGameUI.UI_PersistentPlayerCardWidget.UpdateEliteTimeRemaining
	 */
	struct UUI_PersistentPlayerCardWidget_UpdateEliteTimeRemaining_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentPlayerCardWidget.SetEliteTimeRemaining
	 */
	struct UUI_PersistentPlayerCardWidget_SetEliteTimeRemaining_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentPlayerCardWidget.HasEliteTimeRemaining
	 */
	struct UUI_PersistentPlayerCardWidget_HasEliteTimeRemaining_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentPlayerCardWidget.GetPlayerUiData
	 */
	struct UUI_PersistentPlayerCardWidget_GetPlayerUiData_Params
	{
	public:
		struct FPlayerUIData                                       ReturnValue;                                             // 0x0000(0x0080)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentPlayerCardWidget.GetEliteTimeRemainingInSeconds
	 */
	struct UUI_PersistentPlayerCardWidget_GetEliteTimeRemainingInSeconds_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentPlayerCardWidget.ComposeEliteStatusString
	 */
	struct UUI_PersistentPlayerCardWidget_ComposeEliteStatusString_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_PersistentSquadListWidget.GetSquadData
	 */
	struct UUI_PersistentSquadListWidget_GetSquadData_Params
	{
	public:
		TArray<struct FSquadUserData>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeItemButtonWidget.DetermineCurrencyAmount
	 */
	struct UUI_ShipTechTreeItemButtonWidget_DetermineCurrencyAmount_Params
	{
	public:
		struct FYUIItemPriceData                                   priceData;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeProgressionPathWidget.IsItemAShip
	 */
	struct UUI_ShipTechTreeProgressionPathWidget_IsItemAShip_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    Item;                                                    // 0x0000(0x0180)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0180(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeProgressionPathWidget.GetItemTypeFromStruct
	 */
	struct UUI_ShipTechTreeProgressionPathWidget_GetItemTypeFromStruct_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    Item;                                                    // 0x0000(0x0180)  (Parm, NativeAccessSpecifierPublic)
		EYUILoadoutItemType                                        ReturnValue;                                             // 0x0180(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeProgressionWidget.IsItemAShip
	 */
	struct UUI_ShipTechTreeProgressionWidget_IsItemAShip_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    Item;                                                    // 0x0000(0x0180)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0180(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeProgressionWidget.GetItemTypeFromStruct
	 */
	struct UUI_ShipTechTreeProgressionWidget_GetItemTypeFromStruct_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    Item;                                                    // 0x0000(0x0180)  (Parm, NativeAccessSpecifierPublic)
		EYUILoadoutItemType                                        ReturnValue;                                             // 0x0180(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeProgressionWidget.GetItemType
	 */
	struct UUI_ShipTechTreeProgressionWidget_GetItemType_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYUILoadoutItemType                                        ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipTechTreeProgressionWidget.ComposeModuleDataForItem
	 */
	struct UUI_ShipTechTreeProgressionWidget_ComposeModuleDataForItem_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    Item;                                                    // 0x0000(0x0180)  (Parm, NativeAccessSpecifierPublic)
		struct FUIGenericButtonModuleData                          ReturnValue;                                             // 0x0180(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipSubPanel.SetItemOnCurrentShipAndSaveLoadout
	 */
	struct UUI_EditShipSubPanel_SetItemOnCurrentShipAndSaveLoadout_Params
	{
	public:
		struct FUIGenericButtonModuleData                          itemToSet;                                               // 0x0000(0x00C0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipSubPanel.RequestPreview
	 */
	struct UUI_EditShipSubPanel_RequestPreview_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipSubPanel.RequestClearLoadoutPreview
	 */
	struct UUI_EditShipSubPanel_RequestClearLoadoutPreview_Params
	{	};

	/**
	 * Function DreadGameUI.UI_EditShipSubPanel.NavigateToScreenForItem
	 */
	struct UUI_EditShipSubPanel_NavigateToScreenForItem_Params
	{
	public:
		struct FUIGenericButtonModuleData                          Item;                                                    // 0x0000(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipSubPanel.IsItemOwnedByPlayer
	 */
	struct UUI_EditShipSubPanel_IsItemOwnedByPlayer_Params
	{
	public:
		struct FUIGenericButtonModuleData                          Item;                                                    // 0x0000(0x00C0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipSubPanel.IsHeroShip
	 */
	struct UUI_EditShipSubPanel_IsHeroShip_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipSubPanel.IsCurrentShipOwnedByPlayer
	 */
	struct UUI_EditShipSubPanel_IsCurrentShipOwnedByPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipSubPanel.GetUIDataForItemId
	 */
	struct UUI_EditShipSubPanel_GetUIDataForItemId_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y1A1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FYItemUIData                                        ReturnValue;                                             // 0x0008(0x00D0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipSubPanel.GetUiDataForItem
	 */
	struct UUI_EditShipSubPanel_GetUiDataForItem_Params
	{
	public:
		struct FUIGenericButtonModuleData                          itemToSet;                                               // 0x0000(0x00C0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FYItemUIData                                        ReturnValue;                                             // 0x00C0(0x00D0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipSubPanel.GetPositionForStatsPopup
	 */
	struct UUI_EditShipSubPanel_GetPositionForStatsPopup_Params
	{
	public:
		struct FVector2D                                           popupSize;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UUI_DreadWidget*                                     moduleWidget;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipSubPanel.GetModuleDataFromId
	 */
	struct UUI_EditShipSubPanel_GetModuleDataFromId_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KD5S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUIGenericButtonModuleData                          ReturnValue;                                             // 0x0008(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipSubPanel.GetModuleData
	 */
	struct UUI_EditShipSubPanel_GetModuleData_Params
	{
	public:
		struct FUIGenericButtonModuleData                          itemData;                                                // 0x0000(0x00C0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FUIGenericButtonModuleData                          ReturnValue;                                             // 0x00C0(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipSubPanel.GetIdForItem
	 */
	struct UUI_EditShipSubPanel_GetIdForItem_Params
	{
	public:
		struct FUIGenericButtonModuleData                          Item;                                                    // 0x0000(0x00C0)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x00C0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipAppearanceSubPanel.SetCurrentShipModule
	 */
	struct UUI_EditShipAppearanceSubPanel_SetCurrentShipModule_Params
	{
	public:
		int32_t                                                    moduleId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipAppearanceSubPanel.GetPossibleAppearanceDataForShipSlot
	 */
	struct UUI_EditShipAppearanceSubPanel_GetPossibleAppearanceDataForShipSlot_Params
	{
	public:
		EYUILoadoutItemType                                        loadoutSlot;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VMDY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FUIGenericButtonModuleData>                  ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipAppearanceSubPanel.GetCurrentAppearanceDataForShipSlot
	 */
	struct UUI_EditShipAppearanceSubPanel_GetCurrentAppearanceDataForShipSlot_Params
	{
	public:
		EYUILoadoutItemType                                        loadoutSlot;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_08Q0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUIGenericButtonModuleData                          ReturnValue;                                             // 0x0008(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipLoadoutSubPanel.SetNextShipModule
	 */
	struct UUI_EditShipLoadoutSubPanel_SetNextShipModule_Params
	{
	public:
		int32_t                                                    moduleId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipLoadoutSubPanel.GetPossibleLoadoutDataForShipSlot
	 */
	struct UUI_EditShipLoadoutSubPanel_GetPossibleLoadoutDataForShipSlot_Params
	{
	public:
		EYUILoadoutItemType                                        loadoutSlot;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9P3D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FUIGenericButtonModuleData>                  ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipLoadoutSubPanel.GetCurrentLoadoutDataForShipSlot
	 */
	struct UUI_EditShipLoadoutSubPanel_GetCurrentLoadoutDataForShipSlot_Params
	{
	public:
		EYUILoadoutItemType                                        loadoutSlot;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YWG5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUIGenericButtonModuleData                          ReturnValue;                                             // 0x0008(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EditShipLoadoutSubPanel.AreOfficerModulesAvailable
	 */
	struct UUI_EditShipLoadoutSubPanel_AreOfficerModulesAvailable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipDetailsSubPanel.ResearchShip
	 */
	struct UUI_ShipDetailsSubPanel_ResearchShip_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ShipDetailsSubPanel.PurchaseShip
	 */
	struct UUI_ShipDetailsSubPanel_PurchaseShip_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ShipDetailsSubPanel.HandleInventoryUpdated
	 */
	struct UUI_ShipDetailsSubPanel_HandleInventoryUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.UI_ShipDetailsSubPanel.GetTechTreeProgressionData
	 */
	struct UUI_ShipDetailsSubPanel_GetTechTreeProgressionData_Params
	{
	public:
		bool                                                       includePrecastModules;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NZ2Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FYTechTreeProgressData                              ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipStats
	 */
	struct UUI_ShipDetailsSubPanel_GetShipStats_Params
	{
	public:
		TArray<struct FYShipStatsEntry>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipResearchPurchaseState
	 */
	struct UUI_ShipDetailsSubPanel_GetShipResearchPurchaseState_Params
	{
	public:
		EYShipResearchPurchaseState                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipResearchCost
	 */
	struct UUI_ShipDetailsSubPanel_GetShipResearchCost_Params
	{
	public:
		struct FYShipPrice                                         ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipPurchaseCost
	 */
	struct UUI_ShipDetailsSubPanel_GetShipPurchaseCost_Params
	{
	public:
		struct FYShipPrice                                         ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipDescription
	 */
	struct UUI_ShipDetailsSubPanel_GetShipDescription_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipClassIconPath
	 */
	struct UUI_ShipDetailsSubPanel_GetShipClassIconPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipDetailsSubPanel.GetPurchaseRequirementsData
	 */
	struct UUI_ShipDetailsSubPanel_GetPurchaseRequirementsData_Params
	{
	public:
		struct FYPurchaseRequirementsData                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_ShipDetailsSubPanel.GetManufacturerIconPath
	 */
	struct UUI_ShipDetailsSubPanel_GetManufacturerIconPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketSubPanel.Show
	 */
	struct UUI_MarketSubPanel_Show_Params
	{
	public:
		bool                                                       ShowPanel;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_MarketSubPanel.SetMarketGridDataReady
	 */
	struct UUI_MarketSubPanel_SetMarketGridDataReady_Params
	{	};

	/**
	 * Function DreadGameUI.UI_MarketSubPanel.MarketDataUpdated
	 */
	struct UUI_MarketSubPanel_MarketDataUpdated_Params
	{	};

	/**
	 * Function DreadGameUI.UI_BundlesMarketSubPanel.UpdateBundleCategoryFilters
	 */
	struct UUI_BundlesMarketSubPanel_UpdateBundleCategoryFilters_Params
	{
	public:
		int32_t                                                    categoryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    filterIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       filterEnabled;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BundlesMarketSubPanel.Show
	 */
	struct UUI_BundlesMarketSubPanel_Show_Params
	{
	public:
		bool                                                       ShowPanel;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BundlesMarketSubPanel.GetMarketBundles
	 */
	struct UUI_BundlesMarketSubPanel_GetMarketBundles_Params
	{
	public:
		TArray<struct FUIPromotionFilterData>                      filters;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FMarketItemUIData>                           ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BundlesMarketSubPanel.GetMarketBundleFilters
	 */
	struct UUI_BundlesMarketSubPanel_GetMarketBundleFilters_Params
	{
	public:
		TArray<struct FUIPromotionFilterData>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BundlesMarketSubPanel.GetMarketBundleCategoryFilters
	 */
	struct UUI_BundlesMarketSubPanel_GetMarketBundleCategoryFilters_Params
	{
	public:
		struct FUIAccordionFilterData                              ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_BundlesMarketSubPanel.GetFilteredMarketBundles
	 */
	struct UUI_BundlesMarketSubPanel_GetFilteredMarketBundles_Params
	{
	public:
		TArray<struct FMarketItemUIData>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CurrencyMarketSubPanel.UpdateXpConversionScreenData
	 */
	struct UUI_CurrencyMarketSubPanel_UpdateXpConversionScreenData_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CurrencyMarketSubPanel.Show
	 */
	struct UUI_CurrencyMarketSubPanel_Show_Params
	{
	public:
		bool                                                       ShowPanel;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CurrencyMarketSubPanel.RequestXpConvertAllShips
	 */
	struct UUI_CurrencyMarketSubPanel_RequestXpConvertAllShips_Params
	{	};

	/**
	 * Function DreadGameUI.UI_CurrencyMarketSubPanel.RequestXpConversion
	 */
	struct UUI_CurrencyMarketSubPanel_RequestXpConversion_Params
	{
	public:
		TArray<struct FRequestXpConversionShip>                    shipsToConvertXpFrom;                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CurrencyMarketSubPanel.RequestGpPackItemPsnPurchase
	 */
	struct UUI_CurrencyMarketSubPanel_RequestGpPackItemPsnPurchase_Params
	{	};

	/**
	 * Function DreadGameUI.UI_CurrencyMarketSubPanel.GetXpConversionData
	 */
	struct UUI_CurrencyMarketSubPanel_GetXpConversionData_Params
	{
	public:
		struct FUiXpConversionData                                 ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_CurrencyMarketSubPanel.GetMarketItemsByCurrencyPanelID
	 */
	struct UUI_CurrencyMarketSubPanel_GetMarketItemsByCurrencyPanelID_Params
	{
	public:
		ECurrencyMarketPanels                                      currencyPanel;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_URHX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FMarketItemUIData>                           ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EliteStatusMarketSubPanel.Show
	 */
	struct UUI_EliteStatusMarketSubPanel_Show_Params
	{
	public:
		bool                                                       ShowPanel;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EliteStatusMarketSubPanel.SetBoostArrays
	 */
	struct UUI_EliteStatusMarketSubPanel_SetBoostArrays_Params
	{	};

	/**
	 * Function DreadGameUI.UI_EliteStatusMarketSubPanel.GetEliteStatusMarketItems
	 */
	struct UUI_EliteStatusMarketSubPanel_GetEliteStatusMarketItems_Params
	{
	public:
		TArray<struct FMarketItemUIData>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_EliteStatusMarketSubPanel.GetEliteBoostDisplayPercentage
	 */
	struct UUI_EliteStatusMarketSubPanel_GetEliteBoostDisplayPercentage_Params
	{
	public:
		EYBoostedTarget                                            boostTarget;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EYBoostedCurrency                                          currencyType;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4ILT[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_FeaturedMarketSubPanel.Show
	 */
	struct UUI_FeaturedMarketSubPanel_Show_Params
	{
	public:
		bool                                                       ShowPanel;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_FeaturedMarketSubPanel.MarketItemSelected
	 */
	struct UUI_FeaturedMarketSubPanel_MarketItemSelected_Params
	{
	public:
		struct FMarketItemUIData                                   marketItem;                                              // 0x0000(0x0250)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_FeaturedMarketSubPanel.GetMarketItemsByPromotionType
	 */
	struct UUI_FeaturedMarketSubPanel_GetMarketItemsByPromotionType_Params
	{
	public:
		EYMarketItemPromotionFlags                                 promotionType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JLBY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FMarketItemUIData>                           ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_HeroShipMarketSubPanel.UpdateHeroShipCategoryFilter
	 */
	struct UUI_HeroShipMarketSubPanel_UpdateHeroShipCategoryFilter_Params
	{
	public:
		int32_t                                                    categoryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    filterIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       filterEnabled;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_HeroShipMarketSubPanel.Show
	 */
	struct UUI_HeroShipMarketSubPanel_Show_Params
	{
	public:
		bool                                                       ShowPanel;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_HeroShipMarketSubPanel.GetHeroShips
	 */
	struct UUI_HeroShipMarketSubPanel_GetHeroShips_Params
	{
	public:
		TArray<struct FMarketItemUIData>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_HeroShipMarketSubPanel.GetHeroShipCategoryFilters
	 */
	struct UUI_HeroShipMarketSubPanel_GetHeroShipCategoryFilters_Params
	{
	public:
		struct FUIAccordionFilterData                              ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NotificationPanelWidget.SetNotificationData
	 */
	struct UUI_NotificationPanelWidget_SetNotificationData_Params
	{
	public:
		class UNotificationData*                                   NotificationData;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NotificationPanelWidget.NotificationDataReceived
	 */
	struct UUI_NotificationPanelWidget_NotificationDataReceived_Params
	{
	public:
		class UNotificationData*                                   NotificationData;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NotificationPanelWidget.GetSquadInviteAnnouncementData
	 */
	struct UUI_NotificationPanelWidget_GetSquadInviteAnnouncementData_Params
	{
	public:
		class UNotificationData*                                   NotificationData;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FYSquadInviteAnnouncement                           ReturnValue;                                             // 0x0008(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NotificationPanelWidget.GetFriendAnnouncementData
	 */
	struct UUI_NotificationPanelWidget_GetFriendAnnouncementData_Params
	{
	public:
		class UNotificationData*                                   NotificationData;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FYFriendRequestAnnouncement                         ReturnValue;                                             // 0x0008(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NotificationPanelWidget.GetCustomMatchAnnouncementData
	 */
	struct UUI_NotificationPanelWidget_GetCustomMatchAnnouncementData_Params
	{
	public:
		class UNotificationData*                                   NotificationData;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FYCustomMatchInviteAnnouncement                     ReturnValue;                                             // 0x0008(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_NotificationPanelWidget.GetBaseAnnouncementData
	 */
	struct UUI_NotificationPanelWidget_GetBaseAnnouncementData_Params
	{
	public:
		class UNotificationData*                                   NotificationData;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FYAnnouncement                                      ReturnValue;                                             // 0x0008(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SettingsPanel.IsUsingVitaRemoteConnection
	 */
	struct UUI_SettingsPanel_IsUsingVitaRemoteConnection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SettingsPanel.GetTermsOfUseLegalData
	 */
	struct UUI_SettingsPanel_GetTermsOfUseLegalData_Params
	{
	public:
		struct FLegalDocumentData                                  ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SettingsPanel.GetPrivacyPolicyLegalData
	 */
	struct UUI_SettingsPanel_GetPrivacyPolicyLegalData_Params
	{
	public:
		struct FLegalDocumentData                                  ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_SettingsPanel.GetEulaLegalData
	 */
	struct UUI_SettingsPanel_GetEulaLegalData_Params
	{
	public:
		struct FLegalDocumentData                                  ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_TechTreePathNodeWidget.CreatePathToOtherNode
	 */
	struct UUI_TechTreePathNodeWidget_CreatePathToOtherNode_Params
	{
	public:
		class UUI_TechTreePathNodeWidget*                          otherNode;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsActive;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UI_TechTreeWidget.InitializeTechTree
	 */
	struct UUI_TechTreeWidget_InitializeTechTree_Params
	{
	public:
		TArray<struct FYUIShipManufacturerTechTreeStackItemData>   shipData;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FYUITechTreeConnectionData>                  ConnectionData;                                          // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FYUIShipManufacturerTechTreeStackItemData>   HeroShipData;                                            // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DreadGameUI.UiManager.HandleOnPlayerControllerSet
	 */
	struct UUiManager_HandleOnPlayerControllerSet_Params
	{
	public:
		class AYPlayerControllerBase*                              PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
