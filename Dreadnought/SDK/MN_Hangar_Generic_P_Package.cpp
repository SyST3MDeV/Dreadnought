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
	 * 		Name   -> PredefinedFunction AMN_Hangar_Generic_P_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMN_Hangar_Generic_P_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MN_Hangar_Generic_P.MN_Hangar_Generic_P_C");
		return ptr;
	}

}


