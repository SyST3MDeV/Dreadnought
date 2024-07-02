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
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.GetIsAcquireMore
	 */
	struct UUI_Button_FleetAddShipItem_C_GetIsAcquireMore_Params
	{
	public:
		bool                                                       IsAcquireMoreButton;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.SetButtonVersion
	 */
	struct UUI_Button_FleetAddShipItem_C_SetButtonVersion_Params
	{
	public:
		bool                                                       IsAddMoreButton;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.Action
	 */
	struct UUI_Button_FleetAddShipItem_C_Action_Params
	{	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnFocusReceived
	 */
	struct UUI_Button_FleetAddShipItem_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0034(0x0008)  (Parm)
		unsigned char                                              UnknownData_IIWX[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.HandleUnfocus
	 */
	struct UUI_Button_FleetAddShipItem_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.HandleFocus
	 */
	struct UUI_Button_FleetAddShipItem_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.SetTierColoring
	 */
	struct UUI_Button_FleetAddShipItem_C_SetTierColoring_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.Setup
	 */
	struct UUI_Button_FleetAddShipItem_C_Setup_Params
	{	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.Construct
	 */
	struct UUI_Button_FleetAddShipItem_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_FleetAddShipItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.BndEvt__FleetAddShipItemButton_K2Node_ComponentBoundEvent_175_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_FleetAddShipItem_C_BndEvt__FleetAddShipItemButton_K2Node_ComponentBoundEvent_175_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.BndEvt__FleetAddShipItemButton_K2Node_ComponentBoundEvent_187_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_FleetAddShipItem_C_BndEvt__FleetAddShipItemButton_K2Node_ComponentBoundEvent_187_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnActionReceived
	 */
	struct UUI_Button_FleetAddShipItem_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnFocusLost
	 */
	struct UUI_Button_FleetAddShipItem_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (Parm)
	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.ExecuteUbergraph_UI_Button_FleetAddShipItem
	 */
	struct UUI_Button_FleetAddShipItem_C_ExecuteUbergraph_UI_Button_FleetAddShipItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnButtonHovered__DelegateSignature
	 */
	struct UUI_Button_FleetAddShipItem_C_OnButtonHovered__DelegateSignature_Params
	{
	public:
		class UUI_Button_FleetAddShipItem_C*                       source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnClicked__DelegateSignature
	 */
	struct UUI_Button_FleetAddShipItem_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnReceivedFocus__DelegateSignature
	 */
	struct UUI_Button_FleetAddShipItem_C_OnReceivedFocus__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnFleetAddShipItemClicked__DelegateSignature
	 */
	struct UUI_Button_FleetAddShipItem_C_OnFleetAddShipItemClicked__DelegateSignature_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (Parm)
		class UUI_Button_FleetAddShipItem_C*                       source;                                                  // 0x0180(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
