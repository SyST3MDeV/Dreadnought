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
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.GetCloseButtonText
	 */
	struct UUI_CTAWidget_Tutorial_C_GetCloseButtonText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RequestShowPreviousPage
	 */
	struct UUI_CTAWidget_Tutorial_C_RequestShowPreviousPage_Params
	{	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RequestShowNextPage
	 */
	struct UUI_CTAWidget_Tutorial_C_RequestShowNextPage_Params
	{	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.Setup
	 */
	struct UUI_CTAWidget_Tutorial_C_Setup_Params
	{	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.SetLegendHints
	 */
	struct UUI_CTAWidget_Tutorial_C_SetLegendHints_Params
	{	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.HandleInput
	 */
	struct UUI_CTAWidget_Tutorial_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadButton;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RefreshCloseButton
	 */
	struct UUI_CTAWidget_Tutorial_C_RefreshCloseButton_Params
	{	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RefreshPageData
	 */
	struct UUI_CTAWidget_Tutorial_C_RefreshPageData_Params
	{
	public:
		struct FUI_Struct_CtAWidget_TutorialData                   UI_Struct_CtAWidget_TutorialData;                        // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RefreshPageCountText
	 */
	struct UUI_CTAWidget_Tutorial_C_RefreshPageCountText_Params
	{	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RefreshCurrentPageData
	 */
	struct UUI_CTAWidget_Tutorial_C_RefreshCurrentPageData_Params
	{	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.ShowPage
	 */
	struct UUI_CTAWidget_Tutorial_C_ShowPage_Params
	{	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RequestShowPage
	 */
	struct UUI_CTAWidget_Tutorial_C_RequestShowPage_Params
	{
	public:
		int32_t                                                    PageIndexToShow;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.Construct
	 */
	struct UUI_CTAWidget_Tutorial_C_Construct_Params
	{	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__HideData_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UUI_CTAWidget_Tutorial_C_BndEvt__HideData_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_1_OnArrowButtonClicked__DelegateSignature
	 */
	struct UUI_CTAWidget_Tutorial_C_BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_1_OnArrowButtonClicked__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_2_OnArrowButtonClicked__DelegateSignature
	 */
	struct UUI_CTAWidget_Tutorial_C_BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_2_OnArrowButtonClicked__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
	 */
	struct UUI_CTAWidget_Tutorial_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__HidePanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UUI_CTAWidget_Tutorial_C_BndEvt__HidePanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.OnNavigationEvent
	 */
	struct UUI_CTAWidget_Tutorial_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.OnTransitionOut
	 */
	struct UUI_CTAWidget_Tutorial_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.OnTransitionIn
	 */
	struct UUI_CTAWidget_Tutorial_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__ShowPanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UUI_CTAWidget_Tutorial_C_BndEvt__ShowPanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.ExecuteUbergraph_UI_CTAWidget_Tutorial
	 */
	struct UUI_CTAWidget_Tutorial_C_ExecuteUbergraph_UI_CTAWidget_Tutorial_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AK4P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
