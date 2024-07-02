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
	 * WidgetBlueprintGeneratedClass UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C
	 * Size -> 0x02F8 (FullSize[0x0538] - InheritedSize[0x0240])
	 */
	class UUI_Statistics_PlayerCard_C : public UUI_CustomMatchPlayerCardWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BGCard;                                                  // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             BorderPlayerCard;                                        // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             BorderPlayerCardThick;                                   // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             BorderPlayerCardThick2;                                  // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             Button_PlayerPortrait;                                   // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ButtonPlayerCard;                                        // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImagePlayerPortrait;                                     // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextBlockComparedStat;                                   // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextBlockName;                                           // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextBlockSlash;                                          // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextBlockUserNumber;                                     // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextBoxLeaderboardNumber;                                // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnRemovePlayerClicked;                                   // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPlayerPortraitClicked;                                 // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimespan                                           TimeRemaining;                                           // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FPlayerUIData                                       CurrentPlayerData;                                       // 0x02D8(0x0080) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnSendPlayerToOtherTeamClicked;                          // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsCustomPlayerData;                                      // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F77J[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerUIData                                       CustomPlayerData;                                        // 0x0370(0x0080) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    index;                                                   // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D35M[0x4];                                   // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                rank;                                                    // 0x03F8(0x0018) Edit, BlueprintVisible
		class FText                                                UserName;                                                // 0x0410(0x0018) Edit, BlueprintVisible
		class FText                                                Stat;                                                    // 0x0428(0x0018) Edit, BlueprintVisible
		class FText                                                UserNumber;                                              // 0x0440(0x0018) Edit, BlueprintVisible
		class UTexture2D*                                          Portrait;                                                // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             OnLeaderboardItemClicked;                                // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       isSelected;                                              // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VGP7[0x7];                                   // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStatisticsUIListPlayerData                         UIListPlayerData;                                        // 0x0478(0x0098) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    LeaderboardIndex;                                        // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHoveredStatisticsPlayerCard;                           // 0x0514(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3XTO[0x3];                                   // 0x0515(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ColorEmphasized;                                         // 0x0518(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             OnRecievedFocused;                                       // 0x0528(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void HandleFocus();
		void SetDataFromPlayerData();
		void SetHovered();
		void SetData(const struct FStatisticsUIListPlayerData& UIListPlayerData, const class FText& Stat, int32_t index, int32_t LeaderboardIndex);
		void SetEmphasized(bool IsEmphasized);
		void GetData(struct FPlayerUIData* CurrentPlayerData);
		void BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		void ExecuteUbergraph_UI_Statistics_PlayerCard(int32_t EntryPoint);
		void OnRecievedFocused__DelegateSignature(class UUI_DreadWidget* source);
		void OnLeaderboardItemClicked__DelegateSignature(class UUI_Statistics_PlayerCard_C* source);
		void OnSendPlayerToOtherTeamClicked__DelegateSignature(class UUI_CustomMatch_PlayerCard_C* TeamPlayerCard);
		void OnPlayerPortraitClicked__DelegateSignature();
		void OnRemovePlayerClicked__DelegateSignature(class UUI_CustomMatch_PlayerCard_C* TeamPlayerItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
