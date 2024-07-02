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
	 * 		Name   -> PredefinedFunction UUI_Statistics_FlightLog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Statistics_FlightLog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Statistics_FlightLog.UI_Statistics_FlightLog_C");
		return ptr;
	}

}


