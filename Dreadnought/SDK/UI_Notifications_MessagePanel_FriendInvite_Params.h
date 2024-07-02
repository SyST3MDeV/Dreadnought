#pragma once

/**
 * Name: Dreadnought
 * Version: Latest
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.Setup
	 */
	struct UUI_Notifications_MessagePanel_FriendInvite_C_Setup_Params
	{
	public:
		class UNotificationData*                                   NotificationData;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.FormatDateTimeString
	 */
	struct UUI_Notifications_MessagePanel_FriendInvite_C_FormatDateTimeString_Params
	{
	public:
		struct FDateTime                                           InDateTime;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.OnShow
	 */
	struct UUI_Notifications_MessagePanel_FriendInvite_C_OnShow_Params
	{	};

	/**
	 * Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.OnHide
	 */
	struct UUI_Notifications_MessagePanel_FriendInvite_C_OnHide_Params
	{	};

	/**
	 * Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.NotificationDataReceived
	 */
	struct UUI_Notifications_MessagePanel_FriendInvite_C_NotificationDataReceived_Params
	{
	public:
		class UNotificationData*                                   NotificationData;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.ExecuteUbergraph_UI_Notifications_MessagePanel_FriendInvite
	 */
	struct UUI_Notifications_MessagePanel_FriendInvite_C_ExecuteUbergraph_UI_Notifications_MessagePanel_FriendInvite_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_45DB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
