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
	 * 		Name   -> Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_Welcome_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.Setup");
		
		UUI_Login_PS4_Panel_Welcome_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.UnfocusItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_Welcome_C::UnfocusItem(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.UnfocusItem");
		
		UUI_Login_PS4_Panel_Welcome_C_UnfocusItem_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.FocusItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_Welcome_C::FocusItem(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.FocusItem");
		
		UUI_Login_PS4_Panel_Welcome_C_FocusItem_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.GetIndexWrappingValues
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            CurrentIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumColumns                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            listLength                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_Welcome_C::GetIndexWrappingValues(int32_t* CurrentIndex, int32_t* NumColumns, int32_t* listLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.GetIndexWrappingValues");
		
		UUI_Login_PS4_Panel_Welcome_C_GetIndexWrappingValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentIndex != nullptr)
			*CurrentIndex = params.CurrentIndex;
		if (NumColumns != nullptr)
			*NumColumns = params.NumColumns;
		if (listLength != nullptr)
			*listLength = params.listLength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_Welcome_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.Action");
		
		UUI_Login_PS4_Panel_Welcome_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.HandleGranularDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_Welcome_C::HandleGranularDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.HandleGranularDown");
		
		UUI_Login_PS4_Panel_Welcome_C_HandleGranularDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.HandleGranularUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_Welcome_C::HandleGranularUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.HandleGranularUp");
		
		UUI_Login_PS4_Panel_Welcome_C_HandleGranularUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.OnShow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_Welcome_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.OnShow");
		
		UUI_Login_PS4_Panel_Welcome_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.OnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_Welcome_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.OnHide");
		
		UUI_Login_PS4_Panel_Welcome_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Login_PS4_Panel_Welcome_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.Construct");
		
		UUI_Login_PS4_Panel_Welcome_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.BndEvt__LinkAccount_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_Welcome_C::BndEvt__LinkAccount_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UUI_Button_Generic_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.BndEvt__LinkAccount_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UUI_Login_PS4_Panel_Welcome_C_BndEvt__LinkAccount_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.BndEvt__CreateAccount_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_Welcome_C::BndEvt__CreateAccount_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UUI_Button_Generic_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.BndEvt__CreateAccount_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UUI_Login_PS4_Panel_Welcome_C_BndEvt__CreateAccount_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.ExecuteUbergraph_UI_Login_PS4_Panel_Welcome
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_Welcome_C::ExecuteUbergraph_UI_Login_PS4_Panel_Welcome(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.ExecuteUbergraph_UI_Login_PS4_Panel_Welcome");
		
		UUI_Login_PS4_Panel_Welcome_C_ExecuteUbergraph_UI_Login_PS4_Panel_Welcome_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.RequestSubState__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELoginSubScreensPS4                                NewSubState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Login_PS4_Panel_Welcome_C::RequestSubState__DelegateSignature(ELoginSubScreensPS4 NewSubState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C.RequestSubState__DelegateSignature");
		
		UUI_Login_PS4_Panel_Welcome_C_RequestSubState__DelegateSignature_Params params {};
		params.NewSubState = NewSubState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Login_PS4_Panel_Welcome_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Login_PS4_Panel_Welcome_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C");
		return ptr;
	}

}


