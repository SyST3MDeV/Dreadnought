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
	 * BlueprintGeneratedClass YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C
	 * Size -> 0x0058 (FullSize[0x0578] - InheritedSize[0x0520])
	 */
	class AYOrbitTransitionManager_BP_C : public AYOrbitTransitionManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0520(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBillboardComponent*                                 Billboard1;                                              // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class FScriptMulticastDelegate                             OrbitTransitionManager_OnOrbitEnd;                       // 0x0530(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OrbitTransitionManager_SpawnScaleCreeps;                 // 0x0540(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    SelectedLevelVariationIndex;                             // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    AutomationCapturesLeft;                                  // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EYGameModeType                                             UsedGameModeType;                                        // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsInitialOrbitStreamingFinished;                         // 0x0559(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsTransitionToLevelStreamingPending;                     // 0x055A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasTransitionToLevelBeenRequested;                       // 0x055B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_93J3[0x4];                                   // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ALevelSequenceActor*                                 CameraPan_SequenceActor;                                 // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class AActor*                                              CameraPan_AttachPointTeam01;                             // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class AActor*                                              CameraPan_AttachPointTeam02;                             // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor

	public:
		void AttachPanCameraToAttachPoint(class AYPlayerController* YPlayerController);
		void IsLevelRelevantForGameMode(const struct FYLevelStreamingDataTableRow& StreamingData, bool* IsRelevant);
		void IsLevelRelevantForAVSMSetting(const struct FYLevelStreamingDataTableRow& StreamingData, bool* IsRelevant);
		void IsLevelRelevantForSelectedVariation(const struct FYLevelStreamingDataTableRow& StreamingData, bool* IsRelevant);
		void ShouldSublevelBeLoadedOnLevelStart(const struct FYLevelStreamingDataTableRow& StreamingData, class AYGameState_MP* GameStateMP, bool* ShouldBeLoaded);
		void UserConstructionScript();
		void OnOrbitTransitionStarts(class AYPlayerController* Player);
		void OnOrbitTransitionEnds(class AYPlayerController* Player, class UYPlayerOrbitComponent* orbitComponent);
		void OnEndOfMatchOrbitSetUp(class AYPlayerController* Player);
		void OnOrbitLevelSetUp(class AYGameState_MP* multiplayerGameState, int32_t levelVariationIndex);
		void OnCameraFadeComplete(class AYPlayerController* Player);
		void OnStartProfileEndOfMatchScreen();
		void TryStreamingLevelsAfterOrbit();
		void RequestTransitionToLevel(class AYPlayerController* Player);
		void OnPlayCameraPanAnimation(class UYPlayerOrbitComponent* playerOrbitComponent, class AYPlayerController* Player, class AYPawn* Pawn);
		void CamPanFInished();
		void SkipIntroCameraPan();
		void ExecuteUbergraph_YOrbitTransitionManager_BP(int32_t EntryPoint);
		void OrbitTransitionManager_SpawnScaleCreeps__DelegateSignature();
		void OrbitTransitionManager_OnOrbitEnd__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
