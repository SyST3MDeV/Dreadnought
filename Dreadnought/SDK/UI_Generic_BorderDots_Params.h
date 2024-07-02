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
	 * Function UI_Generic_BorderDots.UI_Generic_BorderDots_C.Construct
	 */
	struct UUI_Generic_BorderDots_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_BorderDots.UI_Generic_BorderDots_C.PreConstruct
	 */
	struct UUI_Generic_BorderDots_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_BorderDots.UI_Generic_BorderDots_C.ExecuteUbergraph_UI_Generic_BorderDots
	 */
	struct UUI_Generic_BorderDots_C_ExecuteUbergraph_UI_Generic_BorderDots_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
