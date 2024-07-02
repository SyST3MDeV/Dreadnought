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
	 * Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.SetOnlineStatusImageVisibility
	 */
	struct UUI_CustomMatch_FriendItem_C_SetOnlineStatusImageVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.SetOnlineStatus
	 */
	struct UUI_CustomMatch_FriendItem_C_SetOnlineStatus_Params
	{
	public:
		class FText                                                NewOnlineStatus;                                         // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.SetRankVisibility
	 */
	struct UUI_CustomMatch_FriendItem_C_SetRankVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.HandleUnfocus
	 */
	struct UUI_CustomMatch_FriendItem_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.HandleFocus
	 */
	struct UUI_CustomMatch_FriendItem_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.HasUserData
	 */
	struct UUI_CustomMatch_FriendItem_C_HasUserData_Params
	{
	public:
		bool                                                       HasAUser;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.SetUpOptions
	 */
	struct UUI_CustomMatch_FriendItem_C_SetUpOptions_Params
	{	};

	/**
	 * Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.SetSquadPlayerCardData
	 */
	struct UUI_CustomMatch_FriendItem_C_SetSquadPlayerCardData_Params
	{	};

	/**
	 * Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.Construct
	 */
	struct UUI_CustomMatch_FriendItem_C_Construct_Params
	{	};

	/**
	 * Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_FriendItem_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_FriendItem_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_73_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CustomMatch_FriendItem_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_73_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.OnActionReceived
	 */
	struct UUI_CustomMatch_FriendItem_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.ExecuteUbergraph_UI_CustomMatch_FriendItem
	 */
	struct UUI_CustomMatch_FriendItem_C_ExecuteUbergraph_UI_CustomMatch_FriendItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K1QT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.OnFriendItemClicked__DelegateSignature
	 */
	struct UUI_CustomMatch_FriendItem_C_OnFriendItemClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
