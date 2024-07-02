﻿#pragma once

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
	 * Function UI_Button_Home.UI_Button_Home_C.Setup
	 */
	struct UUI_Button_Home_C_Setup_Params
	{	};

	/**
	 * Function UI_Button_Home.UI_Button_Home_C.Action
	 */
	struct UUI_Button_Home_C_Action_Params
	{	};

	/**
	 * Function UI_Button_Home.UI_Button_Home_C.SetNotificationStatus
	 */
	struct UUI_Button_Home_C_SetNotificationStatus_Params
	{
	public:
		bool                                                       hasNotification;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Home.UI_Button_Home_C.OnFocusReceived
	 */
	struct UUI_Button_Home_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0034(0x0008)  (Parm)
		unsigned char                                              UnknownData_2Q64[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Button_Home.UI_Button_Home_C.HandleUnfocus
	 */
	struct UUI_Button_Home_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Button_Home.UI_Button_Home_C.HandleFocus
	 */
	struct UUI_Button_Home_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Button_Home.UI_Button_Home_C.Construct
	 */
	struct UUI_Button_Home_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_Home.UI_Button_Home_C.OnSynchronizeProperties
	 */
	struct UUI_Button_Home_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_Button_Home.UI_Button_Home_C.BndEvt__ButtonHome_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_Home_C_BndEvt__ButtonHome_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Home.UI_Button_Home_C.BndEvt__ButtonHome_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_Home_C_BndEvt__ButtonHome_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Home.UI_Button_Home_C.BndEvt__ButtonHome_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_Home_C_BndEvt__ButtonHome_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Home.UI_Button_Home_C.OnFocusLost
	 */
	struct UUI_Button_Home_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (Parm)
	};

	/**
	 * Function UI_Button_Home.UI_Button_Home_C.OnActionReceived
	 */
	struct UUI_Button_Home_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Button_Home.UI_Button_Home_C.ExecuteUbergraph_UI_Button_Home
	 */
	struct UUI_Button_Home_C_ExecuteUbergraph_UI_Button_Home_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Home.UI_Button_Home_C.OnReceivedFocused__DelegateSignature
	 */
	struct UUI_Button_Home_C_OnReceivedFocused__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Home.UI_Button_Home_C.OnClicked__DelegateSignature
	 */
	struct UUI_Button_Home_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_Home_C*                                   Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif