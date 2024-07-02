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
	 * Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.Setup
	 */
	struct UUI_CareerProgression_ProgressItem_C_Setup_Params
	{	};

	/**
	 * Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.GetRewardState
	 */
	struct UUI_CareerProgression_ProgressItem_C_GetRewardState_Params
	{
	public:
		EYCareerProgressionRewardState                             MRewardState;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.InitializeProgressItem
	 */
	struct UUI_CareerProgression_ProgressItem_C_InitializeProgressItem_Params
	{
	public:
		struct FCareerProgressionGoalUIData                        GoalData;                                                // 0x0000(0x0050)  (Parm)
	};

	/**
	 * Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.GetGoalID
	 */
	struct UUI_CareerProgression_ProgressItem_C_GetGoalID_Params
	{
	public:
		class FName                                                goalId;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.SetGoalDataToClaimedAndApply
	 */
	struct UUI_CareerProgression_ProgressItem_C_SetGoalDataToClaimedAndApply_Params
	{	};

	/**
	 * Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.HandleUnfocus
	 */
	struct UUI_CareerProgression_ProgressItem_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.HandleFocus
	 */
	struct UUI_CareerProgression_ProgressItem_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.ApplyGoalData
	 */
	struct UUI_CareerProgression_ProgressItem_C_ApplyGoalData_Params
	{	};

	/**
	 * Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.OnClaimButtonClicked
	 */
	struct UUI_CareerProgression_ProgressItem_C_OnClaimButtonClicked_Params
	{	};

	/**
	 * Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CareerProgression_ProgressItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CareerProgression_ProgressItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.Construct
	 */
	struct UUI_CareerProgression_ProgressItem_C_Construct_Params
	{	};

	/**
	 * Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.ExecuteUbergraph_UI_CareerProgression_ProgressItem
	 */
	struct UUI_CareerProgression_ProgressItem_C_ExecuteUbergraph_UI_CareerProgression_ProgressItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.OnClicked__DelegateSignature
	 */
	struct UUI_CareerProgression_ProgressItem_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_CareerProgression_ProgressItem_C*                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.OnHovered__DelegateSignature
	 */
	struct UUI_CareerProgression_ProgressItem_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UUI_CareerProgression_ProgressItem_C*                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
