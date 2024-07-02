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
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.UpdateFleetTier
	 */
	struct UUI_Screen_GameModeLaunch_C_UpdateFleetTier_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_00GG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.HandleInput
	 */
	struct UUI_Screen_GameModeLaunch_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadButton;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.SetIconBrush
	 */
	struct UUI_Screen_GameModeLaunch_C_SetIconBrush_Params
	{
	public:
		EYGameModeType                                             gameModeType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.SetupScreen
	 */
	struct UUI_Screen_GameModeLaunch_C_SetupScreen_Params
	{	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.SetBGBrush
	 */
	struct UUI_Screen_GameModeLaunch_C_SetBGBrush_Params
	{
	public:
		EYGameModeType                                             gameModeType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.Construct
	 */
	struct UUI_Screen_GameModeLaunch_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.OnTransitionIn
	 */
	struct UUI_Screen_GameModeLaunch_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.OnTransitionOut
	 */
	struct UUI_Screen_GameModeLaunch_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.TransitionOutAnimComplete
	 */
	struct UUI_Screen_GameModeLaunch_C_TransitionOutAnimComplete_Params
	{	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.TransitionInAnimComplete
	 */
	struct UUI_Screen_GameModeLaunch_C_TransitionInAnimComplete_Params
	{	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.OnNavigationEvent
	 */
	struct UUI_Screen_GameModeLaunch_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.BndEvt__GameModePlayButton_K2Node_ComponentBoundEvent_435_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Screen_GameModeLaunch_C_BndEvt__GameModePlayButton_K2Node_ComponentBoundEvent_435_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.BndEvt__ManageFleetButton_K2Node_ComponentBoundEvent_469_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Screen_GameModeLaunch_C_BndEvt__ManageFleetButton_K2Node_ComponentBoundEvent_469_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.BndEvt__PrevFleetButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Screen_GameModeLaunch_C_BndEvt__PrevFleetButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.BndEvt__NextFleetButton_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Screen_GameModeLaunch_C_BndEvt__NextFleetButton_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Screen_GameModeLaunch_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.OnMatchmakingStarted
	 */
	struct UUI_Screen_GameModeLaunch_C_OnMatchmakingStarted_Params
	{	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.OnMatchmakingStopped
	 */
	struct UUI_Screen_GameModeLaunch_C_OnMatchmakingStopped_Params
	{	};

	/**
	 * Function UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C.ExecuteUbergraph_UI_Screen_GameModeLaunch
	 */
	struct UUI_Screen_GameModeLaunch_C_ExecuteUbergraph_UI_Screen_GameModeLaunch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LR4H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
