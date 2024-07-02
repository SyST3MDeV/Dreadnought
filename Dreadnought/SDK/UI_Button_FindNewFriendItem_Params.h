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
	 * Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.IsPlayerAlreadyInvited
	 */
	struct UUI_Button_FindNewFriendItem_C_IsPlayerAlreadyInvited_Params
	{
	public:
		bool                                                       isInvited;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.ToggleCheckMark
	 */
	struct UUI_Button_FindNewFriendItem_C_ToggleCheckMark_Params
	{	};

	/**
	 * Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.On_CheckMark_MouseButtonDown
	 */
	struct UUI_Button_FindNewFriendItem_C_On_CheckMark_MouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UB73[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.GetUserId
	 */
	struct UUI_Button_FindNewFriendItem_C_GetUserId_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.IsInviteButtonChecked
	 */
	struct UUI_Button_FindNewFriendItem_C_IsInviteButtonChecked_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.Construct
	 */
	struct UUI_Button_FindNewFriendItem_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.OnCheckBoxClicked
	 */
	struct UUI_Button_FindNewFriendItem_C_OnCheckBoxClicked_Params
	{	};

	/**
	 * Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.ExecuteUbergraph_UI_Button_FindNewFriendItem
	 */
	struct UUI_Button_FindNewFriendItem_C_ExecuteUbergraph_UI_Button_FindNewFriendItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M07Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
