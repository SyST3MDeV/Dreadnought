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
	 * WidgetBlueprintGeneratedClass UI_Social_FriendList.UI_Social_FriendList_C
	 * Size -> 0x00D0 (FullSize[0x0310] - InheritedSize[0x0240])
	 */
	class UUI_Social_FriendList_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Focus;                                                   // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ButtonHeader;                                            // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              CollapseArrow;                                           // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              FocusImage;                                              // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              FocusImageBG;                                            // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWrapBox*                                            ListBox;                                                 // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextCurrentAmount;                                       // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextStatus;                                              // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_FriendItem_C*                             UI_Button_FriendItem;                                    // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_FriendItem_C*                             UI_Button_FriendItem_4;                                  // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_FriendItem_C*                             UI_Button_FriendItem_5;                                  // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FUI_Struct_FriendList                               Data;                                                    // 0x02A0(0x0030) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnFriendItemClicked;                                     // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnWhisperChatButtonClicked;                              // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsShowing;                                               // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R5HF[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_Button_FriendItem_C*>                     FriendItems;                                             // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_DreadWidget*                                     CurrentlyFocusedItem;                                    // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HandleUnfocus();
		void HandleFocus();
		void SetupHeader();
		void PopulateList();
		void ShowList(bool Show);
		void GetNumOfFriendsInThisList(int32_t* Count);
		void GetSocialSection(ESocialSection* SocialSection);
		void Construct();
		void WhisperChatButtonClicked_FromItemWidget(class UUI_Button_FriendItem_C* source);
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature();
		void OnClickedFriendItem(class UUI_Button_FriendItem_C* source);
		void BndEvt__ButtonHeader_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ButtonHeader_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void OnActionReceived();
		void ExecuteUbergraph_UI_Social_FriendList(int32_t EntryPoint);
		void OnWhisperChatButtonClicked__DelegateSignature(class UUI_Button_FriendItem_C* source);
		void OnFriendItemClicked__DelegateSignature(class UUI_Button_FriendItem_C* SourceFriendItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
