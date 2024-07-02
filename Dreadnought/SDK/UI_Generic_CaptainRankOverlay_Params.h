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
	 * Function UI_Generic_CaptainRankOverlay.UI_Generic_CaptainRankOverlay_C.SetElite
	 */
	struct UUI_Generic_CaptainRankOverlay_C_SetElite_Params
	{
	public:
		bool                                                       IsElite;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_CaptainRankOverlay.UI_Generic_CaptainRankOverlay_C.SetRank
	 */
	struct UUI_Generic_CaptainRankOverlay_C_SetRank_Params
	{
	public:
		int32_t                                                    rank;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GOKC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
