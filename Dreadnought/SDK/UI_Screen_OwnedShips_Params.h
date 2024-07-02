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
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.ShipClicked
	 */
	struct UUI_Screen_OwnedShips_C_ShipClicked_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (Parm)
		class UUI_Button_FleetAddShipItem_C*                       source;                                                  // 0x0180(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.HandleGranularDown
	 */
	struct UUI_Screen_OwnedShips_C_HandleGranularDown_Params
	{	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.HandleGranularUp
	 */
	struct UUI_Screen_OwnedShips_C_HandleGranularUp_Params
	{	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.HandleGranularLeft
	 */
	struct UUI_Screen_OwnedShips_C_HandleGranularLeft_Params
	{	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.HandleGranularRight
	 */
	struct UUI_Screen_OwnedShips_C_HandleGranularRight_Params
	{	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.UpdateGridItemFocus
	 */
	struct UUI_Screen_OwnedShips_C_UpdateGridItemFocus_Params
	{	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.UnfocusCurrentGridItem
	 */
	struct UUI_Screen_OwnedShips_C_UnfocusCurrentGridItem_Params
	{	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.HandleInput
	 */
	struct UUI_Screen_OwnedShips_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            Input;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.SetupScreen
	 */
	struct UUI_Screen_OwnedShips_C_SetupScreen_Params
	{	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.ShipFocused
	 */
	struct UUI_Screen_OwnedShips_C_ShipFocused_Params
	{
	public:
		class UUI_Button_FleetAddShipItem_C*                       source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.SetupShipList
	 */
	struct UUI_Screen_OwnedShips_C_SetupShipList_Params
	{	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.Construct
	 */
	struct UUI_Screen_OwnedShips_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.OnTransitionIn
	 */
	struct UUI_Screen_OwnedShips_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.OnTransitionOut
	 */
	struct UUI_Screen_OwnedShips_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_OwnedShips_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_OwnedShips_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.BndEvt__ShipFilterWidget_K2Node_ComponentBoundEvent_0_OnFilterUpdated__DelegateSignature
	 */
	struct UUI_Screen_OwnedShips_C_BndEvt__ShipFilterWidget_K2Node_ComponentBoundEvent_0_OnFilterUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.BndEvt__ShipDetailsPanel_K2Node_ComponentBoundEvent_819_ViewShipDetailsClicked__DelegateSignature
	 */
	struct UUI_Screen_OwnedShips_C_BndEvt__ShipDetailsPanel_K2Node_ComponentBoundEvent_819_ViewShipDetailsClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ShipId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.OnNavigationEvent
	 */
	struct UUI_Screen_OwnedShips_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.ExecuteUbergraph_UI_Screen_OwnedShips
	 */
	struct UUI_Screen_OwnedShips_C_ExecuteUbergraph_UI_Screen_OwnedShips_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TA7H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
