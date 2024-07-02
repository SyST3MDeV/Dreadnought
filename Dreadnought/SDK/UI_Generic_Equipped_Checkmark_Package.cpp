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
	 * 		Name   -> Function UI_Generic_Equipped_Checkmark.UI_Generic_Equipped_Checkmark_C.SetIsShowing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Equipped_Checkmark_C::SetIsShowing(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Equipped_Checkmark.UI_Generic_Equipped_Checkmark_C.SetIsShowing");
		
		UUI_Generic_Equipped_Checkmark_C_SetIsShowing_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Equipped_Checkmark.UI_Generic_Equipped_Checkmark_C.SetTier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                TierColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Equipped_Checkmark_C::SetTier(int32_t tier, struct FLinearColor* TierColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Equipped_Checkmark.UI_Generic_Equipped_Checkmark_C.SetTier");
		
		UUI_Generic_Equipped_Checkmark_C_SetTier_Params params {};
		params.tier = tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TierColor != nullptr)
			*TierColor = params.TierColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Equipped_Checkmark.UI_Generic_Equipped_Checkmark_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Generic_Equipped_Checkmark_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Equipped_Checkmark.UI_Generic_Equipped_Checkmark_C.Construct");
		
		UUI_Generic_Equipped_Checkmark_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Equipped_Checkmark.UI_Generic_Equipped_Checkmark_C.ExecuteUbergraph_UI_Generic_Equipped_Checkmark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Equipped_Checkmark_C::ExecuteUbergraph_UI_Generic_Equipped_Checkmark(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Equipped_Checkmark.UI_Generic_Equipped_Checkmark_C.ExecuteUbergraph_UI_Generic_Equipped_Checkmark");
		
		UUI_Generic_Equipped_Checkmark_C_ExecuteUbergraph_UI_Generic_Equipped_Checkmark_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_Equipped_Checkmark_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_Equipped_Checkmark_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_Equipped_Checkmark.UI_Generic_Equipped_Checkmark_C");
		return ptr;
	}

}


