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
	 * Function UI_ModuleDetails_StatArea.UI_ModuleDetails_StatArea_C.CreateStatRow
	 */
	struct UUI_ModuleDetails_StatArea_C_CreateStatRow_Params
	{
	public:
		struct FYToolTipValue                                      ToolTipData;                                             // 0x0000(0x0048)  (Parm)
		int32_t                                                    CurrentToolTipIndex;                                     // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowModifierText;                                        // 0x004C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1CBP[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ModuleDetails_StatArea.UI_ModuleDetails_StatArea_C.SetStats
	 */
	struct UUI_ModuleDetails_StatArea_C_SetStats_Params
	{
	public:
		TArray<struct FYToolTipValue>                              ToolTipData;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       HideModifyText;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8R82[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ModuleDetails_StatArea.UI_ModuleDetails_StatArea_C.PreConstruct
	 */
	struct UUI_ModuleDetails_StatArea_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ModuleDetails_StatArea.UI_ModuleDetails_StatArea_C.ExecuteUbergraph_UI_ModuleDetails_StatArea
	 */
	struct UUI_ModuleDetails_StatArea_C_ExecuteUbergraph_UI_ModuleDetails_StatArea_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IM8V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
