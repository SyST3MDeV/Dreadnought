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
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.UpdateTimers
	 */
	struct UUI_Persistent_PlayerCard_C_UpdateTimers_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetEliteIcon
	 */
	struct UUI_Persistent_PlayerCard_C_SetEliteIcon_Params
	{
	public:
		bool                                                       IsElite;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetData
	 */
	struct UUI_Persistent_PlayerCard_C_SetData_Params
	{
	public:
		struct FPlayerUIData                                       PlayerData;                                              // 0x0000(0x0080)  (Parm)
	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetEliteStatusText
	 */
	struct UUI_Persistent_PlayerCard_C_SetEliteStatusText_Params
	{	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetProgressBarColor
	 */
	struct UUI_Persistent_PlayerCard_C_SetProgressBarColor_Params
	{
	public:
		bool                                                       IsElite;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetRankProgressVisibility
	 */
	struct UUI_Persistent_PlayerCard_C_SetRankProgressVisibility_Params
	{
	public:
		bool                                                       IsMaxRank;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetRankProgress
	 */
	struct UUI_Persistent_PlayerCard_C_SetRankProgress_Params
	{
	public:
		float                                                      RankProgress;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetRankTitle
	 */
	struct UUI_Persistent_PlayerCard_C_SetRankTitle_Params
	{
	public:
		class FText                                                RankTitle;                                               // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetRankValue
	 */
	struct UUI_Persistent_PlayerCard_C_SetRankValue_Params
	{
	public:
		int32_t                                                    RankValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetCaptainImage
	 */
	struct UUI_Persistent_PlayerCard_C_SetCaptainImage_Params
	{
	public:
		class FString                                              imagePath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetPlayerNumber
	 */
	struct UUI_Persistent_PlayerCard_C_SetPlayerNumber_Params
	{
	public:
		int32_t                                                    PlayerNumber;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YSYI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetPlayerName
	 */
	struct UUI_Persistent_PlayerCard_C_SetPlayerName_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetEliteButtonVisiblity
	 */
	struct UUI_Persistent_PlayerCard_C_SetEliteButtonVisiblity_Params
	{
	public:
		bool                                                       IsElite;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetRankVisibility
	 */
	struct UUI_Persistent_PlayerCard_C_SetRankVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.Setup
	 */
	struct UUI_Persistent_PlayerCard_C_Setup_Params
	{	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.Construct
	 */
	struct UUI_Persistent_PlayerCard_C_Construct_Params
	{	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Persistent_PlayerCard_C_BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Persistent_PlayerCard_C_BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Persistent_PlayerCard_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Persistent_PlayerCard_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.BndEvt__BecomeEliteButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Persistent_PlayerCard_C_BndEvt__BecomeEliteButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.ExecuteUbergraph_UI_Persistent_PlayerCard
	 */
	struct UUI_Persistent_PlayerCard_C_ExecuteUbergraph_UI_Persistent_PlayerCard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.OnPlayerPortraitClicked__DelegateSignature
	 */
	struct UUI_Persistent_PlayerCard_C_OnPlayerPortraitClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.OnPlayerCardClicked__DelegateSignature
	 */
	struct UUI_Persistent_PlayerCard_C_OnPlayerCardClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
