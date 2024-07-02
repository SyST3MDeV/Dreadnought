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
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.GetWidget
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_GetWidget_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CWFD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_DreadWidget*                                     Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.GetIsShip
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_GetIsShip_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsShip;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R5J3[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.GetWidgetIndex
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_GetWidgetIndex_Params
	{
	public:
		class UUI_DreadWidget*                                     Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.HandleUnfocus
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_HandleUnfocus_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DM3Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.HandleFocus
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_HandleFocus_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_40B1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ModuleProgressionItemSelected
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_ModuleProgressionItemSelected_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ModuleProgressionItemUnhovered
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_ModuleProgressionItemUnhovered_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ModuleProgressionItemHovered
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_ModuleProgressionItemHovered_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.FindColumnForItem
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_FindColumnForItem_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    column;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       WasFound;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6INV[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ShipProgressionItemUnhovered
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_ShipProgressionItemUnhovered_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ShipProgressionItemHovered
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_ShipProgressionItemHovered_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ShipProgressionItemSelected
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_ShipProgressionItemSelected_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ClearChildren
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_ClearChildren_Params
	{	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.AddProgressionItem
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_AddProgressionItem_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    ShipItem;                                                // 0x0000(0x0180)  (Parm)
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.AddProgressionItems
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_AddProgressionItems_Params
	{
	public:
		TArray<struct FYUIShipManufacturerTechItemData>            shipDataArray;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnModuleProgressionItemClicked__DelegateSignature
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_OnModuleProgressionItemClicked__DelegateSignature_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnModuleProgressionItemUnhovered__DelegateSignature
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_OnModuleProgressionItemUnhovered__DelegateSignature_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnModuleProgressionItemHovered__DelegateSignature
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_OnModuleProgressionItemHovered__DelegateSignature_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnShipProgressionItemUnhovered__DelegateSignature
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_OnShipProgressionItemUnhovered__DelegateSignature_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnShipProgressionItemHovered__DelegateSignature
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_OnShipProgressionItemHovered__DelegateSignature_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnShipProgressionItemClicked__DelegateSignature
	 */
	struct UUI_ShipTechTree_ProgressionPath_C_OnShipProgressionItemClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
