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
	 * Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.SetupTabs
	 */
	struct UUI_Screen_ManufacturerTechTree_C_SetupTabs_Params
	{	};

	/**
	 * Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.HandleTabClicked
	 */
	struct UUI_Screen_ManufacturerTechTree_C_HandleTabClicked_Params
	{
	public:
		class UUI_Button_Tab_Generic_C*                            Tab;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.Setup
	 */
	struct UUI_Screen_ManufacturerTechTree_C_Setup_Params
	{	};

	/**
	 * Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.SetRequirementPaths
	 */
	struct UUI_Screen_ManufacturerTechTree_C_SetRequirementPaths_Params
	{	};

	/**
	 * Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.ComposeTechTreePaths
	 */
	struct UUI_Screen_ManufacturerTechTree_C_ComposeTechTreePaths_Params
	{
	public:
		TArray<struct FUITechTreeShipNode>                         TechTreeNodes;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.HandleInput
	 */
	struct UUI_Screen_ManufacturerTechTree_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadButton;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.Construct
	 */
	struct UUI_Screen_ManufacturerTechTree_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.BndEvt__UI_TechTree_K2Node_ComponentBoundEvent_0_OnShipTechTreeItemClicked__DelegateSignature
	 */
	struct UUI_Screen_ManufacturerTechTree_C_BndEvt__UI_TechTree_K2Node_ComponentBoundEvent_0_OnShipTechTreeItemClicked__DelegateSignature_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (Parm)
	};

	/**
	 * Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.OnTransitionIn
	 */
	struct UUI_Screen_ManufacturerTechTree_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.OnTransitionOut
	 */
	struct UUI_Screen_ManufacturerTechTree_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_ManufacturerTechTree_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_ManufacturerTechTree_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.OnNavigationEvent
	 */
	struct UUI_Screen_ManufacturerTechTree_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.Tick
	 */
	struct UUI_Screen_ManufacturerTechTree_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.ExecuteUbergraph_UI_Screen_ManufacturerTechTree
	 */
	struct UUI_Screen_ManufacturerTechTree_C_ExecuteUbergraph_UI_Screen_ManufacturerTechTree_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
