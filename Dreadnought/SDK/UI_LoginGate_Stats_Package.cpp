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
	 * 		Name   -> Function UI_LoginGate_Stats.UI_LoginGate_Stats_C.SetStatRowText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        label                                                      (Parm)
	 * 		class FText                                        Info                                                       (Parm)
	 * 		int32_t                                            Row                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LoginGate_Stats_C::SetStatRowText(const class FText& label, const class FText& Info, int32_t Row)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Stats.UI_LoginGate_Stats_C.SetStatRowText");
		
		UUI_LoginGate_Stats_C_SetStatRowText_Params params {};
		params.label = label;
		params.Info = Info;
		params.Row = Row;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Stats.UI_LoginGate_Stats_C.ShowStatRow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Row                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LoginGate_Stats_C::ShowStatRow(int32_t Row, bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Stats.UI_LoginGate_Stats_C.ShowStatRow");
		
		UUI_LoginGate_Stats_C_ShowStatRow_Params params {};
		params.Row = Row;
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Stats.UI_LoginGate_Stats_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LoginGate_Stats_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Stats.UI_LoginGate_Stats_C.PreConstruct");
		
		UUI_LoginGate_Stats_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Stats.UI_LoginGate_Stats_C.ExecuteUbergraph_UI_LoginGate_Stats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LoginGate_Stats_C::ExecuteUbergraph_UI_LoginGate_Stats(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Stats.UI_LoginGate_Stats_C.ExecuteUbergraph_UI_LoginGate_Stats");
		
		UUI_LoginGate_Stats_C_ExecuteUbergraph_UI_LoginGate_Stats_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LoginGate_Stats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LoginGate_Stats_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LoginGate_Stats.UI_LoginGate_Stats_C");
		return ptr;
	}

}


