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
	 * 		Name   -> PredefinedFunction UCH_Trader_VIM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCH_Trader_VIM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass CH_Trader_VIM.CH_Trader_VIM_C");
		return ptr;
	}

}


