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
	 * WidgetBlueprintGeneratedClass UI_Screen_Social.UI_Screen_Social_C
	 * Size -> 0x0130 (FullSize[0x03A8] - InheritedSize[0x0278])
	 */
	class UUI_Screen_Social_C : public UUI_SocialScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_FriendSectionHeader_C*                    BlockedSectionHeader;                                    // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     BracketsFriendListBottom;                                // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     BracketsFriendListTop;                                   // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ButtonFriendsContainer;                                  // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            DividerDot1;                                             // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            DividerDot3;                                             // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                FindFriendsButton;                                       // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          FriendsScrollBox;                                        // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SearchLabel_C*                           FriendsSearchBox;                                        // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                MatchmakingButton;                                       // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_FriendSectionHeader_C*                    OfflineSectionHeader;                                    // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_FriendSectionHeader_C*                    OnlineSectionHeader;                                     // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_FriendSectionHeader_C*                    PendingSectionHeader;                                    // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots;                                   // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Social_FindNewFriends_C*                         UI_Social_FindNewFriends;                                // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Social_FriendOptions_C*                          UI_Social_FriendOptions;                                 // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Social_Squad_C*                                  UI_Social_Squad;                                         // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                FilteredText;                                            // 0x0318(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UUI_Social_FriendList_C*>                     FriendListSections;                                      // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_Button_FriendItem_C*>                     ListOfSquadUsers;                                        // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_Button_FriendItem_C*                             CurrentlySelectedFriend;                                 // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLegendPromptData>                           ButtonHints;                                             // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_DreadWidget*                                     currentItem;                                             // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_Social_FriendList_C*                             CurrentlyFocusedFriendList;                              // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_DreadWidget*                                     CurrentlyFocusedWidget;                                  // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EUI_MenuActions                                            GamePadInput;                                            // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8GWL[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget*                                             CurrentlyFocusedPanel;                                   // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFriendListEmpty;                                       // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y3PH[0x3];                                   // 0x0391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FriendListColumns;                                       // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasFriendListFocused;                                    // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_US1G[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget*                                             PreviouslyFocusedPanel;                                  // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool IsCurrentItemInFriendListLast(class UUI_Social_FriendList_C* CurrentlyFocusedFriendList);
		bool IsCurrentColumnRightmost(class UUI_Social_FriendList_C* CurrentlyFocusedFriendList);
		void HandleGamepadGranularDownSquad();
		void HandleGamepadGranularUpSquad();
		void LeaveSquad(int32_t Unused);
		bool IsValidSquadNavigation();
		bool IsLastSquadItem();
		void HandleGamepadGranularPlayButton();
		void FocusNextSquadItem();
		void HideOptions();
		void HandleFriendOptionClicked(EFriendOptionButton FriendOption);
		void HandleGamepadBack();
		void FocusNextFriendItemInNextFriendList();
		void FocusNextFriendList();
		void FocusCurrentFriendList();
		bool IsValidToFocusFriendItem();
		void HandleFocusFriendListFriendItem();
		void HandleGamepadGranularDownFriendList();
		void HandleGamepadGranularUpFriendList();
		void HandleGamepadGranularRightFriendList();
		void HandleGamepadGranularLeftFriendList();
		void HandleGamepadAction();
		void HandleUnfocusWidget(class UWidget* Widget);
		void HandleFocusWidget(class UWidget* Widget);
		void OnFindNewFriendsCanceled();
		void SetFocusToFindNewFriendsFriendItem(int32_t index);
		void HandleGamepadGranularFindNewFriends();
		void HandleGamepadGranularFriendOptions();
		void HandleGamepadGranularSquad();
		void HandleGamepadUpSection();
		void HandleGamepadDownSection();
		void HandleGamepadGranular();
		void HandleFriendListUnfocus();
		void HandleFriendListFocus();
		void UnfocusFriendItemOrFriendList();
		int32_t GetNextFriendItemIndex(EUI_MenuActions GamePadInput, int32_t listLength, int32_t CurrentIndex, int32_t ColumnNum);
		void SetFocusToFriendListFriendItem(class UUI_Social_FriendList_C* CurrentlyFocusedFriendList, int32_t index);
		void GetNextFriendItemInNextFriendList(int32_t* NextFriendItemIndex);
		void GetNextFriendList(bool* IsEndOfFriendList, class UUI_Social_FriendList_C** NextFriendList);
		void WrappingIndexHelper(int32_t* listLength, int32_t* CurrentIndex, int32_t* NumColumns);
		void HandleGamepadGranularFriendList();
		void HandleGamepadLeftSection();
		void HandleGamepadRightSection();
		void BindButtonEvents(TArray<class UUI_DreadWidget*>* Array);
		void HandleInput(EUI_MenuActions Selection);
		void GetOptionsForSelectedFriend(class UUI_Button_FriendItem_C* SelectedFriend, TArray<EFriendOptionButton>* FriendOptions);
		void ShowOptions(ESlateVisibility InVisibility);
		void Setup();
		void BindSectionHeaderEvents();
		void ScrollToSection(class UUI_Button_FriendSectionHeader_C* HeaderWidget);
		void ResetSectionHeaders();
		void RemoveAllFriendsList();
		void StartSearch(const class FText& SearchString);
		void AddFriendsListToArrayIfNotEmpty(struct FUI_Struct_FriendList* NewFriendsList, TArray<struct FUI_Struct_FriendList>* FriendsListArray);
		void AddToFriendsList(struct FUI_Struct_FriendData* NewFriendData, struct FUI_Struct_FriendList* friendsList);
		void GetFriendsData(TArray<struct FFriendsUserData>* FriendsListData, TArray<struct FUI_Struct_FriendList>* friendsList);
		void SetupFriendsList(TArray<struct FFriendsUserData>* FriendsListData);
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index);
		void SocialListUpdated();
		void UpdateSquadPlayerCard();
		void Construct();
		void OnStartSearch(const class FText& SearchString);
		void OnHeaderSectionClicked(class UUI_Button_FriendSectionHeader_C* HeaderWidget);
		void OnFriendItemClicked(class UUI_Button_FriendItem_C* SourceFriendItem);
		void SetUpWhisperChatFriendItemClickedEvent(class UUI_Social_FriendList_C* List);
		void OnWhisperChatButtonClicked(class UUI_Button_FriendItem_C* source);
		void BndEvt__FindFriendsButton_K2Node_ComponentBoundEvent_123_OnButtonClicked__DelegateSignature(int32_t index);
		void BndEvt__UI_Social_FriendOptions_K2Node_ComponentBoundEvent_1_OnOptionClicked__DelegateSignature(EFriendOptionButton SelectedOption);
		void BndEvt__ButtonFriendsContainer_K2Node_ComponentBoundEvent_187_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ButtonFriendsContainer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void OnFriendsSearchTextCommitted(const class FText& Text, ETextCommit CommitMethod);
		void HandleOnPlayerSpeakingUpdated(const struct FSquadVoiceData& UpdateData);
		void ExecuteUbergraph_UI_Screen_Social(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
