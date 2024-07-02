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
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.UpdateFlagshipStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFlagship                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::UpdateFlagshipStatus(bool IsFlagship)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.UpdateFlagshipStatus");
		
		UUI_Button_ManufacturerTechTreeItem_C_UpdateFlagshipStatus_Params params {};
		params.IsFlagship = IsFlagship;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.InitializeFocus
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::InitializeFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.InitializeFocus");
		
		UUI_Button_ManufacturerTechTreeItem_C_InitializeFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.RefreshResearchIconVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::RefreshResearchIconVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.RefreshResearchIconVisibility");
		
		UUI_Button_ManufacturerTechTreeItem_C_RefreshResearchIconVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.GetShipClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EYShipClass                                        shipclass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::GetShipClass(EYShipClass* shipclass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.GetShipClass");
		
		UUI_Button_ManufacturerTechTreeItem_C_GetShipClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shipclass != nullptr)
			*shipclass = params.shipclass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.Setup");
		
		UUI_Button_ManufacturerTechTreeItem_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.HandleUnfocus");
		
		UUI_Button_ManufacturerTechTreeItem_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.HandleFocus");
		
		UUI_Button_ManufacturerTechTreeItem_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.Action");
		
		UUI_Button_ManufacturerTechTreeItem_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.GetShipItemID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::GetShipItemID(int32_t* itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.GetShipItemID");
		
		UUI_Button_ManufacturerTechTreeItem_C_GetShipItemID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (itemID != nullptr)
			*itemID = params.itemID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.GetShipCategoryTexture
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::GetShipCategoryTexture(class UTexture2D** Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.GetShipCategoryTexture");
		
		UUI_Button_ManufacturerTechTreeItem_C_GetShipCategoryTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Texture != nullptr)
			*Texture = params.Texture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.GetShipTier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            tier                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::GetShipTier(int32_t* tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.GetShipTier");
		
		UUI_Button_ManufacturerTechTreeItem_C_GetShipTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (tier != nullptr)
			*tier = params.tier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.GetShipData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (Parm, OutParm)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::GetShipData(struct FYUIShipManufacturerTechItemData* shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.GetShipData");
		
		UUI_Button_ManufacturerTechTreeItem_C_GetShipData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shipData != nullptr)
			*shipData = params.shipData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.SetShipDataAndUpdateWidgets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            arg_ShipData                                               (Parm)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::SetShipDataAndUpdateWidgets(const struct FYUIShipManufacturerTechItemData& arg_ShipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.SetShipDataAndUpdateWidgets");
		
		UUI_Button_ManufacturerTechTreeItem_C_SetShipDataAndUpdateWidgets_Params params {};
		params.arg_ShipData = arg_ShipData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.Construct");
		
		UUI_Button_ManufacturerTechTreeItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Button_ManufacturerTechTreeItem_C_BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Button_ManufacturerTechTreeItem_C_BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Button_ManufacturerTechTreeItem_C_BndEvt__ShipTechTreeItemButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.OnActionReceived");
		
		UUI_Button_ManufacturerTechTreeItem_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.ExecuteUbergraph_UI_Button_ManufacturerTechTreeItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::ExecuteUbergraph_UI_Button_ManufacturerTechTreeItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.ExecuteUbergraph_UI_Button_ManufacturerTechTreeItem");
		
		UUI_Button_ManufacturerTechTreeItem_C_ExecuteUbergraph_UI_Button_ManufacturerTechTreeItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.OnReceivedFocus__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::OnReceivedFocus__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.OnReceivedFocus__DelegateSignature");
		
		UUI_Button_ManufacturerTechTreeItem_C_OnReceivedFocus__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.OnShipTechTreeItemUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::OnShipTechTreeItemUnhovered__DelegateSignature(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.OnShipTechTreeItemUnhovered__DelegateSignature");
		
		UUI_Button_ManufacturerTechTreeItem_C_OnShipTechTreeItemUnhovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.OnShipTechTreeItemHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::OnShipTechTreeItemHovered__DelegateSignature(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.OnShipTechTreeItemHovered__DelegateSignature");
		
		UUI_Button_ManufacturerTechTreeItem_C_OnShipTechTreeItemHovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.OnShipTechTreeItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManufacturerTechTreeItem_C::OnShipTechTreeItemClicked__DelegateSignature(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C.OnShipTechTreeItemClicked__DelegateSignature");
		
		UUI_Button_ManufacturerTechTreeItem_C_OnShipTechTreeItemClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Button_ManufacturerTechTreeItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Button_ManufacturerTechTreeItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Button_ManufacturerTechTreeItem.UI_Button_ManufacturerTechTreeItem_C");
		return ptr;
	}

}


