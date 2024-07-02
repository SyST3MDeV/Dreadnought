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
	 * Function UI_Chat_MessageList.UI_Chat_MessageList_C.HandleScrollToEndDelayFrames
	 */
	struct UUI_Chat_MessageList_C_HandleScrollToEndDelayFrames_Params
	{	};

	/**
	 * Function UI_Chat_MessageList.UI_Chat_MessageList_C.GetFontColorForChatType
	 */
	struct UUI_Chat_MessageList_C_GetFontColorForChatType_Params
	{
	public:
		EChatType                                                  ChatType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WIDG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        FontColor;                                               // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Chat_MessageList.UI_Chat_MessageList_C.PopulateMessages
	 */
	struct UUI_Chat_MessageList_C_PopulateMessages_Params
	{	};

	/**
	 * Function UI_Chat_MessageList.UI_Chat_MessageList_C.UserNameClicked
	 */
	struct UUI_Chat_MessageList_C_UserNameClicked_Params
	{
	public:
		class UUI_Chat_Row_C*                                      ChatRow;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Chat_MessageList.UI_Chat_MessageList_C.ClipListSize
	 */
	struct UUI_Chat_MessageList_C_ClipListSize_Params
	{	};

	/**
	 * Function UI_Chat_MessageList.UI_Chat_MessageList_C.AddChatMessage
	 */
	struct UUI_Chat_MessageList_C_AddChatMessage_Params
	{
	public:
		struct FChatMessageDefinition                              ChatMessage;                                             // 0x0000(0x0038)  (Parm)
	};

	/**
	 * Function UI_Chat_MessageList.UI_Chat_MessageList_C.Construct
	 */
	struct UUI_Chat_MessageList_C_Construct_Params
	{	};

	/**
	 * Function UI_Chat_MessageList.UI_Chat_MessageList_C.ChatMessagesChanged
	 */
	struct UUI_Chat_MessageList_C_ChatMessagesChanged_Params
	{	};

	/**
	 * Function UI_Chat_MessageList.UI_Chat_MessageList_C.Tick
	 */
	struct UUI_Chat_MessageList_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Chat_MessageList.UI_Chat_MessageList_C.ExecuteUbergraph_UI_Chat_MessageList
	 */
	struct UUI_Chat_MessageList_C_ExecuteUbergraph_UI_Chat_MessageList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Chat_MessageList.UI_Chat_MessageList_C.OnUserNameClicked__DelegateSignature
	 */
	struct UUI_Chat_MessageList_C_OnUserNameClicked__DelegateSignature_Params
	{
	public:
		class UUI_Chat_Row_C*                                      ChatRow;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
