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
	 * WidgetBlueprintGeneratedClass UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C
	 * Size -> 0x0058 (FullSize[0x02D0] - InheritedSize[0x0278])
	 */
	class UUI_Screen_FindNewFriends_C : public UUI_FindNewFriendsScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             CloseButton;                                             // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              FindNewFriendsImage;                                     // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SearchLabel_C*                           SearchForFriends;                                        // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          SearchResultScrollBox;                                   // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                SendFriendInvites;                                       // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_FindNewFriendItem_C*                      UI_Button_FindNewFriendItem;                             // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          WarningText;                                             // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<class UUI_Button_FindNewFriendItem_C*>              ListOfFindNewFriendItemWidgets;                          // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HandleInput(EUI_MenuActions Selection);
		void GatherCheckedFriendsAndSendInvites();
		void BuildSearchResults(TArray<struct FFindNewFriendUserData>* SearchResults);
		void ResetSearchLabel();
		void ResetSearchResults();
		void Construct();
		void OnTransitionIn();
		void OnStartSearch(const class FText& filterText);
		void OnSearchForUsersResult(TArray<struct FFindNewFriendUserData> foundUsers);
		void OnCloseButtonClicked();
		void OnSendFriendInvitesButtonClicked(int32_t index);
		void OnTransitionOut();
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void ExecuteUbergraph_UI_Screen_FindNewFriends(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
