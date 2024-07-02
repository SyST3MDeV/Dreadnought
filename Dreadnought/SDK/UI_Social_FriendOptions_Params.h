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
	 * Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.NavOptionAction
	 */
	struct UUI_Social_FriendOptions_C_NavOptionAction_Params
	{	};

	/**
	 * Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.HandleOptionUnfocus
	 */
	struct UUI_Social_FriendOptions_C_HandleOptionUnfocus_Params
	{	};

	/**
	 * Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.HandleOptionFocus
	 */
	struct UUI_Social_FriendOptions_C_HandleOptionFocus_Params
	{
	public:
		class UUI_DreadWidget*                                     FocusedWidget;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.NavDownGranular
	 */
	struct UUI_Social_FriendOptions_C_NavDownGranular_Params
	{
	public:
		class UUI_DreadWidget*                                     SelectedWidget;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.NavUpGranular
	 */
	struct UUI_Social_FriendOptions_C_NavUpGranular_Params
	{
	public:
		class UUI_DreadWidget*                                     SelectedWidget;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.HandleFocus
	 */
	struct UUI_Social_FriendOptions_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.GetClickedOption
	 */
	struct UUI_Social_FriendOptions_C_GetClickedOption_Params
	{
	public:
		class UUI_Generic_Button_IconText_C*                       SelectedOption;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EFriendOptionButton                                        FoundOption;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X42P[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.SetOptionsData
	 */
	struct UUI_Social_FriendOptions_C_SetOptionsData_Params
	{
	public:
		class FText                                                UserName;                                                // 0x0000(0x0018)  (Parm)
		TArray<EFriendOptionButton>                                OptionList;                                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.OnClickedOption
	 */
	struct UUI_Social_FriendOptions_C_OnClickedOption_Params
	{
	public:
		class UUI_Generic_Button_IconText_C*                       source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.Construct
	 */
	struct UUI_Social_FriendOptions_C_Construct_Params
	{	};

	/**
	 * Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.OnHoveredOption
	 */
	struct UUI_Social_FriendOptions_C_OnHoveredOption_Params
	{
	public:
		class UUI_Generic_Button_IconText_C*                       source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.OnUnHoveredOption
	 */
	struct UUI_Social_FriendOptions_C_OnUnHoveredOption_Params
	{
	public:
		class UUI_Generic_Button_IconText_C*                       source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.ExecuteUbergraph_UI_Social_FriendOptions
	 */
	struct UUI_Social_FriendOptions_C_ExecuteUbergraph_UI_Social_FriendOptions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LUM6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.OnOptionClicked__DelegateSignature
	 */
	struct UUI_Social_FriendOptions_C_OnOptionClicked__DelegateSignature_Params
	{
	public:
		EFriendOptionButton                                        SelectedOption;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
