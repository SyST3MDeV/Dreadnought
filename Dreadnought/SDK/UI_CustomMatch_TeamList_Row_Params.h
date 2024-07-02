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
	 * Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.Action
	 */
	struct UUI_CustomMatch_TeamList_Row_C_Action_Params
	{	};

	/**
	 * Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.HandleUnfocus
	 */
	struct UUI_CustomMatch_TeamList_Row_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.HandleFocus
	 */
	struct UUI_CustomMatch_TeamList_Row_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.HasFocus
	 */
	struct UUI_CustomMatch_TeamList_Row_C_HasFocus_Params
	{
	public:
		bool                                                       IsChildFocused;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.GetActiveWidgetNavItems
	 */
	struct UUI_CustomMatch_TeamList_Row_C_GetActiveWidgetNavItems_Params
	{
	public:
		TArray<class UButton*>                                     Output_Get;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.HandleGamePadUnfocus
	 */
	struct UUI_CustomMatch_TeamList_Row_C_HandleGamePadUnfocus_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.HandleGamePadFocus
	 */
	struct UUI_CustomMatch_TeamList_Row_C_HandleGamePadFocus_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.Construct
	 */
	struct UUI_CustomMatch_TeamList_Row_C_Construct_Params
	{	};

	/**
	 * Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.OnActionReceived
	 */
	struct UUI_CustomMatch_TeamList_Row_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.ExecuteUbergraph_UI_CustomMatch_TeamList_Row
	 */
	struct UUI_CustomMatch_TeamList_Row_C_ExecuteUbergraph_UI_CustomMatch_TeamList_Row_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MPVJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.OnUnhover__DelegateSignature
	 */
	struct UUI_CustomMatch_TeamList_Row_C_OnUnhover__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.OnHover__DelegateSignature
	 */
	struct UUI_CustomMatch_TeamList_Row_C_OnHover__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_TeamList_Row.UI_CustomMatch_TeamList_Row_C.OnClicked__DelegateSignature
	 */
	struct UUI_CustomMatch_TeamList_Row_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_CustomMatch_TeamList_Row_C*                      TeamListRow;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
