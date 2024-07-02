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
	 * WidgetBlueprintGeneratedClass UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C
	 * Size -> 0x0040 (FullSize[0x0280] - InheritedSize[0x0240])
	 */
	class UUI_Notifications_MessagePanel_FriendInvite_C : public UUI_NotificationPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          headerText;                                              // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          MessageText;                                             // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Social_PlayerCard_C*                             PlayerCardWidget;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TimestampText;                                           // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                Header;                                                  // 0x0268(0x0018) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void Setup(class UNotificationData* NotificationData);
		class FText FormatDateTimeString(const struct FDateTime& InDateTime);
		void OnShow();
		void OnHide();
		void NotificationDataReceived(class UNotificationData* NotificationData);
		void ExecuteUbergraph_UI_Notifications_MessagePanel_FriendInvite(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
