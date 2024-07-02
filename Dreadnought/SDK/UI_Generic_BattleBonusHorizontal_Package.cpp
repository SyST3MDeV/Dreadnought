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
	 * 		Name   -> Function UI_Generic_BattleBonusHorizontal.UI_Generic_BattleBonusHorizontal_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_BattleBonusHorizontal_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonusHorizontal.UI_Generic_BattleBonusHorizontal_C.Setup");
		
		UUI_Generic_BattleBonusHorizontal_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonusHorizontal.UI_Generic_BattleBonusHorizontal_C.SetAmount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonusHorizontal_C::SetAmount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonusHorizontal.UI_Generic_BattleBonusHorizontal_C.SetAmount");
		
		UUI_Generic_BattleBonusHorizontal_C_SetAmount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonusHorizontal.UI_Generic_BattleBonusHorizontal_C.SetImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  CurrencyTexture                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonusHorizontal_C::SetImage(class UTexture2D* CurrencyTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonusHorizontal.UI_Generic_BattleBonusHorizontal_C.SetImage");
		
		UUI_Generic_BattleBonusHorizontal_C_SetImage_Params params {};
		params.CurrencyTexture = CurrencyTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonusHorizontal.UI_Generic_BattleBonusHorizontal_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonusHorizontal_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonusHorizontal.UI_Generic_BattleBonusHorizontal_C.PreConstruct");
		
		UUI_Generic_BattleBonusHorizontal_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonusHorizontal.UI_Generic_BattleBonusHorizontal_C.ExecuteUbergraph_UI_Generic_BattleBonusHorizontal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonusHorizontal_C::ExecuteUbergraph_UI_Generic_BattleBonusHorizontal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonusHorizontal.UI_Generic_BattleBonusHorizontal_C.ExecuteUbergraph_UI_Generic_BattleBonusHorizontal");
		
		UUI_Generic_BattleBonusHorizontal_C_ExecuteUbergraph_UI_Generic_BattleBonusHorizontal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_BattleBonusHorizontal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_BattleBonusHorizontal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_BattleBonusHorizontal.UI_Generic_BattleBonusHorizontal_C");
		return ptr;
	}

}


