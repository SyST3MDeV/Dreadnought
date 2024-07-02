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
	 * Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.CloseAction
	 */
	struct UUI_CustomMatch_FriendList_C_CloseAction_Params
	{	};

	/**
	 * Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.GetFriendListItems
	 */
	struct UUI_CustomMatch_FriendList_C_GetFriendListItems_Params
	{
	public:
		TArray<class UUI_CustomMatch_FriendItem_C*>                CurrentFriendList;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.UpdateInviteAmount
	 */
	struct UUI_CustomMatch_FriendList_C_UpdateInviteAmount_Params
	{	};

	/**
	 * Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.GatherCheckedFriends
	 */
	struct UUI_CustomMatch_FriendList_C_GatherCheckedFriends_Params
	{	};

	/**
	 * Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.AddFriendItemsToList
	 */
	struct UUI_CustomMatch_FriendList_C_AddFriendItemsToList_Params
	{
	public:
		TArray<struct FFriendsUserData>                            Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.SetFriends
	 */
	struct UUI_CustomMatch_FriendList_C_SetFriends_Params
	{
	public:
		TArray<struct FFriendsUserData>                            FriendList;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FFriendsUserData>                            FriendListData;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.GetNumOfFriendsInThisList
	 */
	struct UUI_CustomMatch_FriendList_C_GetNumOfFriendsInThisList_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.GetSocialSection
	 */
	struct UUI_CustomMatch_FriendList_C_GetSocialSection_Params
	{
	public:
		ESocialSection                                             SocialSection;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.Construct
	 */
	struct UUI_CustomMatch_FriendList_C_Construct_Params
	{	};

	/**
	 * Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_58_OnButtonClicked__DelegateSignature
	 */
	struct UUI_CustomMatch_FriendList_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_58_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.BndEvt__ButtonSendInvites_K2Node_ComponentBoundEvent_113_OnButtonClicked__DelegateSignature
	 */
	struct UUI_CustomMatch_FriendList_C_BndEvt__ButtonSendInvites_K2Node_ComponentBoundEvent_113_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.ExecuteUbergraph_UI_CustomMatch_FriendList
	 */
	struct UUI_CustomMatch_FriendList_C_ExecuteUbergraph_UI_CustomMatch_FriendList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.OnFriendInviteListClosed__DelegateSignature
	 */
	struct UUI_CustomMatch_FriendList_C_OnFriendInviteListClosed__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.OnInviteListCreated__DelegateSignature
	 */
	struct UUI_CustomMatch_FriendList_C_OnInviteListCreated__DelegateSignature_Params
	{
	public:
		class UUI_CustomMatch_FriendList_C*                        source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
