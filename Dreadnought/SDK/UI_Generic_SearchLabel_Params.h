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
	 * Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.ClearSearchString
	 */
	struct UUI_Generic_SearchLabel_C_ClearSearchString_Params
	{	};

	/**
	 * Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.HandleUnfocus
	 */
	struct UUI_Generic_SearchLabel_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.HandleFocus
	 */
	struct UUI_Generic_SearchLabel_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.OnMouseButtonDown_ConfirmSearch
	 */
	struct UUI_Generic_SearchLabel_C_OnMouseButtonDown_ConfirmSearch_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I1GB[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.SetDefaultTextAndReset
	 */
	struct UUI_Generic_SearchLabel_C_SetDefaultTextAndReset_Params
	{
	public:
		class FText                                                DefaultText;                                             // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.StartSearch
	 */
	struct UUI_Generic_SearchLabel_C_StartSearch_Params
	{
	public:
		class FText                                                SearchString;                                            // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.BndEvt__SearchTextBox_K2Node_ComponentBoundEvent_62_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UUI_Generic_SearchLabel_C_BndEvt__SearchTextBox_K2Node_ComponentBoundEvent_62_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.OnActionReceived
	 */
	struct UUI_Generic_SearchLabel_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.ExecuteUbergraph_UI_Generic_SearchLabel
	 */
	struct UUI_Generic_SearchLabel_C_ExecuteUbergraph_UI_Generic_SearchLabel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KETL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Generic_SearchLabel.UI_Generic_SearchLabel_C.OnStartSearch__DelegateSignature
	 */
	struct UUI_Generic_SearchLabel_C_OnStartSearch__DelegateSignature_Params
	{
	public:
		class FText                                                SearchString;                                            // 0x0000(0x0018)  (Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
