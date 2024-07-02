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
	 * 		Name   -> PredefinedFunction UOF_Navigation01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOF_Navigation01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OF_Navigation01_BP.OF_Navigation01_BP_C");
		return ptr;
	}

}


