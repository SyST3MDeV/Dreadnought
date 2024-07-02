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
	 * 		Name   -> PredefinedFunction UUI_LoginGate_Message_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LoginGate_Message_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LoginGate_Message.UI_LoginGate_Message_C");
		return ptr;
	}

}


