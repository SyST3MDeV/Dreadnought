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
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.ClearRow
	 */
	struct UUI_TechTree_Row_C_ClearRow_Params
	{	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.GetModuleWidget
	 */
	struct UUI_TechTree_Row_C_GetModuleWidget_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9CFD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_Generic_Button_Module_C*                         Item;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.PreSetup
	 */
	struct UUI_TechTree_Row_C_PreSetup_Params
	{	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.HandleUnfocus
	 */
	struct UUI_TechTree_Row_C_HandleUnfocus_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GF6W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.HandleFocus
	 */
	struct UUI_TechTree_Row_C_HandleFocus_Params
	{
	public:
		int32_t                                                    column;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WBHU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.ClearChildren
	 */
	struct UUI_TechTree_Row_C_ClearChildren_Params
	{	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.FindColumnForItem
	 */
	struct UUI_TechTree_Row_C_FindColumnForItem_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    column;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       WasFound;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I9MA[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.ShipTechTreeItemUnhovered
	 */
	struct UUI_TechTree_Row_C_ShipTechTreeItemUnhovered_Params
	{	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.ShipTechTreeItemHovered
	 */
	struct UUI_TechTree_Row_C_ShipTechTreeItemHovered_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.ShipTechTreeItemSelected
	 */
	struct UUI_TechTree_Row_C_ShipTechTreeItemSelected_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.AddItems
	 */
	struct UUI_TechTree_Row_C_AddItems_Params
	{
	public:
		TArray<struct FUIGenericButtonModuleData>                  CategoryItems;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.SetItemClassIcon
	 */
	struct UUI_TechTree_Row_C_SetItemClassIcon_Params
	{
	public:
		class UTexture2D*                                          ClassIcon;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.PreConstruct
	 */
	struct UUI_TechTree_Row_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.ExecuteUbergraph_UI_TechTree_Row
	 */
	struct UUI_TechTree_Row_C_ExecuteUbergraph_UI_TechTree_Row_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.OnReceivedFocus__DelegateSignature
	 */
	struct UUI_TechTree_Row_C_OnReceivedFocus__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.OnShipAbilityTreeItemUnhovered__DelegateSignature
	 */
	struct UUI_TechTree_Row_C_OnShipAbilityTreeItemUnhovered__DelegateSignature_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.OnShipAbilityTreeItemHovered__DelegateSignature
	 */
	struct UUI_TechTree_Row_C_OnShipAbilityTreeItemHovered__DelegateSignature_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TechTree_Row.UI_TechTree_Row_C.OnShipAbilityTreeItemClicked__DelegateSignature
	 */
	struct UUI_TechTree_Row_C_OnShipAbilityTreeItemClicked__DelegateSignature_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
