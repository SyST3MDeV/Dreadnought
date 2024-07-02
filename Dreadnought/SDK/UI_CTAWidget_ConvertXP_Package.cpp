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
	 * 		Name   -> Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CTAWidget_ConvertXP_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.Setup");
		
		UUI_CTAWidget_ConvertXP_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.SetLegendHints
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CTAWidget_ConvertXP_C::SetLegendHints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.SetLegendHints");
		
		UUI_CTAWidget_ConvertXP_C_SetLegendHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CTAWidget_ConvertXP_C::HandleInput(EUI_MenuActions GamePadButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.HandleInput");
		
		UUI_CTAWidget_ConvertXP_C_HandleInput_Params params {};
		params.GamePadButton = GamePadButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_CTAWidget_ConvertXP_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.Construct");
		
		UUI_CTAWidget_ConvertXP_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CTAWidget_ConvertXP_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature");
		
		UUI_CTAWidget_ConvertXP_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.BndEvt__HidePanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CTAWidget_ConvertXP_C::BndEvt__HidePanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.BndEvt__HidePanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UUI_CTAWidget_ConvertXP_C_BndEvt__HidePanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CTAWidget_ConvertXP_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.OnNavigationEvent");
		
		UUI_CTAWidget_ConvertXP_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_CTAWidget_ConvertXP_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.OnTransitionOut");
		
		UUI_CTAWidget_ConvertXP_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_CTAWidget_ConvertXP_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.OnTransitionIn");
		
		UUI_CTAWidget_ConvertXP_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.BndEvt__ShowPanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CTAWidget_ConvertXP_C::BndEvt__ShowPanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.BndEvt__ShowPanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UUI_CTAWidget_ConvertXP_C_BndEvt__ShowPanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.BndEvt__ConvertXPButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CTAWidget_ConvertXP_C::BndEvt__ConvertXPButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.BndEvt__ConvertXPButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UUI_CTAWidget_ConvertXP_C_BndEvt__ConvertXPButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.ExecuteUbergraph_UI_CTAWidget_ConvertXP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CTAWidget_ConvertXP_C::ExecuteUbergraph_UI_CTAWidget_ConvertXP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C.ExecuteUbergraph_UI_CTAWidget_ConvertXP");
		
		UUI_CTAWidget_ConvertXP_C_ExecuteUbergraph_UI_CTAWidget_ConvertXP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CTAWidget_ConvertXP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CTAWidget_ConvertXP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CTAWidget_ConvertXP.UI_CTAWidget_ConvertXP_C");
		return ptr;
	}

}


