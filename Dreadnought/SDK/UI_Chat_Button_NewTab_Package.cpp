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
	 * 		Name   -> PredefinedFunction UUI_Chat_Button_NewTab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Chat_Button_NewTab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Chat_Button_NewTab.UI_Chat_Button_NewTab_C");
		return ptr;
	}

}


