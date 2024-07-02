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
	 * 		Name   -> Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SettingRow_Hotkey_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.HandleUnfocus");
		
		UUI_SettingRow_Hotkey_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SettingRow_Hotkey_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.HandleFocus");
		
		UUI_SettingRow_Hotkey_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SettingRow_Hotkey_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.Setup");
		
		UUI_SettingRow_Hotkey_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.EnableInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingRow_Hotkey_C::EnableInput(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.EnableInput");
		
		UUI_SettingRow_Hotkey_C_EnableInput_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.EnableKeyPressMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingRow_Hotkey_C::EnableKeyPressMode(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.EnableKeyPressMode");
		
		UUI_SettingRow_Hotkey_C_EnableKeyPressMode_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_SettingRow_Hotkey_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.Construct");
		
		UUI_SettingRow_Hotkey_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.BndEvt__HotKeyButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingRow_Hotkey_C::BndEvt__HotKeyButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.BndEvt__HotKeyButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UUI_SettingRow_Hotkey_C_BndEvt__HotKeyButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UUI_SettingRow_Hotkey_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.OnMouseEnter");
		
		UUI_SettingRow_Hotkey_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UUI_SettingRow_Hotkey_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.OnMouseLeave");
		
		UUI_SettingRow_Hotkey_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.ExecuteUbergraph_UI_SettingRow_Hotkey
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingRow_Hotkey_C::ExecuteUbergraph_UI_SettingRow_Hotkey(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.ExecuteUbergraph_UI_SettingRow_Hotkey");
		
		UUI_SettingRow_Hotkey_C_ExecuteUbergraph_UI_SettingRow_Hotkey_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.OnHotkeyHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingRow_Hotkey_C::OnHotkeyHovered__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.OnHotkeyHovered__DelegateSignature");
		
		UUI_SettingRow_Hotkey_C_OnHotkeyHovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.OnHotKeyClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingRow_Hotkey_C::OnHotKeyClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.OnHotKeyClicked__DelegateSignature");
		
		UUI_SettingRow_Hotkey_C_OnHotKeyClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SettingRow_Hotkey_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SettingRow_Hotkey_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C");
		return ptr;
	}

}


