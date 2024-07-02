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
	 * Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.GetSocialSection
	 */
	struct UUI_Button_FriendSectionHeader_C_GetSocialSection_Params
	{
	public:
		ESocialSection                                             SocialSection;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.SetSectionCount
	 */
	struct UUI_Button_FriendSectionHeader_C_SetSectionCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ENMC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.BndEvt__HeaderButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_FriendSectionHeader_C_BndEvt__HeaderButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.Construct
	 */
	struct UUI_Button_FriendSectionHeader_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.ExecuteUbergraph_UI_Button_FriendSectionHeader
	 */
	struct UUI_Button_FriendSectionHeader_C_ExecuteUbergraph_UI_Button_FriendSectionHeader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.OnHeaderClicked__DelegateSignature
	 */
	struct UUI_Button_FriendSectionHeader_C_OnHeaderClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_FriendSectionHeader_C*                    HeaderWidget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
