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
	 * Function UI_Generic_CheckBox.UI_Generic_CheckBox_C.SetLabel
	 */
	struct UUI_Generic_CheckBox_C_SetLabel_Params
	{
	public:
		class FText                                                labelText;                                               // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Generic_CheckBox.UI_Generic_CheckBox_C.Action
	 */
	struct UUI_Generic_CheckBox_C_Action_Params
	{	};

	/**
	 * Function UI_Generic_CheckBox.UI_Generic_CheckBox_C.HandleUnfocus
	 */
	struct UUI_Generic_CheckBox_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Generic_CheckBox.UI_Generic_CheckBox_C.HandleFocus
	 */
	struct UUI_Generic_CheckBox_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Generic_CheckBox.UI_Generic_CheckBox_C.Construct
	 */
	struct UUI_Generic_CheckBox_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_CheckBox.UI_Generic_CheckBox_C.BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_Generic_CheckBox_C_BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_CheckBox.UI_Generic_CheckBox_C.OnSynchronizeProperties
	 */
	struct UUI_Generic_CheckBox_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_Generic_CheckBox.UI_Generic_CheckBox_C.OnActionReceived
	 */
	struct UUI_Generic_CheckBox_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Generic_CheckBox.UI_Generic_CheckBox_C.ExecuteUbergraph_UI_Generic_CheckBox
	 */
	struct UUI_Generic_CheckBox_C_ExecuteUbergraph_UI_Generic_CheckBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_CheckBox.UI_Generic_CheckBox_C.OnStateChanged__DelegateSignature
	 */
	struct UUI_Generic_CheckBox_C_OnStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9U26[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CheckBoxIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
