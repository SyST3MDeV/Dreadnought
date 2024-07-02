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
	 * 		Name   -> Function UI_Statistics_StatComparisonRow.UI_Statistics_StatComparisonRow_C.SetData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatComparison                             ComparisonData                                             (Parm)
	 */
	void UUI_Statistics_StatComparisonRow_C::SetData(const struct FStatComparison& ComparisonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_StatComparisonRow.UI_Statistics_StatComparisonRow_C.SetData");
		
		UUI_Statistics_StatComparisonRow_C_SetData_Params params {};
		params.ComparisonData = ComparisonData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_StatComparisonRow.UI_Statistics_StatComparisonRow_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Statistics_StatComparisonRow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_StatComparisonRow.UI_Statistics_StatComparisonRow_C.Construct");
		
		UUI_Statistics_StatComparisonRow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_StatComparisonRow.UI_Statistics_StatComparisonRow_C.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Statistics_StatComparisonRow_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_StatComparisonRow.UI_Statistics_StatComparisonRow_C.OnSynchronizeProperties");
		
		UUI_Statistics_StatComparisonRow_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_StatComparisonRow.UI_Statistics_StatComparisonRow_C.ExecuteUbergraph_UI_Statistics_StatComparisonRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_StatComparisonRow_C::ExecuteUbergraph_UI_Statistics_StatComparisonRow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_StatComparisonRow.UI_Statistics_StatComparisonRow_C.ExecuteUbergraph_UI_Statistics_StatComparisonRow");
		
		UUI_Statistics_StatComparisonRow_C_ExecuteUbergraph_UI_Statistics_StatComparisonRow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Statistics_StatComparisonRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Statistics_StatComparisonRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Statistics_StatComparisonRow.UI_Statistics_StatComparisonRow_C");
		return ptr;
	}

}


