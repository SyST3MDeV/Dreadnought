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
	 * Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.SetSelected
	 */
	struct UUI_Button_ShipTechTreeItem_C_SetSelected_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.Setup
	 */
	struct UUI_Button_ShipTechTreeItem_C_Setup_Params
	{	};

	/**
	 * Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.Construct
	 */
	struct UUI_Button_ShipTechTreeItem_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_ShipTechTreeItem_C_BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_ShipTechTreeItem_C_BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_ShipTechTreeItem_C_BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.ExecuteUbergraph_UI_Button_ShipTechTreeItem
	 */
	struct UUI_Button_ShipTechTreeItem_C_ExecuteUbergraph_UI_Button_ShipTechTreeItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.OnShipAbilityTreeItemUnhovered__DelegateSignature
	 */
	struct UUI_Button_ShipTechTreeItem_C_OnShipAbilityTreeItemUnhovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.OnShipAbilityTreeItemHovered__DelegateSignature
	 */
	struct UUI_Button_ShipTechTreeItem_C_OnShipAbilityTreeItemHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.OnShipAbilityTreeItemClicked__DelegateSignature
	 */
	struct UUI_Button_ShipTechTreeItem_C_OnShipAbilityTreeItemClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
