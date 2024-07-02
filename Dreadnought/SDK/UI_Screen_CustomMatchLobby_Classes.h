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
	 * WidgetBlueprintGeneratedClass UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C
	 * Size -> 0x01A8 (FullSize[0x04C8] - InheritedSize[0x0320])
	 */
	class UUI_Screen_CustomMatchLobby_C : public UI_CustomMatchScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     BracketBottomSetttings;                                  // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     BracketBottomTeams;                                      // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     BracketTopSettings;                                      // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     BracketTopTeams;                                         // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ButtonTeamsPanel;                                        // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_4;                                                 // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CustomMatch_TeamList_C*                          TeamList1;                                               // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CustomMatch_TeamList_C*                          TeamList2;                                               // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CustomMatch_FriendList_C*                        UI_CustomMatch_FriendList;                               // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CustomMatch_Settings_C*                          UI_CustomMatch_Settings;                                 // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Social_FriendOptions_C*                          UI_Social_Player_Options;                                // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FPlayerUIData                                       PlayerData;                                              // 0x03A0(0x0080) Edit, BlueprintVisible, DisableEditOnInstance
		struct FUI_Struct_FriendList                               FriendsListData;                                         // 0x0420(0x0030) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              Team;                                                    // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QUH1[0x7];                                   // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_Popup_CustomMatchLobby_FleetSelect_C*            FleetSelectPopup;                                        // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EYFleetType                                                fleetType;                                               // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EYFleetType                                                maxFleetType;                                            // 0x0461(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4EK9[0x2];                                   // 0x0462(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentIndex;                                            // 0x0464(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_DreadWidget*                                     CurrentlyFocusedItem;                                    // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLegendPromptData>                           ButtonHintsHost;                                         // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FLegendPromptData>                           ButtonHintsClient;                                       // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_DreadWidget*                                     CurrentlyFocusedList;                                    // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    ListIndex;                                               // 0x0498(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumberOfFocusableLists;                                  // 0x049C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsInviteListOpen;                                        // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2LLV[0x3];                                   // 0x04A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentFriendIndex;                                      // 0x04A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumberOfFriendColumns;                                   // 0x04A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasBeenWelcomed;                                        // 0x04AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ALJ5[0x3];                                   // 0x04AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_CustomMatch_PlayerCard_C*                        CurrentlySelectedPlayer;                                 // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOptionsOpen;                                           // 0x04B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EFriendOptionButton                                        StoredOption;                                            // 0x04B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q69D[0x2];                                   // 0x04BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentRowIndex;                                         // 0x04BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentButtonIndex;                                      // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    StoredListIndex;                                         // 0x04C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsTeamListFocused(bool* TeamFocused);
		void GetFocusedTeam(class UUI_CustomMatch_TeamList_C** TeamList);
		void RefreshAllUserData();
		void HandleOptionInput(EUI_MenuActions GamePadInput);
		void HideOptions();
		void HandlePlayerOptionClicked(EFriendOptionButton option);
		void ShowOptions(ESlateVisibility Visibility);
		void HandleActionPlayerOptions(class UUI_CustomMatch_TeamList_C* TeamList, int32_t PlayerIndex);
		void DisplayWelcomePopup();
		void SetBindingsOnScreen();
		void GetNewIndexFromRow(class UUI_CustomMatch_TeamList_C* OtherTeam, int32_t Row, int32_t* UpdatedIndex);
		void GetFriendInviteLength(int32_t* listLength);
		void HandleFriendDown(int32_t newIndex);
		void HandleFriendUp(int32_t newIndex);
		void HandleFriendActionButtonLeftRight();
		void IsFriendActionButtonFocused(bool* IsButtonFocused);
		void FocusFriendItem();
		void UnfocusFriendItem();
		void UpdateFocusedInviteItem();
		void HandleFriendLeftRight(int32_t newIndex);
		void HandleFriendInvitesClosed();
		void HandleInviteInput(EUI_MenuActions GamePadInput);
		bool IsCurrentItemCheckbox();
		void HandleDropdownDown();
		void HandleDropdownUp();
		void HandleDropDownAction();
		bool IsCurrentItemDropdown();
		void HandleBack();
		void IsDropdownOpen(bool* IsDropdownOpen);
		void UpdateCurrentIndex(int32_t UpdatedListIndex);
		bool IsMovingBetweenTeamList(int32_t NewListIndex);
		void GetFocusedRow(class UUI_CustomMatch_TeamList_C* Team, int32_t FocusedIndex, class UUI_CustomMatch_TeamList_Row_C** Item);
		int32_t CalcNumberOfNavigableItems(class UUI_CustomMatch_TeamList_C* Team);
		int32_t GetListLength();
		void HandleGranularLeftRight(int32_t NewListIndex);
		void UpdateCurrentList(int32_t CurrentListIndex);
		void UpdateCurrentlyFocusedItem(int32_t index);
		void UnfocusCurrentItem();
		void HandleGranularUpDown(int32_t NewCurrentIndex);
		void FocusCurrentItem();
		void SetupGamepad();
		void HandleInput(EUI_MenuActions GamePadInput);
		void HandleRoomStateChanged(EYCustomRoomState OldState, EYCustomRoomState NewState);
		void HandleCloseScreen(EYCustomMatchScreenCloseReason CloseReason);
		void GetTeamEnumForList(class UUI_CustomMatch_TeamList_C* TeamList, EYCustomMatchTeam* Team);
		void HandleOnPlayerMoved(class UUI_CustomMatch_TeamList_C* TeamList, int32_t PlayerIndex);
		void HandleOnPlayerRemoved(class UUI_CustomMatch_TeamList_C* TeamList, int32_t PlayerIndex);
		void HandleOnInviteListCreated(class UUI_CustomMatch_FriendList_C* FriendsToInvite);
		void HandleAdvanceButtonClicked();
		void CloseFleetSelectionPopup(bool StartMatchCountdown);
		void UpdateAllTeamSlots(int32_t StartingSlotIndex, unsigned char Team);
		void UpdateTeamSlot(int32_t RowIndex, unsigned char Team, const class FText& SlotName, EYCustomRoomSlotType SlotType);
		void HandleFleetSelectionPopupResult(EYFleetType fleetType);
		void HandleFleetSelectReady(EYFleetType maxFleetType);
		void HandleUserDataRefreshed(class UUI_CustomMatch_TeamList_C* TeamUsers, EYCustomMatchTeam Team);
		void FillRestOfTeamWithAi(bool IsFilling, int32_t TeamToFill);
		void SetBindingsOnTeam(class UUI_CustomMatch_TeamList_C* Team);
		void HandleDataReady();
		void OpenFriendList();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void BndEvt__ButtonTeamsPanel_K2Node_ComponentBoundEvent_592_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ButtonTeamsPanel_K2Node_ComponentBoundEvent_606_OnButtonHoverEvent__DelegateSignature();
		void OnSettingsHovered();
		void OnSettingsUnhovered();
		void DataReady();
		void Construct();
		void UserDataRefreshed();
		void BndEvt__UI_CustomMatch_Settings_K2Node_ComponentBoundEvent_0_OnAdvanceClicked__DelegateSignature();
		void FleetSelectReady(EYFleetType maxFleetType);
		void CloseScreen(EYCustomMatchScreenCloseReason reason);
		void RoomStateChanged(EYCustomRoomState oldRoomState, EYCustomRoomState newRoomState);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void HandleOnPlayerSpeakingUpdated(const struct FSquadVoiceData& UpdateData);
		void BndEvt__UI_Social_Player_Options_K2Node_ComponentBoundEvent_226_OnOptionClicked__DelegateSignature(EFriendOptionButton SelectedOption);
		void ExecuteUbergraph_UI_Screen_CustomMatchLobby(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
