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
	 * 		Name   -> Function AxisInputHelper.AxisInputHelper_C.GetPrevailingVerticalValue
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              VerticalAxis                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAxisInputHelper_C::GetPrevailingVerticalValue(float* VerticalAxis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisInputHelper.AxisInputHelper_C.GetPrevailingVerticalValue");
		
		UAxisInputHelper_C_GetPrevailingVerticalValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VerticalAxis != nullptr)
			*VerticalAxis = params.VerticalAxis;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function AxisInputHelper.AxisInputHelper_C.GetPrevailingHorizontalValue
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              HorizontalAxis                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAxisInputHelper_C::GetPrevailingHorizontalValue(float* HorizontalAxis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisInputHelper.AxisInputHelper_C.GetPrevailingHorizontalValue");
		
		UAxisInputHelper_C_GetPrevailingHorizontalValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HorizontalAxis != nullptr)
			*HorizontalAxis = params.HorizontalAxis;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function AxisInputHelper.AxisInputHelper_C.IsValueOutsideDeadzone
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsOutsideDeadzone                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAxisInputHelper_C::IsValueOutsideDeadzone(float AxisValue, bool* IsOutsideDeadzone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisInputHelper.AxisInputHelper_C.IsValueOutsideDeadzone");
		
		UAxisInputHelper_C_IsValueOutsideDeadzone_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOutsideDeadzone != nullptr)
			*IsOutsideDeadzone = params.IsOutsideDeadzone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function AxisInputHelper.AxisInputHelper_C.UpdateVerticalAxis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              VerticalValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UpdatedFromButton                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAxisInputHelper_C::UpdateVerticalAxis(float VerticalValue, bool UpdatedFromButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisInputHelper.AxisInputHelper_C.UpdateVerticalAxis");
		
		UAxisInputHelper_C_UpdateVerticalAxis_Params params {};
		params.VerticalValue = VerticalValue;
		params.UpdatedFromButton = UpdatedFromButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function AxisInputHelper.AxisInputHelper_C.UpdateHorizontalAxis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HorizontalValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UpdatedFromButton                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAxisInputHelper_C::UpdateHorizontalAxis(float HorizontalValue, bool UpdatedFromButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisInputHelper.AxisInputHelper_C.UpdateHorizontalAxis");
		
		UAxisInputHelper_C_UpdateHorizontalAxis_Params params {};
		params.HorizontalValue = HorizontalValue;
		params.UpdatedFromButton = UpdatedFromButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function AxisInputHelper.AxisInputHelper_C.DoesMenuActionMatchAxisDirection
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EUI_MenuActions                                    MenuAction                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAxisInputHelper_C::DoesMenuActionMatchAxisDirection(EUI_MenuActions MenuAction, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisInputHelper.AxisInputHelper_C.DoesMenuActionMatchAxisDirection");
		
		UAxisInputHelper_C_DoesMenuActionMatchAxisDirection_Params params {};
		params.MenuAction = MenuAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function AxisInputHelper.AxisInputHelper_C.CheckAndResetVerticalDelay
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DelayCompleteAndReset                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAxisInputHelper_C::CheckAndResetVerticalDelay(bool* DelayCompleteAndReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisInputHelper.AxisInputHelper_C.CheckAndResetVerticalDelay");
		
		UAxisInputHelper_C_CheckAndResetVerticalDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DelayCompleteAndReset != nullptr)
			*DelayCompleteAndReset = params.DelayCompleteAndReset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function AxisInputHelper.AxisInputHelper_C.CheckAndResetHorizontalDelay
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DelayCompletedAndReset                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAxisInputHelper_C::CheckAndResetHorizontalDelay(bool* DelayCompletedAndReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisInputHelper.AxisInputHelper_C.CheckAndResetHorizontalDelay");
		
		UAxisInputHelper_C_CheckAndResetHorizontalDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DelayCompletedAndReset != nullptr)
			*DelayCompletedAndReset = params.DelayCompletedAndReset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function AxisInputHelper.AxisInputHelper_C.GetTime
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAxisInputHelper_C::GetTime(float* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisInputHelper.AxisInputHelper_C.GetTime");
		
		UAxisInputHelper_C_GetTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function AxisInputHelper.AxisInputHelper_C.ShouldMenuActionBeHandled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EUI_MenuActions                                    MenuAction                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllowActionToBeHandled                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAxisInputHelper_C::ShouldMenuActionBeHandled(EUI_MenuActions MenuAction, bool* AllowActionToBeHandled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AxisInputHelper.AxisInputHelper_C.ShouldMenuActionBeHandled");
		
		UAxisInputHelper_C_ShouldMenuActionBeHandled_Params params {};
		params.MenuAction = MenuAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowActionToBeHandled != nullptr)
			*AllowActionToBeHandled = params.AllowActionToBeHandled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAxisInputHelper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAxisInputHelper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AxisInputHelper.AxisInputHelper_C");
		return ptr;
	}

}


