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
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.GetBattleBonusButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        ButtonActivate                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonus_C::GetBattleBonusButton(class UUI_Button_Generic_C** ButtonActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.GetBattleBonusButton");
		
		UUI_Generic_BattleBonus_C_GetBattleBonusButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ButtonActivate != nullptr)
			*ButtonActivate = params.ButtonActivate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.SetupActivateButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_BattleBonus_C::SetupActivateButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.SetupActivateButton");
		
		UUI_Generic_BattleBonus_C_SetupActivateButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.ShowActivateButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonus_C::ShowActivateButton(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.ShowActivateButton");
		
		UUI_Generic_BattleBonus_C_ShowActivateButton_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.OnPurchasePopupResult
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        SelectedButtonRef                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonus_C::OnPurchasePopupResult(class UUI_Button_Generic_C* SelectedButtonRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.OnPurchasePopupResult");
		
		UUI_Generic_BattleBonus_C_OnPurchasePopupResult_Params params {};
		params.SelectedButtonRef = SelectedButtonRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.ShowBattleReadyBonusConfirmPopup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_BattleBonus_C::ShowBattleReadyBonusConfirmPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.ShowBattleReadyBonusConfirmPopup");
		
		UUI_Generic_BattleBonus_C_ShowBattleReadyBonusConfirmPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.HandleTimerExpired
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_BattleBonus_C::HandleTimerExpired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.HandleTimerExpired");
		
		UUI_Generic_BattleBonus_C_HandleTimerExpired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.SetupColorByFleet
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        Fleet                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonus_C::SetupColorByFleet(EYFleetType Fleet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.SetupColorByFleet");
		
		UUI_Generic_BattleBonus_C_SetupColorByFleet_Params params {};
		params.Fleet = Fleet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.SetCooldownTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              RemainingTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonus_C::SetCooldownTime(float RemainingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.SetCooldownTime");
		
		UUI_Generic_BattleBonus_C_SetCooldownTime_Params params {};
		params.RemainingTime = RemainingTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.SetupBonusValues
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_BattleBonus_C::SetupBonusValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.SetupBonusValues");
		
		UUI_Generic_BattleBonus_C_SetupBonusValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonus_C::Setup(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.Setup");
		
		UUI_Generic_BattleBonus_C_Setup_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Generic_BattleBonus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.Construct");
		
		UUI_Generic_BattleBonus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.BndEvt__ButtonActivate_K2Node_ComponentBoundEvent_90_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonus_C::BndEvt__ButtonActivate_K2Node_ComponentBoundEvent_90_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.BndEvt__ButtonActivate_K2Node_ComponentBoundEvent_90_OnButtonClicked__DelegateSignature");
		
		UUI_Generic_BattleBonus_C_BndEvt__ButtonActivate_K2Node_ComponentBoundEvent_90_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.OnFleetUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonus_C::OnFleetUpdated(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.OnFleetUpdated");
		
		UUI_Generic_BattleBonus_C_OnFleetUpdated_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.OnBattleBonusPurcahsed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonus_C::OnBattleBonusPurcahsed(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.OnBattleBonusPurcahsed");
		
		UUI_Generic_BattleBonus_C_OnBattleBonusPurcahsed_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Generic_BattleBonus_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.OnActionReceived");
		
		UUI_Generic_BattleBonus_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.ExecuteUbergraph_UI_Generic_BattleBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonus_C::ExecuteUbergraph_UI_Generic_BattleBonus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.ExecuteUbergraph_UI_Generic_BattleBonus");
		
		UUI_Generic_BattleBonus_C_ExecuteUbergraph_UI_Generic_BattleBonus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.ActivateBattleBonusDispatcher__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_BattleBonus_C::ActivateBattleBonusDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.ActivateBattleBonusDispatcher__DelegateSignature");
		
		UUI_Generic_BattleBonus_C_ActivateBattleBonusDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_BattleBonus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_BattleBonus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_BattleBonus.UI_Generic_BattleBonus_C");
		return ptr;
	}

}


