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
	 * 		Name   -> Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.SetCurrencyTypeAndAmount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYUICurrency                                       currencyType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrencyAmount                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_LegendPrompt_Currency_C::SetCurrencyTypeAndAmount(EYUICurrency currencyType, int32_t CurrencyAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.SetCurrencyTypeAndAmount");
		
		UUI_Generic_LegendPrompt_Currency_C_SetCurrencyTypeAndAmount_Params params {};
		params.currencyType = currencyType;
		params.CurrencyAmount = CurrencyAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.SetCurrencyEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CurrencyDisplayEnabled                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_LegendPrompt_Currency_C::SetCurrencyEnabled(bool CurrencyDisplayEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.SetCurrencyEnabled");
		
		UUI_Generic_LegendPrompt_Currency_C_SetCurrencyEnabled_Params params {};
		params.CurrencyDisplayEnabled = CurrencyDisplayEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.SetCurrencyIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_LegendPrompt_Currency_C::SetCurrencyIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.SetCurrencyIcon");
		
		UUI_Generic_LegendPrompt_Currency_C_SetCurrencyIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.SetCurrencyText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_LegendPrompt_Currency_C::SetCurrencyText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.SetCurrencyText");
		
		UUI_Generic_LegendPrompt_Currency_C_SetCurrencyText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.SetButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLegendPromptData                           Data                                                       (Parm)
	 */
	void UUI_Generic_LegendPrompt_Currency_C::SetButton(const struct FLegendPromptData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.SetButton");
		
		UUI_Generic_LegendPrompt_Currency_C_SetButton_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Generic_LegendPrompt_Currency_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.Construct");
		
		UUI_Generic_LegendPrompt_Currency_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.ExecuteUbergraph_UI_Generic_LegendPrompt_Currency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_LegendPrompt_Currency_C::ExecuteUbergraph_UI_Generic_LegendPrompt_Currency(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.ExecuteUbergraph_UI_Generic_LegendPrompt_Currency");
		
		UUI_Generic_LegendPrompt_Currency_C_ExecuteUbergraph_UI_Generic_LegendPrompt_Currency_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_LegendPrompt_Currency_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_LegendPrompt_Currency_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C");
		return ptr;
	}

}


