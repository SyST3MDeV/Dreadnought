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
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.GetScrollBox
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_GetScrollBox_Params
	{
	public:
		class UScrollBox*                                          ScrollBox;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.GetAvailableNumColumns
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_GetAvailableNumColumns_Params
	{
	public:
		int32_t                                                    NumColumns;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HandleModuleButtonClicked
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_HandleModuleButtonClicked_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ModuleButton;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.SetOfficerModuleVisibility
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_SetOfficerModuleVisibility_Params
	{
	public:
		bool                                                       IsBriefingLocked;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYUILoadoutItemType                                        index;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WQ8K[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             LoadoutModule;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.GetAvailableModulesXPos
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_GetAvailableModulesXPos_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.GetListPosition
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_GetListPosition_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_08SV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.InitStatsPanelPopup
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_InitStatsPanelPopup_Params
	{
	public:
		class UUI_Generic_Stats_Panel_C*                           StatsPanel;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HandleLoadoutButtonUnfocused
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_HandleLoadoutButtonUnfocused_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HandleLoadoutButtonFocused
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_HandleLoadoutButtonFocused_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ButtonModule;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.UpdateStatsPanelButtonModule
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_UpdateStatsPanelButtonModule_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ButtonModule;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.UpdateStatsPanelPosition
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_UpdateStatsPanelPosition_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.ShowStatsPanel
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_ShowStatsPanel_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.SetStatsPanel
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_SetStatsPanel_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q8UL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HandleModuleIndexClicked
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_HandleModuleIndexClicked_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.IsCurrentItemAnOfficerBriefing
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_IsCurrentItemAnOfficerBriefing_Params
	{
	public:
		bool                                                       IsBriefing;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.GetItemSlotFromIndex
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_GetItemSlotFromIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYUILoadoutItemType                                        ItemSlotType;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.PopulateModule
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_PopulateModule_Params
	{
	public:
		EYUILoadoutItemType                                        Slot;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WB1C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_Generic_Button_Module_C*                         ModuleButton;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.UpdateCurrentLoadout
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_UpdateCurrentLoadout_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.FindSelectedModuleButton
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_FindSelectedModuleButton_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ModuleButtonToFind;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UUI_Generic_Button_Module_C*>                 ModuleList;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UUI_Generic_Button_Module_C*                         ModuleButton;                                            // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.UpdateSelectedLoadoutModule
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_UpdateSelectedLoadoutModule_Params
	{
	public:
		int32_t                                                    selectedIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9SCQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.SetDetailsPanelData
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_SetDetailsPanelData_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T5KS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.ShowModuleDetails
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_ShowModuleDetails_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HideModuleList
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_HideModuleList_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.ShowModuleList
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_ShowModuleList_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.AddHorizontalBoxChildrenToArray
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_AddHorizontalBoxChildrenToArray_Params
	{
	public:
		class UPanelWidget*                                        TargetHBox;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.SetupLoadoutModules
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_SetupLoadoutModules_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HideModuleDetails
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_HideModuleDetails_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.PopulateAvailableModulesForCurrentItem
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_PopulateAvailableModulesForCurrentItem_Params
	{
	public:
		int32_t                                                    CurrentIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.SetOfficerLockVisibility
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_SetOfficerLockVisibility_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__WeaponContainerButton_K2Node_ComponentBoundEvent_305_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_BndEvt__WeaponContainerButton_K2Node_ComponentBoundEvent_305_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__WeaponContainerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_BndEvt__WeaponContainerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__ModuleContainerButton_K2Node_ComponentBoundEvent_970_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_BndEvt__ModuleContainerButton_K2Node_ComponentBoundEvent_970_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__ModuleContainerButton_K2Node_ComponentBoundEvent_987_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_BndEvt__ModuleContainerButton_K2Node_ComponentBoundEvent_987_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__OfficerBriefingButtonContainer_K2Node_ComponentBoundEvent_1338_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_BndEvt__OfficerBriefingButtonContainer_K2Node_ComponentBoundEvent_1338_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__OfficerBriefingButtonContainer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_BndEvt__OfficerBriefingButtonContainer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnLoadoutModuleButtonClicked
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_OnLoadoutModuleButtonClicked_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ClickedModuleButton;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnAvailableModuleHovered
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_OnAvailableModuleHovered_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ModuleButton;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnAvailableModuleClicked
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_OnAvailableModuleClicked_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         AvailableModuleClicked;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.Construct
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_Construct_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnShow
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_OnShow_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnHide
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_OnHide_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HideComplete
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_HideComplete_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnLoadoutModuleButtonHovered
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_OnLoadoutModuleButtonHovered_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         HoveredModuleButton;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnLoadoutModuleButtonUnhovered
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_OnLoadoutModuleButtonUnhovered_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.ExecuteUbergraph_UI_EditShip_Panel_EditLoadout
	 */
	struct UUI_EditShip_Panel_EditLoadout_C_ExecuteUbergraph_UI_EditShip_Panel_EditLoadout_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BOFH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
