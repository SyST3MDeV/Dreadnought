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
	 * Function UI_Pagination_Generic.UI_Pagination_Generic_C.GetCurrentIndex
	 */
	struct UUI_Pagination_Generic_C_GetCurrentIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Pagination_Generic.UI_Pagination_Generic_C.UpdateSelectedDot
	 */
	struct UUI_Pagination_Generic_C_UpdateSelectedDot_Params
	{
	public:
		int32_t                                                    NewDotIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IPED[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Pagination_Generic.UI_Pagination_Generic_C.PageDotSelected
	 */
	struct UUI_Pagination_Generic_C_PageDotSelected_Params
	{
	public:
		int32_t                                                    DotIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Pagination_Generic.UI_Pagination_Generic_C.SetNumberOfPages
	 */
	struct UUI_Pagination_Generic_C_SetNumberOfPages_Params
	{
	public:
		int32_t                                                    NumPages;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Pagination_Generic.UI_Pagination_Generic_C.OnCurrentPageChanged__DelegateSignature
	 */
	struct UUI_Pagination_Generic_C_OnCurrentPageChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    DotIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
