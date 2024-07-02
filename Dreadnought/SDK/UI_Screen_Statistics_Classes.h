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
	 * WidgetBlueprintGeneratedClass UI_Screen_Statistics.UI_Screen_Statistics_C
	 * Size -> 0x00A8 (FullSize[0x0460] - InheritedSize[0x03B8])
	 */
	class UUI_Screen_Statistics_C : public UUI_StatisticsScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                UI_Button_Generic;                                       // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     UI_Generic_SelectionBracketsBottom;                      // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     UI_Generic_SelectionBracketsTop;                         // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Statistics_FlightLog_C*                          UI_Statistics_FlightLog;                                 // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Statistics_Leaderboard_C*                        UI_Statistics_Leaderboard;                               // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Statistics_StatComparison_C*                     UI_Statistics_StatComparison;                            // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    FriendStartIndex;                                        // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		EStatisticsUIType                                          FriendStatFilter;                                        // 0x040C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_VI0O[0x3];                                   // 0x040D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    selectedIndex;                                           // 0x0410(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GGWE[0x4];                                   // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_CustomMatch_PlayerCard_C*>                LeaderboardCaptainCards;                                 // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      PlayerCardRightPadding;                                  // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M7Q4[0x4];                                   // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_Statistics_LeaderboardItem_C*>            LeaderboardPlayerCards;                                  // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_DreadWidget*                                     CurrentlyFoucsedItem;                                    // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLegendPromptData>                           PS4Legend;                                               // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       IsDropdownOpen;                                          // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsRibbonsButtonFocused;                                  // 0x0459(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NK4S[0x2];                                   // 0x045A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumColumnsLeaderboard;                                   // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HandleGamepadGranularLeftRight();
		void HandleGamepadGranularRight();
		void HandleGamepadGranularLeft();
		void HandleGamepadGranularDown();
		void HandleGamepadGranularUp();
		void HandleDropdown(bool DropdownOpen);
		void SetPS4Legend();
		void HandleGamepadActionSecondary();
		void HandleGamepadUpSection();
		void HandleGamepadDownSection();
		void SetupStatComparison();
		void GamepadNavSetup();
		void WidgetSetup();
		void HandleGamepadRightSection();
		void HandleGamepadLeftSection();
		void HandleGamepadAction();
		void UpdateCurrentlyFocusedItem(class UUI_DreadWidget* source);
		void HandleInput(EUI_MenuActions GamePadInput);
		void HandleRibbonsButtonClicked();
		void SetupPlayerComparison();
		void SetupFlightLog();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimComplete();
		void TransitionOutAnimComplete();
		void HandleStatisticsUIUpdated();
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void Construct();
		void BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_40_OnButtonClicked__DelegateSignature(int32_t index);
		void ExecuteUbergraph_UI_Screen_Statistics(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
