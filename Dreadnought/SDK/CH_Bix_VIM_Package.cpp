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
	 * 		Name   -> PredefinedFunction UCH_Bix_VIM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCH_Bix_VIM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass CH_Bix_VIM.CH_Bix_VIM_C");
		return ptr;
	}

}


