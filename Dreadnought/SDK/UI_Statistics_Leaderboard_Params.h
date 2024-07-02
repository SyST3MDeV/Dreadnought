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
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.HandleNavUpDown
	 */
	struct UUI_Statistics_Leaderboard_C_HandleNavUpDown_Params
	{
	public:
		int32_t                                                    NextIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MTRP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.SetPS4IconVisiblity
	 */
	struct UUI_Statistics_Leaderboard_C_SetPS4IconVisiblity_Params
	{	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.CurrentPlayerLeaderboard
	 */
	struct UUI_Statistics_Leaderboard_C_CurrentPlayerLeaderboard_Params
	{	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.PreviousLeaderboardPage
	 */
	struct UUI_Statistics_Leaderboard_C_PreviousLeaderboardPage_Params
	{	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.NextLeaderboardPage
	 */
	struct UUI_Statistics_Leaderboard_C_NextLeaderboardPage_Params
	{	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.GetNextLeaderboardIndex
	 */
	struct UUI_Statistics_Leaderboard_C_GetNextLeaderboardIndex_Params
	{
	public:
		int32_t                                                    startIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.GetPreviousLeaderboardIndex
	 */
	struct UUI_Statistics_Leaderboard_C_GetPreviousLeaderboardIndex_Params
	{
	public:
		int32_t                                                    startIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.SetupLeaderboardFilter
	 */
	struct UUI_Statistics_Leaderboard_C_SetupLeaderboardFilter_Params
	{	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.ResetSelectedLeaderboardItem
	 */
	struct UUI_Statistics_Leaderboard_C_ResetSelectedLeaderboardItem_Params
	{	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.UpdateSelectedLeaderboardItem
	 */
	struct UUI_Statistics_Leaderboard_C_UpdateSelectedLeaderboardItem_Params
	{	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.RefreshNextPageButtonVisibility
	 */
	struct UUI_Statistics_Leaderboard_C_RefreshNextPageButtonVisibility_Params
	{	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.RefreshPreviousPageButtonVisibility
	 */
	struct UUI_Statistics_Leaderboard_C_RefreshPreviousPageButtonVisibility_Params
	{	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.RefreshPageButtons
	 */
	struct UUI_Statistics_Leaderboard_C_RefreshPageButtons_Params
	{	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.SelectLeaderboardEntryAtIndex
	 */
	struct UUI_Statistics_Leaderboard_C_SelectLeaderboardEntryAtIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.FocusOnSelectedLeaderboardItem
	 */
	struct UUI_Statistics_Leaderboard_C_FocusOnSelectedLeaderboardItem_Params
	{	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.Setup
	 */
	struct UUI_Statistics_Leaderboard_C_Setup_Params
	{	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.HandleFriendFilterChange
	 */
	struct UUI_Statistics_Leaderboard_C_HandleFriendFilterChange_Params
	{
	public:
		int32_t                                                    FirstIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    selectedIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.GetIndexRange
	 */
	struct UUI_Statistics_Leaderboard_C_GetIndexRange_Params
	{
	public:
		int32_t                                                    startIndex;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    endIndex;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.Construct
	 */
	struct UUI_Statistics_Leaderboard_C_Construct_Params
	{	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.HandleLeaderboardItemClicked
	 */
	struct UUI_Statistics_Leaderboard_C_HandleLeaderboardItemClicked_Params
	{
	public:
		class UUI_Statistics_PlayerCard_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.BndEvt__ButtonNextLeaderboardPage_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Statistics_Leaderboard_C_BndEvt__ButtonNextLeaderboardPage_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.BndEvt__ButtonPreviousLeaderboardPage_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Statistics_Leaderboard_C_BndEvt__ButtonPreviousLeaderboardPage_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.BndEvt__ButtonCurrentUserLeaderboard_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Statistics_Leaderboard_C_BndEvt__ButtonCurrentUserLeaderboard_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.ExecuteUbergraph_UI_Statistics_Leaderboard
	 */
	struct UUI_Statistics_Leaderboard_C_ExecuteUbergraph_UI_Statistics_Leaderboard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M1QH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.OnRecievedFocused__DelegateSignature
	 */
	struct UUI_Statistics_Leaderboard_C_OnRecievedFocused__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
