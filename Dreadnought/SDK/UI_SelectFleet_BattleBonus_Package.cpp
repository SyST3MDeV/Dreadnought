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
	 * 		Name   -> Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SelectFleet_BattleBonus_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.HandleUnfocus");
		
		UUI_SelectFleet_BattleBonus_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SelectFleet_BattleBonus_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.HandleFocus");
		
		UUI_SelectFleet_BattleBonus_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.HandleTimerExpired
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SelectFleet_BattleBonus_C::HandleTimerExpired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.HandleTimerExpired");
		
		UUI_SelectFleet_BattleBonus_C_HandleTimerExpired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.SetupColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                InColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SelectFleet_BattleBonus_C::SetupColor(const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.SetupColor");
		
		UUI_SelectFleet_BattleBonus_C_SetupColor_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.SetCooldownTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              RemainingTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SelectFleet_BattleBonus_C::SetCooldownTime(float RemainingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.SetCooldownTime");
		
		UUI_SelectFleet_BattleBonus_C_SetCooldownTime_Params params {};
		params.RemainingTime = RemainingTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.SetupBonusValues
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SelectFleet_BattleBonus_C::SetupBonusValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.SetupBonusValues");
		
		UUI_SelectFleet_BattleBonus_C_SetupBonusValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SelectFleet_BattleBonus_C::Setup(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.Setup");
		
		UUI_SelectFleet_BattleBonus_C_Setup_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_SelectFleet_BattleBonus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.Construct");
		
		UUI_SelectFleet_BattleBonus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.OnFleetUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SelectFleet_BattleBonus_C::OnFleetUpdated(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.OnFleetUpdated");
		
		UUI_SelectFleet_BattleBonus_C_OnFleetUpdated_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.ExecuteUbergraph_UI_SelectFleet_BattleBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SelectFleet_BattleBonus_C::ExecuteUbergraph_UI_SelectFleet_BattleBonus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.ExecuteUbergraph_UI_SelectFleet_BattleBonus");
		
		UUI_SelectFleet_BattleBonus_C_ExecuteUbergraph_UI_SelectFleet_BattleBonus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.ActivateBattleBonusDispatcher__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SelectFleet_BattleBonus_C::ActivateBattleBonusDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C.ActivateBattleBonusDispatcher__DelegateSignature");
		
		UUI_SelectFleet_BattleBonus_C_ActivateBattleBonusDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SelectFleet_BattleBonus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SelectFleet_BattleBonus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SelectFleet_BattleBonus.UI_SelectFleet_BattleBonus_C");
		return ptr;
	}

}


