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
	 * 		Name   -> PredefinedFunction UUI_EditLoadout_OfficerLock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditLoadout_OfficerLock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EditLoadout_OfficerLock.UI_EditLoadout_OfficerLock_C");
		return ptr;
	}

}


