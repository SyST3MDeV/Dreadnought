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
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.SaveFavoritesSettings
	 */
	struct UUI_Screen_SelectGameMode_C_SaveFavoritesSettings_Params
	{	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.GameModeFavoriteClicked
	 */
	struct UUI_Screen_SelectGameMode_C_GameModeFavoriteClicked_Params
	{
	public:
		bool                                                       isFavorite;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S9ZX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FYMenuGameModeDefinition                            GameMode;                                                // 0x0008(0x0070)  (Parm)
	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.AttemptWidgetFocus
	 */
	struct UUI_Screen_SelectGameMode_C_AttemptWidgetFocus_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZUE2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_Button_SelectGameMode_C*                         GameModeButton;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.SetWidgetFocus
	 */
	struct UUI_Screen_SelectGameMode_C_SetWidgetFocus_Params
	{
	public:
		class UUI_DreadWidget*                                     NewFocusWidget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.HandleRightGranular
	 */
	struct UUI_Screen_SelectGameMode_C_HandleRightGranular_Params
	{	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.HandleDownGranular
	 */
	struct UUI_Screen_SelectGameMode_C_HandleDownGranular_Params
	{	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.HandleUpGranular
	 */
	struct UUI_Screen_SelectGameMode_C_HandleUpGranular_Params
	{	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.HandleLeftGranular
	 */
	struct UUI_Screen_SelectGameMode_C_HandleLeftGranular_Params
	{	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.HandleInput
	 */
	struct UUI_Screen_SelectGameMode_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.GameModeButtonClicked
	 */
	struct UUI_Screen_SelectGameMode_C_GameModeButtonClicked_Params
	{
	public:
		struct FYMenuGameModeDefinition                            GameMode;                                                // 0x0000(0x0070)  (Parm)
	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.BuildGameModeList
	 */
	struct UUI_Screen_SelectGameMode_C_BuildGameModeList_Params
	{	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.Construct
	 */
	struct UUI_Screen_SelectGameMode_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.OnTransitionIn
	 */
	struct UUI_Screen_SelectGameMode_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.OnTransitionOut
	 */
	struct UUI_Screen_SelectGameMode_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.TransitionInAnimComplete
	 */
	struct UUI_Screen_SelectGameMode_C_TransitionInAnimComplete_Params
	{	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.TransitionOutAnimComplete
	 */
	struct UUI_Screen_SelectGameMode_C_TransitionOutAnimComplete_Params
	{	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.UpdateCurrentlyFocusedItem
	 */
	struct UUI_Screen_SelectGameMode_C_UpdateCurrentlyFocusedItem_Params
	{
	public:
		class UUI_DreadWidget*                                     FocusedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.OnNavigationEvent
	 */
	struct UUI_Screen_SelectGameMode_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.ExecuteUbergraph_UI_Screen_SelectGameMode
	 */
	struct UUI_Screen_SelectGameMode_C_ExecuteUbergraph_UI_Screen_SelectGameMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JSL2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
