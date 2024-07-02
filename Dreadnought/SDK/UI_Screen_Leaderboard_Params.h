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
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.ShowOptions
	 */
	struct UUI_Screen_Leaderboard_C_ShowOptions_Params
	{	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.HandleSocialOptionClicked
	 */
	struct UUI_Screen_Leaderboard_C_HandleSocialOptionClicked_Params
	{
	public:
		EFriendOptionButton                                        SeletedOption;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.HideOptions
	 */
	struct UUI_Screen_Leaderboard_C_HideOptions_Params
	{	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.HandleOptionInput
	 */
	struct UUI_Screen_Leaderboard_C_HandleOptionInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_258C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.HandleFriendOptionsOpen
	 */
	struct UUI_Screen_Leaderboard_C_HandleFriendOptionsOpen_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.HandleDataUpdate
	 */
	struct UUI_Screen_Leaderboard_C_HandleDataUpdate_Params
	{	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.HandleSettingsChanged
	 */
	struct UUI_Screen_Leaderboard_C_HandleSettingsChanged_Params
	{	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.HandleGameModeChanged
	 */
	struct UUI_Screen_Leaderboard_C_HandleGameModeChanged_Params
	{
	public:
		EYGameModeType                                             NewMode;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.HandleFleetTierChanged
	 */
	struct UUI_Screen_Leaderboard_C_HandleFleetTierChanged_Params
	{
	public:
		EYFleetType                                                newFleet;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.HandleTimeSpanIndexChanged
	 */
	struct UUI_Screen_Leaderboard_C_HandleTimeSpanIndexChanged_Params
	{
	public:
		int32_t                                                    newIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.TransitionAnimComplete
	 */
	struct UUI_Screen_Leaderboard_C_TransitionAnimComplete_Params
	{	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.RequestCurrentLeaderboard
	 */
	struct UUI_Screen_Leaderboard_C_RequestCurrentLeaderboard_Params
	{	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.tabRight
	 */
	struct UUI_Screen_Leaderboard_C_tabRight_Params
	{	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.TabLeft
	 */
	struct UUI_Screen_Leaderboard_C_TabLeft_Params
	{	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.HandleInput
	 */
	struct UUI_Screen_Leaderboard_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.PopulateLeaderboard
	 */
	struct UUI_Screen_Leaderboard_C_PopulateLeaderboard_Params
	{	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.GetTimeSpanString
	 */
	struct UUI_Screen_Leaderboard_C_GetTimeSpanString_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AKFK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outString;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.Construct
	 */
	struct UUI_Screen_Leaderboard_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.OnTransitionIn
	 */
	struct UUI_Screen_Leaderboard_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.OnTransitionOut
	 */
	struct UUI_Screen_Leaderboard_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.OnNavigationEvent
	 */
	struct UUI_Screen_Leaderboard_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.TransitionAnimDone
	 */
	struct UUI_Screen_Leaderboard_C_TransitionAnimDone_Params
	{	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.TransitionOutAnimDone
	 */
	struct UUI_Screen_Leaderboard_C_TransitionOutAnimDone_Params
	{	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.UserDataRefreshed
	 */
	struct UUI_Screen_Leaderboard_C_UserDataRefreshed_Params
	{	};

	/**
	 * Function UI_Screen_Leaderboard.UI_Screen_Leaderboard_C.ExecuteUbergraph_UI_Screen_Leaderboard
	 */
	struct UUI_Screen_Leaderboard_C_ExecuteUbergraph_UI_Screen_Leaderboard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DQL7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
