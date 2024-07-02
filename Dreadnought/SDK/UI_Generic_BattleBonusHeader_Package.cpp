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
	 * 		Name   -> Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.HandleTimerExpired
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_BattleBonusHeader_C::HandleTimerExpired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.HandleTimerExpired");
		
		UUI_Generic_BattleBonusHeader_C_HandleTimerExpired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.ShowBattleBonusTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonusHeader_C::ShowBattleBonusTimer(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.ShowBattleBonusTimer");
		
		UUI_Generic_BattleBonusHeader_C_ShowBattleBonusTimer_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.SetBattleBonusTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              RemainingTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonusHeader_C::SetBattleBonusTime(float RemainingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.SetBattleBonusTime");
		
		UUI_Generic_BattleBonusHeader_C_SetBattleBonusTime_Params params {};
		params.RemainingTime = RemainingTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Generic_BattleBonusHeader_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.Construct");
		
		UUI_Generic_BattleBonusHeader_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.ExecuteUbergraph_UI_Generic_BattleBonusHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_BattleBonusHeader_C::ExecuteUbergraph_UI_Generic_BattleBonusHeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.ExecuteUbergraph_UI_Generic_BattleBonusHeader");
		
		UUI_Generic_BattleBonusHeader_C_ExecuteUbergraph_UI_Generic_BattleBonusHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.TimerExpired__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_BattleBonusHeader_C::TimerExpired__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C.TimerExpired__DelegateSignature");
		
		UUI_Generic_BattleBonusHeader_C_TimerExpired__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_BattleBonusHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_BattleBonusHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_BattleBonusHeader.UI_Generic_BattleBonusHeader_C");
		return ptr;
	}

}


