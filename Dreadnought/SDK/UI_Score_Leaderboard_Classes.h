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
	 * WidgetBlueprintGeneratedClass UI_Score_Leaderboard.UI_Score_Leaderboard_C
	 * Size -> 0x0260 (FullSize[0x04A0] - InheritedSize[0x0240])
	 */
	class UUI_Score_Leaderboard_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    HideShowLeaderboardEntries;                              // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Backdrop;                                                // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      ControlsBox;                                             // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          FleetText;                                               // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Dropdown_Generic_C*                              FleetTierDropdown;                                       // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Dropdown_Generic_C*                              GameModeDropdown;                                        // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          gameModeText;                                            // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        LeaderboardEntries;                                      // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        SettingsPanel;                                           // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Dropdown_Generic_C*                              TimeSpanDropDown;                                        // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TimeSpanText;                                            // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        UI_Score_Leaderboard_Item;                               // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        UI_Score_Leaderboard_Item_1;                             // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        UI_Score_Leaderboard_Item_2;                             // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        UI_Score_Leaderboard_Item_3;                             // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        UI_Score_Leaderboard_Item_4;                             // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        UI_Score_Leaderboard_Item_5;                             // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        UI_Score_Leaderboard_Item_6;                             // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        UI_Score_Leaderboard_Item_7;                             // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        UI_Score_Leaderboard_Item_8;                             // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        UI_Score_Leaderboard_Item_9;                             // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        UI_Score_Leaderboard_Item_10;                            // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        UI_Score_Leaderboard_Item_11;                            // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        UI_Score_Leaderboard_Item_12;                            // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        UI_Score_Leaderboard_Item_13;                            // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        UI_Score_Leaderboard_Item_14;                            // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        UI_Score_Leaderboard_Item_15;                            // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FLeaderboardUIData                                  LeaderboardData;                                         // 0x0320(0x0090) Edit, BlueprintVisible
		int32_t                                                    TopRanksDisplayed;                                       // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T2XA[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTimeSpanIndexChanged;                                  // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFleetTierChanged;                                      // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FUIAccordionFilterCategoryOptionData>        FleetTierOptions;                                        // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        FleetTierStrings;                                        // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FText>                                        GameModeStrings;                                         // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FUIAccordionFilterCategoryOptionData>        GameModeOptions;                                         // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FUIAccordionFilterCategoryOptionData>        TimeSpanOptions;                                         // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        TimeSpanStrings;                                         // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FScriptMulticastDelegate                             OnGameModeChanged;                                       // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<EYGameModeType>                                     GameModes;                                               // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    selectedDropdownIndex;                                   // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_95LR[0x4];                                   // 0x045C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_Dropdown_Generic_C*                              CurrentlySelectedDropdown;                               // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DropdownOpen;                                            // 0x0468(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsDirty;                                                 // 0x0469(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4RWM[0x6];                                   // 0x046A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSettingsChanged;                                       // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    selectedColumnIndex;                                     // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    SelectedEntryIndex;                                      // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UUI_Score_Leaderboard_Item_C*                        CurrentlySelectedLeaderboardEntry;                       // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             OnPlayerOptionsOpen;                                     // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnLeaderboardPlayerClicked(int32_t index);
		void UpdatePlayerData(const struct FPlayerUIData& PlayerData);
		void HandleNavRight();
		void HandleNavLeft();
		void IsDropdownOpen(bool* IsOpen);
		void HandleFocus();
		void HandleUnfocus();
		void SetCurrentlySelectedWidget();
		void HandleUIAction();
		void HandleNavDown();
		void HandleNavUp();
		void InitiateProcessing();
		void SetupSettingOptions();
		void HideEntries(bool bHide);
		void PopulatePlayerEntry(const struct FLeaderboardUIEntry& playerentry);
		void ClearCurrentLeaderboard();
		void SetupLeaderboardEntry(const struct FLeaderboardUIEntry& LeaderboardEntry, int32_t index);
		void PopulateLeaderboard(const struct FLeaderboardUIData& LeaderboardData);
		void BndEvt__GameModeDropdown_K2Node_ComponentBoundEvent_72_OnSelectionChanged__DelegateSignature(int32_t categoryIndex, int32_t selectedIndex);
		void BndEvt__FleetTierDropdown_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(int32_t categoryIndex, int32_t selectedIndex);
		void BndEvt__TimeSpanDropDown_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature(int32_t categoryIndex, int32_t selectedIndex);
		void ExecuteUbergraph_UI_Score_Leaderboard(int32_t EntryPoint);
		void OnPlayerOptionsOpen__DelegateSignature(int32_t index);
		void OnSettingsChanged__DelegateSignature();
		void OnGameModeChanged__DelegateSignature(EYGameModeType NewMode);
		void OnFleetTierChanged__DelegateSignature(EYFleetType newFleet);
		void OnTimeSpanIndexChanged__DelegateSignature(int32_t newIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
