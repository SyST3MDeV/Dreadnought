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
	 * 		Name   -> Function UI_Popup_Upsell_Header.UI_Popup_Upsell_Header_C.SetNeededPrice
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RequiredPrice                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_Upsell_Header_C::SetNeededPrice(int32_t RequiredPrice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell_Header.UI_Popup_Upsell_Header_C.SetNeededPrice");
		
		UUI_Popup_Upsell_Header_C_SetNeededPrice_Params params {};
		params.RequiredPrice = RequiredPrice;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_Upsell_Header.UI_Popup_Upsell_Header_C.GetPreviousItemCurrencyType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EYUICurrency                                       currencyType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_Upsell_Header_C::GetPreviousItemCurrencyType(EYUICurrency* currencyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell_Header.UI_Popup_Upsell_Header_C.GetPreviousItemCurrencyType");
		
		UUI_Popup_Upsell_Header_C_GetPreviousItemCurrencyType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (currencyType != nullptr)
			*currencyType = params.currencyType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_Upsell_Header.UI_Popup_Upsell_Header_C.GetRequiredPriceData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        Price                                                      (Parm, OutParm)
	 * 		int32_t                                            CurrencyAmount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_Upsell_Header_C::GetRequiredPriceData(class FText* Price, int32_t* CurrencyAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell_Header.UI_Popup_Upsell_Header_C.GetRequiredPriceData");
		
		UUI_Popup_Upsell_Header_C_GetRequiredPriceData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Price != nullptr)
			*Price = params.Price;
		if (CurrencyAmount != nullptr)
			*CurrencyAmount = params.CurrencyAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Popup_Upsell_Header.UI_Popup_Upsell_Header_C.SetData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              PlayerCurrency                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPopupUpsellData*                            previousItem                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Popup_Upsell_Header_C::SetData(float PlayerCurrency, class UPopupUpsellData* previousItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Popup_Upsell_Header.UI_Popup_Upsell_Header_C.SetData");
		
		UUI_Popup_Upsell_Header_C_SetData_Params params {};
		params.PlayerCurrency = PlayerCurrency;
		params.previousItem = previousItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Popup_Upsell_Header_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Popup_Upsell_Header_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Popup_Upsell_Header.UI_Popup_Upsell_Header_C");
		return ptr;
	}

}


