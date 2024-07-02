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
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnLeaderboardPlayerClicked
	 */
	struct UUI_Score_Leaderboard_C_OnLeaderboardPlayerClicked_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.UpdatePlayerData
	 */
	struct UUI_Score_Leaderboard_C_UpdatePlayerData_Params
	{
	public:
		struct FPlayerUIData                                       PlayerData;                                              // 0x0000(0x0080)  (Parm)
	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleNavRight
	 */
	struct UUI_Score_Leaderboard_C_HandleNavRight_Params
	{	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleNavLeft
	 */
	struct UUI_Score_Leaderboard_C_HandleNavLeft_Params
	{	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.IsDropdownOpen
	 */
	struct UUI_Score_Leaderboard_C_IsDropdownOpen_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleFocus
	 */
	struct UUI_Score_Leaderboard_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleUnfocus
	 */
	struct UUI_Score_Leaderboard_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.SetCurrentlySelectedWidget
	 */
	struct UUI_Score_Leaderboard_C_SetCurrentlySelectedWidget_Params
	{	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleUIAction
	 */
	struct UUI_Score_Leaderboard_C_HandleUIAction_Params
	{	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleNavDown
	 */
	struct UUI_Score_Leaderboard_C_HandleNavDown_Params
	{	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleNavUp
	 */
	struct UUI_Score_Leaderboard_C_HandleNavUp_Params
	{	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.InitiateProcessing
	 */
	struct UUI_Score_Leaderboard_C_InitiateProcessing_Params
	{	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.SetupSettingOptions
	 */
	struct UUI_Score_Leaderboard_C_SetupSettingOptions_Params
	{	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HideEntries
	 */
	struct UUI_Score_Leaderboard_C_HideEntries_Params
	{
	public:
		bool                                                       bHide;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QKXK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.PopulatePlayerEntry
	 */
	struct UUI_Score_Leaderboard_C_PopulatePlayerEntry_Params
	{
	public:
		struct FLeaderboardUIEntry                                 playerentry;                                             // 0x0000(0x0038)  (Parm)
	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.ClearCurrentLeaderboard
	 */
	struct UUI_Score_Leaderboard_C_ClearCurrentLeaderboard_Params
	{	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.SetupLeaderboardEntry
	 */
	struct UUI_Score_Leaderboard_C_SetupLeaderboardEntry_Params
	{
	public:
		struct FLeaderboardUIEntry                                 LeaderboardEntry;                                        // 0x0000(0x0038)  (Parm)
		int32_t                                                    index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UBLA[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.PopulateLeaderboard
	 */
	struct UUI_Score_Leaderboard_C_PopulateLeaderboard_Params
	{
	public:
		struct FLeaderboardUIData                                  LeaderboardData;                                         // 0x0000(0x0090)  (Parm)
	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.BndEvt__GameModeDropdown_K2Node_ComponentBoundEvent_72_OnSelectionChanged__DelegateSignature
	 */
	struct UUI_Score_Leaderboard_C_BndEvt__GameModeDropdown_K2Node_ComponentBoundEvent_72_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    categoryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    selectedIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.BndEvt__FleetTierDropdown_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 */
	struct UUI_Score_Leaderboard_C_BndEvt__FleetTierDropdown_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    categoryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    selectedIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.BndEvt__TimeSpanDropDown_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature
	 */
	struct UUI_Score_Leaderboard_C_BndEvt__TimeSpanDropDown_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    categoryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    selectedIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.ExecuteUbergraph_UI_Score_Leaderboard
	 */
	struct UUI_Score_Leaderboard_C_ExecuteUbergraph_UI_Score_Leaderboard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnPlayerOptionsOpen__DelegateSignature
	 */
	struct UUI_Score_Leaderboard_C_OnPlayerOptionsOpen__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnSettingsChanged__DelegateSignature
	 */
	struct UUI_Score_Leaderboard_C_OnSettingsChanged__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnGameModeChanged__DelegateSignature
	 */
	struct UUI_Score_Leaderboard_C_OnGameModeChanged__DelegateSignature_Params
	{
	public:
		EYGameModeType                                             NewMode;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnFleetTierChanged__DelegateSignature
	 */
	struct UUI_Score_Leaderboard_C_OnFleetTierChanged__DelegateSignature_Params
	{
	public:
		EYFleetType                                                newFleet;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnTimeSpanIndexChanged__DelegateSignature
	 */
	struct UUI_Score_Leaderboard_C_OnTimeSpanIndexChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    newIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
