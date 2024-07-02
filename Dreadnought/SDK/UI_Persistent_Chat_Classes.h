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
	 * WidgetBlueprintGeneratedClass UI_Persistent_Chat.UI_Persistent_Chat_C
	 * Size -> 0x0170 (FullSize[0x03B8] - InheritedSize[0x0248])
	 */
	class UUI_Persistent_Chat_C : public UUI_ChatWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Anim_NewMessageAvailable;                                // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Anim_Notification;                                       // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Anim_Hidden;                                             // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Anim_Hide;                                               // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Anim_Show;                                               // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             Button_Send;                                             // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             Button_Tabs_ScrollLeft;                                  // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             Button_Tabs_ScrollRight;                                 // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             Button_Toggle_Chat;                                      // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ChatIcon_Arrow_Left;                                     // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ChatIcon_Arrow_Right;                                    // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ChatToggleDropShadow;                                    // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              DropShadow;                                              // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      HorizontalBox_MessageList;                               // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UEditableText*                                       InputBox;                                                // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            Overlay_Chat;                                            // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Text_Channel;                                            // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Chat_MessageList_C*                              UI_Chat_RoomList;                                        // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots;                                   // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TabList_Scrolling_Chat_C*                        UI_TabList_Scrolling_Chat;                               // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       IsShowing;                                               // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FLCV[0x3];                                   // 0x02F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MessageLimit;                                            // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_Chat_MessageList_C*                              CurrentRoomList;                                         // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_Chat_MessageList_C*                              MessageList;                                             // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_Chat_SocialDropdown_C*                           SocialDropdown;                                          // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FUI_Struct_TabButtonData>                    DebugSocialDropdownOptionData;                           // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FUI_Struct_TabButtonData>                    Tabs;                                                    // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    SelectedTabIndex;                                        // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    VisibleTab;                                              // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    TabPages;                                                // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentTabPage;                                          // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_Chat_Button_NewTab_C*                            NewTabButton;                                            // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MouseOffset;                                             // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    TabsPerPageSize;                                         // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FontColorGlobal;                                         // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FontColorLanguage;                                       // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FontColorWhisper;                                        // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FontColorSquad;                                          // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FontColorSystem;                                         // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FontColorCustom;                                         // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void StopMessageAvailableAnim();
		void PlayMessageAvailableLoop();
		void PlayMessageReceivedAnim();
		void TruncateText(const class FText& Text, class FText* TruncatedText);
		void SetSelectedRoom(int32_t index);
		void GetSlateColorFromTabIndex(int32_t index, struct FSlateColor* Color);
		void IsChatWindowClosable(ERoomType RoomType, bool* Result);
		void CloseTab(class UUI_Button_Tab_Chat_C* source);
		void SetupPersistentChat();
		void SetChatIconArrows();
		void ScrollTabs(bool IsScrollLeft);
		void SetTabScrollButtonVisibility();
		void SendChat();
		void CreateMessageList();
		void CreateSocialDropdown(const struct FVector2D& Position, TArray<struct FUI_Struct_TabButtonData>* Options);
		void SocialDropdownOptionClicked(int32_t index);
		void DestroySocialDropdown();
		void UserNameClicked(class UUI_Chat_Row_C* ChatRow);
		void UpdateTabs(TArray<struct FChatRoomDefinition>* Rooms);
		void UpdateRooms();
		void Show(bool Show);
		void Construct();
		void BndEvt__ChatToggle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__InputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void ChatRoomsChanged();
		void BndEvt__SendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_Tabs_ScrollRight_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_Tabs_ScrollLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_TabList_Scrolling_Chat_K2Node_ComponentBoundEvent_96_OnTabClicked__DelegateSignature(int32_t TabIndex);
		void BndEvt__UI_TabList_Scrolling_Chat_K2Node_ComponentBoundEvent_147_OnTabCloseButtonClicked__DelegateSignature(class UUI_Button_Tab_Chat_C* source);
		void ShowChatWidget(int32_t roomIndex);
		void HandleChatMessageReceived(int32_t roomIndex);
		void ExecuteUbergraph_UI_Persistent_Chat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
