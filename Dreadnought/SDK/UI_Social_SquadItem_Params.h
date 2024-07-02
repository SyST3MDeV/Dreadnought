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
	 * Function UI_Social_SquadItem.UI_Social_SquadItem_C.GetPlayerId
	 */
	struct UUI_Social_SquadItem_C_GetPlayerId_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_SquadItem.UI_Social_SquadItem_C.UpdateVoiceChatStatus
	 */
	struct UUI_Social_SquadItem_C_UpdateVoiceChatStatus_Params
	{
	public:
		struct FSquadVoiceData                                     VoiceData;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UI_Social_SquadItem.UI_Social_SquadItem_C.HandleFriendItemClicked
	 */
	struct UUI_Social_SquadItem_C_HandleFriendItemClicked_Params
	{
	public:
		class UUI_Button_FriendItem_C*                             SourceFriendItem;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_SquadItem.UI_Social_SquadItem_C.SetPlayerData
	 */
	struct UUI_Social_SquadItem_C_SetPlayerData_Params
	{
	public:
		struct FPlayerUserData                                     PlayerData;                                              // 0x0000(0x0080)  (Parm)
	};

	/**
	 * Function UI_Social_SquadItem.UI_Social_SquadItem_C.IsPlayerActive
	 */
	struct UUI_Social_SquadItem_C_IsPlayerActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0P56[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Social_SquadItem.UI_Social_SquadItem_C.GetPlayerItem
	 */
	struct UUI_Social_SquadItem_C_GetPlayerItem_Params
	{
	public:
		class UUI_Button_FriendItem_C*                             UI_Button_FriendItem;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_SquadItem.UI_Social_SquadItem_C.SetSquadMemberData
	 */
	struct UUI_Social_SquadItem_C_SetSquadMemberData_Params
	{
	public:
		struct FSquadUserData                                      SquadMemberData;                                         // 0x0000(0x0080)  (Parm)
	};

	/**
	 * Function UI_Social_SquadItem.UI_Social_SquadItem_C.ShowEmpty
	 */
	struct UUI_Social_SquadItem_C_ShowEmpty_Params
	{	};

	/**
	 * Function UI_Social_SquadItem.UI_Social_SquadItem_C.ShowAddButton
	 */
	struct UUI_Social_SquadItem_C_ShowAddButton_Params
	{	};

	/**
	 * Function UI_Social_SquadItem.UI_Social_SquadItem_C.ShowPlayer
	 */
	struct UUI_Social_SquadItem_C_ShowPlayer_Params
	{	};

	/**
	 * Function UI_Social_SquadItem.UI_Social_SquadItem_C.Construct
	 */
	struct UUI_Social_SquadItem_C_Construct_Params
	{	};

	/**
	 * Function UI_Social_SquadItem.UI_Social_SquadItem_C.ExecuteUbergraph_UI_Social_SquadItem
	 */
	struct UUI_Social_SquadItem_C_ExecuteUbergraph_UI_Social_SquadItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_38MN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Social_SquadItem.UI_Social_SquadItem_C.OnPlayerItemClicked__DelegateSignature
	 */
	struct UUI_Social_SquadItem_C_OnPlayerItemClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_FriendItem_C*                             SourcePlayerItem;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
