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
	 * 		Name   -> PredefinedFunction UYMPQ_MatchScoreONS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UYMPQ_MatchScoreONS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass YMPQ_MatchScoreONS.YMPQ_MatchScoreONS_C");
		return ptr;
	}

}

