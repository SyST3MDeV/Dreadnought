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
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.GetPositionPanel
	 */
	struct UUI_Screen_ShipTechTree_C_GetPositionPanel_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.UpdateStatsPanelShip
	 */
	struct UUI_Screen_ShipTechTree_C_UpdateStatsPanelShip_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               Ship;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.UpdateStatsPanelButtonModule
	 */
	struct UUI_Screen_ShipTechTree_C_UpdateStatsPanelButtonModule_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ButtonModule;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.GetTopLeftBorderAbsolutePosition
	 */
	struct UUI_Screen_ShipTechTree_C_GetTopLeftBorderAbsolutePosition_Params
	{
	public:
		struct FVector2D                                           TopLeftBorderAbsolutePosition;                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.UnfocusCurrentItem
	 */
	struct UUI_Screen_ShipTechTree_C_UnfocusCurrentItem_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleNavActionTertiary
	 */
	struct UUI_Screen_ShipTechTree_C_HandleNavActionTertiary_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.UpdateStatsPanelPosition
	 */
	struct UUI_Screen_ShipTechTree_C_UpdateStatsPanelPosition_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.SetProgressionWidgetFocus
	 */
	struct UUI_Screen_ShipTechTree_C_SetProgressionWidgetFocus_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W24F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.Action
	 */
	struct UUI_Screen_ShipTechTree_C_Action_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleNavUpGranular
	 */
	struct UUI_Screen_ShipTechTree_C_HandleNavUpGranular_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleNavDownGranular
	 */
	struct UUI_Screen_ShipTechTree_C_HandleNavDownGranular_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleNavLeftGranular
	 */
	struct UUI_Screen_ShipTechTree_C_HandleNavLeftGranular_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleNavRightGranular
	 */
	struct UUI_Screen_ShipTechTree_C_HandleNavRightGranular_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.SetModuleWidgetFocus
	 */
	struct UUI_Screen_ShipTechTree_C_SetModuleWidgetFocus_Params
	{
	public:
		int32_t                                                    Row;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    column;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ClearAll
	 */
	struct UUI_Screen_ShipTechTree_C_ClearAll_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.SetShipDetails
	 */
	struct UUI_Screen_ShipTechTree_C_SetShipDetails_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    Data;                                                    // 0x0000(0x0180)  (Parm)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.SetupTechTreeRow
	 */
	struct UUI_Screen_ShipTechTree_C_SetupTechTreeRow_Params
	{
	public:
		TArray<struct FUIGenericButtonModuleData>                  CategoryData;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    Row;                                                     // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleInput
	 */
	struct UUI_Screen_ShipTechTree_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.Setup
	 */
	struct UUI_Screen_ShipTechTree_C_Setup_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressionModuleClicked
	 */
	struct UUI_Screen_ShipTechTree_C_ProgressionModuleClicked_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressionModuleUnhovered
	 */
	struct UUI_Screen_ShipTechTree_C_ProgressionModuleUnhovered_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressionModuleHovered
	 */
	struct UUI_Screen_ShipTechTree_C_ProgressionModuleHovered_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressiomShipClicked
	 */
	struct UUI_Screen_ShipTechTree_C_ProgressiomShipClicked_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressionShipUnhovered
	 */
	struct UUI_Screen_ShipTechTree_C_ProgressionShipUnhovered_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressionShipHovered
	 */
	struct UUI_Screen_ShipTechTree_C_ProgressionShipHovered_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ModuleItemClicked
	 */
	struct UUI_Screen_ShipTechTree_C_ModuleItemClicked_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ModuleItemUnhovered
	 */
	struct UUI_Screen_ShipTechTree_C_ModuleItemUnhovered_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ModuleItemHovered
	 */
	struct UUI_Screen_ShipTechTree_C_ModuleItemHovered_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.RegisterUnhoverListeners
	 */
	struct UUI_Screen_ShipTechTree_C_RegisterUnhoverListeners_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.RegisterHoverListeners
	 */
	struct UUI_Screen_ShipTechTree_C_RegisterHoverListeners_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.RegisterSelectedListeners
	 */
	struct UUI_Screen_ShipTechTree_C_RegisterSelectedListeners_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ShowStatsPanel
	 */
	struct UUI_Screen_ShipTechTree_C_ShowStatsPanel_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.SetStatsPanel
	 */
	struct UUI_Screen_ShipTechTree_C_SetStatsPanel_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7HHS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.Construct
	 */
	struct UUI_Screen_ShipTechTree_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.OnTransitionIn
	 */
	struct UUI_Screen_ShipTechTree_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.OnTransitionOut
	 */
	struct UUI_Screen_ShipTechTree_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_ShipTechTree_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_ShipTechTree_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleTechTreeDataReceived
	 */
	struct UUI_Screen_ShipTechTree_C_HandleTechTreeDataReceived_Params
	{
	public:
		TArray<struct FUIGenericButtonModuleData>                  moduleUiData;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    techTreeRow;                                             // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleShipDataReceived
	 */
	struct UUI_Screen_ShipTechTree_C_HandleShipDataReceived_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipUiData;                                              // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleShipProgressionDataReceived
	 */
	struct UUI_Screen_ShipTechTree_C_HandleShipProgressionDataReceived_Params
	{
	public:
		TArray<struct FYUIShipManufacturerTechItemData>            shipProgressionUiData;                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.OnNavigationEvent
	 */
	struct UUI_Screen_ShipTechTree_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.UpdateCurrentlyFocusedRow
	 */
	struct UUI_Screen_ShipTechTree_C_UpdateCurrentlyFocusedRow_Params
	{
	public:
		class UUI_DreadWidget*                                     FocusedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.OnShipXpUpdate
	 */
	struct UUI_Screen_ShipTechTree_C_OnShipXpUpdate_Params
	{
	public:
		int32_t                                                    shipXp;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ExecuteUbergraph_UI_Screen_ShipTechTree
	 */
	struct UUI_Screen_ShipTechTree_C_ExecuteUbergraph_UI_Screen_ShipTechTree_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SL9Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
