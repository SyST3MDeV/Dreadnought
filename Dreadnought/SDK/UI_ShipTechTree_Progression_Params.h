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
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.GetIsShip
	 */
	struct UUI_ShipTechTree_Progression_C_GetIsShip_Params
	{
	public:
		bool                                                       IsShip;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.GetWidgetItem
	 */
	struct UUI_ShipTechTree_Progression_C_GetWidgetItem_Params
	{
	public:
		class UUI_DreadWidget*                                     Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.HandleUnfocus
	 */
	struct UUI_ShipTechTree_Progression_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.HandleFocus
	 */
	struct UUI_ShipTechTree_Progression_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ModuleProgressionItemSelected
	 */
	struct UUI_ShipTechTree_Progression_C_ModuleProgressionItemSelected_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ModuleProgressionItemUnhovered
	 */
	struct UUI_ShipTechTree_Progression_C_ModuleProgressionItemUnhovered_Params
	{	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ModuleProgressionItemHovered
	 */
	struct UUI_ShipTechTree_Progression_C_ModuleProgressionItemHovered_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ShipProgressionItemUnhovered
	 */
	struct UUI_ShipTechTree_Progression_C_ShipProgressionItemUnhovered_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ShipProgressionItemHovered
	 */
	struct UUI_ShipTechTree_Progression_C_ShipProgressionItemHovered_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ShipProgressionItemSelected
	 */
	struct UUI_ShipTechTree_Progression_C_ShipProgressionItemSelected_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.SetModulesRequired
	 */
	struct UUI_ShipTechTree_Progression_C_SetModulesRequired_Params
	{
	public:
		int32_t                                                    ModuleRequiresCount;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MDK3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.SetupProgressBar
	 */
	struct UUI_ShipTechTree_Progression_C_SetupProgressBar_Params
	{	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.SetModulesOwned
	 */
	struct UUI_ShipTechTree_Progression_C_SetModulesOwned_Params
	{
	public:
		int32_t                                                    OwnedModuleCount;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_42WL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.Setup
	 */
	struct UUI_ShipTechTree_Progression_C_Setup_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (Parm)
	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnModuleProgressionItemClicked__DelegateSignature
	 */
	struct UUI_ShipTechTree_Progression_C_OnModuleProgressionItemClicked__DelegateSignature_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnModuleProgressionItemUnhovered__DelegateSignature
	 */
	struct UUI_ShipTechTree_Progression_C_OnModuleProgressionItemUnhovered__DelegateSignature_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnModuleProgressionItemHovered__DelegateSignature
	 */
	struct UUI_ShipTechTree_Progression_C_OnModuleProgressionItemHovered__DelegateSignature_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnShipProgressionItemUnhovered__DelegateSignature
	 */
	struct UUI_ShipTechTree_Progression_C_OnShipProgressionItemUnhovered__DelegateSignature_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnShipProgressionItemHovered__DelegateSignature
	 */
	struct UUI_ShipTechTree_Progression_C_OnShipProgressionItemHovered__DelegateSignature_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnShipProgressionItemClicked__DelegateSignature
	 */
	struct UUI_ShipTechTree_Progression_C_OnShipProgressionItemClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
