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
	 * Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.UpdateUserData
	 */
	struct UUI_Score_Leaderboard_Item_C_UpdateUserData_Params
	{
	public:
		struct FPlayerUIData                                       PlayerData;                                              // 0x0000(0x0080)  (Parm)
	};

	/**
	 * Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.SetSelected
	 */
	struct UUI_Score_Leaderboard_Item_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.ClearData
	 */
	struct UUI_Score_Leaderboard_Item_C_ClearData_Params
	{	};

	/**
	 * Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.SetEmphasized
	 */
	struct UUI_Score_Leaderboard_Item_C_SetEmphasized_Params
	{
	public:
		bool                                                       IsEmphasized;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.SetData
	 */
	struct UUI_Score_Leaderboard_Item_C_SetData_Params
	{
	public:
		int32_t                                                    rank;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QHNL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                PlayerName;                                              // 0x0008(0x0018)  (Parm)
		int32_t                                                    highscore;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_122G[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PlayerId;                                                // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PlayerNumber;                                            // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.Construct
	 */
	struct UUI_Score_Leaderboard_Item_C_Construct_Params
	{	};

	/**
	 * Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.OnSynchronizeProperties
	 */
	struct UUI_Score_Leaderboard_Item_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.BndEvt__LeaderboardItemButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Score_Leaderboard_Item_C_BndEvt__LeaderboardItemButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.ExecuteUbergraph_UI_Score_Leaderboard_Item
	 */
	struct UUI_Score_Leaderboard_Item_C_ExecuteUbergraph_UI_Score_Leaderboard_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.OnLeaderboardItemClicked__DelegateSignature
	 */
	struct UUI_Score_Leaderboard_Item_C_OnLeaderboardItemClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
