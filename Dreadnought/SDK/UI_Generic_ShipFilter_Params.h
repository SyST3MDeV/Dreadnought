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
	 * Function UI_Generic_ShipFilter.UI_Generic_ShipFilter_C.SetupHint
	 */
	struct UUI_Generic_ShipFilter_C_SetupHint_Params
	{	};

	/**
	 * Function UI_Generic_ShipFilter.UI_Generic_ShipFilter_C.HandleDropdownOpenClose
	 */
	struct UUI_Generic_ShipFilter_C_HandleDropdownOpenClose_Params
	{
	public:
		bool                                                       IsDropdownOpen;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WZWG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Generic_ShipFilter.UI_Generic_ShipFilter_C.HandleDropdownLeft
	 */
	struct UUI_Generic_ShipFilter_C_HandleDropdownLeft_Params
	{	};

	/**
	 * Function UI_Generic_ShipFilter.UI_Generic_ShipFilter_C.HandleDropdownRight
	 */
	struct UUI_Generic_ShipFilter_C_HandleDropdownRight_Params
	{	};

	/**
	 * Function UI_Generic_ShipFilter.UI_Generic_ShipFilter_C.HandleFilterChange
	 */
	struct UUI_Generic_ShipFilter_C_HandleFilterChange_Params
	{
	public:
		int32_t                                                    categoryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    selectedIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_ShipFilter.UI_Generic_ShipFilter_C.SetupFilters
	 */
	struct UUI_Generic_ShipFilter_C_SetupFilters_Params
	{	};

	/**
	 * Function UI_Generic_ShipFilter.UI_Generic_ShipFilter_C.Construct
	 */
	struct UUI_Generic_ShipFilter_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_ShipFilter.UI_Generic_ShipFilter_C.ExecuteUbergraph_UI_Generic_ShipFilter
	 */
	struct UUI_Generic_ShipFilter_C_ExecuteUbergraph_UI_Generic_ShipFilter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_ShipFilter.UI_Generic_ShipFilter_C.OnFilterUpdated__DelegateSignature
	 */
	struct UUI_Generic_ShipFilter_C_OnFilterUpdated__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
