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
	 * 		Name   -> Function UI_ModuleDetails_StatArea.UI_ModuleDetails_StatArea_C.CreateStatRow
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYToolTipValue                              ToolTipData                                                (Parm)
	 * 		int32_t                                            CurrentToolTipIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowModifierText                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModuleDetails_StatArea_C::CreateStatRow(const struct FYToolTipValue& ToolTipData, int32_t CurrentToolTipIndex, bool ShowModifierText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModuleDetails_StatArea.UI_ModuleDetails_StatArea_C.CreateStatRow");
		
		UUI_ModuleDetails_StatArea_C_CreateStatRow_Params params {};
		params.ToolTipData = ToolTipData;
		params.CurrentToolTipIndex = CurrentToolTipIndex;
		params.ShowModifierText = ShowModifierText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModuleDetails_StatArea.UI_ModuleDetails_StatArea_C.SetStats
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYToolTipValue>                      ToolTipData                                                (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               HideModifyText                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModuleDetails_StatArea_C::SetStats(TArray<struct FYToolTipValue>* ToolTipData, bool HideModifyText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModuleDetails_StatArea.UI_ModuleDetails_StatArea_C.SetStats");
		
		UUI_ModuleDetails_StatArea_C_SetStats_Params params {};
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
	 * 		Name   -> Function UI_ModuleDetails_StatArea.UI_ModuleDetails_StatArea_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModuleDetails_StatArea_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModuleDetails_StatArea.UI_ModuleDetails_StatArea_C.PreConstruct");
		
		UUI_ModuleDetails_StatArea_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModuleDetails_StatArea.UI_ModuleDetails_StatArea_C.ExecuteUbergraph_UI_ModuleDetails_StatArea
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModuleDetails_StatArea_C::ExecuteUbergraph_UI_ModuleDetails_StatArea(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModuleDetails_StatArea.UI_ModuleDetails_StatArea_C.ExecuteUbergraph_UI_ModuleDetails_StatArea");
		
		UUI_ModuleDetails_StatArea_C_ExecuteUbergraph_UI_ModuleDetails_StatArea_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ModuleDetails_StatArea_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ModuleDetails_StatArea_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ModuleDetails_StatArea.UI_ModuleDetails_StatArea_C");
		return ptr;
	}

}


