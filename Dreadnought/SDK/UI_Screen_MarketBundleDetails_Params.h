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
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.IsTabVisible
	 */
	struct UUI_Screen_MarketBundleDetails_C_IsTabVisible_Params
	{
	public:
		int32_t                                                    CurrentTabIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsTabVisible;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K2N1[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.IsFirstBundleItemGenderSpecific
	 */
	struct UUI_Screen_MarketBundleDetails_C_IsFirstBundleItemGenderSpecific_Params
	{
	public:
		bool                                                       IsGenderSpecific;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.ShowAlreadyOwnedPopup
	 */
	struct UUI_Screen_MarketBundleDetails_C_ShowAlreadyOwnedPopup_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.IsValidDescription
	 */
	struct UUI_Screen_MarketBundleDetails_C_IsValidDescription_Params
	{
	public:
		class FText                                                description;                                             // 0x0000(0x0018)  (Parm)
		bool                                                       IsValid;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VMKQ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.FindFirstGenderMatchingBundleItem
	 */
	struct UUI_Screen_MarketBundleDetails_C_FindFirstGenderMatchingBundleItem_Params
	{
	public:
		EYCharacterGender                                          Gender;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IncludeGenderNeutral;                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QU8H[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_MarketBundleDetails_BundleItemButton_C*          BundleItem;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ItemIndex;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.GetNumBundleItems
	 */
	struct UUI_Screen_MarketBundleDetails_C_GetNumBundleItems_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.GetBundleItemByIndex
	 */
	struct UUI_Screen_MarketBundleDetails_C_GetBundleItemByIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1AIV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_MarketBundleDetails_BundleItemButton_C*          BundleItem;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.DeselectCurrentBundleItem
	 */
	struct UUI_Screen_MarketBundleDetails_C_DeselectCurrentBundleItem_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleBundleItemClicked
	 */
	struct UUI_Screen_MarketBundleDetails_C_HandleBundleItemClicked_Params
	{
	public:
		class UUI_MarketBundleDetails_BundleItemButton_C*          source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleNavRight
	 */
	struct UUI_Screen_MarketBundleDetails_C_HandleNavRight_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleNavLeft
	 */
	struct UUI_Screen_MarketBundleDetails_C_HandleNavLeft_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.SelectTab
	 */
	struct UUI_Screen_MarketBundleDetails_C_SelectTab_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U5WC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleNavDown
	 */
	struct UUI_Screen_MarketBundleDetails_C_HandleNavDown_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleNavUp
	 */
	struct UUI_Screen_MarketBundleDetails_C_HandleNavUp_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleTabRight
	 */
	struct UUI_Screen_MarketBundleDetails_C_HandleTabRight_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleTabLeft
	 */
	struct UUI_Screen_MarketBundleDetails_C_HandleTabLeft_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleInput
	 */
	struct UUI_Screen_MarketBundleDetails_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            Input;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandlePurchaseConfirmationPopupResult
	 */
	struct UUI_Screen_MarketBundleDetails_C_HandlePurchaseConfirmationPopupResult_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.ShowInsufficientFundsPopup
	 */
	struct UUI_Screen_MarketBundleDetails_C_ShowInsufficientFundsPopup_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.ShowPurchaseConfirmationPopup
	 */
	struct UUI_Screen_MarketBundleDetails_C_ShowPurchaseConfirmationPopup_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.HandleActionButtonClicked
	 */
	struct UUI_Screen_MarketBundleDetails_C_HandleActionButtonClicked_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.SetupHeaderAndDescriptionText
	 */
	struct UUI_Screen_MarketBundleDetails_C_SetupHeaderAndDescriptionText_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.ShowPreview
	 */
	struct UUI_Screen_MarketBundleDetails_C_ShowPreview_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.SetupPurchaseButton
	 */
	struct UUI_Screen_MarketBundleDetails_C_SetupPurchaseButton_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.SelectBundleItem
	 */
	struct UUI_Screen_MarketBundleDetails_C_SelectBundleItem_Params
	{
	public:
		class UUI_MarketBundleDetails_BundleItemButton_C*          source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.SetupBundleItemList
	 */
	struct UUI_Screen_MarketBundleDetails_C_SetupBundleItemList_Params
	{
	public:
		struct FMarketItemUIData                                   marketItem;                                              // 0x0000(0x0250)  (Parm)
	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.Setup
	 */
	struct UUI_Screen_MarketBundleDetails_C_Setup_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.OnTransitionIn
	 */
	struct UUI_Screen_MarketBundleDetails_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.OnTransitionOut
	 */
	struct UUI_Screen_MarketBundleDetails_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_MarketBundleDetails_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_MarketBundleDetails_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.Construct
	 */
	struct UUI_Screen_MarketBundleDetails_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.BndEvt__ActionButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Screen_MarketBundleDetails_C_BndEvt__ActionButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.OnMarketPurchaseComplete
	 */
	struct UUI_Screen_MarketBundleDetails_C_OnMarketPurchaseComplete_Params
	{
	public:
		EYPurchaseResult                                           purchaseResult;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.OnNavigationEvent
	 */
	struct UUI_Screen_MarketBundleDetails_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_MarketBundleDetails.UI_Screen_MarketBundleDetails_C.ExecuteUbergraph_UI_Screen_MarketBundleDetails
	 */
	struct UUI_Screen_MarketBundleDetails_C_ExecuteUbergraph_UI_Screen_MarketBundleDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PX2M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
