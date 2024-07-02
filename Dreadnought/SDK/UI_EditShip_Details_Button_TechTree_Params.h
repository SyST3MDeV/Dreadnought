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
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.Action
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_Action_Params
	{	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetVisibilityForHeroShip
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_SetVisibilityForHeroShip_Params
	{
	public:
		bool                                                       IsHero;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.ColorizeText
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_ColorizeText_Params
	{
	public:
		struct FYTechTreeProgressData                              techTreeProgressData;                                    // 0x0000(0x0008)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetInfoText
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_SetInfoText_Params
	{
	public:
		class FText                                                infoText;                                                // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetActionText
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_SetActionText_Params
	{
	public:
		class FText                                                Action;                                                  // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetTechTreeProgressData
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_SetTechTreeProgressData_Params
	{
	public:
		struct FYTechTreeProgressData                              techTreeProgressData;                                    // 0x0000(0x0008)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetOwnedTech
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_SetOwnedTech_Params
	{
	public:
		int32_t                                                    newAmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I7DZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.HandleUnfocus
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.HandleFocus
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetMaxTech
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_SetMaxTech_Params
	{
	public:
		int32_t                                                    newAmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y2CW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.PopulateWidgetsWithData
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_PopulateWidgetsWithData_Params
	{
	public:
		struct FYTechTreeProgressData                              techTreeProgressData;                                    // 0x0000(0x0008)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.Construct
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_Construct_Params
	{	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.OnActionReceived
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.ExecuteUbergraph_UI_EditShip_Details_Button_TechTree
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_ExecuteUbergraph_UI_EditShip_Details_Button_TechTree_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.OnButtonClicked__DelegateSignature
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.OnButtonUnhovered__DelegateSignature
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_OnButtonUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.OnButtonHovered__DelegateSignature
	 */
	struct UUI_EditShip_Details_Button_TechTree_C_OnButtonHovered__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
