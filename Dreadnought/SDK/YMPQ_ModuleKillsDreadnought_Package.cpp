﻿/**
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
	 * 		Name   -> PredefinedFunction UYMPQ_ModuleKillsDreadnought_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UYMPQ_ModuleKillsDreadnought_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass YMPQ_ModuleKillsDreadnought.YMPQ_ModuleKillsDreadnought_C");
		return ptr;
	}

}


