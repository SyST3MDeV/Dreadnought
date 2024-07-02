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
	 * Function UI_Statistics_StatComparisonRow.UI_Statistics_StatComparisonRow_C.SetData
	 */
	struct UUI_Statistics_StatComparisonRow_C_SetData_Params
	{
	public:
		struct FStatComparison                                     ComparisonData;                                          // 0x0000(0x0048)  (Parm)
	};

	/**
	 * Function UI_Statistics_StatComparisonRow.UI_Statistics_StatComparisonRow_C.Construct
	 */
	struct UUI_Statistics_StatComparisonRow_C_Construct_Params
	{	};

	/**
	 * Function UI_Statistics_StatComparisonRow.UI_Statistics_StatComparisonRow_C.OnSynchronizeProperties
	 */
	struct UUI_Statistics_StatComparisonRow_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_Statistics_StatComparisonRow.UI_Statistics_StatComparisonRow_C.ExecuteUbergraph_UI_Statistics_StatComparisonRow
	 */
	struct UUI_Statistics_StatComparisonRow_C_ExecuteUbergraph_UI_Statistics_StatComparisonRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
