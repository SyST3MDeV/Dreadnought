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
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ShowMatchMakingCancelledMessage
	 */
	struct UUI_Persistent_MatchmakingTimer_C_ShowMatchMakingCancelledMessage_Params
	{
	public:
		bool                                                       ShowPlayAfterwards;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ServerStarting
	 */
	struct UUI_Persistent_MatchmakingTimer_C_ServerStarting_Params
	{
	public:
		bool                                                       IsStarting;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.HideContent
	 */
	struct UUI_Persistent_MatchmakingTimer_C_HideContent_Params
	{	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ShowHeader
	 */
	struct UUI_Persistent_MatchmakingTimer_C_ShowHeader_Params
	{	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ShowPlayButton
	 */
	struct UUI_Persistent_MatchmakingTimer_C_ShowPlayButton_Params
	{	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.HideAll
	 */
	struct UUI_Persistent_MatchmakingTimer_C_HideAll_Params
	{	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.Setup
	 */
	struct UUI_Persistent_MatchmakingTimer_C_Setup_Params
	{	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.GetAverageWaitTimeText
	 */
	struct UUI_Persistent_MatchmakingTimer_C_GetAverageWaitTimeText_Params
	{
	public:
		class FText                                                AverageWaitTime;                                         // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.FormatTextFromTimespan
	 */
	struct UUI_Persistent_MatchmakingTimer_C_FormatTextFromTimespan_Params
	{
	public:
		struct FTimespan                                           Timespan;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor)
		class FText                                                HoursMiunutesSeconds;                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.SetLabels
	 */
	struct UUI_Persistent_MatchmakingTimer_C_SetLabels_Params
	{
	public:
		class FText                                                FleetTier;                                               // 0x0000(0x0018)  (Parm)
		class FText                                                GameMode;                                                // 0x0018(0x0018)  (Parm)
	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.IncrementTimer
	 */
	struct UUI_Persistent_MatchmakingTimer_C_IncrementTimer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KLEC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ShowTimer
	 */
	struct UUI_Persistent_MatchmakingTimer_C_ShowTimer_Params
	{	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.Construct
	 */
	struct UUI_Persistent_MatchmakingTimer_C_Construct_Params
	{	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.Tick
	 */
	struct UUI_Persistent_MatchmakingTimer_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Persistent_MatchmakingTimer_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__ButtonCancel2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Persistent_MatchmakingTimer_C_BndEvt__ButtonCancel2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__PlayButton_PC_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UUI_Persistent_MatchmakingTimer_C_BndEvt__PlayButton_PC_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_Generic_C*                                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Persistent_MatchmakingTimer_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__ButtonCancel2_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Persistent_MatchmakingTimer_C_BndEvt__ButtonCancel2_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__PlayButton_PC_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
	 */
	struct UUI_Persistent_MatchmakingTimer_C_BndEvt__PlayButton_PC_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature_Params
	{
	public:
		class UUI_Button_Generic_C*                                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ExecuteUbergraph_UI_Persistent_MatchmakingTimer
	 */
	struct UUI_Persistent_MatchmakingTimer_C_ExecuteUbergraph_UI_Persistent_MatchmakingTimer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.OnPlayButtonClicked__DelegateSignature
	 */
	struct UUI_Persistent_MatchmakingTimer_C_OnPlayButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.OnCancelButtonClicked__DelegateSignature
	 */
	struct UUI_Persistent_MatchmakingTimer_C_OnCancelButtonClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
