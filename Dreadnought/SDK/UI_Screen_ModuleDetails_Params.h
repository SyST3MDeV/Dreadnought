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
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetScreenSpecificComponents
	 */
	struct UUI_Screen_ModuleDetails_C_SetScreenSpecificComponents_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.CanAffordModuleAndApplyToShip
	 */
	struct UUI_Screen_ModuleDetails_C_CanAffordModuleAndApplyToShip_Params
	{
	public:
		bool                                                       CanPurchase;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleNotEnoughXP
	 */
	struct UUI_Screen_ModuleDetails_C_HandleNotEnoughXP_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.GetPopupDataResearch
	 */
	struct UUI_Screen_ModuleDetails_C_GetPopupDataResearch_Params
	{
	public:
		class FText                                                PopupTitleInsufficientXP;                                // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                PopupBodyInsufficientXP;                                 // 0x0018(0x0018)  (Parm, OutParm)
		TArray<class FText>                                        Array;                                                   // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.GetPopupDataPurchase
	 */
	struct UUI_Screen_ModuleDetails_C_GetPopupDataPurchase_Params
	{
	public:
		class FText                                                PopupTitleInsufficientCredits;                           // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                PopupBodyInsufficientCredits;                            // 0x0018(0x0018)  (Parm, OutParm)
		TArray<class FText>                                        Array;                                                   // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleUnownedPurchase
	 */
	struct UUI_Screen_ModuleDetails_C_HandleUnownedPurchase_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.RefreshPlayerCurrencies
	 */
	struct UUI_Screen_ModuleDetails_C_RefreshPlayerCurrencies_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleNotEnoughCredits
	 */
	struct UUI_Screen_ModuleDetails_C_HandleNotEnoughCredits_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.RefreshDetailsPanel
	 */
	struct UUI_Screen_ModuleDetails_C_RefreshDetailsPanel_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleResearchPurchase
	 */
	struct UUI_Screen_ModuleDetails_C_HandleResearchPurchase_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.UnbindMediaEvents
	 */
	struct UUI_Screen_ModuleDetails_C_UnbindMediaEvents_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleAsyncVideoLoaded
	 */
	struct UUI_Screen_ModuleDetails_C_HandleAsyncVideoLoaded_Params
	{
	public:
		class UFileMediaSource*                                    Video;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.IsVideoPlaying
	 */
	struct UUI_Screen_ModuleDetails_C_IsVideoPlaying_Params
	{
	public:
		bool                                                       IsPlaying;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleVideoEndReached
	 */
	struct UUI_Screen_ModuleDetails_C_HandleVideoEndReached_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleModulePurchase
	 */
	struct UUI_Screen_ModuleDetails_C_HandleModulePurchase_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleCarouselPageLeftRight
	 */
	struct UUI_Screen_ModuleDetails_C_HandleCarouselPageLeftRight_Params
	{
	public:
		bool                                                       PageLeft;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetWidgetFocus
	 */
	struct UUI_Screen_ModuleDetails_C_SetWidgetFocus_Params
	{
	public:
		int32_t                                                    IndexToFocus;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DidPageTurn;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.UpdateIndexToFirstModuleShown
	 */
	struct UUI_Screen_ModuleDetails_C_UpdateIndexToFirstModuleShown_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.UpdateFocusedItemOnHover
	 */
	struct UUI_Screen_ModuleDetails_C_UpdateFocusedItemOnHover_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ModuleButton;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.CallModuleButtonClick
	 */
	struct UUI_Screen_ModuleDetails_C_CallModuleButtonClick_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.StartPageUpdateTimer
	 */
	struct UUI_Screen_ModuleDetails_C_StartPageUpdateTimer_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleRightGranular
	 */
	struct UUI_Screen_ModuleDetails_C_HandleRightGranular_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleLeftGranular
	 */
	struct UUI_Screen_ModuleDetails_C_HandleLeftGranular_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.PlayVideo
	 */
	struct UUI_Screen_ModuleDetails_C_PlayVideo_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.UpdatePersistentLegend
	 */
	struct UUI_Screen_ModuleDetails_C_UpdatePersistentLegend_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleInput
	 */
	struct UUI_Screen_ModuleDetails_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.Setup
	 */
	struct UUI_Screen_ModuleDetails_C_Setup_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetItemTitleAndDesc
	 */
	struct UUI_Screen_ModuleDetails_C_SetItemTitleAndDesc_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetVanitySpecificComponents
	 */
	struct UUI_Screen_ModuleDetails_C_SetVanitySpecificComponents_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetModuleSpecificComponents
	 */
	struct UUI_Screen_ModuleDetails_C_SetModuleSpecificComponents_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetSharedComponents
	 */
	struct UUI_Screen_ModuleDetails_C_SetSharedComponents_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.CheckItemType
	 */
	struct UUI_Screen_ModuleDetails_C_CheckItemType_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleCarouselButtonClicked
	 */
	struct UUI_Screen_ModuleDetails_C_HandleCarouselButtonClicked_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleSharedButtonPress
	 */
	struct UUI_Screen_ModuleDetails_C_HandleSharedButtonPress_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetupItemCarouselData
	 */
	struct UUI_Screen_ModuleDetails_C_SetupItemCarouselData_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.InitShipTitleData
	 */
	struct UUI_Screen_ModuleDetails_C_InitShipTitleData_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.InitModulePurchaseData
	 */
	struct UUI_Screen_ModuleDetails_C_InitModulePurchaseData_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.ShouldAutoPlayVideo
	 */
	struct UUI_Screen_ModuleDetails_C_ShouldAutoPlayVideo_Params
	{
	public:
		bool                                                       ShouldAutoplay;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YLUC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.OpenModuleVideoSource
	 */
	struct UUI_Screen_ModuleDetails_C_OpenModuleVideoSource_Params
	{
	public:
		class UFileMediaSource*                                    MediaSource;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Autoplay;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetupStill
	 */
	struct UUI_Screen_ModuleDetails_C_SetupStill_Params
	{
	public:
		class UTexture2D*                                          Image;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetupVideoAndStill
	 */
	struct UUI_Screen_ModuleDetails_C_SetupVideoAndStill_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NQVV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.Construct
	 */
	struct UUI_Screen_ModuleDetails_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.OnTransitionIn
	 */
	struct UUI_Screen_ModuleDetails_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.OnTransitionOut
	 */
	struct UUI_Screen_ModuleDetails_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_ModuleDetails_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_ModuleDetails_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_0_OnMediaPlayerMediaOpened__DelegateSignature
	 */
	struct UUI_Screen_ModuleDetails_C_BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_0_OnMediaPlayerMediaOpened__DelegateSignature_Params
	{
	public:
		class FString                                              OpenedUrl;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Screen_ModuleDetails_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SharedActionButtonClicked
	 */
	struct UUI_Screen_ModuleDetails_C_SharedActionButtonClicked_Params
	{
	public:
		class UUserWidget*                                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleEquipCompleted
	 */
	struct UUI_Screen_ModuleDetails_C_HandleEquipCompleted_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandlePurchaseCompleted
	 */
	struct UUI_Screen_ModuleDetails_C_HandlePurchaseCompleted_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleResearchCompleted
	 */
	struct UUI_Screen_ModuleDetails_C_HandleResearchCompleted_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.VanityPurchaseButtonClicked
	 */
	struct UUI_Screen_ModuleDetails_C_VanityPurchaseButtonClicked_Params
	{
	public:
		class UUserWidget*                                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.OnNavigationEvent
	 */
	struct UUI_Screen_ModuleDetails_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_0_OnMediaPlayerMediaEvent__DelegateSignature
	 */
	struct UUI_Screen_ModuleDetails_C_BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_0_OnMediaPlayerMediaEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_2_OnMediaPlayerMediaEvent__DelegateSignature
	 */
	struct UUI_Screen_ModuleDetails_C_BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_2_OnMediaPlayerMediaEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.OnShipXpUpdate
	 */
	struct UUI_Screen_ModuleDetails_C_OnShipXpUpdate_Params
	{
	public:
		int32_t                                                    shipXp;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.ExecuteUbergraph_UI_Screen_ModuleDetails
	 */
	struct UUI_Screen_ModuleDetails_C_ExecuteUbergraph_UI_Screen_ModuleDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QYWR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
