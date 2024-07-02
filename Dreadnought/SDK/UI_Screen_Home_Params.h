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
	 * Function UI_Screen_Home.UI_Screen_Home_C.InitiateQuickPlayMatchmaking
	 */
	struct UUI_Screen_Home_C_InitiateQuickPlayMatchmaking_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.OnPurchasePopupResult
	 */
	struct UUI_Screen_Home_C_OnPurchasePopupResult_Params
	{
	public:
		class UUI_Button_Generic_C*                                SelectedButtonRef;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.ShowBattleBonusPurchaseConfirmPopup
	 */
	struct UUI_Screen_Home_C_ShowBattleBonusPurchaseConfirmPopup_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.HandleQuickplaySelected
	 */
	struct UUI_Screen_Home_C_HandleQuickplaySelected_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.SetQuickplayVisibility
	 */
	struct UUI_Screen_Home_C_SetQuickplayVisibility_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.ShowTutorialCTA
	 */
	struct UUI_Screen_Home_C_ShowTutorialCTA_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.UpdateLegend
	 */
	struct UUI_Screen_Home_C_UpdateLegend_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.HandleGamepadSectionLeftRight
	 */
	struct UUI_Screen_Home_C_HandleGamepadSectionLeftRight_Params
	{
	public:
		int32_t                                                    NextIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7Z0G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.HandleGamepadGranularRight
	 */
	struct UUI_Screen_Home_C_HandleGamepadGranularRight_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.HandleGamepadGranularLeft
	 */
	struct UUI_Screen_Home_C_HandleGamepadGranularLeft_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.HandleGamepadGranularUpDown
	 */
	struct UUI_Screen_Home_C_HandleGamepadGranularUpDown_Params
	{
	public:
		int32_t                                                    NextHomeButtonIndex;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ButtonEnabled;                                           // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.ReturnAfterDisconnectResult
	 */
	struct UUI_Screen_Home_C_ReturnAfterDisconnectResult_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.ShowPromptToReturnAfterDisconnect
	 */
	struct UUI_Screen_Home_C_ShowPromptToReturnAfterDisconnect_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.HandleItemDetailsClick
	 */
	struct UUI_Screen_Home_C_HandleItemDetailsClick_Params
	{
	public:
		struct FMarketItemUIData                                   MarketItemData;                                          // 0x0000(0x0250)  (Parm)
	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.BindButtonEvents
	 */
	struct UUI_Screen_Home_C_BindButtonEvents_Params
	{
	public:
		TArray<class UUI_Button_Home_C*>                           Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.UpdateCarousel
	 */
	struct UUI_Screen_Home_C_UpdateCarousel_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.Setup
	 */
	struct UUI_Screen_Home_C_Setup_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.HandleToFromCarousel
	 */
	struct UUI_Screen_Home_C_HandleToFromCarousel_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.HandleInput
	 */
	struct UUI_Screen_Home_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.ClearButtonArrayNotificationStatuses
	 */
	struct UUI_Screen_Home_C_ClearButtonArrayNotificationStatuses_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.SetupButtonArray
	 */
	struct UUI_Screen_Home_C_SetupButtonArray_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.OnExitPopupResult
	 */
	struct UUI_Screen_Home_C_OnExitPopupResult_Params
	{
	public:
		int32_t                                                    SelectedIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.ShowExitPopup
	 */
	struct UUI_Screen_Home_C_ShowExitPopup_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.HandleMenuButtonClicked
	 */
	struct UUI_Screen_Home_C_HandleMenuButtonClicked_Params
	{
	public:
		class UUI_Button_Home_C*                                   Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.Construct
	 */
	struct UUI_Screen_Home_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.OnTransitionIn
	 */
	struct UUI_Screen_Home_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.OnTransitionOut
	 */
	struct UUI_Screen_Home_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.HandleOnButtonClicked
	 */
	struct UUI_Screen_Home_C_HandleOnButtonClicked_Params
	{
	public:
		EUI_Screen                                                 ScreenEnum;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_Home_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.BndEvt__FeaturedCarouselPageDots_K2Node_ComponentBoundEvent_0_OnCurrentPageChanged__DelegateSignature
	 */
	struct UUI_Screen_Home_C_BndEvt__FeaturedCarouselPageDots_K2Node_ComponentBoundEvent_0_OnCurrentPageChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    DotIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.MarketDataUpdated
	 */
	struct UUI_Screen_Home_C_MarketDataUpdated_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.ShowContractCompleted
	 */
	struct UUI_Screen_Home_C_ShowContractCompleted_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.OnNavigationEvent
	 */
	struct UUI_Screen_Home_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.UpdateCurrentlyFocusedItem
	 */
	struct UUI_Screen_Home_C_UpdateCurrentlyFocusedItem_Params
	{
	public:
		class UUI_DreadWidget*                                     FocusedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.OnShowPromptForReturnAfterDisconnect
	 */
	struct UUI_Screen_Home_C_OnShowPromptForReturnAfterDisconnect_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.ShowCaptainProgressionCompleted
	 */
	struct UUI_Screen_Home_C_ShowCaptainProgressionCompleted_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.OnBattleReadinessPurchaseApproved
	 */
	struct UUI_Screen_Home_C_OnBattleReadinessPurchaseApproved_Params
	{
	public:
		bool                                                       purchaseSuccessful;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.OnTransitionInAnimationComplete
	 */
	struct UUI_Screen_Home_C_OnTransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Home.UI_Screen_Home_C.ExecuteUbergraph_UI_Screen_Home
	 */
	struct UUI_Screen_Home_C_ExecuteUbergraph_UI_Screen_Home_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R5NC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
