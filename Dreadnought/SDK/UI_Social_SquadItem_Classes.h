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
	 * WidgetBlueprintGeneratedClass UI_Social_SquadItem.UI_Social_SquadItem_C
	 * Size -> 0x0048 (FullSize[0x0288] - InheritedSize[0x0240])
	 */
	class UUI_Social_SquadItem_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_1;                                                 // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Social_AddFriendToSquadItem_C*                   InviteFriendToSquadBG;                                   // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     SquadWidgetSwitcher;                                     // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_FriendItem_C*                             UI_Button_FriendItem;                                    // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		int32_t                                                    PlayerCardWidgetIndex;                                   // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    AddPlayerWidgetIndex;                                    // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    EmptyWidgetIndex;                                        // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1YHD[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerItemClicked;                                     // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetPlayerId(class FName* ID);
		void UpdateVoiceChatStatus(const struct FSquadVoiceData& VoiceData);
		void HandleFriendItemClicked(class UUI_Button_FriendItem_C* SourceFriendItem);
		void SetPlayerData(const struct FPlayerUserData& PlayerData);
		void IsPlayerActive(bool* IsActive);
		void GetPlayerItem(class UUI_Button_FriendItem_C** UI_Button_FriendItem);
		void SetSquadMemberData(const struct FSquadUserData& SquadMemberData);
		void ShowEmpty();
		void ShowAddButton();
		void ShowPlayer();
		void Construct();
		void ExecuteUbergraph_UI_Social_SquadItem(int32_t EntryPoint);
		void OnPlayerItemClicked__DelegateSignature(class UUI_Button_FriendItem_C* SourcePlayerItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
