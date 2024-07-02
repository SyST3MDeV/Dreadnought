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
	 * Function UI_ModulePagination.UI_ModulePagination_C.HandleUnfocus
	 */
	struct UUI_ModulePagination_C_HandleUnfocus_Params
	{
	public:
		int32_t                                                    ModuleIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DGK9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ModulePagination.UI_ModulePagination_C.HandleFocus
	 */
	struct UUI_ModulePagination_C_HandleFocus_Params
	{
	public:
		int32_t                                                    ModuleIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PageTurned;                                              // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PFYY[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ModulePagination.UI_ModulePagination_C.GetPageFromIndex
	 */
	struct UUI_ModulePagination_C_GetPageFromIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PageItemIsOn;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ModulePagination.UI_ModulePagination_C.FindModuleInArrayByID
	 */
	struct UUI_ModulePagination_C_FindModuleInArrayByID_Params
	{
	public:
		int32_t                                                    ItemIDToFind;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    IndexInArray;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ModulePagination.UI_ModulePagination_C.SetItemsPerPage
	 */
	struct UUI_ModulePagination_C_SetItemsPerPage_Params
	{
	public:
		int32_t                                                    ItemsPerPage;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ModulePagination.UI_ModulePagination_C.Setup
	 */
	struct UUI_ModulePagination_C_Setup_Params
	{	};

	/**
	 * Function UI_ModulePagination.UI_ModulePagination_C.ChangePage
	 */
	struct UUI_ModulePagination_C_ChangePage_Params
	{
	public:
		int32_t                                                    RequestedPageIndex;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ModulePagination.UI_ModulePagination_C.SetDisplayedModules
	 */
	struct UUI_ModulePagination_C_SetDisplayedModules_Params
	{	};

	/**
	 * Function UI_ModulePagination.UI_ModulePagination_C.AddItemsToCarousel
	 */
	struct UUI_ModulePagination_C_AddItemsToCarousel_Params
	{
	public:
		TArray<class UUI_Generic_Button_Module_C*>                 Widgets;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    CurrentDisplayedIndex;                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ModulePagination.UI_ModulePagination_C.Construct
	 */
	struct UUI_ModulePagination_C_Construct_Params
	{	};

	/**
	 * Function UI_ModulePagination.UI_ModulePagination_C.LeftButtonClicked
	 */
	struct UUI_ModulePagination_C_LeftButtonClicked_Params
	{
	public:
		class UUserWidget*                                         ButtonReference;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ModulePagination.UI_ModulePagination_C.RightButtonClicked
	 */
	struct UUI_ModulePagination_C_RightButtonClicked_Params
	{
	public:
		class UUserWidget*                                         ButtonReference;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ModulePagination.UI_ModulePagination_C.PaginationClick
	 */
	struct UUI_ModulePagination_C_PaginationClick_Params
	{
	public:
		int32_t                                                    DotIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ModulePagination.UI_ModulePagination_C.ExecuteUbergraph_UI_ModulePagination
	 */
	struct UUI_ModulePagination_C_ExecuteUbergraph_UI_ModulePagination_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ModulePagination.UI_ModulePagination_C.ArrowButtonClicked__DelegateSignature
	 */
	struct UUI_ModulePagination_C_ArrowButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
