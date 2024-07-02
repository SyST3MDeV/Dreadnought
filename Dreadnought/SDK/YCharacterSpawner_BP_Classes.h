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
	 * BlueprintGeneratedClass YCharacterSpawner_BP.YCharacterSpawner_BP_C
	 * Size -> 0x0098 (FullSize[0x0488] - InheritedSize[0x03F0])
	 */
	class AYCharacterSpawner_BP_C : public AYCharacterSpawner
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDirectionalLightComponent*                          DirectionalLight2;                                       // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USkyLightComponent*                                  SkyLight;                                                // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UDirectionalLightComponent*                          DirectionalLight1;                                       // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UCameraComponent*                                    ThumbnailCam;                                            // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		int32_t                                                    EndOfMatchVariationID;                                   // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      myStreamingMultiplier;                                   // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       m_isEndOfMatch;                                          // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       m_isEndOfMatchSingleView;                                // 0x0421(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       m_isCustomization;                                       // 0x0422(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       m_isTalking;                                             // 0x0423(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q2SM[0x4];                                   // 0x0424(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       Face_Corrective_Anim;                                    // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TAssetPtr<class UYCharacterCustomizationMesh>              m_previewCharacter;                                      // 0x0430(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              UnknownData_TD43[0x4];                                   // 0x044C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       m_isRightRow;                                            // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HYK5[0x7];                                   // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UYCharacterCustomizationMesh*                        OldHead;                                                 // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UYCharacterCustomizationMesh*                        OldSuit;                                                 // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DoCustomisationIntro;                                    // 0x0468(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OutfitSwap;                                              // 0x0469(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J6NC[0x6];                                   // 0x046A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UYCharacterCustomizationMesh*                        OldHeadwear;                                             // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HeadgearSwap;                                            // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GDUF[0x7];                                   // 0x0479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AYBaseCharacter*                                     spawnedCharacter;                                        // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void OnCharacterSpawned(class AYBaseCharacter* spawnedCharacter);
		void EOM_StatScreen_LS_Event_PlayCharAnim();
		void EOM_MVPScreen_LS_Event_PlayMVP1CharAnim();
		void EOM_MVPScreen_LS_Event_PlayMVP2CharAnim();
		void EOM_MVPScreen_LS_Event_PlayMVP3CharAnim();
		void EOM_Debug_MVPTaunts(int32_t AnimIndex);
		void EOM_TeamScreen_PlayCharAnim(int32_t CharacterIndex);
		void ExecuteUbergraph_YCharacterSpawner_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
