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
	 * Function UI_TechTree.UI_TechTree_C.ClearTechTree
	 */
	struct UUI_TechTree_C_ClearTechTree_Params
	{	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.ComposeTechTreePaths
	 */
	struct UUI_TechTree_C_ComposeTechTreePaths_Params
	{
	public:
		TArray<struct FUITechTreeShipNode>                         TechTreeNodesOut;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.FindClosestShip
	 */
	struct UUI_TechTree_C_FindClosestShip_Params
	{
	public:
		int32_t                                                    Row;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    column;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UUI_Button_ManufacturerTechTreeItem_C*>       ShipList;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UUI_Button_ManufacturerTechTreeItem_C*               Ship;                                                    // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.HandleInput
	 */
	struct UUI_TechTree_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadButton;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BNUR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.GetNavShip
	 */
	struct UUI_TechTree_C_GetNavShip_Params
	{
	public:
		EUI_MenuActions                                            Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SDIN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_Button_ManufacturerTechTreeItem_C*               CurrentShip;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UUI_Button_ManufacturerTechTreeItem_C*>       ShipList;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       ShipFound;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SAF2[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_Button_ManufacturerTechTreeItem_C*               Ship;                                                    // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.SetWidgetFocus
	 */
	struct UUI_TechTree_C_SetWidgetFocus_Params
	{
	public:
		class UUI_DreadWidget*                                     NewFocusWidget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUI_Enum_ManufacturerTechTreeFocusStates                   NewFocusState;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.Setup
	 */
	struct UUI_TechTree_C_Setup_Params
	{	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.SetupTechTrees
	 */
	struct UUI_TechTree_C_SetupTechTrees_Params
	{
	public:
		TArray<struct FYUIShipManufacturerTechTreeStackItemData>   shipData;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FYUIShipManufacturerTechTreeStackItemData>   HeroShipData;                                            // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.FindInitialTreeFocus
	 */
	struct UUI_TechTree_C_FindInitialTreeFocus_Params
	{
	public:
		TArray<class UUI_Button_ManufacturerTechTreeItem_C*>       TreeWidgetList;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UUI_Button_ManufacturerTechTreeItem_C*               InitialItem;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.Action
	 */
	struct UUI_TechTree_C_Action_Params
	{	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.AddItemToHeroGrid
	 */
	struct UUI_TechTree_C_AddItemToHeroGrid_Params
	{
	public:
		class UUI_TechTree_Row_C*                                  techTreeRow;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UUI_Button_ManufacturerTechTreeItem_C*               ManufacturerTechTreeItem;                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.AddHeroItem
	 */
	struct UUI_TechTree_C_AddHeroItem_Params
	{
	public:
		TArray<struct FYUIShipManufacturerTechItemData>            Stack;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.SetupHeroTechTreeItems
	 */
	struct UUI_TechTree_C_SetupHeroTechTreeItems_Params
	{
	public:
		TArray<struct FYUIShipManufacturerTechTreeStackItemData>   HeroItems;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.ShowHeroShips
	 */
	struct UUI_TechTree_C_ShowHeroShips_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.AddItemToGrid
	 */
	struct UUI_TechTree_C_AddItemToGrid_Params
	{
	public:
		class UUI_TechTree_Row_C*                                  techTreeRow;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UUI_Button_ManufacturerTechTreeItem_C*               ManufacturerTechTreeItem;                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.AddToGrid
	 */
	struct UUI_TechTree_C_AddToGrid_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYShipClass                                                shipclass;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NVT3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UUI_TechTree_Row_C*>                          RowList;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.GetClassFromIcon
	 */
	struct UUI_TechTree_C_GetClassFromIcon_Params
	{
	public:
		class FString                                              IconTexture;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor)
		EYShipClass                                                shipclass;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PPX2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.GetRowFromClass
	 */
	struct UUI_TechTree_C_GetRowFromClass_Params
	{
	public:
		EYShipClass                                                shipclass;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GOFH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Row;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.ShipTechTreeItemClicked
	 */
	struct UUI_TechTree_C_ShipTechTreeItemClicked_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.AddItem
	 */
	struct UUI_TechTree_C_AddItem_Params
	{
	public:
		TArray<struct FYUIShipManufacturerTechItemData>            Stack;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.SetupTechTreeItems
	 */
	struct UUI_TechTree_C_SetupTechTreeItems_Params
	{
	public:
		TArray<struct FYUIShipManufacturerTechTreeStackItemData>   items;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.Construct
	 */
	struct UUI_TechTree_C_Construct_Params
	{	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.InitializeTechTree
	 */
	struct UUI_TechTree_C_InitializeTechTree_Params
	{
	public:
		TArray<struct FYUIShipManufacturerTechTreeStackItemData>   shipData;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FYUITechTreeConnectionData>                  ConnectionData;                                          // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FYUIShipManufacturerTechTreeStackItemData>   HeroShipData;                                            // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.ExpandButtonClicked
	 */
	struct UUI_TechTree_C_ExpandButtonClicked_Params
	{
	public:
		class UUserWidget*                                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.OnActionReceived
	 */
	struct UUI_TechTree_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.UpdateCurrentlyFocusedShip
	 */
	struct UUI_TechTree_C_UpdateCurrentlyFocusedShip_Params
	{
	public:
		class UUI_DreadWidget*                                     FocusedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.UpdateCurrentlyFocusedHeroShip
	 */
	struct UUI_TechTree_C_UpdateCurrentlyFocusedHeroShip_Params
	{
	public:
		class UUI_DreadWidget*                                     FocusedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.ExpandButtonFocused
	 */
	struct UUI_TechTree_C_ExpandButtonFocused_Params
	{
	public:
		class UUI_DreadWidget*                                     FocusedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.ExecuteUbergraph_UI_TechTree
	 */
	struct UUI_TechTree_C_ExecuteUbergraph_UI_TechTree_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree.UI_TechTree_C.OnShipTechTreeItemClicked__DelegateSignature
	 */
	struct UUI_TechTree_C_OnShipTechTreeItemClicked__DelegateSignature_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
