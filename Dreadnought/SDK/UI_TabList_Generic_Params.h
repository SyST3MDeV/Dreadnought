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
	 * Function UI_TabList_Generic.UI_TabList_Generic_C.GetTabAtIndex
	 */
	struct UUI_TabList_Generic_C_GetTabAtIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2CQ8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_Button_Tab_Generic_C*                            Tab;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabList_Generic.UI_TabList_Generic_C.SetPlatformButtons
	 */
	struct UUI_TabList_Generic_C_SetPlatformButtons_Params
	{	};

	/**
	 * Function UI_TabList_Generic.UI_TabList_Generic_C.HandleUnfocus
	 */
	struct UUI_TabList_Generic_C_HandleUnfocus_Params
	{
	public:
		int32_t                                                    IndexToUnfocus;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_73IJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TabList_Generic.UI_TabList_Generic_C.HandleFocus
	 */
	struct UUI_TabList_Generic_C_HandleFocus_Params
	{
	public:
		int32_t                                                    IndexToFocus;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IDUE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TabList_Generic.UI_TabList_Generic_C.FocusPreviousTab
	 */
	struct UUI_TabList_Generic_C_FocusPreviousTab_Params
	{	};

	/**
	 * Function UI_TabList_Generic.UI_TabList_Generic_C.FocusNextTab
	 */
	struct UUI_TabList_Generic_C_FocusNextTab_Params
	{	};

	/**
	 * Function UI_TabList_Generic.UI_TabList_Generic_C.GetInitialTab
	 */
	struct UUI_TabList_Generic_C_GetInitialTab_Params
	{
	public:
		class UUI_Button_Tab_Generic_C*                            Item;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabList_Generic.UI_TabList_Generic_C.TabFocused
	 */
	struct UUI_TabList_Generic_C_TabFocused_Params
	{
	public:
		class UUI_Button_Tab_Generic_C*                            source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabList_Generic.UI_TabList_Generic_C.TabClicked
	 */
	struct UUI_TabList_Generic_C_TabClicked_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabList_Generic.UI_TabList_Generic_C.SetTabs
	 */
	struct UUI_TabList_Generic_C_SetTabs_Params
	{
	public:
		TArray<struct FUI_Struct_TabButtonData>                    Tabs;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    selectedIndex;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabList_Generic.UI_TabList_Generic_C.Construct
	 */
	struct UUI_TabList_Generic_C_Construct_Params
	{	};

	/**
	 * Function UI_TabList_Generic.UI_TabList_Generic_C.ExecuteUbergraph_UI_TabList_Generic
	 */
	struct UUI_TabList_Generic_C_ExecuteUbergraph_UI_TabList_Generic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabList_Generic.UI_TabList_Generic_C.OnTabFocused__DelegateSignature
	 */
	struct UUI_TabList_Generic_C_OnTabFocused__DelegateSignature_Params
	{
	public:
		class UUI_Button_Tab_Generic_C*                            source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabList_Generic.UI_TabList_Generic_C.OnTabClicked__DelegateSignature
	 */
	struct UUI_TabList_Generic_C_OnTabClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
