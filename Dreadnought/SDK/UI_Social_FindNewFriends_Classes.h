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
	 * WidgetBlueprintGeneratedClass UI_Social_FindNewFriends.UI_Social_FindNewFriends_C
	 * Size -> 0x0118 (FullSize[0x0390] - InheritedSize[0x0278])
	 */
	class UUI_Social_FindNewFriends_C : public UUI_FindNewFriendsScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BG;                                                      // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ButtonCancel;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ButtonSendInvites;                                       // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWrapBox*                                            FoundPlayersWrapBox;                                     // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          NumberOfInvites;                                         // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              OverlayBG;                                               // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          ScrollBox_1;                                             // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextWarning;                                             // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CustomMatch_FriendItem_C*                        UI_CustomMatch_FriendItem;                               // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CustomMatch_FriendItem_C*                        UI_CustomMatch_FriendItem_1;                             // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CustomMatch_FriendItem_C*                        UI_CustomMatch_FriendItem_C_1;                           // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CustomMatch_FriendItem_C*                        UI_CustomMatch_FriendItem_C_2;                           // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CustomMatch_FriendItem_C*                        UI_CustomMatch_FriendItem_C_3;                           // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots;                                   // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SearchLabel_C*                           UI_Generic_SearchLabel;                                  // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     UIGenericSelectionBracketsBottom;                        // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     UIGenericSelectionBracketsTop;                           // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FUI_Struct_FriendList                               Data;                                                    // 0x0308(0x0030) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class FName>                                        FriendsIdsToInvite;                                      // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_DreadWidget*                                     CurrentlyFocusedItem;                                    // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UUI_DreadWidget*>                             CustomMatchFriendItems;                                  // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FScriptMulticastDelegate                             SearchResultsBuilt;                                      // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             FindNewFriendsCanceled;                                  // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FFindNewFriendUserData>                      friendData;                                              // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void SetTextSearchLengthWarning();
		void SetTextNoResults();
		void BuildSearchResult(TArray<struct FFindNewFriendUserData>* friendData);
		void ResetSearchResults();
		void SearchForFriends(const class FText& InText);
		void Setup();
		void Show(bool IsVisible);
		void UpdateInviteAmount();
		void GatherInvitedFriends();
		void GetNumOfFriendsInThisList(int32_t* Count);
		void GetSocialSection(ESocialSection* SocialSection);
		void Construct();
		void BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_58_OnButtonClicked__DelegateSignature(int32_t index);
		void BndEvt__ButtonSendInvites_K2Node_ComponentBoundEvent_113_OnButtonClicked__DelegateSignature(int32_t index);
		void OnStartSearch(const class FText& filterText);
		void OnSearchForUsersResult(TArray<struct FFindNewFriendUserData> foundUsers);
		void ExecuteUbergraph_UI_Social_FindNewFriends(int32_t EntryPoint);
		void FindNewFriendsCanceled__DelegateSignature();
		void SearchResultsBuilt__DelegateSignature(int32_t index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
