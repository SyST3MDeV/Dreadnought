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
	 * 		Name   -> PredefinedFunction UCamera_Outpost_PurchasePreview_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCamera_Outpost_PurchasePreview_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Camera_Outpost_PurchasePreview_BP.Camera_Outpost_PurchasePreview_BP_C");
		return ptr;
	}

}


