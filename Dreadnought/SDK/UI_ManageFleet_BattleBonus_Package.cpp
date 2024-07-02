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
	 * 		Name   -> Function UI_ManageFleet_BattleBonus.UI_ManageFleet_BattleBonus_C.SetTierColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ManageFleet_BattleBonus_C::SetTierColor(int32_t tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ManageFleet_BattleBonus.UI_ManageFleet_BattleBonus_C.SetTierColor");
		
		UUI_ManageFleet_BattleBonus_C_SetTierColor_Params params {};
		params.tier = tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ManageFleet_BattleBonus.UI_ManageFleet_BattleBonus_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_ManageFleet_BattleBonus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ManageFleet_BattleBonus.UI_ManageFleet_BattleBonus_C.Construct");
		
		UUI_ManageFleet_BattleBonus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ManageFleet_BattleBonus.UI_ManageFleet_BattleBonus_C.ExecuteUbergraph_UI_ManageFleet_BattleBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ManageFleet_BattleBonus_C::ExecuteUbergraph_UI_ManageFleet_BattleBonus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ManageFleet_BattleBonus.UI_ManageFleet_BattleBonus_C.ExecuteUbergraph_UI_ManageFleet_BattleBonus");
		
		UUI_ManageFleet_BattleBonus_C_ExecuteUbergraph_UI_ManageFleet_BattleBonus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ManageFleet_BattleBonus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ManageFleet_BattleBonus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ManageFleet_BattleBonus.UI_ManageFleet_BattleBonus_C");
		return ptr;
	}

}


