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
	 * Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.TickForceScrolling
	 */
	struct UUI_Screen_DeveloperCredits_C_TickForceScrolling_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.HandleForcedScrolling
	 */
	struct UUI_Screen_DeveloperCredits_C_HandleForcedScrolling_Params
	{
	public:
		bool                                                       ScrollUp;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LE56[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.HandleInput
	 */
	struct UUI_Screen_DeveloperCredits_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.SetupCreditsText
	 */
	struct UUI_Screen_DeveloperCredits_C_SetupCreditsText_Params
	{	};

	/**
	 * Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.Construct
	 */
	struct UUI_Screen_DeveloperCredits_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.OnTransitionIn
	 */
	struct UUI_Screen_DeveloperCredits_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.OnTransitionOut
	 */
	struct UUI_Screen_DeveloperCredits_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_DeveloperCredits_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_DeveloperCredits_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.Tick
	 */
	struct UUI_Screen_DeveloperCredits_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.OnNavigationEvent
	 */
	struct UUI_Screen_DeveloperCredits_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.ResetAutoScrolling
	 */
	struct UUI_Screen_DeveloperCredits_C_ResetAutoScrolling_Params
	{	};

	/**
	 * Function UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C.ExecuteUbergraph_UI_Screen_DeveloperCredits
	 */
	struct UUI_Screen_DeveloperCredits_C_ExecuteUbergraph_UI_Screen_DeveloperCredits_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
