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
	 * Function UI_Button_ManageFleet_HeroShip.UI_Button_ManageFleet_HeroShip_C.Setup
	 */
	struct UUI_Button_ManageFleet_HeroShip_C_Setup_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_HeroShip.UI_Button_ManageFleet_HeroShip_C.HandleFocus
	 */
	struct UUI_Button_ManageFleet_HeroShip_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_HeroShip.UI_Button_ManageFleet_HeroShip_C.HandleUnfocus
	 */
	struct UUI_Button_ManageFleet_HeroShip_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_HeroShip.UI_Button_ManageFleet_HeroShip_C.Construct
	 */
	struct UUI_Button_ManageFleet_HeroShip_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_HeroShip.UI_Button_ManageFleet_HeroShip_C.OnSynchronizeProperties
	 */
	struct UUI_Button_ManageFleet_HeroShip_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_HeroShip.UI_Button_ManageFleet_HeroShip_C.BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_HeroShip_C_BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_HeroShip.UI_Button_ManageFleet_HeroShip_C.BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_HeroShip_C_BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_HeroShip.UI_Button_ManageFleet_HeroShip_C.BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_600_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_HeroShip_C_BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_600_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_HeroShip.UI_Button_ManageFleet_HeroShip_C.BndEvt__PurchaseHeroShipButton_K2Node_ComponentBoundEvent_290_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_HeroShip_C_BndEvt__PurchaseHeroShipButton_K2Node_ComponentBoundEvent_290_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_HeroShip.UI_Button_ManageFleet_HeroShip_C.ExecuteUbergraph_UI_Button_ManageFleet_HeroShip
	 */
	struct UUI_Button_ManageFleet_HeroShip_C_ExecuteUbergraph_UI_Button_ManageFleet_HeroShip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_HeroShip.UI_Button_ManageFleet_HeroShip_C.OnHovered__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_HeroShip_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_HeroShip.UI_Button_ManageFleet_HeroShip_C.PurchaseHeroShipClicked__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_HeroShip_C_PurchaseHeroShipClicked__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
