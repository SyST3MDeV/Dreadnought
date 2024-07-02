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
	 * WidgetBlueprintGeneratedClass UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C
	 * Size -> 0x0108 (FullSize[0x0340] - InheritedSize[0x0238])
	 */
	class UUI_CustomMatch_FriendList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BG;                                                      // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ButtonCancel;                                            // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ButtonSendInvites;                                       // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UEditableTextBox*                                    FriendSearchTextBox;                                     // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          InviteScrollBox;                                         // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          NumberOfInvites;                                         // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWrapBox*                                            OnlineWrapBox;                                           // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              OverlayBG;                                               // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CustomMatch_FriendItem_C*                        UI_CustomMatch_FriendItem;                               // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CustomMatch_FriendItem_C*                        UI_CustomMatch_FriendItem_1;                             // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CustomMatch_FriendItem_C*                        UI_CustomMatch_FriendItem_C_1;                           // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CustomMatch_FriendItem_C*                        UI_CustomMatch_FriendItem_C_2;                           // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CustomMatch_FriendItem_C*                        UI_CustomMatch_FriendItem_C_3;                           // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots;                                   // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     UIGenericSelectionBracketsBottom;                        // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     UIGenericSelectionBracketsTop;                           // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FUI_Struct_FriendList                               Data;                                                    // 0x02C0(0x0030) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnInviteListCreated;                                     // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFriendInviteListClosed;                                // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UUI_CustomMatch_FriendItem_C*>                FriendList;                                              // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FFriendsUserData>                            FriendListData;                                          // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FFriendsUserData>                            FriendsToInviteList;                                     // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void CloseAction();
		void GetFriendListItems(TArray<class UUI_CustomMatch_FriendItem_C*>* CurrentFriendList);
		void UpdateInviteAmount();
		void GatherCheckedFriends();
		void AddFriendItemsToList(TArray<struct FFriendsUserData>* Array);
		void SetFriends(TArray<struct FFriendsUserData>* FriendList, TArray<struct FFriendsUserData>* FriendListData);
		void GetNumOfFriendsInThisList(int32_t* Count);
		void GetSocialSection(ESocialSection* SocialSection);
		void Construct();
		void BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_58_OnButtonClicked__DelegateSignature(int32_t index);
		void BndEvt__ButtonSendInvites_K2Node_ComponentBoundEvent_113_OnButtonClicked__DelegateSignature(int32_t index);
		void ExecuteUbergraph_UI_CustomMatch_FriendList(int32_t EntryPoint);
		void OnFriendInviteListClosed__DelegateSignature();
		void OnInviteListCreated__DelegateSignature(class UUI_CustomMatch_FriendList_C* source);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
