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
	 * Function UI_Social_Squad.UI_Social_Squad_C.UpdateVoiceChatStatus
	 */
	struct UUI_Social_Squad_C_UpdateVoiceChatStatus_Params
	{
	public:
		struct FSquadVoiceData                                     VoiceData;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UI_Social_Squad.UI_Social_Squad_C.HandleFocus
	 */
	struct UUI_Social_Squad_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Social_Squad.UI_Social_Squad_C.HandleUnfocus
	 */
	struct UUI_Social_Squad_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Social_Squad.UI_Social_Squad_C.HandlePlayerItemClicked
	 */
	struct UUI_Social_Squad_C_HandlePlayerItemClicked_Params
	{
	public:
		class UUI_Button_FriendItem_C*                             SourcePlayerItem;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_Squad.UI_Social_Squad_C.ClearSquadList
	 */
	struct UUI_Social_Squad_C_ClearSquadList_Params
	{	};

	/**
	 * Function UI_Social_Squad.UI_Social_Squad_C.PopulateLocalPlayerCard
	 */
	struct UUI_Social_Squad_C_PopulateLocalPlayerCard_Params
	{
	public:
		struct FPlayerUserData                                     PlayerData;                                              // 0x0000(0x0080)  (Parm)
	};

	/**
	 * Function UI_Social_Squad.UI_Social_Squad_C.GetFirstInactivePlayerIndex
	 */
	struct UUI_Social_Squad_C_GetFirstInactivePlayerIndex_Params
	{
	public:
		int32_t                                                    LastPlayerIndex;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       WasItemFound;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_Squad.UI_Social_Squad_C.UpdateSquadListData
	 */
	struct UUI_Social_Squad_C_UpdateSquadListData_Params
	{
	public:
		TArray<struct FSquadUserData>                              SquadDataIn;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		struct FPlayerUserData                                     PlayerData;                                              // 0x0010(0x0080)  (Parm)
	};

	/**
	 * Function UI_Social_Squad.UI_Social_Squad_C.RefreshSquadDisplay
	 */
	struct UUI_Social_Squad_C_RefreshSquadDisplay_Params
	{	};

	/**
	 * Function UI_Social_Squad.UI_Social_Squad_C.PopulateSquadMemberCard
	 */
	struct UUI_Social_Squad_C_PopulateSquadMemberCard_Params
	{
	public:
		struct FSquadUserData                                      SquadUserData;                                           // 0x0000(0x0080)  (Parm)
	};

	/**
	 * Function UI_Social_Squad.UI_Social_Squad_C.SetupSquad
	 */
	struct UUI_Social_Squad_C_SetupSquad_Params
	{	};

	/**
	 * Function UI_Social_Squad.UI_Social_Squad_C.Construct
	 */
	struct UUI_Social_Squad_C_Construct_Params
	{	};

	/**
	 * Function UI_Social_Squad.UI_Social_Squad_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Social_Squad_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Social_Squad.UI_Social_Squad_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Social_Squad_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Social_Squad.UI_Social_Squad_C.ExecuteUbergraph_UI_Social_Squad
	 */
	struct UUI_Social_Squad_C_ExecuteUbergraph_UI_Social_Squad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_Squad.UI_Social_Squad_C.OnPlayerItemClicked__DelegateSignature
	 */
	struct UUI_Social_Squad_C_OnPlayerItemClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_FriendItem_C*                             SourceFriendItem;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
