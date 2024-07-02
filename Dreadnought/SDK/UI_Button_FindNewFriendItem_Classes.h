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
	 * WidgetBlueprintGeneratedClass UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C
	 * Size -> 0x0068 (FullSize[0x02A8] - InheritedSize[0x0240])
	 */
	class UUI_Button_FindNewFriendItem_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             CheckBox;                                                // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              CheckMark;                                               // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             MainButton;                                              // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              OnlineStatusImage;                                       // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Persistent_PlayerCard_C*                         PlayerCard;                                              // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                PlayerName;                                              // 0x0270(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FString                                              CaptainIconPath;                                         // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		int32_t                                                    UserNumber;                                              // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       FriendInviteAlreadySent;                                 // 0x029C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       SendInviteChecked;                                       // 0x029D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MEGT[0x2];                                   // 0x029E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ID;                                                      // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void IsPlayerAlreadyInvited(bool* isInvited);
		void ToggleCheckMark();
		struct FEventReply On_CheckMark_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void GetUserId(class FName* ID);
		void IsInviteButtonChecked(bool* IsChecked);
		void Construct();
		void OnCheckBoxClicked();
		void ExecuteUbergraph_UI_Button_FindNewFriendItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
