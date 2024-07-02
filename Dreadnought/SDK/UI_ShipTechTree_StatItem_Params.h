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
	 * Function UI_ShipTechTree_StatItem.UI_ShipTechTree_StatItem_C.FormatModifierText
	 */
	struct UUI_ShipTechTree_StatItem_C_FormatModifierText_Params
	{
	public:
		float                                                      ModifierValueIn;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T4NV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateColor                                         Color;                                                   // 0x0008(0x0028)  (Parm)
	};

	/**
	 * Function UI_ShipTechTree_StatItem.UI_ShipTechTree_StatItem_C.SetModifierText
	 */
	struct UUI_ShipTechTree_StatItem_C_SetModifierText_Params
	{
	public:
		EComparisonType                                            ComparisonTypeIn;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O4A2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ModifierValueIn;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_StatItem.UI_ShipTechTree_StatItem_C.Initialize
	 */
	struct UUI_ShipTechTree_StatItem_C_Initialize_Params
	{
	public:
		struct FYToolTipValue                                      TooltipEntry;                                            // 0x0000(0x0048)  (Parm)
		bool                                                       HideModifyText;                                          // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShipTechTree_StatItem.UI_ShipTechTree_StatItem_C.Construct
	 */
	struct UUI_ShipTechTree_StatItem_C_Construct_Params
	{	};

	/**
	 * Function UI_ShipTechTree_StatItem.UI_ShipTechTree_StatItem_C.ExecuteUbergraph_UI_ShipTechTree_StatItem
	 */
	struct UUI_ShipTechTree_StatItem_C_ExecuteUbergraph_UI_ShipTechTree_StatItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
