﻿/**
 * Name: Dreadnought
 * Version: Latest
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPRK_NAV_DmgResIncSpdDec_Passive_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPRK_NAV_DmgResIncSpdDec_Passive_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRK_NAV_DmgResIncSpdDec_Passive_BP.PRK_NAV_DmgResIncSpdDec_Passive_BP_C");
		return ptr;
	}

}

