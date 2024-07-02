#pragma once

/**
 * Name: Dreadnought
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass CH_Male_VIM.CH_Male_VIM_C
	 * Size -> 0x15D0 (FullSize[0x1A68] - InheritedSize[0x0498])
	 */
	class UCH_Male_VIM_C : public UYAnimInstanceCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0498(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_B4B8CB40469FBCD7D21616AE1F54B6C5; // 0x04A0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_499A4E054D22F1788960FF9FCB8412AB; // 0x04E8(0x0070)
		unsigned char                                              UnknownData_3ERO[0x8];                                   // 0x0558(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_BD95470B4B27D0D0A0C5B9A7C026C100;   // 0x0560(0x0150)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7099697C48153803C8C5129295A144E7;     // 0x06B0(0x0060)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_467002B148B8CBC167CC97B8D6CA723F; // 0x0710(0x00A0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_097395814C5DD32B8B1EA0B0967BCDB8; // 0x07B0(0x0078)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_FAEA3E61490D31FDE15CC387D3898FC5; // 0x0828(0x0038)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_30ABFFBA4B5B396F3539CFA5F46A7C48; // 0x0860(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_C9E7AC2440CFF500A461599B6D2EDB3D; // 0x0910(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_E3F1B2394AE0FDC488548B8521726D2C; // 0x09C0(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4F0EAA564B6DC1DE4ED647A5A7F6359E; // 0x0A70(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9079B57A47DE597EC47BC1AC4A035FC0; // 0x0B20(0x00B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_43B8CA24488A06E970BC17B41F7B0E2D; // 0x0BD0(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_956641BE465FB04F3808C1AEF3A56C37; // 0x0C18(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C20A9275451CC1C2A9C89E93EC3E9FCC; // 0x0C60(0x0070)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_219292AD49EB2A7FCF1949B8A29AC586; // 0x0CD0(0x0070)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_61C3E52040459CE7AEA18681F4F5233B; // 0x0D40(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3ACD2EBD44A475633E6F3092CAA927E4; // 0x0DB8(0x0070)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3D2A6ABE42E5057F77B0FD8C4D75D76A; // 0x0E28(0x0078)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_800A414E48C8745521846BA3DDE3F552;     // 0x0EA0(0x0060)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_86B2127D4FA6F9969A1506A862DECB61; // 0x0F00(0x00B0)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_8BAC27D54D5321945D1A54AAA2B0C6DC; // 0x0FB0(0x0268)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9BBB49D046D87330E8F8C7AFA9F42D50; // 0x1218(0x00B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_9C098F084C9217E6CBF14FAE4120F601; // 0x12C8(0x0048)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_DFC500944C336A80F8F8A5AAA2E4684C;   // 0x1310(0x0150)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_97F7E75B4C31AB04240A5DA578E9B4CE; // 0x1460(0x0268)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2DA410A14195FB74AE4D7C83EAFE9CFF;     // 0x16C8(0x0060)
		struct FAnimNode_Root                                      AnimGraphNode_Root_E56F1CDF41499F7DB37D6FB881260821;     // 0x1728(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_D7A12DD4402838D7E7FAD787EBFEA117; // 0x1770(0x00D0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_97C83C7945D6DA2417ED30B0BBB20B53;     // 0x1840(0x0060)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C6A522444E59B1A0F7686B9E1B85C5A1; // 0x18A0(0x0070)
		float                                                      BlendDuration;                                           // 0x1910(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    VariationID;                                             // 0x1914(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    VariationCounter;                                        // 0x1918(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G5BI[0x4];                                   // 0x191C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimSequence*>                               Animations;                                              // 0x1920(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class UAnimSequence*>                               Animations_EndOfMatch;                                   // 0x1930(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class UAnimSequence*>                               Animations_Talking;                                      // 0x1940(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class UAnimSequence*>                               AnimationVariations;                                     // 0x1950(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UAnimSequence*                                       DefaultAnimation;                                        // 0x1960(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAnimSequence*                                       CurrentAnimation;                                        // 0x1968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PlayRateMod_Min;                                         // 0x1970(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PlayRateMod_Max;                                         // 0x1974(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LookAtLocation;                                          // 0x1978(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LookAtWeight;                                            // 0x1984(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UpdateThreshold;                                         // 0x1988(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UpdateInterval;                                          // 0x198C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             RootOffset;                                              // 0x1990(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RootOffset_Weight;                                       // 0x199C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequence*                                       Face_Corrective_Anim;                                    // 0x19A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequence*                                       VO_Current_Anim;                                         // 0x19A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      VO_Anim_Weight;                                          // 0x19B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    EndOfMatchBasePoseID;                                    // 0x19B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isRightRow;                                              // 0x19B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4OQT[0x7];                                   // 0x19B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimSequence*>                               Animations_Customization;                                // 0x19C0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      VO_Anim_Delay;                                           // 0x19D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4VGD[0x4];                                   // 0x19D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CurrentSlot;                                             // 0x19D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CustomizationPlayRate;                                   // 0x19E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_91HS[0x4];                                   // 0x19E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       CustomisationBasePose;                                   // 0x19E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequenceBase*                                   AdditiveBaseAnim;                                        // 0x19F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EnableGenericLipsync;                                    // 0x19F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A6PW[0x3];                                   // 0x19F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BasePose_PR;                                             // 0x19FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CustomisationIntroFlag;                                  // 0x1A00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IXX2[0x7];                                   // 0x1A01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       CharCreationIntro;                                       // 0x1A08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CustomisationWaitFlag;                                   // 0x1A10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DidInitialize;                                           // 0x1A11(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Dooutfitswap;                                            // 0x1A12(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DoHeadgearSwap;                                          // 0x1A13(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PA4D[0x4];                                   // 0x1A14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimMontage*>                                OutfitSwapMontages;                                      // 0x1A18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UAnimMontage*>                                HeadgearSwapMontages;                                    // 0x1A28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UAnimMontage*                                        CustomizationIntroMontage;                               // 0x1A38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        LastMontagePlayed;                                       // 0x1A40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DynamicClothAlpha;                                       // 0x1A48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsEndOfmatchStatisticsChar;                              // 0x1A4C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MvpEventGate;                                            // 0x1A4D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WZXB[0x2];                                   // 0x1A4E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimSequence*>                               FacialAnimsMVPTaunt;                                     // 0x1A50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       EnableNonAdditiveFace;                                   // 0x1A60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JC60[0x3];                                   // 0x1A61(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentTauntIndex;                                       // 0x1A64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ChooseMontage(TArray<class UAnimMontage*>* MontageList, class UAnimMontage** ChosenMontage);
		void ChooseAnimation(TArray<class UAnimSequence*>* fromAnimations, class UAnimSequence** Animation);
		void PlayAnimation(class UAnimSequence* Animation, float animPosition, float BlendDuration, float* animationEnd, class UAnimMontage** AnimMontage);
		void SetFemale(bool Female);
		void SetFaceCorrectiveAnim(class UAnimSequence* anim);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LookAt_BD95470B4B27D0D0A0C5B9A7C026C100();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LayeredBoneBlend_467002B148B8CBC167CC97B8D6CA723F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_30ABFFBA4B5B396F3539CFA5F46A7C48();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_C9E7AC2440CFF500A461599B6D2EDB3D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_E3F1B2394AE0FDC488548B8521726D2C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_4F0EAA564B6DC1DE4ED647A5A7F6359E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_9079B57A47DE597EC47BC1AC4A035FC0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_C20A9275451CC1C2A9C89E93EC3E9FCC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ApplyAdditive_61C3E52040459CE7AEA18681F4F5233B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_3ACD2EBD44A475633E6F3092CAA927E4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_86B2127D4FA6F9969A1506A862DECB61();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_AnimDynamics_8BAC27D54D5321945D1A54AAA2B0C6DC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_ModifyBone_9BBB49D046D87330E8F8C7AFA9F42D50();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_LookAt_DFC500944C336A80F8F8A5AAA2E4684C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_AnimDynamics_97F7E75B4C31AB04240A5DA578E9B4CE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_BlendListByBool_D7A12DD4402838D7E7FAD787EBFEA117();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Male_VIM_AnimGraphNode_SequencePlayer_C6A522444E59B1A0F7686B9E1B85C5A1();
		void PlayRandomAnimation();
		void BlueprintInitializeAnimation();
		void ActivateEndOfMatch();
		void ActivateCustomization(bool DoIntro, bool DoClothesSwap, bool DoHeadgearSwap);
		void ActivateEndofMatchSingleView();
		void SetTalking(bool Talking);
		void UpdateCurrentAnimAfterTime(class UAnimSequence* Animation, float seconds);
		void SetVOAnim(class UAnimSequence* VOAnim);
		void OnPlayNexEndOfMatchtVariation();
		void OnPlayFacialAnimation(class UAnimSequence* AnimSequence, float AnimProgress);
		void OnAssignEndOfMatchBasePoseID(int32_t EndOfMatchPoseID, bool isRightRow);
		void Play1shotCustomisationAnim();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void EOM_StatScreen_LS_Event_PlayCharAnim();
		void EOM_MVPScreen_LS_Event_PlayMVP1CharAnim();
		void EOM_MVPScreen_LS_Event_PlayMVP2CharAnim();
		void EOM_MVPScreen_LS_Event_PlayMVP3CharAnim();
		void DebugMVPTaunts(int32_t variationIndex);
		void EOM_PVE_TeamScreen_PlayCharAnim(int32_t CharacterIndex);
		void ExecuteUbergraph_CH_Male_VIM(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
