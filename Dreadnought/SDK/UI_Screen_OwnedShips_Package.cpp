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
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.ShipClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (Parm)
	 * 		class UUI_Button_FleetAddShipItem_C*               source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_OwnedShips_C::ShipClicked(const struct FYUIShipManufacturerTechItemData& shipData, class UUI_Button_FleetAddShipItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.ShipClicked");
		
		UUI_Screen_OwnedShips_C_ShipClicked_Params params {};
		params.shipData = shipData;
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.HandleGranularDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_OwnedShips_C::HandleGranularDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.HandleGranularDown");
		
		UUI_Screen_OwnedShips_C_HandleGranularDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.HandleGranularUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_OwnedShips_C::HandleGranularUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.HandleGranularUp");
		
		UUI_Screen_OwnedShips_C_HandleGranularUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.HandleGranularLeft
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_OwnedShips_C::HandleGranularLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.HandleGranularLeft");
		
		UUI_Screen_OwnedShips_C_HandleGranularLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.HandleGranularRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_OwnedShips_C::HandleGranularRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.HandleGranularRight");
		
		UUI_Screen_OwnedShips_C_HandleGranularRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.UpdateGridItemFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_OwnedShips_C::UpdateGridItemFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.UpdateGridItemFocus");
		
		UUI_Screen_OwnedShips_C_UpdateGridItemFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.UnfocusCurrentGridItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_OwnedShips_C::UnfocusCurrentGridItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.UnfocusCurrentGridItem");
		
		UUI_Screen_OwnedShips_C_UnfocusCurrentGridItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    Input                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_OwnedShips_C::HandleInput(EUI_MenuActions Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.HandleInput");
		
		UUI_Screen_OwnedShips_C_HandleInput_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.SetupScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_OwnedShips_C::SetupScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.SetupScreen");
		
		UUI_Screen_OwnedShips_C_SetupScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.ShipFocused
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_FleetAddShipItem_C*               source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_OwnedShips_C::ShipFocused(class UUI_Button_FleetAddShipItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.ShipFocused");
		
		UUI_Screen_OwnedShips_C_ShipFocused_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.SetupShipList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_OwnedShips_C::SetupShipList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.SetupShipList");
		
		UUI_Screen_OwnedShips_C_SetupShipList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_OwnedShips_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.Construct");
		
		UUI_Screen_OwnedShips_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_OwnedShips_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.OnTransitionIn");
		
		UUI_Screen_OwnedShips_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_OwnedShips_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.OnTransitionOut");
		
		UUI_Screen_OwnedShips_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_OwnedShips_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.TransitionInAnimationComplete");
		
		UUI_Screen_OwnedShips_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_OwnedShips_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.TransitionOutAnimationComplete");
		
		UUI_Screen_OwnedShips_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.BndEvt__ShipFilterWidget_K2Node_ComponentBoundEvent_0_OnFilterUpdated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_OwnedShips_C::BndEvt__ShipFilterWidget_K2Node_ComponentBoundEvent_0_OnFilterUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.BndEvt__ShipFilterWidget_K2Node_ComponentBoundEvent_0_OnFilterUpdated__DelegateSignature");
		
		UUI_Screen_OwnedShips_C_BndEvt__ShipFilterWidget_K2Node_ComponentBoundEvent_0_OnFilterUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.BndEvt__ShipDetailsPanel_K2Node_ComponentBoundEvent_819_ViewShipDetailsClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ShipId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_OwnedShips_C::BndEvt__ShipDetailsPanel_K2Node_ComponentBoundEvent_819_ViewShipDetailsClicked__DelegateSignature(int32_t ShipId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.BndEvt__ShipDetailsPanel_K2Node_ComponentBoundEvent_819_ViewShipDetailsClicked__DelegateSignature");
		
		UUI_Screen_OwnedShips_C_BndEvt__ShipDetailsPanel_K2Node_ComponentBoundEvent_819_ViewShipDetailsClicked__DelegateSignature_Params params {};
		params.ShipId = ShipId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_OwnedShips_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.OnNavigationEvent");
		
		UUI_Screen_OwnedShips_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.ExecuteUbergraph_UI_Screen_OwnedShips
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_OwnedShips_C::ExecuteUbergraph_UI_Screen_OwnedShips(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_OwnedShips.UI_Screen_OwnedShips_C.ExecuteUbergraph_UI_Screen_OwnedShips");
		
		UUI_Screen_OwnedShips_C_ExecuteUbergraph_UI_Screen_OwnedShips_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_OwnedShips_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_OwnedShips_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_OwnedShips.UI_Screen_OwnedShips_C");
		return ptr;
	}

}


