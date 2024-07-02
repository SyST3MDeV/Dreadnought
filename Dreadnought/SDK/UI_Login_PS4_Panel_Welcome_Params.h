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
	 * Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.Setup
	 */
	struct UUI_Login_PS4_Panel_Welcome_C_Setup_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.UnfocusItem
	 */
	struct UUI_Login_PS4_Panel_Welcome_C_UnfocusItem_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ICXK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.FocusItem
	 */
	struct UUI_Login_PS4_Panel_Welcome_C_FocusItem_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3S00[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.GetIndexWrappingValues
	 */
	struct UUI_Login_PS4_Panel_Welcome_C_GetIndexWrappingValues_Params
	{
	public:
		int32_t                                                    CurrentIndex;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumColumns;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    listLength;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.Action
	 */
	struct UUI_Login_PS4_Panel_Welcome_C_Action_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.HandleGranularDown
	 */
	struct UUI_Login_PS4_Panel_Welcome_C_HandleGranularDown_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.HandleGranularUp
	 */
	struct UUI_Login_PS4_Panel_Welcome_C_HandleGranularUp_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.OnShow
	 */
	struct UUI_Login_PS4_Panel_Welcome_C_OnShow_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.OnHide
	 */
	struct UUI_Login_PS4_Panel_Welcome_C_OnHide_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.Construct
	 */
	struct UUI_Login_PS4_Panel_Welcome_C_Construct_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.BndEvt__LinkAccount_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UUI_Login_PS4_Panel_Welcome_C_BndEvt__LinkAccount_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_Generic_C*                                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.BndEvt__CreateAccount_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UUI_Login_PS4_Panel_Welcome_C_BndEvt__CreateAccount_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_Generic_C*                                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.ExecuteUbergraph_UI_Login_PS4_Panel_Welcome
	 */
	struct UUI_Login_PS4_Panel_Welcome_C_ExecuteUbergraph_UI_Login_PS4_Panel_Welcome_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QQGP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.RequestSubState__DelegateSignature
	 */
	struct UUI_Login_PS4_Panel_Welcome_C_RequestSubState__DelegateSignature_Params
	{
	public:
		ELoginSubScreensPS4                                        NewSubState;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
