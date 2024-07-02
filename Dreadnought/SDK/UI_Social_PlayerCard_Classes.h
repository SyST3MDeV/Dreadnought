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
	 * WidgetBlueprintGeneratedClass UI_Social_PlayerCard.UI_Social_PlayerCard_C
	 * Size -> 0x0100 (FullSize[0x0340] - InheritedSize[0x0240])
	 */
	class UUI_Social_PlayerCard_C : public UUI_CustomMatchPlayerCardWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_Generic_CaptainRank_C*                           CaptainRankWidget;                                       // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          NameText;                                                // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             PlayerCardButton;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             PlayerPortraitButton;                                    // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              PortraitImage;                                           // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          SlashText;                                               // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          titleText;                                               // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_OnlineStatusIndicator_C*                 UI_Generic_OnlineStatusIndicator;                        // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          UserNumberText;                                          // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnPlayerCardClicked;                                     // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPlayerPortraitClicked;                                 // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimespan                                           TimeRemaining;                                           // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FPlayerUIData                                       CurrentPlayerData;                                       // 0x02B8(0x0080) Edit, BlueprintVisible, DisableEditOnInstance
		class UTexture2D*                                          PlaceholdCaptainImage;                                   // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetEliteIcon(bool IsElite);
		void SetOnlineStatus(EYUIFriendStatus OnlineStatus);
		void SetData(const struct FPlayerUIData& PlayerData);
		void SetRankTitle(const class FText& RankTitle);
		void SetRankValue(int32_t RankValue);
		void SetCaptainImage(const class FString& imagePath);
		void SetPlayerNumber(int32_t PlayerNumber);
		void SetPlayerName(const class FString& PlayerName);
		void SetRankVisibility(bool IsVisible);
		void UpdatePlayerCard();
		void Construct();
		void BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void OnDataUpdated();
		void ExecuteUbergraph_UI_Social_PlayerCard(int32_t EntryPoint);
		void OnPlayerPortraitClicked__DelegateSignature();
		void OnPlayerCardClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
