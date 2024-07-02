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
	 * Function UI_Button_FriendItem.UI_Button_FriendItem_C.ClearVoiceChatStatus
	 */
	struct UUI_Button_FriendItem_C_ClearVoiceChatStatus_Params
	{	};

	/**
	 * Function UI_Button_FriendItem.UI_Button_FriendItem_C.UpdateVoiceChatStatus
	 */
	struct UUI_Button_FriendItem_C_UpdateVoiceChatStatus_Params
	{
	public:
		struct FSquadVoiceData                                     VoiceData;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UI_Button_FriendItem.UI_Button_FriendItem_C.HandleUnfocusPS4
	 */
	struct UUI_Button_FriendItem_C_HandleUnfocusPS4_Params
	{	};

	/**
	 * Function UI_Button_FriendItem.UI_Button_FriendItem_C.HandleFocusPS4
	 */
	struct UUI_Button_FriendItem_C_HandleFocusPS4_Params
	{	};

	/**
	 * Function UI_Button_FriendItem.UI_Button_FriendItem_C.HandleFocus
	 */
	struct UUI_Button_FriendItem_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Button_FriendItem.UI_Button_FriendItem_C.UpdatePlayerCard
	 */
	struct UUI_Button_FriendItem_C_UpdatePlayerCard_Params
	{	};

	/**
	 * Function UI_Button_FriendItem.UI_Button_FriendItem_C.Construct
	 */
	struct UUI_Button_FriendItem_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_FriendItem.UI_Button_FriendItem_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_FriendItem_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_FriendItem.UI_Button_FriendItem_C.BndEvt__WhisperChatButton_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_FriendItem_C_BndEvt__WhisperChatButton_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_FriendItem.UI_Button_FriendItem_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_FriendItem_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_FriendItem.UI_Button_FriendItem_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_FriendItem_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_FriendItem.UI_Button_FriendItem_C.OnActionReceived
	 */
	struct UUI_Button_FriendItem_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Button_FriendItem.UI_Button_FriendItem_C.ExecuteUbergraph_UI_Button_FriendItem
	 */
	struct UUI_Button_FriendItem_C_ExecuteUbergraph_UI_Button_FriendItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_FriendItem.UI_Button_FriendItem_C.OnPlayerCardAction__DelegateSignature
	 */
	struct UUI_Button_FriendItem_C_OnPlayerCardAction__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_FriendItem.UI_Button_FriendItem_C.OnWhisperChatButtonClicked__DelegateSignature
	 */
	struct UUI_Button_FriendItem_C_OnWhisperChatButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_FriendItem_C*                             source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_FriendItem.UI_Button_FriendItem_C.OnFriendItemClicked__DelegateSignature
	 */
	struct UUI_Button_FriendItem_C_OnFriendItemClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_FriendItem_C*                             source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
