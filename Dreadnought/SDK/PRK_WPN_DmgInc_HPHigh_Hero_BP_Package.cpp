/**
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
	 * 		Name   -> PredefinedFunction UPRK_WPN_DmgInc_HPHigh_Hero_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPRK_WPN_DmgInc_HPHigh_Hero_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRK_WPN_DmgInc_HPHigh_Hero_BP.PRK_WPN_DmgInc_HPHigh_Hero_BP_C");
		return ptr;
	}

}


