/**
 * Name: Dreadnought
 * Version: Latest
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.ChooseMontage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UAnimMontage*>                        MontageList                                                (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UAnimMontage*                                ChosenMontage                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Male_VIM_C::ChooseMontage(TArray<class UAnimMontage*>* MontageList, class UAnimMontage** ChosenMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.ChooseMontage");
		
		UCH_Male_VIM_C_ChooseMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MontageList != nullptr)
			*MontageList = params.MontageList;
		if (ChosenMontage != nullptr)
			*ChosenMontage = params.ChosenMontage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.ChooseAnimation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UAnimSequence*>                       fromAnimations                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UAnimSequence*                               Animation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Male_VIM_C::ChooseAnimation(TArray<class UAnimSequence*>* fromAnimations, class UAnimSequence** Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.ChooseAnimation");
		
		UCH_Male_VIM_C_ChooseAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (fromAnimations != nullptr)
			*fromAnimations = params.fromAnimations;
		if (Animation != nullptr)
			*Animation = params.Animation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.PlayAnimation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimSequence*                               Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              animPosition                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BlendDuration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              animationEnd                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Male_VIM_C::PlayAnimation(class UAnimSequence* Animation, float animPosition, float BlendDuration, float* animationEnd, class UAnimMontage** AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.PlayAnimation");
		
		UCH_Male_VIM_C_PlayAnimation_Params params {};
		params.Animation = Animation;
		params.animPosition = animPosition;
		params.BlendDuration = BlendDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (animationEnd != nullptr)
			*animationEnd = params.animationEnd;
		if (AnimMontage != nullptr)
			*AnimMontage = params.AnimMontage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.SetFemale
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Female                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Male_VIM_C::SetFemale(bool Female)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.SetFemale");
		
		UCH_Male_VIM_C_SetFemale_Params params {};
		params.Female = Female;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.SetFaceCorrectiveAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimSequence*                               anim                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Male_VIM_C::SetFaceCorrectiveAnim(class UAnimSequence* anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.SetFaceCorrectiveAnim");
		
		UCH_Male_VIM_C_SetFaceCorrectiveAnim_Params params {};
		params.anim = anim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LookAt_BD95470B4B27D0D0A0C5B9A7C026C100
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LookAt_BD95470B4B27D0D0A0C5B9A7C026C100()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LookAt_BD95470B4B27D0D0A0C5B9A7C026C100");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LookAt_BD95470B4B27D0D0A0C5B9A7C026C100_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LayeredBoneBlend_467002B148B8CBC167CC97B8D6CA723F
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LayeredBoneBlend_467002B148B8CBC167CC97B8D6CA723F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LayeredBoneBlend_467002B148B8CBC167CC97B8D6CA723F");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LayeredBoneBlend_467002B148B8CBC167CC97B8D6CA723F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_30ABFFBA4B5B396F3539CFA5F46A7C48
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_30ABFFBA4B5B396F3539CFA5F46A7C48()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_30ABFFBA4B5B396F3539CFA5F46A7C48");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_30ABFFBA4B5B396F3539CFA5F46A7C48_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_C9E7AC2440CFF500A461599B6D2EDB3D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_C9E7AC2440CFF500A461599B6D2EDB3D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_C9E7AC2440CFF500A461599B6D2EDB3D");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_C9E7AC2440CFF500A461599B6D2EDB3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_E3F1B2394AE0FDC488548B8521726D2C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_E3F1B2394AE0FDC488548B8521726D2C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_E3F1B2394AE0FDC488548B8521726D2C");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_E3F1B2394AE0FDC488548B8521726D2C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_4F0EAA564B6DC1DE4ED647A5A7F6359E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_4F0EAA564B6DC1DE4ED647A5A7F6359E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_4F0EAA564B6DC1DE4ED647A5A7F6359E");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_4F0EAA564B6DC1DE4ED647A5A7F6359E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_9079B57A47DE597EC47BC1AC4A035FC0
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_9079B57A47DE597EC47BC1AC4A035FC0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_9079B57A47DE597EC47BC1AC4A035FC0");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_9079B57A47DE597EC47BC1AC4A035FC0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_C20A9275451CC1C2A9C89E93EC3E9FCC
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_C20A9275451CC1C2A9C89E93EC3E9FCC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_C20A9275451CC1C2A9C89E93EC3E9FCC");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_C20A9275451CC1C2A9C89E93EC3E9FCC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ApplyAdditive_61C3E52040459CE7AEA18681F4F5233B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ApplyAdditive_61C3E52040459CE7AEA18681F4F5233B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ApplyAdditive_61C3E52040459CE7AEA18681F4F5233B");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ApplyAdditive_61C3E52040459CE7AEA18681F4F5233B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_3ACD2EBD44A475633E6F3092CAA927E4
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_3ACD2EBD44A475633E6F3092CAA927E4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_3ACD2EBD44A475633E6F3092CAA927E4");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_3ACD2EBD44A475633E6F3092CAA927E4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_86B2127D4FA6F9969A1506A862DECB61
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_86B2127D4FA6F9969A1506A862DECB61()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_86B2127D4FA6F9969A1506A862DECB61");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_86B2127D4FA6F9969A1506A862DECB61_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_AnimDynamics_8BAC27D54D5321945D1A54AAA2B0C6DC
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_AnimDynamics_8BAC27D54D5321945D1A54AAA2B0C6DC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_AnimDynamics_8BAC27D54D5321945D1A54AAA2B0C6DC");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_AnimDynamics_8BAC27D54D5321945D1A54AAA2B0C6DC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_9BBB49D046D87330E8F8C7AFA9F42D50
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_9BBB49D046D87330E8F8C7AFA9F42D50()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_9BBB49D046D87330E8F8C7AFA9F42D50");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_9BBB49D046D87330E8F8C7AFA9F42D50_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LookAt_DFC500944C336A80F8F8A5AAA2E4684C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LookAt_DFC500944C336A80F8F8A5AAA2E4684C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LookAt_DFC500944C336A80F8F8A5AAA2E4684C");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LookAt_DFC500944C336A80F8F8A5AAA2E4684C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_AnimDynamics_97F7E75B4C31AB04240A5DA578E9B4CE
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_AnimDynamics_97F7E75B4C31AB04240A5DA578E9B4CE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_AnimDynamics_97F7E75B4C31AB04240A5DA578E9B4CE");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_AnimDynamics_97F7E75B4C31AB04240A5DA578E9B4CE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_BlendListByBool_D7A12DD4402838D7E7FAD787EBFEA117
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_BlendListByBool_D7A12DD4402838D7E7FAD787EBFEA117()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_BlendListByBool_D7A12DD4402838D7E7FAD787EBFEA117");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_BlendListByBool_D7A12DD4402838D7E7FAD787EBFEA117_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_C6A522444E59B1A0F7686B9E1B85C5A1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_C6A522444E59B1A0F7686B9E1B85C5A1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_C6A522444E59B1A0F7686B9E1B85C5A1");
		
		UCH_Male_VIM_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_C6A522444E59B1A0F7686B9E1B85C5A1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.PlayRandomAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCH_Male_VIM_C::PlayRandomAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.PlayRandomAnimation");
		
		UCH_Male_VIM_C_PlayRandomAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UCH_Male_VIM_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.BlueprintInitializeAnimation");
		
		UCH_Male_VIM_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.	ActivateEndOfMatch 
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCH_Male_VIM_C::ActivateEndOfMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.	ActivateEndOfMatch ");
		
		UCH_Male_VIM_C_ActivateEndOfMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.ActivateCustomization 
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DoIntro                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DoClothesSwap                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DoHeadgearSwap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Male_VIM_C::ActivateCustomization(bool DoIntro, bool DoClothesSwap, bool DoHeadgearSwap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.ActivateCustomization ");
		
		UCH_Male_VIM_C_ActivateCustomization_Params params {};
		params.DoIntro = DoIntro;
		params.DoClothesSwap = DoClothesSwap;
		params.DoHeadgearSwap = DoHeadgearSwap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.ActivateEndofMatchSingleView
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCH_Male_VIM_C::ActivateEndofMatchSingleView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.ActivateEndofMatchSingleView");
		
		UCH_Male_VIM_C_ActivateEndofMatchSingleView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.SetTalking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Talking                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Male_VIM_C::SetTalking(bool Talking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.SetTalking");
		
		UCH_Male_VIM_C_SetTalking_Params params {};
		params.Talking = Talking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.UpdateCurrentAnimAfterTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimSequence*                               Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Male_VIM_C::UpdateCurrentAnimAfterTime(class UAnimSequence* Animation, float seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.UpdateCurrentAnimAfterTime");
		
		UCH_Male_VIM_C_UpdateCurrentAnimAfterTime_Params params {};
		params.Animation = Animation;
		params.seconds = seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.SetVOAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimSequence*                               VOAnim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Male_VIM_C::SetVOAnim(class UAnimSequence* VOAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.SetVOAnim");
		
		UCH_Male_VIM_C_SetVOAnim_Params params {};
		params.VOAnim = VOAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.OnPlayNexEndOfMatchtVariation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCH_Male_VIM_C::OnPlayNexEndOfMatchtVariation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.OnPlayNexEndOfMatchtVariation");
		
		UCH_Male_VIM_C_OnPlayNexEndOfMatchtVariation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.OnPlayFacialAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimSequence*                               AnimSequence                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AnimProgress                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Male_VIM_C::OnPlayFacialAnimation(class UAnimSequence* AnimSequence, float AnimProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.OnPlayFacialAnimation");
		
		UCH_Male_VIM_C_OnPlayFacialAnimation_Params params {};
		params.AnimSequence = AnimSequence;
		params.AnimProgress = AnimProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.OnAssignEndOfMatchBasePoseID
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            EndOfMatchPoseID                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isRightRow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Male_VIM_C::OnAssignEndOfMatchBasePoseID(int32_t EndOfMatchPoseID, bool isRightRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.OnAssignEndOfMatchBasePoseID");
		
		UCH_Male_VIM_C_OnAssignEndOfMatchBasePoseID_Params params {};
		params.EndOfMatchPoseID = EndOfMatchPoseID;
		params.isRightRow = isRightRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.Play1shotCustomisationAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCH_Male_VIM_C::Play1shotCustomisationAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.Play1shotCustomisationAnim");
		
		UCH_Male_VIM_C_Play1shotCustomisationAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Male_VIM_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.BlueprintUpdateAnimation");
		
		UCH_Male_VIM_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EOM_StatScreen_LS_Event_PlayCharAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EOM_StatScreen_LS_Event_PlayCharAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EOM_StatScreen_LS_Event_PlayCharAnim");
		
		UCH_Male_VIM_C_EOM_StatScreen_LS_Event_PlayCharAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EOM_MVPScreen_LS_Event_PlayMVP1CharAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EOM_MVPScreen_LS_Event_PlayMVP1CharAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EOM_MVPScreen_LS_Event_PlayMVP1CharAnim");
		
		UCH_Male_VIM_C_EOM_MVPScreen_LS_Event_PlayMVP1CharAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EOM_MVPScreen_LS_Event_PlayMVP2CharAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EOM_MVPScreen_LS_Event_PlayMVP2CharAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EOM_MVPScreen_LS_Event_PlayMVP2CharAnim");
		
		UCH_Male_VIM_C_EOM_MVPScreen_LS_Event_PlayMVP2CharAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EOM_MVPScreen_LS_Event_PlayMVP3CharAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCH_Male_VIM_C::EOM_MVPScreen_LS_Event_PlayMVP3CharAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EOM_MVPScreen_LS_Event_PlayMVP3CharAnim");
		
		UCH_Male_VIM_C_EOM_MVPScreen_LS_Event_PlayMVP3CharAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.DebugMVPTaunts
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            variationIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Male_VIM_C::DebugMVPTaunts(int32_t variationIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.DebugMVPTaunts");
		
		UCH_Male_VIM_C_DebugMVPTaunts_Params params {};
		params.variationIndex = variationIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.EOM_PVE_TeamScreen_PlayCharAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CharacterIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Male_VIM_C::EOM_PVE_TeamScreen_PlayCharAnim(int32_t CharacterIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.EOM_PVE_TeamScreen_PlayCharAnim");
		
		UCH_Male_VIM_C_EOM_PVE_TeamScreen_PlayCharAnim_Params params {};
		params.CharacterIndex = CharacterIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Male_VIM.CH_Male_VIM_C.ExecuteUbergraph_CH_Male_VIM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Male_VIM_C::ExecuteUbergraph_CH_Male_VIM(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Male_VIM.CH_Male_VIM_C.ExecuteUbergraph_CH_Male_VIM");
		
		UCH_Male_VIM_C_ExecuteUbergraph_CH_Male_VIM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCH_Male_VIM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCH_Male_VIM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass CH_Male_VIM.CH_Male_VIM_C");
		return ptr;
	}

}


