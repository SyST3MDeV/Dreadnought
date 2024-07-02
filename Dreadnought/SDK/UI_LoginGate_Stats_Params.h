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
	 * Function UI_LoginGate_Stats.UI_LoginGate_Stats_C.SetStatRowText
	 */
	struct UUI_LoginGate_Stats_C_SetStatRowText_Params
	{
	public:
		class FText                                                label;                                                   // 0x0000(0x0018)  (Parm)
		class FText                                                Info;                                                    // 0x0018(0x0018)  (Parm)
		int32_t                                                    Row;                                                     // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_LoginGate_Stats.UI_LoginGate_Stats_C.ShowStatRow
	 */
	struct UUI_LoginGate_Stats_C_ShowStatRow_Params
	{
	public:
		int32_t                                                    Row;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Show;                                                    // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_LoginGate_Stats.UI_LoginGate_Stats_C.PreConstruct
	 */
	struct UUI_LoginGate_Stats_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_LoginGate_Stats.UI_LoginGate_Stats_C.ExecuteUbergraph_UI_LoginGate_Stats
	 */
	struct UUI_LoginGate_Stats_C_ExecuteUbergraph_UI_LoginGate_Stats_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
