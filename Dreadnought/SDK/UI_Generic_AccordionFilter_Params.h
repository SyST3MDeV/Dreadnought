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
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.GetPreviousFocusableWidget
	 */
	struct UUI_Generic_AccordionFilter_C_GetPreviousFocusableWidget_Params
	{
	public:
		int32_t                                                    CurrentWidgetIndex;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L1CZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_DreadWidget*                                     FocusableWidget;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    WidgetIndex;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.HandleUnfocus
	 */
	struct UUI_Generic_AccordionFilter_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.HandleFocus
	 */
	struct UUI_Generic_AccordionFilter_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.FindCategoryWidgetForRow
	 */
	struct UUI_Generic_AccordionFilter_C_FindCategoryWidgetForRow_Params
	{
	public:
		class UUI_Generic_AccordionFilter_OptionRow_C*             RowWidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UUI_Generic_AccordionFilter_Category_C*              Category;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    filterIndex;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.GetNextFocusableWidget
	 */
	struct UUI_Generic_AccordionFilter_C_GetNextFocusableWidget_Params
	{
	public:
		int32_t                                                    CurrentWidgetIndex;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FNMD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_DreadWidget*                                     FocusableWidget;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    WidgetIndex;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6DXE[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.SelectCategory
	 */
	struct UUI_Generic_AccordionFilter_C_SelectCategory_Params
	{
	public:
		int32_t                                                    categoryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    filterIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.ScrollCategoryIntoView
	 */
	struct UUI_Generic_AccordionFilter_C_ScrollCategoryIntoView_Params
	{
	public:
		class UUI_DreadWidget*                                     Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.GetFilterCategoryWidgets
	 */
	struct UUI_Generic_AccordionFilter_C_GetFilterCategoryWidgets_Params
	{
	public:
		TArray<class UUI_Generic_AccordionFilter_Category_C*>      Widgets;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.HandleCategoryFilterClicked
	 */
	struct UUI_Generic_AccordionFilter_C_HandleCategoryFilterClicked_Params
	{
	public:
		bool                                                       Checked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BU27[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CheckBoxIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    categoryIndex;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.HandleCategoryClicked
	 */
	struct UUI_Generic_AccordionFilter_C_HandleCategoryClicked_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.SetupCategoryList
	 */
	struct UUI_Generic_AccordionFilter_C_SetupCategoryList_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.SetData
	 */
	struct UUI_Generic_AccordionFilter_C_SetData_Params
	{
	public:
		struct FUIAccordionFilterData                              AccordionFilterData;                                     // 0x0000(0x0040)  (Parm)
	};

	/**
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Generic_AccordionFilter_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.BndEvt__AccordianButton_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Generic_AccordionFilter_C_BndEvt__AccordianButton_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.ExecuteUbergraph_UI_Generic_AccordionFilter
	 */
	struct UUI_Generic_AccordionFilter_C_ExecuteUbergraph_UI_Generic_AccordionFilter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.OnCategoryFilterClicked__DelegateSignature
	 */
	struct UUI_Generic_AccordionFilter_C_OnCategoryFilterClicked__DelegateSignature_Params
	{
	public:
		bool                                                       Checked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y18N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CheckBoxIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    categoryIndex;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C.OnCategoryClicked__DelegateSignature
	 */
	struct UUI_Generic_AccordionFilter_C_OnCategoryClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
