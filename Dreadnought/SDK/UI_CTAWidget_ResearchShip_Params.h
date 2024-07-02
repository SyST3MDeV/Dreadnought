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
	 * Function UI_CTAWidget_ResearchShip.UI_CTAWidget_ResearchShip_C.Setup
	 */
	struct UUI_CTAWidget_ResearchShip_C_Setup_Params
	{	};

	/**
	 * Function UI_CTAWidget_ResearchShip.UI_CTAWidget_ResearchShip_C.SetLegendHints
	 */
	struct UUI_CTAWidget_ResearchShip_C_SetLegendHints_Params
	{	};

	/**
	 * Function UI_CTAWidget_ResearchShip.UI_CTAWidget_ResearchShip_C.HandleInput
	 */
	struct UUI_CTAWidget_ResearchShip_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadButton;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CTAWidget_ResearchShip.UI_CTAWidget_ResearchShip_C.Construct
	 */
	struct UUI_CTAWidget_ResearchShip_C_Construct_Params
	{	};

	/**
	 * Function UI_CTAWidget_ResearchShip.UI_CTAWidget_ResearchShip_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
	 */
	struct UUI_CTAWidget_ResearchShip_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CTAWidget_ResearchShip.UI_CTAWidget_ResearchShip_C.BndEvt__HidePanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UUI_CTAWidget_ResearchShip_C_BndEvt__HidePanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CTAWidget_ResearchShip.UI_CTAWidget_ResearchShip_C.OnNavigationEvent
	 */
	struct UUI_CTAWidget_ResearchShip_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CTAWidget_ResearchShip.UI_CTAWidget_ResearchShip_C.OnTransitionOut
	 */
	struct UUI_CTAWidget_ResearchShip_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_CTAWidget_ResearchShip.UI_CTAWidget_ResearchShip_C.OnTransitionIn
	 */
	struct UUI_CTAWidget_ResearchShip_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_CTAWidget_ResearchShip.UI_CTAWidget_ResearchShip_C.BndEvt__ShowPanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UUI_CTAWidget_ResearchShip_C_BndEvt__ShowPanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CTAWidget_ResearchShip.UI_CTAWidget_ResearchShip_C.BndEvt__ResearchButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 */
	struct UUI_CTAWidget_ResearchShip_C_BndEvt__ResearchButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CTAWidget_ResearchShip.UI_CTAWidget_ResearchShip_C.ExecuteUbergraph_UI_CTAWidget_ResearchShip
	 */
	struct UUI_CTAWidget_ResearchShip_C_ExecuteUbergraph_UI_CTAWidget_ResearchShip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
