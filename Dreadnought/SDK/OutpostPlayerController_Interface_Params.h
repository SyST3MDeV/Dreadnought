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
	 * Function OutpostPlayerController_Interface.OutpostPlayerController_Interface_C.MenuStateChanged
	 */
	struct UOutpostPlayerController_Interface_C_MenuStateChanged_Params
	{
	public:
		EYMenuState                                                newMenuState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
