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
	 * 		Name   -> Function UI_EditAppearance_AvailableItems.UI_EditAppearance_AvailableItems_C.ResetScrollPosition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditAppearance_AvailableItems_C::ResetScrollPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_AvailableItems.UI_EditAppearance_AvailableItems_C.ResetScrollPosition");
		
		UUI_EditAppearance_AvailableItems_C_ResetScrollPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditAppearance_AvailableItems.UI_EditAppearance_AvailableItems_C.ClearGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditAppearance_AvailableItems_C::ClearGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_AvailableItems.UI_EditAppearance_AvailableItems_C.ClearGrid");
		
		UUI_EditAppearance_AvailableItems_C_ClearGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditAppearance_AvailableItems.UI_EditAppearance_AvailableItems_C.AddModule
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUIGenericButtonModuleData                  Data                                                       (Parm)
	 * 		class UUI_Generic_Button_Module_C*                 Module                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditAppearance_AvailableItems_C::AddModule(const struct FUIGenericButtonModuleData& Data, class UUI_Generic_Button_Module_C** Module)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_AvailableItems.UI_EditAppearance_AvailableItems_C.AddModule");
		
		UUI_EditAppearance_AvailableItems_C_AddModule_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Module != nullptr)
			*Module = params.Module;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditAppearance_AvailableItems.UI_EditAppearance_AvailableItems_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_EditAppearance_AvailableItems_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_AvailableItems.UI_EditAppearance_AvailableItems_C.Construct");
		
		UUI_EditAppearance_AvailableItems_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditAppearance_AvailableItems.UI_EditAppearance_AvailableItems_C.ExecuteUbergraph_UI_EditAppearance_AvailableItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditAppearance_AvailableItems_C::ExecuteUbergraph_UI_EditAppearance_AvailableItems(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_AvailableItems.UI_EditAppearance_AvailableItems_C.ExecuteUbergraph_UI_EditAppearance_AvailableItems");
		
		UUI_EditAppearance_AvailableItems_C_ExecuteUbergraph_UI_EditAppearance_AvailableItems_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EditAppearance_AvailableItems_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditAppearance_AvailableItems_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EditAppearance_AvailableItems.UI_EditAppearance_AvailableItems_C");
		return ptr;
	}

}


