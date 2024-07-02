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
	 * 		Name   -> Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditAppearance_Button_CaptainCustomization_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.Action");
		
		UUI_EditAppearance_Button_CaptainCustomization_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.SetPlayerName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor)
	 */
	void UUI_EditAppearance_Button_CaptainCustomization_C::SetPlayerName(const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.SetPlayerName");
		
		UUI_EditAppearance_Button_CaptainCustomization_C_SetPlayerName_Params params {};
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.SetCaptainImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      imagePath                                                  (Parm, ZeroConstructor)
	 */
	void UUI_EditAppearance_Button_CaptainCustomization_C::SetCaptainImage(const class FString& imagePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.SetCaptainImage");
		
		UUI_EditAppearance_Button_CaptainCustomization_C_SetCaptainImage_Params params {};
		params.imagePath = imagePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.Setup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditAppearance_Button_CaptainCustomization_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.Setup");
		
		UUI_EditAppearance_Button_CaptainCustomization_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditAppearance_Button_CaptainCustomization_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.HandleUnfocus");
		
		UUI_EditAppearance_Button_CaptainCustomization_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditAppearance_Button_CaptainCustomization_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.HandleFocus");
		
		UUI_EditAppearance_Button_CaptainCustomization_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_EditAppearance_Button_CaptainCustomization_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.Construct");
		
		UUI_EditAppearance_Button_CaptainCustomization_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditAppearance_Button_CaptainCustomization_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");
		
		UUI_EditAppearance_Button_CaptainCustomization_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditAppearance_Button_CaptainCustomization_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditAppearance_Button_CaptainCustomization_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_88_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditAppearance_Button_CaptainCustomization_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_88_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_88_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditAppearance_Button_CaptainCustomization_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_88_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_EditAppearance_Button_CaptainCustomization_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.OnActionReceived");
		
		UUI_EditAppearance_Button_CaptainCustomization_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.ExecuteUbergraph_UI_EditAppearance_Button_CaptainCustomization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditAppearance_Button_CaptainCustomization_C::ExecuteUbergraph_UI_EditAppearance_Button_CaptainCustomization(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C.ExecuteUbergraph_UI_EditAppearance_Button_CaptainCustomization");
		
		UUI_EditAppearance_Button_CaptainCustomization_C_ExecuteUbergraph_UI_EditAppearance_Button_CaptainCustomization_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EditAppearance_Button_CaptainCustomization_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditAppearance_Button_CaptainCustomization_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EditAppearance_Button_CaptainCustomization.UI_EditAppearance_Button_CaptainCustomization_C");
		return ptr;
	}

}


