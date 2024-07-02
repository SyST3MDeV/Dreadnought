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
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.CanUseBackButton
	 */
	struct UUI_Screen_CaptainCustomization_C_CanUseBackButton_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UpdateButtonHints
	 */
	struct UUI_Screen_CaptainCustomization_C_UpdateButtonHints_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleDescriptionScroll
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleDescriptionScroll_Params
	{
	public:
		bool                                                       ScrollUp;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleTutorialStartPressed
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleTutorialStartPressed_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ShouldCallAction
	 */
	struct UUI_Screen_CaptainCustomization_C_ShouldCallAction_Params
	{
	public:
		bool                                                       IsAlreadySelected;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FSVG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BackFromCustomizeItemsToCategories
	 */
	struct UUI_Screen_CaptainCustomization_C_BackFromCustomizeItemsToCategories_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BackFromNavButtonsToCustomizeItems
	 */
	struct UUI_Screen_CaptainCustomization_C_BackFromNavButtonsToCustomizeItems_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ScreenSetup
	 */
	struct UUI_Screen_CaptainCustomization_C_ScreenSetup_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ShowDescriptionPanel
	 */
	struct UUI_Screen_CaptainCustomization_C_ShowDescriptionPanel_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ShowCustomizationItems
	 */
	struct UUI_Screen_CaptainCustomization_C_ShowCustomizationItems_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleBackButton
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleBackButton_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.FocusCategoryList
	 */
	struct UUI_Screen_CaptainCustomization_C_FocusCategoryList_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.FocusCustomizationList
	 */
	struct UUI_Screen_CaptainCustomization_C_FocusCustomizationList_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.FocusNavButton
	 */
	struct UUI_Screen_CaptainCustomization_C_FocusNavButton_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleCategoryItemUp
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleCategoryItemUp_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleCategoryUp
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleCategoryUp_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleCustomizationItemDown
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleCustomizationItemDown_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleCategoryDown
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleCategoryDown_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleFocusNextButton
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleFocusNextButton_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleActionButtonLeftRight
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleActionButtonLeftRight_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.IsNavButtonFocused
	 */
	struct UUI_Screen_CaptainCustomization_C_IsNavButtonFocused_Params
	{
	public:
		bool                                                       IsNavButton;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleGranularLeft
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleGranularLeft_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleGranularRight
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleGranularRight_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleGranularUp
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleGranularUp_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.IsCategoryListFocused
	 */
	struct UUI_Screen_CaptainCustomization_C_IsCategoryListFocused_Params
	{
	public:
		bool                                                       IsCategory;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleGranularDown
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleGranularDown_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.FocusMaleTab
	 */
	struct UUI_Screen_CaptainCustomization_C_FocusMaleTab_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.FocusFemaleTab
	 */
	struct UUI_Screen_CaptainCustomization_C_FocusFemaleTab_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.SetCaptainName
	 */
	struct UUI_Screen_CaptainCustomization_C_SetCaptainName_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleTutorialFlow
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleTutorialFlow_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnCustomizationItemClicked
	 */
	struct UUI_Screen_CaptainCustomization_C_OnCustomizationItemClicked_Params
	{
	public:
		class UUI_CptCustomization_CustomizationItem_C*            clickedSlotItemId;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnCategoryClicked
	 */
	struct UUI_Screen_CaptainCustomization_C_OnCategoryClicked_Params
	{
	public:
		class UUI_CptCustomization_CategoryButton_C*               ClickedCategory;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnMaleAction
	 */
	struct UUI_Screen_CaptainCustomization_C_OnMaleAction_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnFemaleAction
	 */
	struct UUI_Screen_CaptainCustomization_C_OnFemaleAction_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.SwapMaleFemaleTabs
	 */
	struct UUI_Screen_CaptainCustomization_C_SwapMaleFemaleTabs_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleInput
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GameInput;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UpdateDetailsIcon
	 */
	struct UUI_Screen_CaptainCustomization_C_UpdateDetailsIcon_Params
	{
	public:
		class UUI_CptCustomization_CategoryButton_C*               CptCustomizationBtn;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UnFocusFemaleTab
	 */
	struct UUI_Screen_CaptainCustomization_C_UnFocusFemaleTab_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UnFocusMaleTab
	 */
	struct UUI_Screen_CaptainCustomization_C_UnFocusMaleTab_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.SetupCategoryList
	 */
	struct UUI_Screen_CaptainCustomization_C_SetupCategoryList_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.DisplayItemDescription
	 */
	struct UUI_Screen_CaptainCustomization_C_DisplayItemDescription_Params
	{
	public:
		struct FMarketItemUIData                                   marketData;                                              // 0x0000(0x0250)  (Parm)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UpdateBuyButton
	 */
	struct UUI_Screen_CaptainCustomization_C_UpdateBuyButton_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UpdateDescriptionButtonVisibility
	 */
	struct UUI_Screen_CaptainCustomization_C_UpdateDescriptionButtonVisibility_Params
	{
	public:
		bool                                                       IsOwned;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsEquipped;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UnbindDescriptionButtons
	 */
	struct UUI_Screen_CaptainCustomization_C_UnbindDescriptionButtons_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.SetupButtonsAndCategories
	 */
	struct UUI_Screen_CaptainCustomization_C_SetupButtonsAndCategories_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.GetLocalizedCategoryListHeader
	 */
	struct UUI_Screen_CaptainCustomization_C_GetLocalizedCategoryListHeader_Params
	{
	public:
		EYUICharacterItemType                                      CustomizationCategory;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GAA1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                HeaderText;                                              // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.GetLocalizedCategoryName
	 */
	struct UUI_Screen_CaptainCustomization_C_GetLocalizedCategoryName_Params
	{
	public:
		EYUICharacterItemType                                      CustomizationCategory;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R6D0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                LocalizedTitle;                                          // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.UpdateCustomizationCategoriesData
	 */
	struct UUI_Screen_CaptainCustomization_C_UpdateCustomizationCategoriesData_Params
	{
	public:
		TArray<struct FMarketItemUIData>                           equippedItems;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.DisplayCustomizationItems
	 */
	struct UUI_Screen_CaptainCustomization_C_DisplayCustomizationItems_Params
	{
	public:
		TArray<struct FMarketItemUIData>                           itemData;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnTransitionIn
	 */
	struct UUI_Screen_CaptainCustomization_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnTransitionOut
	 */
	struct UUI_Screen_CaptainCustomization_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_CaptainCustomization_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_CaptainCustomization_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleOnCategoryClicked
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleOnCategoryClicked_Params
	{
	public:
		class UUI_CptCustomization_CategoryButton_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Screen_CaptainCustomization_C_BndEvt__FemaleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Screen_CaptainCustomization_C_BndEvt__MaleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleOnCustomizationItemClicked
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleOnCustomizationItemClicked_Params
	{
	public:
		class UUI_CptCustomization_CustomizationItem_C*            source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.RefreshEquippedItemWidgets
	 */
	struct UUI_Screen_CaptainCustomization_C_RefreshEquippedItemWidgets_Params
	{
	public:
		TArray<struct FMarketItemUIData>                           equippedItems;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.RefreshEquippableItemWidgets
	 */
	struct UUI_Screen_CaptainCustomization_C_RefreshEquippableItemWidgets_Params
	{
	public:
		TArray<struct FMarketItemUIData>                           equippableItems;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.RefreshEquippableItemDescriptionWidget
	 */
	struct UUI_Screen_CaptainCustomization_C_RefreshEquippableItemDescriptionWidget_Params
	{
	public:
		struct FMarketItemUIData                                   equippableItem;                                          // 0x0000(0x0250)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ShowEquippableItemWidgets
	 */
	struct UUI_Screen_CaptainCustomization_C_ShowEquippableItemWidgets_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ShowEquippableItemDescriptionWidget
	 */
	struct UUI_Screen_CaptainCustomization_C_ShowEquippableItemDescriptionWidget_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleOnEquipClicked
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleOnEquipClicked_Params
	{
	public:
		int32_t                                                    UnusedId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleOnViewBundleClicked
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleOnViewBundleClicked_Params
	{
	public:
		int32_t                                                    UnusedId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.HandleOnBuyClicked
	 */
	struct UUI_Screen_CaptainCustomization_C_HandleOnBuyClicked_Params
	{
	public:
		int32_t                                                    UnusedId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Screen_CaptainCustomization_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.Construct
	 */
	struct UUI_Screen_CaptainCustomization_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_365_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Screen_CaptainCustomization_C_BndEvt__MaleButton_K2Node_ComponentBoundEvent_365_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_306_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Screen_CaptainCustomization_C_BndEvt__FemaleButton_K2Node_ComponentBoundEvent_306_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_397_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Screen_CaptainCustomization_C_BndEvt__MaleButton_K2Node_ComponentBoundEvent_397_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_267_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Screen_CaptainCustomization_C_BndEvt__FemaleButton_K2Node_ComponentBoundEvent_267_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.PreConstruct
	 */
	struct UUI_Screen_CaptainCustomization_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.OnNavigationEvent
	 */
	struct UUI_Screen_CaptainCustomization_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CaptainCustomization.UI_Screen_CaptainCustomization_C.ExecuteUbergraph_UI_Screen_CaptainCustomization
	 */
	struct UUI_Screen_CaptainCustomization_C_ExecuteUbergraph_UI_Screen_CaptainCustomization_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_378R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
