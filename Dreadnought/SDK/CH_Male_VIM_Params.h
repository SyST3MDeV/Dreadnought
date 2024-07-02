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
	 * Function CH_Male_VIM.CH_Male_VIM_C.ChooseMontage
	 */
	struct UCH_Male_VIM_C_ChooseMontage_Params
	{
	public:
		TArray<class UAnimMontage*>                                MontageList;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UAnimMontage*                                        ChosenMontage;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.ChooseAnimation
	 */
	struct UCH_Male_VIM_C_ChooseAnimation_Params
	{
	public:
		TArray<class UAnimSequence*>                               fromAnimations;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UAnimSequence*                                       Animation;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.PlayAnimation
	 */
	struct UCH_Male_VIM_C_PlayAnimation_Params
	{
	public:
		class UAnimSequence*                                       Animation;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      animPosition;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BlendDuration;                                           // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      animationEnd;                                            // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NUKF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        AnimMontage;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.SetFemale
	 */
	struct UCH_Male_VIM_C_SetFemale_Params
	{
	public:
		bool                                                       Female;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.SetFaceCorrectiveAnim
	 */
	struct UCH_Male_VIM_C_SetFaceCorrectiveAnim_Params
	{
	public:
		class UAnimSequence*                                       anim;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LookAt_BD95470B4B27D0D0A0C5B9A7C026C100
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LookAt_BD95470B4B27D0D0A0C5B9A7C026C100_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LayeredBoneBlend_467002B148B8CBC167CC97B8D6CA723F
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LayeredBoneBlend_467002B148B8CBC167CC97B8D6CA723F_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_30ABFFBA4B5B396F3539CFA5F46A7C48
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_30ABFFBA4B5B396F3539CFA5F46A7C48_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_C9E7AC2440CFF500A461599B6D2EDB3D
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_C9E7AC2440CFF500A461599B6D2EDB3D_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_E3F1B2394AE0FDC488548B8521726D2C
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_E3F1B2394AE0FDC488548B8521726D2C_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_4F0EAA564B6DC1DE4ED647A5A7F6359E
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_4F0EAA564B6DC1DE4ED647A5A7F6359E_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_9079B57A47DE597EC47BC1AC4A035FC0
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_9079B57A47DE597EC47BC1AC4A035FC0_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_C20A9275451CC1C2A9C89E93EC3E9FCC
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_C20A9275451CC1C2A9C89E93EC3E9FCC_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ApplyAdditive_61C3E52040459CE7AEA18681F4F5233B
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ApplyAdditive_61C3E52040459CE7AEA18681F4F5233B_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_3ACD2EBD44A475633E6F3092CAA927E4
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_3ACD2EBD44A475633E6F3092CAA927E4_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_86B2127D4FA6F9969A1506A862DECB61
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_86B2127D4FA6F9969A1506A862DECB61_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_AnimDynamics_8BAC27D54D5321945D1A54AAA2B0C6DC
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_AnimDynamics_8BAC27D54D5321945D1A54AAA2B0C6DC_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_9BBB49D046D87330E8F8C7AFA9F42D50
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_9BBB49D046D87330E8F8C7AFA9F42D50_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LookAt_DFC500944C336A80F8F8A5AAA2E4684C
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LookAt_DFC500944C336A80F8F8A5AAA2E4684C_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_AnimDynamics_97F7E75B4C31AB04240A5DA578E9B4CE
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_AnimDynamics_97F7E75B4C31AB04240A5DA578E9B4CE_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_BlendListByBool_D7A12DD4402838D7E7FAD787EBFEA117
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_BlendListByBool_D7A12DD4402838D7E7FAD787EBFEA117_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_C6A522444E59B1A0F7686B9E1B85C5A1
	 */
	struct UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_C6A522444E59B1A0F7686B9E1B85C5A1_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.PlayRandomAnimation
	 */
	struct UCH_Male_VIM_C_PlayRandomAnimation_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.BlueprintInitializeAnimation
	 */
	struct UCH_Male_VIM_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.	ActivateEndOfMatch 
	 */
	struct UCH_Male_VIM_C_ActivateEndOfMatch_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.ActivateCustomization 
	 */
	struct UCH_Male_VIM_C_ActivateCustomization_Params
	{
	public:
		bool                                                       DoIntro;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoClothesSwap;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoHeadgearSwap;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.ActivateEndofMatchSingleView
	 */
	struct UCH_Male_VIM_C_ActivateEndofMatchSingleView_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.SetTalking
	 */
	struct UCH_Male_VIM_C_SetTalking_Params
	{
	public:
		bool                                                       Talking;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.UpdateCurrentAnimAfterTime
	 */
	struct UCH_Male_VIM_C_UpdateCurrentAnimAfterTime_Params
	{
	public:
		class UAnimSequence*                                       Animation;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      seconds;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.SetVOAnim
	 */
	struct UCH_Male_VIM_C_SetVOAnim_Params
	{
	public:
		class UAnimSequence*                                       VOAnim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.OnPlayNexEndOfMatchtVariation
	 */
	struct UCH_Male_VIM_C_OnPlayNexEndOfMatchtVariation_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.OnPlayFacialAnimation
	 */
	struct UCH_Male_VIM_C_OnPlayFacialAnimation_Params
	{
	public:
		class UAnimSequence*                                       AnimSequence;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AnimProgress;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.OnAssignEndOfMatchBasePoseID
	 */
	struct UCH_Male_VIM_C_OnAssignEndOfMatchBasePoseID_Params
	{
	public:
		int32_t                                                    EndOfMatchPoseID;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isRightRow;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.Play1shotCustomisationAnim
	 */
	struct UCH_Male_VIM_C_Play1shotCustomisationAnim_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.BlueprintUpdateAnimation
	 */
	struct UCH_Male_VIM_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EOM_StatScreen_LS_Event_PlayCharAnim
	 */
	struct UCH_Male_VIM_C_EOM_StatScreen_LS_Event_PlayCharAnim_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EOM_MVPScreen_LS_Event_PlayMVP1CharAnim
	 */
	struct UCH_Male_VIM_C_EOM_MVPScreen_LS_Event_PlayMVP1CharAnim_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EOM_MVPScreen_LS_Event_PlayMVP2CharAnim
	 */
	struct UCH_Male_VIM_C_EOM_MVPScreen_LS_Event_PlayMVP2CharAnim_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EOM_MVPScreen_LS_Event_PlayMVP3CharAnim
	 */
	struct UCH_Male_VIM_C_EOM_MVPScreen_LS_Event_PlayMVP3CharAnim_Params
	{	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.DebugMVPTaunts
	 */
	struct UCH_Male_VIM_C_DebugMVPTaunts_Params
	{
	public:
		int32_t                                                    variationIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.EOM_PVE_TeamScreen_PlayCharAnim
	 */
	struct UCH_Male_VIM_C_EOM_PVE_TeamScreen_PlayCharAnim_Params
	{
	public:
		int32_t                                                    CharacterIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CH_Male_VIM.CH_Male_VIM_C.ExecuteUbergraph_CH_Male_VIM
	 */
	struct UCH_Male_VIM_C_ExecuteUbergraph_CH_Male_VIM_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T0OZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
