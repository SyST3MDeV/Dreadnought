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
	 * BlueprintGeneratedClass VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C
	 * Size -> 0x00A8 (FullSize[0x12D8] - InheritedSize[0x1230])
	 */
	class AVH_YPlayerCtrl_Outpost_BP_C : public AYPlayerController_Outpost
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAxisInputHelper_C*                                  m_axisInputHelperComponent;                              // 0x1238(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UAudioComponent*                                     MusicTrackComp;                                          // 0x1240(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     Scene;                                                   // 0x1248(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		bool                                                       IsPlayingHighPrioVO;                                     // 0x1250(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1ZGK[0x7];                                   // 0x1251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CurrentlyGuidedCareerGoal;                               // 0x1258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EYMenuState                                                menuState;                                               // 0x1260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KI7X[0x7];                                   // 0x1261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        RefreshGoalGuideHighlights_TimerHandle;                  // 0x1268(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        TimeOutGoalGuideHighlights_TimerHandle;                  // 0x1270(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      CareerGoalGuideTimeOut;                                  // 0x1278(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6LG7[0x4];                                   // 0x127C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ListOfT1ModuleIds;                                       // 0x1280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            ListOfT1WeaponIds;                                       // 0x1290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            ListOfT1LoadoutIds;                                      // 0x12A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            ListOfT2LoadoutIds;                                      // 0x12B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       NewVar_1;                                                // 0x12C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ForceHighlightPlayButton;                                // 0x12C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsUiHidden;                                              // 0x12C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5E59[0x5];                                   // 0x12C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMouseButtonReleased;                                   // 0x12C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void CheckAndShowHiddenUI(EUI_MenuActions MenuAction, bool* ShouldPerformFurtherActions);
		void ToggleUI();
		void CheckAndPerformAxisNavigationEvent(EUI_MenuActions MenuAction);
		void ForwardNavigationEvent(EUI_MenuActions GamePadInput, bool* HandledByPersistentScreen, bool* HandledByCurrentScreen);
		void GetPersistentScreen(class UUI_Screen_Persistent_C** PersistentScreen);
		void GetCurrentScreen(class UUI_DreadScreen** CurrentScreen);
		void CheckWhetherToHighlightPlayButton();
		void HighlightResearchPurchaseButton();
		void GetResearchedT1Items(TArray<int32_t>* items);
		void GetUnresearchedT1Items(TArray<int32_t>* items);
		void GetResearchedT1Modules(TArray<int32_t>* ItemIds);
		void GetT1ShipsWithResearchedT2Ships(TArray<int32_t>* items);
		void GetT1ShipsWithResearchedT1Modules(TArray<int32_t>* items);
		void InitializeAssetIdArrays();
		void GuideToPurchaseT2Ship();
		void GuideToPurchaseT1Module();
		void SyncronizeNewPlayerOnboardingState();
		void SkipNewPlayerOnboarding();
		void GuideToResearchT2Ship();
		void GuideToFullyResearchT1Ship();
		void GuideToShipTechTrees(TArray<int32_t>* ShipsToGuideToT1ItemID, TArray<int32_t>* PurchaseScreenNotGuideFromITemID, TArray<int32_t>* PurchaseScreenToGuideDirectlyFromItemID, bool* InCorrectTechTreeAlready);
		void GuideToPlay(bool HighlightGameModeSelection, bool HighlightFleetSelection, const class FString& HighlightGameMode);
		void GuideToResearchT1Module();
		void RemoveAllGuideCallouts();
		void UserConstructionScript();
		void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_84(const struct FKey& Key);
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_83(const struct FKey& Key);
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_82(const struct FKey& Key);
		void InpActEvt_AnyKey_K2Node_InputKeyEvent_81(const struct FKey& Key);
		void InpActEvt_AnyKey_K2Node_InputKeyEvent_80(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_79(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_78(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_77(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_76(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_75(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_74(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_73(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_72(const struct FKey& Key);
		void InpActEvt_F12_K2Node_InputKeyEvent_71(const struct FKey& Key);
		void InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_70(const struct FKey& Key);
		void InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_69(const struct FKey& Key);
		void InpActEvt_Escape_K2Node_InputKeyEvent_68(const struct FKey& Key);
		void InpActEvt_BackSpace_K2Node_InputKeyEvent_67(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_66(const struct FKey& Key);
		void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_65(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_64(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_63(const struct FKey& Key);
		void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_62(const struct FKey& Key);
		void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_61(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_60(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_59(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_58(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_57(const struct FKey& Key);
		void InpActEvt_Gamepad_RightStick_Down_K2Node_InputKeyEvent_56(const struct FKey& Key);
		void InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_55(const struct FKey& Key);
		void InpActEvt_Gamepad_RightStick_Up_K2Node_InputKeyEvent_54(const struct FKey& Key);
		void InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_53(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_52(const struct FKey& Key);
		void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_51(const struct FKey& Key);
		void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_50(const struct FKey& Key);
		void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_49(const struct FKey& Key);
		void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_48(const struct FKey& Key);
		void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_47(const struct FKey& Key);
		void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_46(const struct FKey& Key);
		void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_45(const struct FKey& Key);
		void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_44(const struct FKey& Key);
		void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_43(const struct FKey& Key);
		void OnGoalUIGuideEvent_Implemented(const class FName& goalId);
		void OnGoalUIGuideEvent(const class FName& goalId);
		void OnGoalCategoryUnlockedEvent(EYGoalCategory Category);
		void OnGoalReadyToBeClaimedEvent(const class FName& goalId);
		void RefreshGoalGuideHighlights();
		void PlayVO_AllGamesModesUnlocked();
		void CareerGoals_ReactOnMenuStateChange();
		void SetNoGoalGuide();
		void RestartTimeOutTimer();
		void SetUpCareerGoalsOnboardingRules();
		void OnOnboardingEvent(const class FName& trigeredRule);
		void OnLocalPlayerSet();
		void SetUpRankReachedOnBoardingRules();
		void Ob_RankedUp(const class FName& Rule);
		void MenuStateChanged(EYMenuState newMenuState);
		void OnOnboardingInitialized();
		void OnGoalManagerInitialized();
		void OnMatchmakingStateChanged(EYMenuMatchMakingState NewState);
		void Debug_Ob_CharacterFinished();
		void Debug_Ob_CreatingCharacter();
		void CheckWhetherToStartTutorial();
		void Debug_Ob_BackAfterFirstMatch();
		void Debug_Ob_TutorialFinished();
		void SetUpNewPlayerOnboardingRules();
		void SetUpShipIntroductionOnboardingRules();
		void SetUpNewPlayerOnboardingRules_Copy();
		void Debug_Ob_LoadoutExplanation();
		void SetUpCustomizationOnboardingRules();
		void SetUpAdvancedOnboardingRules();
		void SetUpSocialLayerOnboardingRules();
		void Ob_ActivateGenericModuleBoughtFeedback();
		void Ob_ActivateGenericShipBoughtFeedback();
		void Ob_ActivateGenericVanityItemBoughtFeedback();
		void SetupPurchaseFeedbackOnboardingRules();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_VH_YPlayerCtrl_Outpost_BP(int32_t EntryPoint);
		void OnMouseButtonReleased__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
