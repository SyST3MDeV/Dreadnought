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
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetOnlineStatus
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_SetOnlineStatus_Params
	{
	public:
		class FText                                                NewOnlineStatus;                                         // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetEliteIcon
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_SetEliteIcon_Params
	{
	public:
		bool                                                       IsElite;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetData
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_SetData_Params
	{
	public:
		struct FPlayerUIData                                       PlayerData;                                              // 0x0000(0x0080)  (Parm)
	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetRankTitle
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_SetRankTitle_Params
	{
	public:
		class FText                                                RankTitle;                                               // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetRankValue
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_SetRankValue_Params
	{
	public:
		int32_t                                                    RankValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetCaptainImage
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_SetCaptainImage_Params
	{
	public:
		class FString                                              imagePath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetPlayerNumber
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_SetPlayerNumber_Params
	{
	public:
		int32_t                                                    PlayerNumber;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5X64[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetPlayerName
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_SetPlayerName_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetRankVisibility
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_SetRankVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.Setup
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_Setup_Params
	{
	public:
		struct FPlayerUIData                                       CurrentPlayerData;                                       // 0x0000(0x0080)  (Parm)
	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.Construct
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_Construct_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.ExecuteUbergraph_UI_CustomMatch_PlayerInviteCard
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_ExecuteUbergraph_UI_CustomMatch_PlayerInviteCard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.OnPlayerPortraitClicked__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_OnPlayerPortraitClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.OnPlayerCardClicked__DelegateSignature
	 */
	struct UUI_CustomMatch_PlayerInviteCard_C_OnPlayerCardClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
