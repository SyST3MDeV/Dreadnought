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
	 * 		Name   -> PredefinedFunction UCachedItemData_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCachedItemData_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CachedItemData_BP.CachedItemData_BP_C");
		return ptr;
	}

}


