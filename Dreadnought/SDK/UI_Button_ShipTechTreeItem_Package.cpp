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
	 * 		Name   -> Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.SetSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ShipTechTreeItem_C::SetSelected(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.SetSelected");
		
		UUI_Button_ShipTechTreeItem_C_SetSelected_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.Setup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ShipTechTreeItem_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.Setup");
		
		UUI_Button_ShipTechTreeItem_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Button_ShipTechTreeItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.Construct");
		
		UUI_Button_ShipTechTreeItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_ShipTechTreeItem_C::BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Button_ShipTechTreeItem_C_BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_ShipTechTreeItem_C::BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Button_ShipTechTreeItem_C_BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_ShipTechTreeItem_C::BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Button_ShipTechTreeItem_C_BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.ExecuteUbergraph_UI_Button_ShipTechTreeItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ShipTechTreeItem_C::ExecuteUbergraph_UI_Button_ShipTechTreeItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.ExecuteUbergraph_UI_Button_ShipTechTreeItem");
		
		UUI_Button_ShipTechTreeItem_C_ExecuteUbergraph_UI_Button_ShipTechTreeItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.OnShipAbilityTreeItemUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ShipTechTreeItem_C::OnShipAbilityTreeItemUnhovered__DelegateSignature(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.OnShipAbilityTreeItemUnhovered__DelegateSignature");
		
		UUI_Button_ShipTechTreeItem_C_OnShipAbilityTreeItemUnhovered__DelegateSignature_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.OnShipAbilityTreeItemHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ShipTechTreeItem_C::OnShipAbilityTreeItemHovered__DelegateSignature(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.OnShipAbilityTreeItemHovered__DelegateSignature");
		
		UUI_Button_ShipTechTreeItem_C_OnShipAbilityTreeItemHovered__DelegateSignature_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.OnShipAbilityTreeItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ShipTechTreeItem_C::OnShipAbilityTreeItemClicked__DelegateSignature(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C.OnShipAbilityTreeItemClicked__DelegateSignature");
		
		UUI_Button_ShipTechTreeItem_C_OnShipAbilityTreeItemClicked__DelegateSignature_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Button_ShipTechTreeItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Button_ShipTechTreeItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Button_ShipTechTreeItem.UI_Button_ShipTechTreeItem_C");
		return ptr;
	}

}


