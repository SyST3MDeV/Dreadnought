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
	 * WidgetBlueprintGeneratedClass UI_CustomMatch_Settings.UI_CustomMatch_Settings_C
	 * Size -> 0x0101 (FullSize[0x0341] - InheritedSize[0x0240])
	 */
	class UUI_CustomMatch_Settings_C : public UUI_CustomMatchSettingsWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BGOptions;                                               // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ButtonGameOptions;                                       // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ButtonStartMatch;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_CheckBox_C*                              CheckBoxTeam1Ai;                                         // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_CheckBox_C*                              CheckBoxTeam2Ai;                                         // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Dropdown_Generic_C*                              GameModeDropdown;                                        // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              GameModeIconImage;                                       // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Dropdown_Generic_C*                              MapDropdown;                                             // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              MapImage;                                                // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        SettingsContainer;                                       // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextMapName;                                             // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots_1;                                 // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnFillTeamWithAIChecked;                                 // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnAdvanceClicked;                                        // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsLocalPlayerHost_2;                                     // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0Z6C[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGameModeSelected;                                      // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnMapSelected;                                           // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FYCustomMatchScreenSettings                         ScreenSettings;                                          // 0x02F0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LocalGameMode;                                           // 0x0328(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsDropdownOpen;                                          // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HandleUnfocus(int32_t IndexToFocus);
		void HandleFocus(int32_t IndexToFocus);
		void GetFocusableWidgets(TArray<class UUI_DreadWidget*>* WidgetList);
		void HandleDoRefresh();
		void RefreshDropdowns(int32_t gameModeIndex, int32_t mapIndex);
		void HandleRoomStateChanged(EYCustomRoomState OldScreenState, EYCustomRoomState NewScreenState);
		void HandleSettingsChanged(const struct FYCustomMatchScreenSettings& ScreenSettings);
		void HandleDataReady();
		void BndEvt__ButtonStartMatch_K2Node_ComponentBoundEvent_435_OnButtonClicked__DelegateSignature(int32_t index);
		void DataReady();
		void BndEvt__GameModeDropdown_K2Node_ComponentBoundEvent_10_OnSelectionChanged__DelegateSignature(int32_t categoryIndex, int32_t selectedIndex);
		void BndEvt__MapDropdown_K2Node_ComponentBoundEvent_11_OnSelectionChanged__DelegateSignature(int32_t categoryIndex, int32_t selectedIndex);
		void SettingsChanged(const struct FYCustomMatchScreenSettings& Settings);
		void RoomStateChanged(EYCustomRoomState oldRoomState, EYCustomRoomState newRoomState);
		void DoRefresh();
		void Construct();
		void BndEvt__CheckBoxTeam1Ai_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(bool IsChecked, int32_t CheckBoxIndex);
		void BndEvt__CheckBoxTeam2Ai_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature(bool IsChecked, int32_t CheckBoxIndex);
		void ExecuteUbergraph_UI_CustomMatch_Settings(int32_t EntryPoint);
		void OnMapSelected__DelegateSignature(const class FText& SelectedMap);
		void OnGameModeSelected__DelegateSignature(const class FText& SelectedGameMode);
		void OnAdvanceClicked__DelegateSignature();
		void OnFillTeamWithAIChecked__DelegateSignature(bool IsChecked, int32_t TeamNumber);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
