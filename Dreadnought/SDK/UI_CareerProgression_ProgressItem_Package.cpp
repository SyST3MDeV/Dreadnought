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
	 * 		Name   -> Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CareerProgression_ProgressItem_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.Setup");
		
		UUI_CareerProgression_ProgressItem_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.GetRewardState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EYCareerProgressionRewardState                     MRewardState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CareerProgression_ProgressItem_C::GetRewardState(EYCareerProgressionRewardState* MRewardState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.GetRewardState");
		
		UUI_CareerProgression_ProgressItem_C_GetRewardState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MRewardState != nullptr)
			*MRewardState = params.MRewardState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.InitializeProgressItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCareerProgressionGoalUIData                GoalData                                                   (Parm)
	 */
	void UUI_CareerProgression_ProgressItem_C::InitializeProgressItem(const struct FCareerProgressionGoalUIData& GoalData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.InitializeProgressItem");
		
		UUI_CareerProgression_ProgressItem_C_InitializeProgressItem_Params params {};
		params.GoalData = GoalData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.GetGoalID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        goalId                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CareerProgression_ProgressItem_C::GetGoalID(class FName* goalId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.GetGoalID");
		
		UUI_CareerProgression_ProgressItem_C_GetGoalID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (goalId != nullptr)
			*goalId = params.goalId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.SetGoalDataToClaimedAndApply
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CareerProgression_ProgressItem_C::SetGoalDataToClaimedAndApply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.SetGoalDataToClaimedAndApply");
		
		UUI_CareerProgression_ProgressItem_C_SetGoalDataToClaimedAndApply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CareerProgression_ProgressItem_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.HandleUnfocus");
		
		UUI_CareerProgression_ProgressItem_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CareerProgression_ProgressItem_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.HandleFocus");
		
		UUI_CareerProgression_ProgressItem_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.ApplyGoalData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CareerProgression_ProgressItem_C::ApplyGoalData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.ApplyGoalData");
		
		UUI_CareerProgression_ProgressItem_C_ApplyGoalData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.OnClaimButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CareerProgression_ProgressItem_C::OnClaimButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.OnClaimButtonClicked");
		
		UUI_CareerProgression_ProgressItem_C_OnClaimButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CareerProgression_ProgressItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CareerProgression_ProgressItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CareerProgression_ProgressItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CareerProgression_ProgressItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_CareerProgression_ProgressItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.Construct");
		
		UUI_CareerProgression_ProgressItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.ExecuteUbergraph_UI_CareerProgression_ProgressItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CareerProgression_ProgressItem_C::ExecuteUbergraph_UI_CareerProgression_ProgressItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.ExecuteUbergraph_UI_CareerProgression_ProgressItem");
		
		UUI_CareerProgression_ProgressItem_C_ExecuteUbergraph_UI_CareerProgression_ProgressItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CareerProgression_ProgressItem_C*        source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CareerProgression_ProgressItem_C::OnClicked__DelegateSignature(class UUI_CareerProgression_ProgressItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.OnClicked__DelegateSignature");
		
		UUI_CareerProgression_ProgressItem_C_OnClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.OnHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CareerProgression_ProgressItem_C*        source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CareerProgression_ProgressItem_C::OnHovered__DelegateSignature(class UUI_CareerProgression_ProgressItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C.OnHovered__DelegateSignature");
		
		UUI_CareerProgression_ProgressItem_C_OnHovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CareerProgression_ProgressItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CareerProgression_ProgressItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CareerProgression_ProgressItem.UI_CareerProgression_ProgressItem_C");
		return ptr;
	}

}


