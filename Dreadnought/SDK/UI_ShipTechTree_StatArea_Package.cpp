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
	 * 		Name   -> Function UI_ShipTechTree_StatArea.UI_ShipTechTree_StatArea_C.SetupGridLayoutRules
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ShipTechTree_StatArea_C::SetupGridLayoutRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_StatArea.UI_ShipTechTree_StatArea_C.SetupGridLayoutRules");
		
		UUI_ShipTechTree_StatArea_C_SetupGridLayoutRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_StatArea.UI_ShipTechTree_StatArea_C.SetStats
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYToolTipValue>                      ToolTipData                                                (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               HideModifyText                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_StatArea_C::SetStats(TArray<struct FYToolTipValue>* ToolTipData, bool HideModifyText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_StatArea.UI_ShipTechTree_StatArea_C.SetStats");
		
		UUI_ShipTechTree_StatArea_C_SetStats_Params params {};
		params.HideModifyText = HideModifyText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToolTipData != nullptr)
			*ToolTipData = params.ToolTipData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_StatArea.UI_ShipTechTree_StatArea_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_StatArea_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_StatArea.UI_ShipTechTree_StatArea_C.PreConstruct");
		
		UUI_ShipTechTree_StatArea_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_StatArea.UI_ShipTechTree_StatArea_C.ExecuteUbergraph_UI_ShipTechTree_StatArea
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_StatArea_C::ExecuteUbergraph_UI_ShipTechTree_StatArea(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_StatArea.UI_ShipTechTree_StatArea_C.ExecuteUbergraph_UI_ShipTechTree_StatArea");
		
		UUI_ShipTechTree_StatArea_C_ExecuteUbergraph_UI_ShipTechTree_StatArea_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ShipTechTree_StatArea_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ShipTechTree_StatArea_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ShipTechTree_StatArea.UI_ShipTechTree_StatArea_C");
		return ptr;
	}

}


