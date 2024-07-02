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
	 * Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.GetWidgets
	 */
	struct UUI_Generic_AccordionFilter_Category_C_GetWidgets_Params
	{
	public:
		class UUI_Market_CategoryButton_C*                         HeaderWidget;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UUI_Generic_AccordionFilter_OptionRow_C*>     OptionWidgets;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.HandleFilterClicked
	 */
	struct UUI_Generic_AccordionFilter_Category_C_HandleFilterClicked_Params
	{
	public:
		bool                                                       Checked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TEJD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CheckBoxIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.Hide
	 */
	struct UUI_Generic_AccordionFilter_Category_C_Hide_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.Show
	 */
	struct UUI_Generic_AccordionFilter_Category_C_Show_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.SetupOptionList
	 */
	struct UUI_Generic_AccordionFilter_Category_C_SetupOptionList_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.Construct
	 */
	struct UUI_Generic_AccordionFilter_Category_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.BndEvt__HeaderButton_K2Node_ComponentBoundEvent_0_OnLoadoutButtonClicked__DelegateSignature
	 */
	struct UUI_Generic_AccordionFilter_Category_C_BndEvt__HeaderButton_K2Node_ComponentBoundEvent_0_OnLoadoutButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_Market_CategoryButton_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.ExecuteUbergraph_UI_Generic_AccordionFilter_Category
	 */
	struct UUI_Generic_AccordionFilter_Category_C_ExecuteUbergraph_UI_Generic_AccordionFilter_Category_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LDEA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.OnCategoryFilterClicked__DelegateSignature
	 */
	struct UUI_Generic_AccordionFilter_Category_C_OnCategoryFilterClicked__DelegateSignature_Params
	{
	public:
		bool                                                       Checked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_50D7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CheckBoxIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    categoryIndex;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C.OnCategoryClicked__DelegateSignature
	 */
	struct UUI_Generic_AccordionFilter_Category_C_OnCategoryClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
