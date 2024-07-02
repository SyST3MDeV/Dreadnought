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
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleResetSwap
	 */
	struct UUI_CustomMatch_PlayerCard_C_HandleResetSwap_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleResetOptions
	 */
	struct UUI_CustomMatch_PlayerCard_C_HandleResetOptions_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.ActionPlayerOptions
	 */
	struct UUI_CustomMatch_PlayerCard_C_ActionPlayerOptions_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.ClearVoiceChatStatus
	 */
	struct UUI_CustomMatch_PlayerCard_C_ClearVoiceChatStatus_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.UpdateVoiceChatStatus
	 */
	struct UUI_CustomMatch_PlayerCard_C_UpdateVoiceChatStatus_Params
	{
	public:
		struct FSquadVoiceData                                     VoiceData;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.Action
	 */
	struct UUI_CustomMatch_PlayerCard_C_Action_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleUnfocusSwap
	 */
	struct UUI_CustomMatch_PlayerCard_C_HandleUnfocusSwap_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleFocusSwap
	 */
	struct UUI_CustomMatch_PlayerCard_C_HandleFocusSwap_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleUnfocusKick
	 */
	struct UUI_CustomMatch_PlayerCard_C_HandleUnfocusKick_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleFocusKick
	 */
	struct UUI_CustomMatch_PlayerCard_C_HandleFocusKick_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.ActionSwitchTeams
	 */
	struct UUI_CustomMatch_PlayerCard_C_ActionSwitchTeams_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.ActionRemovePlayer
	 */
	struct UUI_CustomMatch_PlayerCard_C_ActionRemovePlayer_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetCanMove
	 */
	struct UUI_CustomMatch_PlayerCard_C_SetCanMove_Params
	{
	public:
		bool                                                       CanMove;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetCanRemove
	 */
	struct UUI_CustomMatch_PlayerCard_C_SetCanRemove_Params
	{
	public:
		bool                                                       CanRemove;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetIsHost
	 */
	struct UUI_CustomMatch_PlayerCard_C_SetIsHost_Params
	{
	public:
		bool                                                       IsHost;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetEliteIcon
	 */
	struct UUI_CustomMatch_PlayerCard_C_SetEliteIcon_Params
	{
	public:
		bool                                                       IsElite;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.GetData
	 */
	struct UUI_CustomMatch_PlayerCard_C_GetData_Params
	{
	public:
		struct FPlayerUIData                                       CurrentPlayerData;                                       // 0x0000(0x0080)  (Parm, OutParm)
	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetData
	 */
	struct UUI_CustomMatch_PlayerCard_C_SetData_Params
	{
	public:
		struct FPlayerUIData                                       PlayerData;                                              // 0x0000(0x0080)  (Parm)
	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetRankTitle
	 */
	struct UUI_CustomMatch_PlayerCard_C_SetRankTitle_Params
	{
	public:
		class FText                                                RankTitle;                                               // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetRankValue
	 */
	struct UUI_CustomMatch_PlayerCard_C_SetRankValue_Params
	{
	public:
		int32_t                                                    RankValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetCaptainImage
	 */
	struct UUI_CustomMatch_PlayerCard_C_SetCaptainImage_Params
	{
	public:
		class FString                                              imagePath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetPlayerNumber
	 */
	struct UUI_CustomMatch_PlayerCard_C_SetPlayerNumber_Params
	{
	public:
		int32_t                                                    PlayerNumber;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NKVU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetPlayerName
	 */
	struct UUI_CustomMatch_PlayerCard_C_SetPlayerName_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetRankVisibility
	 */
	struct UUI_CustomMatch_PlayerCard_C_SetRankVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.Setup
	 */
	struct UUI_CustomMatch_PlayerCard_C_Setup_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.Construct
	 */
	struct UUI_CustomMatch_PlayerCard_C_Construct_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_249_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_249_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_301_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_301_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_317_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_317_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_243_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_243_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_426_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_426_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnActionReceived
	 */
	struct UUI_CustomMatch_PlayerCard_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_830_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_830_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__PlayerPortraitButton_K2Node_ComponentBoundEvent_891_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_BndEvt__PlayerPortraitButton_K2Node_ComponentBoundEvent_891_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.ExecuteUbergraph_UI_CustomMatch_PlayerCard
	 */
	struct UUI_CustomMatch_PlayerCard_C_ExecuteUbergraph_UI_CustomMatch_PlayerCard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnUnhover__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_OnUnhover__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnHover__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_OnHover__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnSendPlayerToOtherTeamClicked__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_OnSendPlayerToOtherTeamClicked__DelegateSignature_Params
	{
	public:
		class UUI_CustomMatch_PlayerCard_C*                        TeamPlayerCard;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnPlayerClicked__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_OnPlayerClicked__DelegateSignature_Params
	{
	public:
		class UUI_CustomMatch_PlayerCard_C*                        PlayerCard;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnRemovePlayerClicked__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerCard_C_OnRemovePlayerClicked__DelegateSignature_Params
	{
	public:
		class UUI_CustomMatch_PlayerCard_C*                        TeamPlayerItem;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
