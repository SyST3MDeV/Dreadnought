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
	 * 		Name   -> PredefinedFunction UYGameInstance_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UYGameInstance_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass YGameInstance_BP.YGameInstance_BP_C");
		return ptr;
	}

}


