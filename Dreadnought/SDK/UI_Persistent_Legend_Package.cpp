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
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Legend.UI_Persistent_Legend_C.SetLegend
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLegendPromptData>                   legend                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Persistent_Legend_C::SetLegend(TArray<struct FLegendPromptData>* legend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Legend.UI_Persistent_Legend_C.SetLegend");
		
		UUI_Persistent_Legend_C_SetLegend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (legend != nullptr)
			*legend = params.legend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Persistent_Legend_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Persistent_Legend_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Persistent_Legend.UI_Persistent_Legend_C");
		return ptr;
	}

}


