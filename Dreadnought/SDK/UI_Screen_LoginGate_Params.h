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
	 * Function UI_Screen_LoginGate.UI_Screen_LoginGate_C.HandleNavigation
	 */
	struct UUI_Screen_LoginGate_C_HandleNavigation_Params
	{
	public:
		EUI_MenuActions                                            MenuAction;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_LoginGate.UI_Screen_LoginGate_C.SetupLoginGatePlatform
	 */
	struct UUI_Screen_LoginGate_C_SetupLoginGatePlatform_Params
	{	};

	/**
	 * Function UI_Screen_LoginGate.UI_Screen_LoginGate_C.SetTextVisibility
	 */
	struct UUI_Screen_LoginGate_C_SetTextVisibility_Params
	{
	public:
		class UTextBlock*                                          Text;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       shouldShow;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_LoginGate.UI_Screen_LoginGate_C.SetupLoginGateText
	 */
	struct UUI_Screen_LoginGate_C_SetupLoginGateText_Params
	{	};

	/**
	 * Function UI_Screen_LoginGate.UI_Screen_LoginGate_C.Construct
	 */
	struct UUI_Screen_LoginGate_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_LoginGate.UI_Screen_LoginGate_C.OnTransitionIn
	 */
	struct UUI_Screen_LoginGate_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_LoginGate.UI_Screen_LoginGate_C.OnTransitionOut
	 */
	struct UUI_Screen_LoginGate_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_LoginGate.UI_Screen_LoginGate_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_LoginGate_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_LoginGate.UI_Screen_LoginGate_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_LoginGate_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_LoginGate.UI_Screen_LoginGate_C.SetupLoginGateScreen
	 */
	struct UUI_Screen_LoginGate_C_SetupLoginGateScreen_Params
	{	};

	/**
	 * Function UI_Screen_LoginGate.UI_Screen_LoginGate_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_33_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Screen_LoginGate_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_33_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_LoginGate.UI_Screen_LoginGate_C.OnNavigationEvent
	 */
	struct UUI_Screen_LoginGate_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_LoginGate.UI_Screen_LoginGate_C.ExecuteUbergraph_UI_Screen_LoginGate
	 */
	struct UUI_Screen_LoginGate_C_ExecuteUbergraph_UI_Screen_LoginGate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LE2K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
