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
	 * Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.HandleMessageReceived
	 */
	struct UUI_TabList_Scrolling_Chat_C_HandleMessageReceived_Params
	{
	public:
		int32_t                                                    roomIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.TabCloseButtonClicked
	 */
	struct UUI_TabList_Scrolling_Chat_C_TabCloseButtonClicked_Params
	{
	public:
		class UUI_Button_Tab_Chat_C*                               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.TabClicked
	 */
	struct UUI_TabList_Scrolling_Chat_C_TabClicked_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.SetTabs
	 */
	struct UUI_TabList_Scrolling_Chat_C_SetTabs_Params
	{
	public:
		TArray<struct FUI_Struct_TabButtonData>                    Tabs;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    selectedIndex;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.OnTabCloseButtonClicked__DelegateSignature
	 */
	struct UUI_TabList_Scrolling_Chat_C_OnTabCloseButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_Tab_Chat_C*                               source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.OnTabClicked__DelegateSignature
	 */
	struct UUI_TabList_Scrolling_Chat_C_OnTabClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
