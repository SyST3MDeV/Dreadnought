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
	 * Function UI_Generic_AccordionFilter_OptionRow.UI_Generic_AccordionFilter_OptionRow_C.RefreshCheckBoxVisibility
	 */
	struct UUI_Generic_AccordionFilter_OptionRow_C_RefreshCheckBoxVisibility_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter_OptionRow.UI_Generic_AccordionFilter_OptionRow_C.HandleUnfocus
	 */
	struct UUI_Generic_AccordionFilter_OptionRow_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter_OptionRow.UI_Generic_AccordionFilter_OptionRow_C.HandleFocus
	 */
	struct UUI_Generic_AccordionFilter_OptionRow_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter_OptionRow.UI_Generic_AccordionFilter_OptionRow_C.SetSelected
	 */
	struct UUI_Generic_AccordionFilter_OptionRow_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_AccordionFilter_OptionRow.UI_Generic_AccordionFilter_OptionRow_C.Construct
	 */
	struct UUI_Generic_AccordionFilter_OptionRow_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter_OptionRow.UI_Generic_AccordionFilter_OptionRow_C.OnSynchronizeProperties
	 */
	struct UUI_Generic_AccordionFilter_OptionRow_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter_OptionRow.UI_Generic_AccordionFilter_OptionRow_C.BndEvt__RowButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Generic_AccordionFilter_OptionRow_C_BndEvt__RowButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter_OptionRow.UI_Generic_AccordionFilter_OptionRow_C.BndEvt__RowButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Generic_AccordionFilter_OptionRow_C_BndEvt__RowButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter_OptionRow.UI_Generic_AccordionFilter_OptionRow_C.BndEvt__RowButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Generic_AccordionFilter_OptionRow_C_BndEvt__RowButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter_OptionRow.UI_Generic_AccordionFilter_OptionRow_C.OnActionReceived
	 */
	struct UUI_Generic_AccordionFilter_OptionRow_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter_OptionRow.UI_Generic_AccordionFilter_OptionRow_C.ExecuteUbergraph_UI_Generic_AccordionFilter_OptionRow
	 */
	struct UUI_Generic_AccordionFilter_OptionRow_C_ExecuteUbergraph_UI_Generic_AccordionFilter_OptionRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_AccordionFilter_OptionRow.UI_Generic_AccordionFilter_OptionRow_C.OnItemHovered__DelegateSignature
	 */
	struct UUI_Generic_AccordionFilter_OptionRow_C_OnItemHovered__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_AccordionFilter_OptionRow.UI_Generic_AccordionFilter_OptionRow_C.OnStateChanged__DelegateSignature
	 */
	struct UUI_Generic_AccordionFilter_OptionRow_C_OnStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NNO1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CheckBoxIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
