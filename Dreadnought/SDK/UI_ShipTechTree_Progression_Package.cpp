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
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.GetIsShip
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsShip                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_Progression_C::GetIsShip(bool* IsShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.GetIsShip");
		
		UUI_ShipTechTree_Progression_C_GetIsShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsShip != nullptr)
			*IsShip = params.IsShip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.GetWidgetItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             Widget                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_Progression_C::GetWidgetItem(class UUI_DreadWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.GetWidgetItem");
		
		UUI_ShipTechTree_Progression_C_GetWidgetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ShipTechTree_Progression_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.HandleUnfocus");
		
		UUI_ShipTechTree_Progression_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ShipTechTree_Progression_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.HandleFocus");
		
		UUI_ShipTechTree_Progression_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ModuleProgressionItemSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_Progression_C::ModuleProgressionItemSelected(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ModuleProgressionItemSelected");
		
		UUI_ShipTechTree_Progression_C_ModuleProgressionItemSelected_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ModuleProgressionItemUnhovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ShipTechTree_Progression_C::ModuleProgressionItemUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ModuleProgressionItemUnhovered");
		
		UUI_ShipTechTree_Progression_C_ModuleProgressionItemUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ModuleProgressionItemHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_Progression_C::ModuleProgressionItemHovered(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ModuleProgressionItemHovered");
		
		UUI_ShipTechTree_Progression_C_ModuleProgressionItemHovered_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ShipProgressionItemUnhovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_Progression_C::ShipProgressionItemUnhovered(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ShipProgressionItemUnhovered");
		
		UUI_ShipTechTree_Progression_C_ShipProgressionItemUnhovered_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ShipProgressionItemHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_Progression_C::ShipProgressionItemHovered(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ShipProgressionItemHovered");
		
		UUI_ShipTechTree_Progression_C_ShipProgressionItemHovered_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ShipProgressionItemSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_Progression_C::ShipProgressionItemSelected(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.ShipProgressionItemSelected");
		
		UUI_ShipTechTree_Progression_C_ShipProgressionItemSelected_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.SetModulesRequired
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ModuleRequiresCount                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_Progression_C::SetModulesRequired(int32_t ModuleRequiresCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.SetModulesRequired");
		
		UUI_ShipTechTree_Progression_C_SetModulesRequired_Params params {};
		params.ModuleRequiresCount = ModuleRequiresCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.SetupProgressBar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ShipTechTree_Progression_C::SetupProgressBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.SetupProgressBar");
		
		UUI_ShipTechTree_Progression_C_SetupProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.SetModulesOwned
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OwnedModuleCount                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_Progression_C::SetModulesOwned(int32_t OwnedModuleCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.SetModulesOwned");
		
		UUI_ShipTechTree_Progression_C_SetModulesOwned_Params params {};
		params.OwnedModuleCount = OwnedModuleCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.Setup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (Parm)
	 */
	void UUI_ShipTechTree_Progression_C::Setup(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.Setup");
		
		UUI_ShipTechTree_Progression_C_Setup_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnModuleProgressionItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_Progression_C::OnModuleProgressionItemClicked__DelegateSignature(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnModuleProgressionItemClicked__DelegateSignature");
		
		UUI_ShipTechTree_Progression_C_OnModuleProgressionItemClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnModuleProgressionItemUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_Progression_C::OnModuleProgressionItemUnhovered__DelegateSignature(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnModuleProgressionItemUnhovered__DelegateSignature");
		
		UUI_ShipTechTree_Progression_C_OnModuleProgressionItemUnhovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnModuleProgressionItemHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_Progression_C::OnModuleProgressionItemHovered__DelegateSignature(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnModuleProgressionItemHovered__DelegateSignature");
		
		UUI_ShipTechTree_Progression_C_OnModuleProgressionItemHovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnShipProgressionItemUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_Progression_C::OnShipProgressionItemUnhovered__DelegateSignature(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnShipProgressionItemUnhovered__DelegateSignature");
		
		UUI_ShipTechTree_Progression_C_OnShipProgressionItemUnhovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnShipProgressionItemHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_Progression_C::OnShipProgressionItemHovered__DelegateSignature(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnShipProgressionItemHovered__DelegateSignature");
		
		UUI_ShipTechTree_Progression_C_OnShipProgressionItemHovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnShipProgressionItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_Progression_C::OnShipProgressionItemClicked__DelegateSignature(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C.OnShipProgressionItemClicked__DelegateSignature");
		
		UUI_ShipTechTree_Progression_C_OnShipProgressionItemClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ShipTechTree_Progression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ShipTechTree_Progression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C");
		return ptr;
	}

}


