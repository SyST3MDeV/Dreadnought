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
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.GetButtonIndex
	 */
	struct UUI_CustomMatch_TeamList_C_GetButtonIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsHost;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2OUI[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ButtonIndex;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.GetRowFromIndex
	 */
	struct UUI_CustomMatch_TeamList_C_GetRowFromIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsHost;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ROAK[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_CustomMatch_TeamList_Row_C*                      RowReference;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.FindIndexFromRowAndButton
	 */
	struct UUI_CustomMatch_TeamList_C_FindIndexFromRowAndButton_Params
	{
	public:
		int32_t                                                    RowIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ButtonIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsHost;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CXG9[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    index;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.FindRowAndButtonIndex
	 */
	struct UUI_CustomMatch_TeamList_C_FindRowAndButtonIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsHost;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5ZSZ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RowIndex;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ButtonIndex;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.HandleOnPlayerCardClicked
	 */
	struct UUI_CustomMatch_TeamList_C_HandleOnPlayerCardClicked_Params
	{
	public:
		class UUI_CustomMatch_PlayerCard_C*                        PlayerCard;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.GetPlayerCard
	 */
	struct UUI_CustomMatch_TeamList_C_GetPlayerCard_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BRHB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_CustomMatch_PlayerCard_C*                        CurrentPlayerCard;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.HandleOnPlayerSpeakingUpdated
	 */
	struct UUI_CustomMatch_TeamList_C_HandleOnPlayerSpeakingUpdated_Params
	{
	public:
		struct FSquadVoiceData                                     PlayerVoiceData;                                         // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.GetFocusableWidgets
	 */
	struct UUI_CustomMatch_TeamList_C_GetFocusableWidgets_Params
	{
	public:
		TArray<class UButton*>                                     ItemList;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.ClearTeamData
	 */
	struct UUI_CustomMatch_TeamList_C_ClearTeamData_Params
	{	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.HandleOnSendPlayerToOtherTeamClicked
	 */
	struct UUI_CustomMatch_TeamList_C_HandleOnSendPlayerToOtherTeamClicked_Params
	{
	public:
		class UUI_CustomMatch_PlayerCard_C*                        PlayerCard;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.HandleOnRemovePlayerClicked
	 */
	struct UUI_CustomMatch_TeamList_C_HandleOnRemovePlayerClicked_Params
	{
	public:
		class UUI_CustomMatch_PlayerCard_C*                        PlayerCard;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.FillOpenSlotsWithAi
	 */
	struct UUI_CustomMatch_TeamList_C_FillOpenSlotsWithAi_Params
	{
	public:
		bool                                                       IsFilling;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KZH0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.AddPlayer
	 */
	struct UUI_CustomMatch_TeamList_C_AddPlayer_Params
	{
	public:
		struct FPlayerUIData                                       PlayerData;                                              // 0x0000(0x0080)  (Parm)
		bool                                                       IsHost;                                                  // 0x0080(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanRemove;                                               // 0x0081(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanMove;                                                 // 0x0082(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DSUM[0x1];                                   // 0x0083(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.FindClickedRowItem
	 */
	struct UUI_CustomMatch_TeamList_C_FindClickedRowItem_Params
	{
	public:
		class UUI_CustomMatch_PlayerCard_C*                        SelectedRowItem;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GOIF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_CustomMatch_TeamList_Row_C*                      RowItem;                                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.RemovePlayer
	 */
	struct UUI_CustomMatch_TeamList_C_RemovePlayer_Params
	{
	public:
		int32_t                                                    PlayerIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.GetPlayerData
	 */
	struct UUI_CustomMatch_TeamList_C_GetPlayerData_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_88WL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerUIData                                       CurrentPlayerData;                                       // 0x0008(0x0080)  (Parm, OutParm)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.Setup
	 */
	struct UUI_CustomMatch_TeamList_C_Setup_Params
	{	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.Construct
	 */
	struct UUI_CustomMatch_TeamList_C_Construct_Params
	{	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.PreConstruct
	 */
	struct UUI_CustomMatch_TeamList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.ExecuteUbergraph_UI_CustomMatch_TeamList
	 */
	struct UUI_CustomMatch_TeamList_C_ExecuteUbergraph_UI_CustomMatch_TeamList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.OnPlayerOptionsOpen__DelegateSignature
	 */
	struct UUI_CustomMatch_TeamList_C_OnPlayerOptionsOpen__DelegateSignature_Params
	{
	public:
		class UUI_CustomMatch_TeamList_C*                          TeamList;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PlayerIndex;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.OnPlayerMoved__DelegateSignature
	 */
	struct UUI_CustomMatch_TeamList_C_OnPlayerMoved__DelegateSignature_Params
	{
	public:
		class UUI_CustomMatch_TeamList_C*                          TeamList;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PlayerIndex;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.OnPlayerRemoved__DelegateSignature
	 */
	struct UUI_CustomMatch_TeamList_C_OnPlayerRemoved__DelegateSignature_Params
	{
	public:
		class UUI_CustomMatch_TeamList_C*                          TeamList;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PlayerIndex;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
