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
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.RequestStartQuickplayMatchmaking
	 */
	struct UUI_Screen_Persistent_C_RequestStartQuickplayMatchmaking_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.GetCurrentFleet
	 */
	struct UUI_Screen_Persistent_C_GetCurrentFleet_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateFavoritedModeState
	 */
	struct UUI_Screen_Persistent_C_UpdateFavoritedModeState_Params
	{
	public:
		bool                                                       isFavorited;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYGameModeType                                             gameModeType;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.SelectPrevFleet
	 */
	struct UUI_Screen_Persistent_C_SelectPrevFleet_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.SelectNextFleet
	 */
	struct UUI_Screen_Persistent_C_SelectNextFleet_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.CloseNotificationFlyout
	 */
	struct UUI_Screen_Persistent_C_CloseNotificationFlyout_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.ShowMatchMakingCancelledMessage
	 */
	struct UUI_Screen_Persistent_C_ShowMatchMakingCancelledMessage_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.XpConversionAllCTA
	 */
	struct UUI_Screen_Persistent_C_XpConversionAllCTA_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.XpConversionCTA
	 */
	struct UUI_Screen_Persistent_C_XpConversionCTA_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.FrontEndTutorialCTA
	 */
	struct UUI_Screen_Persistent_C_FrontEndTutorialCTA_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetMatchmakingText
	 */
	struct UUI_Screen_Persistent_C_SetMatchmakingText_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleInputDefault
	 */
	struct UUI_Screen_Persistent_C_HandleInputDefault_Params
	{
	public:
		EUI_MenuActions                                            Input;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.ResetAndHideMatchMakingTimer
	 */
	struct UUI_Screen_Persistent_C_ResetAndHideMatchMakingTimer_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateCurrencies
	 */
	struct UUI_Screen_Persistent_C_UpdateCurrencies_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HasFocus
	 */
	struct UUI_Screen_Persistent_C_HasFocus_Params
	{
	public:
		bool                                                       HasFocus;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetEscBackVisibility
	 */
	struct UUI_Screen_Persistent_C_SetEscBackVisibility_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.ShowLegend
	 */
	struct UUI_Screen_Persistent_C_ShowLegend_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleServerStarting
	 */
	struct UUI_Screen_Persistent_C_HandleServerStarting_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleMatchmakingStarted
	 */
	struct UUI_Screen_Persistent_C_HandleMatchmakingStarted_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleMatchmakingStopped
	 */
	struct UUI_Screen_Persistent_C_HandleMatchmakingStopped_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HideMatchmakingWidget
	 */
	struct UUI_Screen_Persistent_C_HideMatchmakingWidget_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleFleetScreenEntry
	 */
	struct UUI_Screen_Persistent_C_HandleFleetScreenEntry_Params
	{
	public:
		bool                                                       Entered;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleInput
	 */
	struct UUI_Screen_Persistent_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            InputPin;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HideMatchmakingLegend
	 */
	struct UUI_Screen_Persistent_C_HideMatchmakingLegend_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.RequestStopMatchmaking
	 */
	struct UUI_Screen_Persistent_C_RequestStopMatchmaking_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.RequestStartMatchmaking
	 */
	struct UUI_Screen_Persistent_C_RequestStartMatchmaking_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleCancel
	 */
	struct UUI_Screen_Persistent_C_HandleCancel_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.ShowOrHidePlayButton
	 */
	struct UUI_Screen_Persistent_C_ShowOrHidePlayButton_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetMatchmakingLegend
	 */
	struct UUI_Screen_Persistent_C_SetMatchmakingLegend_Params
	{
	public:
		TArray<struct FLegendPromptData>                           InputPin;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetDNLogoVisibility
	 */
	struct UUI_Screen_Persistent_C_SetDNLogoVisibility_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleNotificationInputAction
	 */
	struct UUI_Screen_Persistent_C_HandleNotificationInputAction_Params
	{
	public:
		class UUI_Persistent_NotificationFlyout_C*                 source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ENotificationButtonType                                    Action;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateAverageWaitTimeWidget
	 */
	struct UUI_Screen_Persistent_C_UpdateAverageWaitTimeWidget_Params
	{
	public:
		int32_t                                                    AverageWaitTimeSeconds;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HideLegend
	 */
	struct UUI_Screen_Persistent_C_HideLegend_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetLegend
	 */
	struct UUI_Screen_Persistent_C_SetLegend_Params
	{
	public:
		TArray<struct FLegendPromptData>                           LegendData;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateCurrentNotification
	 */
	struct UUI_Screen_Persistent_C_UpdateCurrentNotification_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateNotificationsWidget
	 */
	struct UUI_Screen_Persistent_C_UpdateNotificationsWidget_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.InitializeInternal
	 */
	struct UUI_Screen_Persistent_C_InitializeInternal_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.ShouldBreadcrumbBarBeVisible
	 */
	struct UUI_Screen_Persistent_C_ShouldBreadcrumbBarBeVisible_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetBreadcrumbBarVisibility
	 */
	struct UUI_Screen_Persistent_C_SetBreadcrumbBarVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleBreadcrumbClicked
	 */
	struct UUI_Screen_Persistent_C_HandleBreadcrumbClicked_Params
	{
	public:
		int32_t                                                    BreadcrumbIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UVYD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleSquadButtonClicked
	 */
	struct UUI_Screen_Persistent_C_HandleSquadButtonClicked_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.SetupSquad
	 */
	struct UUI_Screen_Persistent_C_SetupSquad_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.Hide
	 */
	struct UUI_Screen_Persistent_C_Hide_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleTimerHideComplete
	 */
	struct UUI_Screen_Persistent_C_HandleTimerHideComplete_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.ShowOrHideMatchmakingTimer
	 */
	struct UUI_Screen_Persistent_C_ShowOrHideMatchmakingTimer_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M7TZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.UpdateBreadcrumbWidget
	 */
	struct UUI_Screen_Persistent_C_UpdateBreadcrumbWidget_Params
	{
	public:
		class UUI_DreadScreen*                                     TargetScreen;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.Construct
	 */
	struct UUI_Screen_Persistent_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnTransitionIn
	 */
	struct UUI_Screen_Persistent_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnTransitionOut
	 */
	struct UUI_Screen_Persistent_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_Persistent_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_Persistent_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Screen_Persistent_C_BndEvt__FriendsButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__PlayerCard_K2Node_ComponentBoundEvent_1_OnPlayerPortraitClicked__DelegateSignature
	 */
	struct UUI_Screen_Persistent_C_BndEvt__PlayerCard_K2Node_ComponentBoundEvent_1_OnPlayerPortraitClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__NotificationFlyout_K2Node_ComponentBoundEvent_2_OnNotificationClicked__DelegateSignature
	 */
	struct UUI_Screen_Persistent_C_BndEvt__NotificationFlyout_K2Node_ComponentBoundEvent_2_OnNotificationClicked__DelegateSignature_Params
	{
	public:
		class UUI_Persistent_NotificationFlyout_C*                 source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ENotificationButtonType                                    Action;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMatchmakingTimerStarted
	 */
	struct UUI_Screen_Persistent_C_OnMatchmakingTimerStarted_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMatchmakingTimerStopped
	 */
	struct UUI_Screen_Persistent_C_OnMatchmakingTimerStopped_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__MatchmakingTimer_K2Node_ComponentBoundEvent_0_OnCancelButtonClicked__DelegateSignature
	 */
	struct UUI_Screen_Persistent_C_BndEvt__MatchmakingTimer_K2Node_ComponentBoundEvent_0_OnCancelButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMatchmakingAverageWaitTimeAvailable
	 */
	struct UUI_Screen_Persistent_C_OnMatchmakingAverageWaitTimeAvailable_Params
	{
	public:
		int32_t                                                    waitTimeSeconds;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleSquadUpdated
	 */
	struct UUI_Screen_Persistent_C_HandleSquadUpdated_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleNotificationsChanged
	 */
	struct UUI_Screen_Persistent_C_HandleNotificationsChanged_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandleOnPlayerSpeakingUpdated
	 */
	struct UUI_Screen_Persistent_C_HandleOnPlayerSpeakingUpdated_Params
	{
	public:
		struct FSquadVoiceData                                     UpdateData;                                              // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMatchmakingFailed
	 */
	struct UUI_Screen_Persistent_C_OnMatchmakingFailed_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMatchmakingStarted
	 */
	struct UUI_Screen_Persistent_C_OnMatchmakingStarted_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.HandlePlayerCardUpdated
	 */
	struct UUI_Screen_Persistent_C_HandlePlayerCardUpdated_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.Tick
	 */
	struct UUI_Screen_Persistent_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnNavigationEvent
	 */
	struct UUI_Screen_Persistent_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__MatchmakingTimer_K2Node_ComponentBoundEvent_48_OnPlayButtonClicked__DelegateSignature
	 */
	struct UUI_Screen_Persistent_C_BndEvt__MatchmakingTimer_K2Node_ComponentBoundEvent_48_OnPlayButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnServerStarting
	 */
	struct UUI_Screen_Persistent_C_OnServerStarting_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnCheckCanReturnToMatch
	 */
	struct UUI_Screen_Persistent_C_OnCheckCanReturnToMatch_Params
	{
	public:
		bool                                                       CanReturnToMatch;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnCTATriggered
	 */
	struct UUI_Screen_Persistent_C_OnCTATriggered_Params
	{
	public:
		class UYCtA*                                               cta;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnCTAManagerReady
	 */
	struct UUI_Screen_Persistent_C_OnCTAManagerReady_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnBattleServerShutdown
	 */
	struct UUI_Screen_Persistent_C_OnBattleServerShutdown_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.OnMmogConnectionLost
	 */
	struct UUI_Screen_Persistent_C_OnMmogConnectionLost_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Screen_Persistent_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_Persistent.UI_Screen_Persistent_C.ExecuteUbergraph_UI_Screen_Persistent
	 */
	struct UUI_Screen_Persistent_C_ExecuteUbergraph_UI_Screen_Persistent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
