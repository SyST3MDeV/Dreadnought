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
	 * WidgetBlueprintGeneratedClass UI_Screen_Leaderboard.UI_Screen_Leaderboard_C
	 * Size -> 0x0112 (FullSize[0x048A] - InheritedSize[0x0378])
	 */
	class UUI_Screen_Leaderboard_C : public UUI_Leaderboard_Screen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0378(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionInAnim;                                        // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_C*                             LeaderboardWidget;                                       // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Social_FriendOptions_C*                          UI_Social_PlayerOptions;                                 // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UThrobber*                                           UpdatingThrobber;                                        // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		EYGameModeType                                             GameMode;                                                // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EYFleetType                                                fleetType;                                               // 0x03A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P2AN[0x6];                                   // 0x03A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              WeeklyString;                                            // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              LifetimeString;                                          // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              TimespanString;                                          // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    TimeSpanIndex;                                           // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       isLeaderboardRequestProcessing;                          // 0x03DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_65H1[0x3];                                   // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EYGameModeType>                                     LeaderboardModes;                                        // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    SelectedGameModeIndex;                                   // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bPreviousWeek;                                           // 0x03F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SU8D[0x3];                                   // 0x03F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLeaderboardUIData                                  currentLeaderboardData;                                  // 0x03F8(0x0090) Edit, BlueprintVisible
		bool                                                       bIsSocialOptionsOpen;                                    // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EFriendOptionButton                                        StoredOption;                                            // 0x0489(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ShowOptions();
		void HandleSocialOptionClicked(EFriendOptionButton SeletedOption);
		void HideOptions();
		void HandleOptionInput(EUI_MenuActions GamePadInput);
		void HandleFriendOptionsOpen(int32_t index);
		void HandleDataUpdate();
		void HandleSettingsChanged();
		void HandleGameModeChanged(EYGameModeType NewMode);
		void HandleFleetTierChanged(EYFleetType newFleet);
		void HandleTimeSpanIndexChanged(int32_t newIndex);
		void TransitionAnimComplete();
		void RequestCurrentLeaderboard();
		void tabRight();
		void TabLeft();
		void HandleInput(EUI_MenuActions GamePadInput);
		void PopulateLeaderboard();
		void GetTimeSpanString(int32_t index, class FString* outString);
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void TransitionAnimDone();
		void TransitionOutAnimDone();
		void UserDataRefreshed();
		void ExecuteUbergraph_UI_Screen_Leaderboard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
