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
	 * Function UI_Generic_OnlineStatusIndicator.UI_Generic_OnlineStatusIndicator_C.SetStatus
	 */
	struct UUI_Generic_OnlineStatusIndicator_C_SetStatus_Params
	{
	public:
		EYUIFriendStatus                                           Selection;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
