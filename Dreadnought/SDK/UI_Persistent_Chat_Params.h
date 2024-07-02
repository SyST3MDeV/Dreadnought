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
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.StopMessageAvailableAnim
	 */
	struct UUI_Persistent_Chat_C_StopMessageAvailableAnim_Params
	{	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.PlayMessageAvailableLoop
	 */
	struct UUI_Persistent_Chat_C_PlayMessageAvailableLoop_Params
	{	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.PlayMessageReceivedAnim
	 */
	struct UUI_Persistent_Chat_C_PlayMessageReceivedAnim_Params
	{	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.TruncateText 
	 */
	struct UUI_Persistent_Chat_C_TruncateText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm)
		class FText                                                TruncatedText;                                           // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.SetSelectedRoom
	 */
	struct UUI_Persistent_Chat_C_SetSelectedRoom_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X0VQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.GetSlateColorFromTabIndex
	 */
	struct UUI_Persistent_Chat_C_GetSlateColorFromTabIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WQM7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateColor                                         Color;                                                   // 0x0008(0x0028)  (Parm, OutParm)
	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.IsChatWindowClosable
	 */
	struct UUI_Persistent_Chat_C_IsChatWindowClosable_Params
	{
	public:
		ERoomType                                                  RoomType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.CloseTab
	 */
	struct UUI_Persistent_Chat_C_CloseTab_Params
	{
	public:
		class UUI_Button_Tab_Chat_C*                               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.SetupPersistentChat
	 */
	struct UUI_Persistent_Chat_C_SetupPersistentChat_Params
	{	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.SetChatIconArrows
	 */
	struct UUI_Persistent_Chat_C_SetChatIconArrows_Params
	{	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.ScrollTabs
	 */
	struct UUI_Persistent_Chat_C_ScrollTabs_Params
	{
	public:
		bool                                                       IsScrollLeft;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1A1R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.SetTabScrollButtonVisibility
	 */
	struct UUI_Persistent_Chat_C_SetTabScrollButtonVisibility_Params
	{	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.SendChat
	 */
	struct UUI_Persistent_Chat_C_SendChat_Params
	{	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.CreateMessageList
	 */
	struct UUI_Persistent_Chat_C_CreateMessageList_Params
	{	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.CreateSocialDropdown
	 */
	struct UUI_Persistent_Chat_C_CreateSocialDropdown_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FUI_Struct_TabButtonData>                    Options;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.SocialDropdownOptionClicked
	 */
	struct UUI_Persistent_Chat_C_SocialDropdownOptionClicked_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C18Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.DestroySocialDropdown
	 */
	struct UUI_Persistent_Chat_C_DestroySocialDropdown_Params
	{	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.UserNameClicked
	 */
	struct UUI_Persistent_Chat_C_UserNameClicked_Params
	{
	public:
		class UUI_Chat_Row_C*                                      ChatRow;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.UpdateTabs
	 */
	struct UUI_Persistent_Chat_C_UpdateTabs_Params
	{
	public:
		TArray<struct FChatRoomDefinition>                         Rooms;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.UpdateRooms
	 */
	struct UUI_Persistent_Chat_C_UpdateRooms_Params
	{	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.Show
	 */
	struct UUI_Persistent_Chat_C_Show_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.Construct
	 */
	struct UUI_Persistent_Chat_C_Construct_Params
	{	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__ChatToggle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Persistent_Chat_C_BndEvt__ChatToggle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__InputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UUI_Persistent_Chat_C_BndEvt__InputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.ChatRoomsChanged
	 */
	struct UUI_Persistent_Chat_C_ChatRoomsChanged_Params
	{	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Persistent_Chat_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__Button_Tabs_ScrollRight_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Persistent_Chat_C_BndEvt__Button_Tabs_ScrollRight_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__Button_Tabs_ScrollLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Persistent_Chat_C_BndEvt__Button_Tabs_ScrollLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__UI_TabList_Scrolling_Chat_K2Node_ComponentBoundEvent_96_OnTabClicked__DelegateSignature
	 */
	struct UUI_Persistent_Chat_C_BndEvt__UI_TabList_Scrolling_Chat_K2Node_ComponentBoundEvent_96_OnTabClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__UI_TabList_Scrolling_Chat_K2Node_ComponentBoundEvent_147_OnTabCloseButtonClicked__DelegateSignature
	 */
	struct UUI_Persistent_Chat_C_BndEvt__UI_TabList_Scrolling_Chat_K2Node_ComponentBoundEvent_147_OnTabCloseButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_Tab_Chat_C*                               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.ShowChatWidget
	 */
	struct UUI_Persistent_Chat_C_ShowChatWidget_Params
	{
	public:
		int32_t                                                    roomIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.HandleChatMessageReceived
	 */
	struct UUI_Persistent_Chat_C_HandleChatMessageReceived_Params
	{
	public:
		int32_t                                                    roomIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_Chat.UI_Persistent_Chat_C.ExecuteUbergraph_UI_Persistent_Chat
	 */
	struct UUI_Persistent_Chat_C_ExecuteUbergraph_UI_Persistent_Chat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0P5G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
