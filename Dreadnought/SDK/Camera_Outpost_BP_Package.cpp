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
	 * 		Name   -> PredefinedFunction ACamera_Outpost_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACamera_Outpost_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Camera_Outpost_BP.Camera_Outpost_BP_C");
		return ptr;
	}

}


