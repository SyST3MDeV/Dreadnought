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
	 * 		Name   -> Function UI_ManageFleet_ModuleList_Row.UI_ManageFleet_ModuleList_Row_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_ManageFleet_ModuleList_Row_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ManageFleet_ModuleList_Row.UI_ManageFleet_ModuleList_Row_C.Construct");
		
		UUI_ManageFleet_ModuleList_Row_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ManageFleet_ModuleList_Row.UI_ManageFleet_ModuleList_Row_C.ExecuteUbergraph_UI_ManageFleet_ModuleList_Row
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ManageFleet_ModuleList_Row_C::ExecuteUbergraph_UI_ManageFleet_ModuleList_Row(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ManageFleet_ModuleList_Row.UI_ManageFleet_ModuleList_Row_C.ExecuteUbergraph_UI_ManageFleet_ModuleList_Row");
		
		UUI_ManageFleet_ModuleList_Row_C_ExecuteUbergraph_UI_ManageFleet_ModuleList_Row_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ManageFleet_ModuleList_Row_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ManageFleet_ModuleList_Row_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ManageFleet_ModuleList_Row.UI_ManageFleet_ModuleList_Row_C");
		return ptr;
	}

}


