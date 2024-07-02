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
	 * WidgetBlueprintGeneratedClass UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C
	 * Size -> 0x00D4 (FullSize[0x0314] - InheritedSize[0x0240])
	 */
	class UUI_Score_Leaderboard_Item_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             LeaderboardItemButton;                                   // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              PlayerPortrait;                                          // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          RankText;                                                // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          SlashText;                                               // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          StatNumberText;                                          // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          UsernameText;                                            // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          UserNumberText;                                          // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                LeaderboardRank;                                         // 0x0280(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                UserName;                                                // 0x0298(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                ScoreText;                                               // 0x02B0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    index;                                                   // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S5BX[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLeaderboardItemClicked;                                // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       isSelected;                                              // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z2NN[0x3];                                   // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Unfocused;                                               // 0x02E4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FocusedColor;                                            // 0x02F4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0JWR[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PlayerId;                                                // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    UserNumber;                                              // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UpdateUserData(const struct FPlayerUIData& PlayerData);
		void SetSelected(bool Selected);
		void ClearData();
		void SetEmphasized(bool IsEmphasized);
		void SetData(int32_t rank, const class FText& PlayerName, int32_t highscore, const class FName& PlayerId, int32_t PlayerNumber, int32_t index);
		void Construct();
		void OnSynchronizeProperties();
		void BndEvt__LeaderboardItemButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_UI_Score_Leaderboard_Item(int32_t EntryPoint);
		void OnLeaderboardItemClicked__DelegateSignature(int32_t index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
