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
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.UpdateCurrentItemOnHover
	 */
	struct UUI_Screen_AddShipToFleet_C_UpdateCurrentItemOnHover_Params
	{
	public:
		class UUI_Button_FleetAddShipItem_C*                       source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.AddAndBindButton
	 */
	struct UUI_Screen_AddShipToFleet_C_AddAndBindButton_Params
	{
	public:
		class UUI_Button_FleetAddShipItem_C*                       AddShipButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.UpdateGridItemFocus
	 */
	struct UUI_Screen_AddShipToFleet_C_UpdateGridItemFocus_Params
	{
	public:
		int32_t                                                    IndexToFocus;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LJFC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.SetupScreen
	 */
	struct UUI_Screen_AddShipToFleet_C_SetupScreen_Params
	{	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleAddButtonClicked
	 */
	struct UUI_Screen_AddShipToFleet_C_HandleAddButtonClicked_Params
	{	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleGranularLeft
	 */
	struct UUI_Screen_AddShipToFleet_C_HandleGranularLeft_Params
	{	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleGranularRight
	 */
	struct UUI_Screen_AddShipToFleet_C_HandleGranularRight_Params
	{	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleGranularUp
	 */
	struct UUI_Screen_AddShipToFleet_C_HandleGranularUp_Params
	{	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleGranularDown
	 */
	struct UUI_Screen_AddShipToFleet_C_HandleGranularDown_Params
	{	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleInput
	 */
	struct UUI_Screen_AddShipToFleet_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            Input;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.PopulateShipDetailsPanel
	 */
	struct UUI_Screen_AddShipToFleet_C_PopulateShipDetailsPanel_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (Parm)
	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleShipItemClicked
	 */
	struct UUI_Screen_AddShipToFleet_C_HandleShipItemClicked_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (Parm)
		class UUI_Button_FleetAddShipItem_C*                       source;                                                  // 0x0180(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.SetupShipList
	 */
	struct UUI_Screen_AddShipToFleet_C_SetupShipList_Params
	{	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.Construct
	 */
	struct UUI_Screen_AddShipToFleet_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.OnTransitionIn
	 */
	struct UUI_Screen_AddShipToFleet_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.OnTransitionOut
	 */
	struct UUI_Screen_AddShipToFleet_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_AddShipToFleet_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_AddShipToFleet_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.BndEvt__ShipFilterWidget_K2Node_ComponentBoundEvent_0_OnFilterUpdated__DelegateSignature
	 */
	struct UUI_Screen_AddShipToFleet_C_BndEvt__ShipFilterWidget_K2Node_ComponentBoundEvent_0_OnFilterUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.BndEvt__ShipDetailsPanel_K2Node_ComponentBoundEvent_2_ViewShipDetailsClicked__DelegateSignature
	 */
	struct UUI_Screen_AddShipToFleet_C_BndEvt__ShipDetailsPanel_K2Node_ComponentBoundEvent_2_ViewShipDetailsClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ShipId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.OnNavigationEvent
	 */
	struct UUI_Screen_AddShipToFleet_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.ExecuteUbergraph_UI_Screen_AddShipToFleet
	 */
	struct UUI_Screen_AddShipToFleet_C_ExecuteUbergraph_UI_Screen_AddShipToFleet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C14F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
