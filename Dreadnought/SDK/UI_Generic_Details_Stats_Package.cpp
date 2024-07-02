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
	 * 		Name   -> Function UI_Generic_Details_Stats.UI_Generic_Details_Stats_C.AddShipStats
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYShipStatsEntry>                    shipStats                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Generic_Details_Stats_C::AddShipStats(TArray<struct FYShipStatsEntry>* shipStats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Details_Stats.UI_Generic_Details_Stats_C.AddShipStats");
		
		UUI_Generic_Details_Stats_C_AddShipStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shipStats != nullptr)
			*shipStats = params.shipStats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Details_Stats.UI_Generic_Details_Stats_C.ClearStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_Details_Stats_C::ClearStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Details_Stats.UI_Generic_Details_Stats_C.ClearStats");
		
		UUI_Generic_Details_Stats_C_ClearStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Details_Stats.UI_Generic_Details_Stats_C.SetShipStats
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYShipStatsEntry>                    shipStats                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Generic_Details_Stats_C::SetShipStats(TArray<struct FYShipStatsEntry>* shipStats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Details_Stats.UI_Generic_Details_Stats_C.SetShipStats");
		
		UUI_Generic_Details_Stats_C_SetShipStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shipStats != nullptr)
			*shipStats = params.shipStats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Details_Stats.UI_Generic_Details_Stats_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Generic_Details_Stats_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Details_Stats.UI_Generic_Details_Stats_C.Construct");
		
		UUI_Generic_Details_Stats_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Details_Stats.UI_Generic_Details_Stats_C.ExecuteUbergraph_UI_Generic_Details_Stats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Details_Stats_C::ExecuteUbergraph_UI_Generic_Details_Stats(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Details_Stats.UI_Generic_Details_Stats_C.ExecuteUbergraph_UI_Generic_Details_Stats");
		
		UUI_Generic_Details_Stats_C_ExecuteUbergraph_UI_Generic_Details_Stats_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_Details_Stats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_Details_Stats_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_Details_Stats.UI_Generic_Details_Stats_C");
		return ptr;
	}

}


