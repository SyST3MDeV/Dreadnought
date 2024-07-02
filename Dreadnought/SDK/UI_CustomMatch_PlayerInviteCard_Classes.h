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
	 * WidgetBlueprintGeneratedClass UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C
	 * Size -> 0x00E8 (FullSize[0x0328] - InheritedSize[0x0240])
	 */
	class UUI_CustomMatch_PlayerInviteCard_C : public UUI_CustomMatchPlayerInviteCardWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_Generic_CaptainRank_C*                           CaptainRankWidget;                                       // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          NameText;                                                // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          OnlineStatusLabel;                                       // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              PortraitImage;                                           // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          SlashText;                                               // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          titleText;                                               // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          UserNumberText;                                          // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnPlayerCardClicked;                                     // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPlayerPortraitClicked;                                 // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimespan                                           TimeRemaining;                                           // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FPlayerUIData                                       CurrentPlayerData;                                       // 0x02A8(0x0080) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetOnlineStatus(const class FText& NewOnlineStatus);
		void SetEliteIcon(bool IsElite);
		void SetData(const struct FPlayerUIData& PlayerData);
		void SetRankTitle(const class FText& RankTitle);
		void SetRankValue(int32_t RankValue);
		void SetCaptainImage(const class FString& imagePath);
		void SetPlayerNumber(int32_t PlayerNumber);
		void SetPlayerName(const class FString& PlayerName);
		void SetRankVisibility(bool IsVisible);
		void Setup(const struct FPlayerUIData& CurrentPlayerData);
		void Construct();
		void BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_UI_CustomMatch_PlayerInviteCard(int32_t EntryPoint);
		void OnPlayerPortraitClicked__DelegateSignature();
		void OnPlayerCardClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
