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
	 * 		Name   -> Function UI_Statistics_FlightLogItem.UI_Statistics_FlightLogItem_C.SetWidgetAsDarker
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_FlightLogItem_C::SetWidgetAsDarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_FlightLogItem.UI_Statistics_FlightLogItem_C.SetWidgetAsDarker");
		
		UUI_Statistics_FlightLogItem_C_SetWidgetAsDarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_FlightLogItem.UI_Statistics_FlightLogItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Statistics_FlightLogItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_FlightLogItem.UI_Statistics_FlightLogItem_C.Construct");
		
		UUI_Statistics_FlightLogItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_FlightLogItem.UI_Statistics_FlightLogItem_C.ExecuteUbergraph_UI_Statistics_FlightLogItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_FlightLogItem_C::ExecuteUbergraph_UI_Statistics_FlightLogItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_FlightLogItem.UI_Statistics_FlightLogItem_C.ExecuteUbergraph_UI_Statistics_FlightLogItem");
		
		UUI_Statistics_FlightLogItem_C_ExecuteUbergraph_UI_Statistics_FlightLogItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Statistics_FlightLogItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Statistics_FlightLogItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Statistics_FlightLogItem.UI_Statistics_FlightLogItem_C");
		return ptr;
	}

}


