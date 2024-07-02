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
	 * 		Name   -> Function UI_Generic_Spinner.UI_Generic_Spinner_C.IsSpinning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsSpinning                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Spinner_C::IsSpinning(bool* IsSpinning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Spinner.UI_Generic_Spinner_C.IsSpinning");
		
		UUI_Generic_Spinner_C_IsSpinning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSpinning != nullptr)
			*IsSpinning = params.IsSpinning;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Spinner.UI_Generic_Spinner_C.StopSpinning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_Spinner_C::StopSpinning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Spinner.UI_Generic_Spinner_C.StopSpinning");
		
		UUI_Generic_Spinner_C_StopSpinning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Spinner.UI_Generic_Spinner_C.StartSpinning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_Spinner_C::StartSpinning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Spinner.UI_Generic_Spinner_C.StartSpinning");
		
		UUI_Generic_Spinner_C_StartSpinning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Spinner.UI_Generic_Spinner_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Generic_Spinner_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Spinner.UI_Generic_Spinner_C.Construct");
		
		UUI_Generic_Spinner_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Spinner.UI_Generic_Spinner_C.ExecuteUbergraph_UI_Generic_Spinner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Spinner_C::ExecuteUbergraph_UI_Generic_Spinner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Spinner.UI_Generic_Spinner_C.ExecuteUbergraph_UI_Generic_Spinner");
		
		UUI_Generic_Spinner_C_ExecuteUbergraph_UI_Generic_Spinner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_Spinner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_Spinner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_Spinner.UI_Generic_Spinner_C");
		return ptr;
	}

}


