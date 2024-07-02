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
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.HandleUnfocus
	 */
	struct UUI_Social_FriendList_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.HandleFocus
	 */
	struct UUI_Social_FriendList_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.SetupHeader
	 */
	struct UUI_Social_FriendList_C_SetupHeader_Params
	{	};

	/**
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.PopulateList
	 */
	struct UUI_Social_FriendList_C_PopulateList_Params
	{	};

	/**
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.ShowList
	 */
	struct UUI_Social_FriendList_C_ShowList_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.GetNumOfFriendsInThisList
	 */
	struct UUI_Social_FriendList_C_GetNumOfFriendsInThisList_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.GetSocialSection
	 */
	struct UUI_Social_FriendList_C_GetSocialSection_Params
	{
	public:
		ESocialSection                                             SocialSection;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.Construct
	 */
	struct UUI_Social_FriendList_C_Construct_Params
	{	};

	/**
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.WhisperChatButtonClicked_FromItemWidget
	 */
	struct UUI_Social_FriendList_C_WhisperChatButtonClicked_FromItemWidget_Params
	{
	public:
		class UUI_Button_FriendItem_C*                             source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Social_FriendList_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.OnClickedFriendItem
	 */
	struct UUI_Social_FriendList_C_OnClickedFriendItem_Params
	{
	public:
		class UUI_Button_FriendItem_C*                             source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.BndEvt__ButtonHeader_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Social_FriendList_C_BndEvt__ButtonHeader_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.BndEvt__ButtonHeader_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Social_FriendList_C_BndEvt__ButtonHeader_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.OnActionReceived
	 */
	struct UUI_Social_FriendList_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.ExecuteUbergraph_UI_Social_FriendList
	 */
	struct UUI_Social_FriendList_C_ExecuteUbergraph_UI_Social_FriendList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_APVG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.OnWhisperChatButtonClicked__DelegateSignature
	 */
	struct UUI_Social_FriendList_C_OnWhisperChatButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_FriendItem_C*                             source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FriendList.UI_Social_FriendList_C.OnFriendItemClicked__DelegateSignature
	 */
	struct UUI_Social_FriendList_C_OnFriendItemClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_FriendItem_C*                             SourceFriendItem;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
