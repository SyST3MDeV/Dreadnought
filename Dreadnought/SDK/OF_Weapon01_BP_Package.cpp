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
	 * 		Name   -> PredefinedFunction UOF_Weapon01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOF_Weapon01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OF_Weapon01_BP.OF_Weapon01_BP_C");
		return ptr;
	}

}


