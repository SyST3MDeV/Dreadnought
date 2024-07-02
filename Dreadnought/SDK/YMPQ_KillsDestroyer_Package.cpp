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
	 * 		Name   -> PredefinedFunction UYMPQ_KillsDestroyer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UYMPQ_KillsDestroyer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass YMPQ_KillsDestroyer.YMPQ_KillsDestroyer_C");
		return ptr;
	}

}


