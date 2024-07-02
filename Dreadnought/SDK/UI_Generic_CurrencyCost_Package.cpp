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
	 * 		Name   -> Function UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C.SetCurrencyType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYUICurrency                                       Price                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_CurrencyCost_C::SetCurrencyType(EYUICurrency Price)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C.SetCurrencyType");
		
		UUI_Generic_CurrencyCost_C_SetCurrencyType_Params params {};
		params.Price = Price;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C.SetPrice
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Price                                                      (Parm)
	 */
	void UUI_Generic_CurrencyCost_C::SetPrice(const class FText& Price)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C.SetPrice");
		
		UUI_Generic_CurrencyCost_C_SetPrice_Params params {};
		params.Price = Price;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C.FormatFontColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYUICurrency                                       currencyType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_CurrencyCost_C::FormatFontColor(EYUICurrency currencyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C.FormatFontColor");
		
		UUI_Generic_CurrencyCost_C_FormatFontColor_Params params {};
		params.currencyType = currencyType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C.FormatPrice
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYUICurrency                                       currencyType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PriceFloat                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      RealCurrencyCode                                           (Parm, ZeroConstructor)
	 * 		int32_t                                            PriceInt                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        FormattedPrice                                             (Parm, OutParm)
	 */
	void UUI_Generic_CurrencyCost_C::FormatPrice(EYUICurrency currencyType, float PriceFloat, const class FString& RealCurrencyCode, int32_t PriceInt, class FText* FormattedPrice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C.FormatPrice");
		
		UUI_Generic_CurrencyCost_C_FormatPrice_Params params {};
		params.currencyType = currencyType;
		params.PriceFloat = PriceFloat;
		params.RealCurrencyCode = RealCurrencyCode;
		params.PriceInt = PriceInt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FormattedPrice != nullptr)
			*FormattedPrice = params.FormattedPrice;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C.SetPriceData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYUICurrency                                       currencyType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PriceFloat                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      RealCurrencyCode                                           (Parm, ZeroConstructor)
	 * 		int32_t                                            PriceInt                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_CurrencyCost_C::SetPriceData(EYUICurrency currencyType, float PriceFloat, const class FString& RealCurrencyCode, int32_t PriceInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C.SetPriceData");
		
		UUI_Generic_CurrencyCost_C_SetPriceData_Params params {};
		params.currencyType = currencyType;
		params.PriceFloat = PriceFloat;
		params.RealCurrencyCode = RealCurrencyCode;
		params.PriceInt = PriceInt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_CurrencyCost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_CurrencyCost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C");
		return ptr;
	}

}


