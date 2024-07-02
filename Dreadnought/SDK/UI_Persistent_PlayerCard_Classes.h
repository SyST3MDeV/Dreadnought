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
	 * WidgetBlueprintGeneratedClass UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C
	 * Size -> 0x0140 (FullSize[0x0388] - InheritedSize[0x0248])
	 */
	class UUI_Persistent_PlayerCard_C : public UUI_PersistentPlayerCardWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             BecomeEliteButton;                                       // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          BecomeEliteText;                                         // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_CaptainRank_C*                           CaptainRankWidget;                                       // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          EliteStatusText;                                         // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_6;                                                 // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          NameText;                                                // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             PlayerPortraitButton;                                    // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              PortraitImage;                                           // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_ProgressBar_C*                           RankProgressBar;                                         // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            RankProgressBarContainer;                                // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          SlashText;                                               // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          titleText;                                               // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          UserNumberText;                                          // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnPlayerCardClicked;                                     // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPlayerPortraitClicked;                                 // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FPlayerUIData                                       CurrentPlayerData;                                       // 0x02D8(0x0080) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                EliteStatusTextPS4;                                      // 0x0358(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                EliteStatusTextPC;                                       // 0x0370(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateTimers(float DeltaTime);
		void SetEliteIcon(bool IsElite);
		void SetData(const struct FPlayerUIData& PlayerData);
		void SetEliteStatusText();
		void SetProgressBarColor(bool IsElite);
		void SetRankProgressVisibility(bool IsMaxRank);
		void SetRankProgress(float RankProgress);
		void SetRankTitle(const class FText& RankTitle);
		void SetRankValue(int32_t RankValue);
		void SetCaptainImage(const class FString& imagePath);
		void SetPlayerNumber(int32_t PlayerNumber);
		void SetPlayerName(const class FString& PlayerName);
		void SetEliteButtonVisiblity(bool IsElite);
		void SetRankVisibility(bool IsVisible);
		void Setup();
		void Construct();
		void BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__BecomeEliteButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_UI_Persistent_PlayerCard(int32_t EntryPoint);
		void OnPlayerPortraitClicked__DelegateSignature();
		void OnPlayerCardClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
