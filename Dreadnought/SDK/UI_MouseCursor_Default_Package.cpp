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
	 * 		Name   -> PredefinedFunction UUI_MouseCursor_Default_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MouseCursor_Default_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MouseCursor_Default.UI_MouseCursor_Default_C");
		return ptr;
	}

}


