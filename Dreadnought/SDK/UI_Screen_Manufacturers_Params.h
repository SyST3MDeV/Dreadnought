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
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.GranularDown
	 */
	struct UUI_Screen_Manufacturers_C_GranularDown_Params
	{	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.GranularUp
	 */
	struct UUI_Screen_Manufacturers_C_GranularUp_Params
	{	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.GranularRight
	 */
	struct UUI_Screen_Manufacturers_C_GranularRight_Params
	{	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.GranularLeft
	 */
	struct UUI_Screen_Manufacturers_C_GranularLeft_Params
	{	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.UpdateCurrentFocus
	 */
	struct UUI_Screen_Manufacturers_C_UpdateCurrentFocus_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y198[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.UnfocusCurrentItem
	 */
	struct UUI_Screen_Manufacturers_C_UnfocusCurrentItem_Params
	{	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.HandleInput
	 */
	struct UUI_Screen_Manufacturers_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.HandleManufacturerClicked
	 */
	struct UUI_Screen_Manufacturers_C_HandleManufacturerClicked_Params
	{
	public:
		int32_t                                                    manufacturerId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.SetupList
	 */
	struct UUI_Screen_Manufacturers_C_SetupList_Params
	{	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.Construct
	 */
	struct UUI_Screen_Manufacturers_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.OnTransitionIn
	 */
	struct UUI_Screen_Manufacturers_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.OnTransitionOut
	 */
	struct UUI_Screen_Manufacturers_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_Manufacturers_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_Manufacturers_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.BndEvt__OwnedShipsButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Screen_Manufacturers_C_BndEvt__OwnedShipsButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.UpdateCurrentlyFocusedItem
	 */
	struct UUI_Screen_Manufacturers_C_UpdateCurrentlyFocusedItem_Params
	{
	public:
		class UUI_DreadWidget*                                     FocusedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.OnNavigationEvent
	 */
	struct UUI_Screen_Manufacturers_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Manufacturers.UI_Screen_Manufacturers_C.ExecuteUbergraph_UI_Screen_Manufacturers
	 */
	struct UUI_Screen_Manufacturers_C_ExecuteUbergraph_UI_Screen_Manufacturers_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F42G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
