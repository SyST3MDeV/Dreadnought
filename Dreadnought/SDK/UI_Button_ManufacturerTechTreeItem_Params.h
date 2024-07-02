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
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.UpdateFlagshipStatus
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_UpdateFlagshipStatus_Params
	{
	public:
		bool                                                       IsFlagship;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.InitializeFocus
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_InitializeFocus_Params
	{	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.RefreshResearchIconVisibility
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_RefreshResearchIconVisibility_Params
	{	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.GetShipClass
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_GetShipClass_Params
	{
	public:
		EYShipClass                                                shipclass;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.Setup
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_Setup_Params
	{	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.HandleUnfocus
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.HandleFocus
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.Action
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_Action_Params
	{	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.GetShipItemID
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_GetShipItemID_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.GetShipCategoryTexture
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_GetShipCategoryTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.GetShipTier
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_GetShipTier_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.GetShipData
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_GetShipData_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (Parm, OutParm)
	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.SetShipDataAndUpdateWidgets
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_SetShipDataAndUpdateWidgets_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    arg_ShipData;                                            // 0x0000(0x0180)  (Parm)
	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.Construct
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.OnActionReceived
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.ExecuteUbergraph_UI_Button_ManufacturerTechTreeItem
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_ExecuteUbergraph_UI_Button_ManufacturerTechTreeItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.OnReceivedFocus__DelegateSignature
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_OnReceivedFocus__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.OnShipTechTreeItemUnhovered__DelegateSignature
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_OnShipTechTreeItemUnhovered__DelegateSignature_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.OnShipTechTreeItemHovered__DelegateSignature
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_OnShipTechTreeItemHovered__DelegateSignature_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.OnShipTechTreeItemClicked__DelegateSignature
	 */
	struct UUI_Button_ManufacturerTechTreeItem_C_OnShipTechTreeItemClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_ManufacturerTechTreeItem_C*               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
