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
	 * 		Name   -> PredefinedFunction UYMPQ_DestroyDestroyer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UYMPQ_DestroyDestroyer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass YMPQ_DestroyDestroyer.YMPQ_DestroyDestroyer_C");
		return ptr;
	}

}

