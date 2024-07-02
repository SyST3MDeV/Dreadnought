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
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.GetWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_DreadWidget*                             Widget                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::GetWidget(int32_t index, class UUI_DreadWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.GetWidget");
		
		UUI_ShipTechTree_ProgressionPath_C_GetWidget_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.GetIsShip
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsShip                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::GetIsShip(int32_t index, bool* IsShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.GetIsShip");
		
		UUI_ShipTechTree_ProgressionPath_C_GetIsShip_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsShip != nullptr)
			*IsShip = params.IsShip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.GetWidgetIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::GetWidgetIndex(class UUI_DreadWidget* Widget, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.GetWidgetIndex");
		
		UUI_ShipTechTree_ProgressionPath_C_GetWidgetIndex_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::HandleUnfocus(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.HandleUnfocus");
		
		UUI_ShipTechTree_ProgressionPath_C_HandleUnfocus_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::HandleFocus(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.HandleFocus");
		
		UUI_ShipTechTree_ProgressionPath_C_HandleFocus_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ModuleProgressionItemSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::ModuleProgressionItemSelected(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ModuleProgressionItemSelected");
		
		UUI_ShipTechTree_ProgressionPath_C_ModuleProgressionItemSelected_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ModuleProgressionItemUnhovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::ModuleProgressionItemUnhovered(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ModuleProgressionItemUnhovered");
		
		UUI_ShipTechTree_ProgressionPath_C_ModuleProgressionItemUnhovered_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ModuleProgressionItemHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::ModuleProgressionItemHovered(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ModuleProgressionItemHovered");
		
		UUI_ShipTechTree_ProgressionPath_C_ModuleProgressionItemHovered_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.FindColumnForItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            column                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               WasFound                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::FindColumnForItem(int32_t itemID, int32_t* column, bool* WasFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.FindColumnForItem");
		
		UUI_ShipTechTree_ProgressionPath_C_FindColumnForItem_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (column != nullptr)
			*column = params.column;
		if (WasFound != nullptr)
			*WasFound = params.WasFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ShipProgressionItemUnhovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::ShipProgressionItemUnhovered(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ShipProgressionItemUnhovered");
		
		UUI_ShipTechTree_ProgressionPath_C_ShipProgressionItemUnhovered_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ShipProgressionItemHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::ShipProgressionItemHovered(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ShipProgressionItemHovered");
		
		UUI_ShipTechTree_ProgressionPath_C_ShipProgressionItemHovered_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ShipProgressionItemSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::ShipProgressionItemSelected(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ShipProgressionItemSelected");
		
		UUI_ShipTechTree_ProgressionPath_C_ShipProgressionItemSelected_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ClearChildren
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::ClearChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.ClearChildren");
		
		UUI_ShipTechTree_ProgressionPath_C_ClearChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.AddProgressionItem
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            ShipItem                                                   (Parm)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::AddProgressionItem(const struct FYUIShipManufacturerTechItemData& ShipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.AddProgressionItem");
		
		UUI_ShipTechTree_ProgressionPath_C_AddProgressionItem_Params params {};
		params.ShipItem = ShipItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.AddProgressionItems
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYUIShipManufacturerTechItemData>    shipDataArray                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::AddProgressionItems(TArray<struct FYUIShipManufacturerTechItemData>* shipDataArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.AddProgressionItems");
		
		UUI_ShipTechTree_ProgressionPath_C_AddProgressionItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shipDataArray != nullptr)
			*shipDataArray = params.shipDataArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnModuleProgressionItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::OnModuleProgressionItemClicked__DelegateSignature(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnModuleProgressionItemClicked__DelegateSignature");
		
		UUI_ShipTechTree_ProgressionPath_C_OnModuleProgressionItemClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnModuleProgressionItemUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::OnModuleProgressionItemUnhovered__DelegateSignature(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnModuleProgressionItemUnhovered__DelegateSignature");
		
		UUI_ShipTechTree_ProgressionPath_C_OnModuleProgressionItemUnhovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnModuleProgressionItemHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::OnModuleProgressionItemHovered__DelegateSignature(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnModuleProgressionItemHovered__DelegateSignature");
		
		UUI_ShipTechTree_ProgressionPath_C_OnModuleProgressionItemHovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnShipProgressionItemUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::OnShipProgressionItemUnhovered__DelegateSignature(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnShipProgressionItemUnhovered__DelegateSignature");
		
		UUI_ShipTechTree_ProgressionPath_C_OnShipProgressionItemUnhovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnShipProgressionItemHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::OnShipProgressionItemHovered__DelegateSignature(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnShipProgressionItemHovered__DelegateSignature");
		
		UUI_ShipTechTree_ProgressionPath_C_OnShipProgressionItemHovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnShipProgressionItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_ProgressionPath_C::OnShipProgressionItemClicked__DelegateSignature(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C.OnShipProgressionItemClicked__DelegateSignature");
		
		UUI_ShipTechTree_ProgressionPath_C_OnShipProgressionItemClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ShipTechTree_ProgressionPath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ShipTechTree_ProgressionPath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C");
		return ptr;
	}

}


