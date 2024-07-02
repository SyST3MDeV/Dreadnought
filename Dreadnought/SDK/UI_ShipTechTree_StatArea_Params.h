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
	 * Function UI_ShipTechTree_StatArea.UI_ShipTechTree_StatArea_C.SetupGridLayoutRules
	 */
	struct UUI_ShipTechTree_StatArea_C_SetupGridLayoutRules_Params
	{	};

	/**
	 * Function UI_ShipTechTree_StatArea.UI_ShipTechTree_StatArea_C.SetStats
	 */
	struct UUI_ShipTechTree_StatArea_C_SetStats_Params
	{
	public:
		TArray<struct FYToolTipValue>                              ToolTipData;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       HideModifyText;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SWEB[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ShipTechTree_StatArea.UI_ShipTechTree_StatArea_C.PreConstruct
	 */
	struct UUI_ShipTechTree_StatArea_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_StatArea.UI_ShipTechTree_StatArea_C.ExecuteUbergraph_UI_ShipTechTree_StatArea
	 */
	struct UUI_ShipTechTree_StatArea_C_ExecuteUbergraph_UI_ShipTechTree_StatArea_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8RVP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
