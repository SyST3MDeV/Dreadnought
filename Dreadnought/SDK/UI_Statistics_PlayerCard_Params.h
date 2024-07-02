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
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.HandleFocus
	 */
	struct UUI_Statistics_PlayerCard_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.SetDataFromPlayerData
	 */
	struct UUI_Statistics_PlayerCard_C_SetDataFromPlayerData_Params
	{	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.SetHovered
	 */
	struct UUI_Statistics_PlayerCard_C_SetHovered_Params
	{	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.SetData
	 */
	struct UUI_Statistics_PlayerCard_C_SetData_Params
	{
	public:
		struct FStatisticsUIListPlayerData                         UIListPlayerData;                                        // 0x0000(0x0098)  (Parm)
		class FText                                                Stat;                                                    // 0x0098(0x0018)  (Parm)
		int32_t                                                    index;                                                   // 0x00B0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    LeaderboardIndex;                                        // 0x00B4(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.SetEmphasized
	 */
	struct UUI_Statistics_PlayerCard_C_SetEmphasized_Params
	{
	public:
		bool                                                       IsEmphasized;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.GetData
	 */
	struct UUI_Statistics_PlayerCard_C_GetData_Params
	{
	public:
		struct FPlayerUIData                                       CurrentPlayerData;                                       // 0x0000(0x0080)  (Parm, OutParm)
	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Statistics_PlayerCard_C_BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Statistics_PlayerCard_C_BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Statistics_PlayerCard_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Statistics_PlayerCard_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Statistics_PlayerCard_C_BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Statistics_PlayerCard_C_BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Statistics_PlayerCard_C_BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnFocusLost
	 */
	struct UUI_Statistics_PlayerCard_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (Parm)
	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.ExecuteUbergraph_UI_Statistics_PlayerCard
	 */
	struct UUI_Statistics_PlayerCard_C_ExecuteUbergraph_UI_Statistics_PlayerCard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnRecievedFocused__DelegateSignature
	 */
	struct UUI_Statistics_PlayerCard_C_OnRecievedFocused__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnLeaderboardItemClicked__DelegateSignature
	 */
	struct UUI_Statistics_PlayerCard_C_OnLeaderboardItemClicked__DelegateSignature_Params
	{
	public:
		class UUI_Statistics_PlayerCard_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnSendPlayerToOtherTeamClicked__DelegateSignature
	 */
	struct UUI_Statistics_PlayerCard_C_OnSendPlayerToOtherTeamClicked__DelegateSignature_Params
	{
	public:
		class UUI_CustomMatch_PlayerCard_C*                        TeamPlayerCard;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnPlayerPortraitClicked__DelegateSignature
	 */
	struct UUI_Statistics_PlayerCard_C_OnPlayerPortraitClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnRemovePlayerClicked__DelegateSignature
	 */
	struct UUI_Statistics_PlayerCard_C_OnRemovePlayerClicked__DelegateSignature_Params
	{
	public:
		class UUI_CustomMatch_PlayerCard_C*                        TeamPlayerItem;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
