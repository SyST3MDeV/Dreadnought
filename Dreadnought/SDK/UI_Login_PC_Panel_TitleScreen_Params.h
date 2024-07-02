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
	 * Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.IsPopupActive
	 */
	struct UUI_Login_PC_Panel_TitleScreen_C_IsPopupActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WQAN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.ResetSessionRequestState
	 */
	struct UUI_Login_PC_Panel_TitleScreen_C_ResetSessionRequestState_Params
	{	};

	/**
	 * Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.SessionRequestStarted
	 */
	struct UUI_Login_PC_Panel_TitleScreen_C_SessionRequestStarted_Params
	{	};

	/**
	 * Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.OnShow
	 */
	struct UUI_Login_PC_Panel_TitleScreen_C_OnShow_Params
	{	};

	/**
	 * Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.OnHide
	 */
	struct UUI_Login_PC_Panel_TitleScreen_C_OnHide_Params
	{	};

	/**
	 * Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.Construct
	 */
	struct UUI_Login_PC_Panel_TitleScreen_C_Construct_Params
	{	};

	/**
	 * Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.BndEvt__TitleScreenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Login_PC_Panel_TitleScreen_C_BndEvt__TitleScreenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.ExecuteUbergraph_UI_Login_PC_Panel_TitleScreen
	 */
	struct UUI_Login_PC_Panel_TitleScreen_C_ExecuteUbergraph_UI_Login_PC_Panel_TitleScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8420[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C.OnRequestSession__DelegateSignature
	 */
	struct UUI_Login_PC_Panel_TitleScreen_C_OnRequestSession__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
