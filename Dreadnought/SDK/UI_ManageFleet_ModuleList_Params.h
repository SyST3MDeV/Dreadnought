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
	 * Function UI_ManageFleet_ModuleList.UI_ManageFleet_ModuleList_C.SetData
	 */
	struct UUI_ManageFleet_ModuleList_C_SetData_Params
	{
	public:
		struct FUI_Struct_ModuleList                               UI_Struct_ModuleList;                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_ManageFleet_ModuleList.UI_ManageFleet_ModuleList_C.Construct
	 */
	struct UUI_ManageFleet_ModuleList_C_Construct_Params
	{	};

	/**
	 * Function UI_ManageFleet_ModuleList.UI_ManageFleet_ModuleList_C.ExecuteUbergraph_UI_ManageFleet_ModuleList
	 */
	struct UUI_ManageFleet_ModuleList_C_ExecuteUbergraph_UI_ManageFleet_ModuleList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
