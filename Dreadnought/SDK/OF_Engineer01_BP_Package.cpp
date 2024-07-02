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
	 * 		Name   -> PredefinedFunction UOF_ENGINEER01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOF_ENGINEER01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OF_Engineer01_BP.OF_ENGINEER01_BP_C");
		return ptr;
	}

}


