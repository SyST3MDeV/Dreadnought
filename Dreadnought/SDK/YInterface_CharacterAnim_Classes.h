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
	 * BlueprintGeneratedClass YInterface_CharacterAnim.YInterface_CharacterAnim_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UYInterface_CharacterAnim_C : public UInterface
	{
	public:
		void EOM_PVE_TeamScreen_PlayCharAnim(int32_t CharacterIndex);
		void EOM_MVPScreen_LS_Event_PlayMVP3CharAnim();
		void EOM_MVPScreen_LS_Event_PlayMVP2CharAnim();
		void EOM_MVPScreen_LS_Event_PlayMVP1CharAnim();
		void EOM_StatScreen_LS_Event_PlayCharAnim();
		void OnAssignEndOfMatchBasePoseID(int32_t EndOfMatchPoseID, bool isRightRow);
		void SetVOAnim(class UAnimSequence* VOAnim);
		void SetFaceCorrectiveAnim(class UAnimSequence* anim);
		void SetTalking(bool Talking);
		void SetFemale(bool Female);
		void ActivateCustomization(bool DoIntro, bool DoClothesSwap, bool DoHeadgearSwap);
		void ActivateEndofMatchSingleView();
		void ActivateEndOfMatch();
		void PlayRandomAnimation();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
