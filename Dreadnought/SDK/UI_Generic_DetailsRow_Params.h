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
	 * Function UI_Generic_DetailsRow.UI_Generic_DetailsRow_C.SetData
	 */
	struct UUI_Generic_DetailsRow_C_SetData_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (Parm)
		class FText                                                Value;                                                   // 0x0018(0x0018)  (Parm)
		float                                                      modifier;                                                // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
