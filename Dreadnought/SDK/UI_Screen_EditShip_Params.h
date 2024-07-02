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
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularDownAvailableLoadout
	 */
	struct UUI_Screen_EditShip_C_HandleGranularDownAvailableLoadout_Params
	{
	public:
		int32_t                                                    NumColumns;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KP7T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_EditShipSubPanel*                                CurrentPanel;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularUpAvailableLoadout
	 */
	struct UUI_Screen_EditShip_C_HandleGranularUpAvailableLoadout_Params
	{
	public:
		int32_t                                                    NumColumns;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WGC2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_EditShipSubPanel*                                CurrentPanel;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.ShowStats
	 */
	struct UUI_Screen_EditShip_C_ShowStats_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleLeftStickClick
	 */
	struct UUI_Screen_EditShip_C_HandleLeftStickClick_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateCurrencies
	 */
	struct UUI_Screen_EditShip_C_UpdateCurrencies_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.EditLoadoutName
	 */
	struct UUI_Screen_EditShip_C_EditLoadoutName_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.FocusInitialDetailsPanelItem
	 */
	struct UUI_Screen_EditShip_C_FocusInitialDetailsPanelItem_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateFocusedItemAvailable
	 */
	struct UUI_Screen_EditShip_C_UpdateFocusedItemAvailable_Params
	{
	public:
		class UUI_EditShipSubPanel*                                CurrentPanel;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q3C4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateFocusedItemLoadout
	 */
	struct UUI_Screen_EditShip_C_UpdateFocusedItemLoadout_Params
	{
	public:
		class UUI_EditShipSubPanel*                                Panel;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    loadoutindex;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PUPS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.SelectDetailsTab
	 */
	struct UUI_Screen_EditShip_C_SelectDetailsTab_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.SelectAppearanceTab
	 */
	struct UUI_Screen_EditShip_C_SelectAppearanceTab_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.SelectLoadoutTab
	 */
	struct UUI_Screen_EditShip_C_SelectLoadoutTab_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.GetCurrentPanelTab
	 */
	struct UUI_Screen_EditShip_C_GetCurrentPanelTab_Params
	{
	public:
		class UUI_Button_Tab_Generic_C*                            Item;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.ShouldShowEditLoadoutNameButton
	 */
	struct UUI_Screen_EditShip_C_ShouldShowEditLoadoutNameButton_Params
	{
	public:
		class UUI_EditShip_ButtonLoadout_C*                        LoadoutButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.UnfocusCurrentLoadoutModuleContainer
	 */
	struct UUI_Screen_EditShip_C_UnfocusCurrentLoadoutModuleContainer_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandlePanelPostAction
	 */
	struct UUI_Screen_EditShip_C_HandlePanelPostAction_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.SetButtonHints
	 */
	struct UUI_Screen_EditShip_C_SetButtonHints_Params
	{
	public:
		TArray<struct FLegendPromptData>                           Hints;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftRightDetails
	 */
	struct UUI_Screen_EditShip_C_HandleGranularLeftRightDetails_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.GetNavigableLoadoutModulesCount
	 */
	struct UUI_Screen_EditShip_C_GetNavigableLoadoutModulesCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularUpAvailableModules
	 */
	struct UUI_Screen_EditShip_C_HandleGranularUpAvailableModules_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularUpLoadoutButton
	 */
	struct UUI_Screen_EditShip_C_HandleGranularUpLoadoutButton_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularUp
	 */
	struct UUI_Screen_EditShip_C_HandleGranularUp_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularDownAvailableModules
	 */
	struct UUI_Screen_EditShip_C_HandleGranularDownAvailableModules_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.IsAvailableModuleButtonFocused
	 */
	struct UUI_Screen_EditShip_C_IsAvailableModuleButtonFocused_Params
	{
	public:
		bool                                                       IsAvailableModule;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularDownLoadoutButton
	 */
	struct UUI_Screen_EditShip_C_HandleGranularDownLoadoutButton_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularDown
	 */
	struct UUI_Screen_EditShip_C_HandleGranularDown_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftFromAppearanceLoadoutButton
	 */
	struct UUI_Screen_EditShip_C_HandleGranularLeftFromAppearanceLoadoutButton_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftFromCaptainCustomization
	 */
	struct UUI_Screen_EditShip_C_HandleGranularLeftFromCaptainCustomization_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.GetAvailableColumns
	 */
	struct UUI_Screen_EditShip_C_GetAvailableColumns_Params
	{
	public:
		int32_t                                                    NumColumns;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightFromCaptainCustomization
	 */
	struct UUI_Screen_EditShip_C_HandleGranularRightFromCaptainCustomization_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.IsCaptainCustomizationButtonFocused
	 */
	struct UUI_Screen_EditShip_C_IsCaptainCustomizationButtonFocused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightOnAvailableModules
	 */
	struct UUI_Screen_EditShip_C_HandleGranularRightOnAvailableModules_Params
	{
	public:
		int32_t                                                    NumberOfAvailableColumns;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_29KD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_EditShipSubPanel*                                CurrentPanel;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightOnAppearanceModules
	 */
	struct UUI_Screen_EditShip_C_HandleGranularRightOnAppearanceModules_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftOnAppearanceModules
	 */
	struct UUI_Screen_EditShip_C_HandleGranularLeftOnAppearanceModules_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightOnLoadoutModules
	 */
	struct UUI_Screen_EditShip_C_HandleGranularRightOnLoadoutModules_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightFromLoadoutButton
	 */
	struct UUI_Screen_EditShip_C_HandleGranularRightFromLoadoutButton_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightAppearance
	 */
	struct UUI_Screen_EditShip_C_HandleGranularRightAppearance_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightLoadout
	 */
	struct UUI_Screen_EditShip_C_HandleGranularRightLoadout_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRight
	 */
	struct UUI_Screen_EditShip_C_HandleGranularRight_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftAppearance
	 */
	struct UUI_Screen_EditShip_C_HandleGranularLeftAppearance_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftOnAvailableModules
	 */
	struct UUI_Screen_EditShip_C_HandleGranularLeftOnAvailableModules_Params
	{
	public:
		int32_t                                                    NumberOfAvailableColumns;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6Q5J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_EditShipSubPanel*                                CurrentPanel;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftOnLoadoutModules
	 */
	struct UUI_Screen_EditShip_C_HandleGranularLeftOnLoadoutModules_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftFromLoadoutButton
	 */
	struct UUI_Screen_EditShip_C_HandleGranularLeftFromLoadoutButton_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftLoadout
	 */
	struct UUI_Screen_EditShip_C_HandleGranularLeftLoadout_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeft
	 */
	struct UUI_Screen_EditShip_C_HandleGranularLeft_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateBackFocus
	 */
	struct UUI_Screen_EditShip_C_UpdateBackFocus_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateLoadoutReferences
	 */
	struct UUI_Screen_EditShip_C_UpdateLoadoutReferences_Params
	{
	public:
		TArray<class UUI_EditShip_LoadoutButton_Container_C*>      CurrentLoadoutModulesContainers;                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class UUI_Generic_Button_Module_C*>                 CurrentAvailableModules;                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateFocusFromAction
	 */
	struct UUI_Screen_EditShip_C_UpdateFocusFromAction_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.IsLoadoutButtonFocused
	 */
	struct UUI_Screen_EditShip_C_IsLoadoutButtonFocused_Params
	{
	public:
		bool                                                       FoundLoadoutButtonTemp;                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MKI0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_EditShip_ButtonLoadout_C*                        ButtonLoadout;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.FocusInitialPanelItem
	 */
	struct UUI_Screen_EditShip_C_FocusInitialPanelItem_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.IsLoadoutModuleButtonFocused
	 */
	struct UUI_Screen_EditShip_C_IsLoadoutModuleButtonFocused_Params
	{
	public:
		class UUI_EditShip_LoadoutButton_Container_C*              LoadoutContainer;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLoadoutModuleButton;                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.TabLeft
	 */
	struct UUI_Screen_EditShip_C_TabLeft_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.FocusNewTab
	 */
	struct UUI_Screen_EditShip_C_FocusNewTab_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.UnfocusCurrentTab
	 */
	struct UUI_Screen_EditShip_C_UnfocusCurrentTab_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.tabRight
	 */
	struct UUI_Screen_EditShip_C_tabRight_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleInput
	 */
	struct UUI_Screen_EditShip_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            Input;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.SetupLoadoutButtons
	 */
	struct UUI_Screen_EditShip_C_SetupLoadoutButtons_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleTabSelected
	 */
	struct UUI_Screen_EditShip_C_HandleTabSelected_Params
	{
	public:
		class UUI_Button_Tab_Generic_C*                            SelectedTab;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.SetupNavigationTabs
	 */
	struct UUI_Screen_EditShip_C_SetupNavigationTabs_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.Setup
	 */
	struct UUI_Screen_EditShip_C_Setup_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.SetLoadoutButtonContainerVisibility
	 */
	struct UUI_Screen_EditShip_C_SetLoadoutButtonContainerVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.SelectInitialPanel
	 */
	struct UUI_Screen_EditShip_C_SelectInitialPanel_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleLoadoutSelection
	 */
	struct UUI_Screen_EditShip_C_HandleLoadoutSelection_Params
	{
	public:
		class UUI_EditShip_ButtonLoadout_C*                        SelectedLoadoutButton;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.ShowSubPanel
	 */
	struct UUI_Screen_EditShip_C_ShowSubPanel_Params
	{
	public:
		class UUserWidget*                                         PanelToShow;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.GetLoadoutData
	 */
	struct UUI_Screen_EditShip_C_GetLoadoutData_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.SetupShipTitleWidget
	 */
	struct UUI_Screen_EditShip_C_SetupShipTitleWidget_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.Construct
	 */
	struct UUI_Screen_EditShip_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnTransitionIn
	 */
	struct UUI_Screen_EditShip_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnTransitionOut
	 */
	struct UUI_Screen_EditShip_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.TransitionInAnimComplete
	 */
	struct UUI_Screen_EditShip_C_TransitionInAnimComplete_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.TransitionOutAnimComplete
	 */
	struct UUI_Screen_EditShip_C_TransitionOutAnimComplete_Params
	{	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleResearchCompleted
	 */
	struct UUI_Screen_EditShip_C_HandleResearchCompleted_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandlePurchaseCompleted
	 */
	struct UUI_Screen_EditShip_C_HandlePurchaseCompleted_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnNavigationTabClicked
	 */
	struct UUI_Screen_EditShip_C_OnNavigationTabClicked_Params
	{
	public:
		class UUI_Button_Tab_Generic_C*                            source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnSaveLoadoutNameRequest
	 */
	struct UUI_Screen_EditShip_C_OnSaveLoadoutNameRequest_Params
	{
	public:
		class UUI_EditShip_ButtonLoadout_C*                        source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnNavigationEvent
	 */
	struct UUI_Screen_EditShip_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnChangeTab
	 */
	struct UUI_Screen_EditShip_C_OnChangeTab_Params
	{
	public:
		EUI_Screen                                                 screen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_EditShip.UI_Screen_EditShip_C.ExecuteUbergraph_UI_Screen_EditShip
	 */
	struct UUI_Screen_EditShip_C_ExecuteUbergraph_UI_Screen_EditShip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6DOI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
