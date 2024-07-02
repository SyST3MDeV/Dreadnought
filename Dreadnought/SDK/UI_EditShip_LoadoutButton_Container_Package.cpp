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
	 * 		Name   -> Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_LoadoutButton_Container_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.Action");
		
		UUI_EditShip_LoadoutButton_Container_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_LoadoutButton_Container_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.HandleUnfocus");
		
		UUI_EditShip_LoadoutButton_Container_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_LoadoutButton_Container_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.HandleFocus");
		
		UUI_EditShip_LoadoutButton_Container_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_LoadoutButton_Container_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.Construct");
		
		UUI_EditShip_LoadoutButton_Container_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.BndEvt__WeaponPrimary_K2Node_ComponentBoundEvent_9_OnButtonHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButton                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_LoadoutButton_Container_C::BndEvt__WeaponPrimary_K2Node_ComponentBoundEvent_9_OnButtonHovered__DelegateSignature(class UUI_Generic_Button_Module_C* ModuleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.BndEvt__WeaponPrimary_K2Node_ComponentBoundEvent_9_OnButtonHovered__DelegateSignature");
		
		UUI_EditShip_LoadoutButton_Container_C_BndEvt__WeaponPrimary_K2Node_ComponentBoundEvent_9_OnButtonHovered__DelegateSignature_Params params {};
		params.ModuleButton = ModuleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.BndEvt__WeaponPrimary_K2Node_ComponentBoundEvent_20_OnButtonUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_LoadoutButton_Container_C::BndEvt__WeaponPrimary_K2Node_ComponentBoundEvent_20_OnButtonUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.BndEvt__WeaponPrimary_K2Node_ComponentBoundEvent_20_OnButtonUnhovered__DelegateSignature");
		
		UUI_EditShip_LoadoutButton_Container_C_BndEvt__WeaponPrimary_K2Node_ComponentBoundEvent_20_OnButtonUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_LoadoutButton_Container_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.OnActionReceived");
		
		UUI_EditShip_LoadoutButton_Container_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.ExecuteUbergraph_UI_EditShip_LoadoutButton_Container
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_LoadoutButton_Container_C::ExecuteUbergraph_UI_EditShip_LoadoutButton_Container(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.ExecuteUbergraph_UI_EditShip_LoadoutButton_Container");
		
		UUI_EditShip_LoadoutButton_Container_C_ExecuteUbergraph_UI_EditShip_LoadoutButton_Container_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EditShip_LoadoutButton_Container_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditShip_LoadoutButton_Container_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C");
		return ptr;
	}

}


