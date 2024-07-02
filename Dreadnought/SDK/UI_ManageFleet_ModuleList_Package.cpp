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
	 * 		Name   -> Function UI_ManageFleet_ModuleList.UI_ManageFleet_ModuleList_C.SetData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUI_Struct_ModuleList                       UI_Struct_ModuleList                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UUI_ManageFleet_ModuleList_C::SetData(const struct FUI_Struct_ModuleList& UI_Struct_ModuleList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ManageFleet_ModuleList.UI_ManageFleet_ModuleList_C.SetData");
		
		UUI_ManageFleet_ModuleList_C_SetData_Params params {};
		params.UI_Struct_ModuleList = UI_Struct_ModuleList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ManageFleet_ModuleList.UI_ManageFleet_ModuleList_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_ManageFleet_ModuleList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ManageFleet_ModuleList.UI_ManageFleet_ModuleList_C.Construct");
		
		UUI_ManageFleet_ModuleList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ManageFleet_ModuleList.UI_ManageFleet_ModuleList_C.ExecuteUbergraph_UI_ManageFleet_ModuleList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ManageFleet_ModuleList_C::ExecuteUbergraph_UI_ManageFleet_ModuleList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ManageFleet_ModuleList.UI_ManageFleet_ModuleList_C.ExecuteUbergraph_UI_ManageFleet_ModuleList");
		
		UUI_ManageFleet_ModuleList_C_ExecuteUbergraph_UI_ManageFleet_ModuleList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ManageFleet_ModuleList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ManageFleet_ModuleList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ManageFleet_ModuleList.UI_ManageFleet_ModuleList_C");
		return ptr;
	}

}


