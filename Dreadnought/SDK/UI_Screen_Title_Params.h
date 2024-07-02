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
	 * Function UI_Screen_Title.UI_Screen_Title_C.RequestSession
	 */
	struct UUI_Screen_Title_C_RequestSession_Params
	{	};

	/**
	 * Function UI_Screen_Title.UI_Screen_Title_C.BindScreenEvents
	 */
	struct UUI_Screen_Title_C_BindScreenEvents_Params
	{	};

	/**
	 * Function UI_Screen_Title.UI_Screen_Title_C.OnTransitionIn
	 */
	struct UUI_Screen_Title_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_Title.UI_Screen_Title_C.OnTransitionOut
	 */
	struct UUI_Screen_Title_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_Title.UI_Screen_Title_C.Construct
	 */
	struct UUI_Screen_Title_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_Title.UI_Screen_Title_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_Title_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Title.UI_Screen_Title_C.WebServicesConnectionFailed
	 */
	struct UUI_Screen_Title_C_WebServicesConnectionFailed_Params
	{	};

	/**
	 * Function UI_Screen_Title.UI_Screen_Title_C.BndEvt__UI_Button_Generic_1_K2Node_ComponentBoundEvent_24_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Screen_Title_C_BndEvt__UI_Button_Generic_1_K2Node_ComponentBoundEvent_24_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Title.UI_Screen_Title_C.ExecuteUbergraph_UI_Screen_Title
	 */
	struct UUI_Screen_Title_C_ExecuteUbergraph_UI_Screen_Title_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ELQG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
