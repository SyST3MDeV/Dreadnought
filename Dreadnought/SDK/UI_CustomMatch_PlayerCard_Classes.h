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
	 * WidgetBlueprintGeneratedClass UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C
	 * Size -> 0x01C0 (FullSize[0x0400] - InheritedSize[0x0240])
	 */
	class UUI_CustomMatch_PlayerCard_C : public UUI_CustomMatchPlayerCardWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ResetSwitch;                                             // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    ResetKick;                                               // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    FocusUnfocusSwitch;                                      // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    FocusUnfocusKick;                                        // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ButtonPlayerOptions;                                     // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ButtonSwitchTeams;                                       // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             CaptainRankBorder;                                       // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            HostIcon;                                                // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              IconSwapArrow;                                           // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             MainButton;                                              // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          NameText;                                                // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            OptionsBox;                                              // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             PlayerPortraitButton;                                    // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              PortraitImage;                                           // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          SlashText;                                               // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              SpeakerDisabled;                                         // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              SpeakerEnabled;                                          // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              SpeakerMuted;                                            // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              SpeakerSpeaking;                                         // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          titleText;                                               // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_CaptainRankOverlay_C*                    UI_Generic_CaptainRank;                                  // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          UserNumberText;                                          // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     VoiceSwitcher;                                           // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnRemovePlayerClicked;                                   // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPlayerClicked;                                         // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimespan                                           TimeRemaining;                                           // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FPlayerUIData                                       CurrentPlayerData;                                       // 0x0330(0x0080) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnSendPlayerToOtherTeamClicked;                          // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHover;                                                 // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhover;                                               // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    FocusedButtonIndex;                                      // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    SpeakerEnabledIndex;                                     // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    SpeakerSpeakingIndex;                                    // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    SpeakerMutedIndex;                                       // 0x03EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    SpeakerDisabledIndex;                                    // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OLD1[0x4];                                   // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ResetVoiceTimerHandle;                                   // 0x03F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void HandleResetSwap();
		void HandleResetOptions();
		void ActionPlayerOptions();
		void ClearVoiceChatStatus();
		void UpdateVoiceChatStatus(const struct FSquadVoiceData& VoiceData);
		void Action();
		void HandleUnfocusSwap();
		void HandleFocusSwap();
		void HandleUnfocusKick();
		void HandleFocusKick();
		void ActionSwitchTeams();
		void ActionRemovePlayer();
		void SetCanMove(bool CanMove);
		void SetCanRemove(bool CanRemove);
		void SetIsHost(bool IsHost);
		void SetEliteIcon(bool IsElite);
		void GetData(struct FPlayerUIData* CurrentPlayerData);
		void SetData(const struct FPlayerUIData& PlayerData);
		void SetRankTitle(const class FText& RankTitle);
		void SetRankValue(int32_t RankValue);
		void SetCaptainImage(const class FString& imagePath);
		void SetPlayerNumber(int32_t PlayerNumber);
		void SetPlayerName(const class FString& PlayerName);
		void SetRankVisibility(bool IsVisible);
		void Setup();
		void Construct();
		void BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_249_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_301_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_317_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_243_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_426_OnButtonHoverEvent__DelegateSignature();
		void OnActionReceived();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_830_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PlayerPortraitButton_K2Node_ComponentBoundEvent_891_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_UI_CustomMatch_PlayerCard(int32_t EntryPoint);
		void OnUnhover__DelegateSignature();
		void OnHover__DelegateSignature();
		void OnSendPlayerToOtherTeamClicked__DelegateSignature(class UUI_CustomMatch_PlayerCard_C* TeamPlayerCard);
		void OnPlayerClicked__DelegateSignature(class UUI_CustomMatch_PlayerCard_C* PlayerCard);
		void OnRemovePlayerClicked__DelegateSignature(class UUI_CustomMatch_PlayerCard_C* TeamPlayerItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
