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
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.UpdateCurrentItemOnHover
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_FleetAddShipItem_C*               source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_AddShipToFleet_C::UpdateCurrentItemOnHover(class UUI_Button_FleetAddShipItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.UpdateCurrentItemOnHover");
		
		UUI_Screen_AddShipToFleet_C_UpdateCurrentItemOnHover_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.AddAndBindButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_FleetAddShipItem_C*               AddShipButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_AddShipToFleet_C::AddAndBindButton(class UUI_Button_FleetAddShipItem_C* AddShipButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.AddAndBindButton");
		
		UUI_Screen_AddShipToFleet_C_AddAndBindButton_Params params {};
		params.AddShipButton = AddShipButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.UpdateGridItemFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IndexToFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_AddShipToFleet_C::UpdateGridItemFocus(int32_t IndexToFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.UpdateGridItemFocus");
		
		UUI_Screen_AddShipToFleet_C_UpdateGridItemFocus_Params params {};
		params.IndexToFocus = IndexToFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.SetupScreen
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_AddShipToFleet_C::SetupScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.SetupScreen");
		
		UUI_Screen_AddShipToFleet_C_SetupScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleAddButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_AddShipToFleet_C::HandleAddButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleAddButtonClicked");
		
		UUI_Screen_AddShipToFleet_C_HandleAddButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleGranularLeft
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_AddShipToFleet_C::HandleGranularLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleGranularLeft");
		
		UUI_Screen_AddShipToFleet_C_HandleGranularLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleGranularRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_AddShipToFleet_C::HandleGranularRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleGranularRight");
		
		UUI_Screen_AddShipToFleet_C_HandleGranularRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleGranularUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_AddShipToFleet_C::HandleGranularUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleGranularUp");
		
		UUI_Screen_AddShipToFleet_C_HandleGranularUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleGranularDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_AddShipToFleet_C::HandleGranularDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleGranularDown");
		
		UUI_Screen_AddShipToFleet_C_HandleGranularDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    Input                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_AddShipToFleet_C::HandleInput(EUI_MenuActions Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleInput");
		
		UUI_Screen_AddShipToFleet_C_HandleInput_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.PopulateShipDetailsPanel
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (Parm)
	 */
	void UUI_Screen_AddShipToFleet_C::PopulateShipDetailsPanel(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.PopulateShipDetailsPanel");
		
		UUI_Screen_AddShipToFleet_C_PopulateShipDetailsPanel_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleShipItemClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (Parm)
	 * 		class UUI_Button_FleetAddShipItem_C*               source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_AddShipToFleet_C::HandleShipItemClicked(const struct FYUIShipManufacturerTechItemData& shipData, class UUI_Button_FleetAddShipItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.HandleShipItemClicked");
		
		UUI_Screen_AddShipToFleet_C_HandleShipItemClicked_Params params {};
		params.shipData = shipData;
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.SetupShipList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_AddShipToFleet_C::SetupShipList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.SetupShipList");
		
		UUI_Screen_AddShipToFleet_C_SetupShipList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_AddShipToFleet_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.Construct");
		
		UUI_Screen_AddShipToFleet_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_AddShipToFleet_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.OnTransitionIn");
		
		UUI_Screen_AddShipToFleet_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_AddShipToFleet_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.OnTransitionOut");
		
		UUI_Screen_AddShipToFleet_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_AddShipToFleet_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.TransitionInAnimationComplete");
		
		UUI_Screen_AddShipToFleet_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_AddShipToFleet_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.TransitionOutAnimationComplete");
		
		UUI_Screen_AddShipToFleet_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.BndEvt__ShipFilterWidget_K2Node_ComponentBoundEvent_0_OnFilterUpdated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_AddShipToFleet_C::BndEvt__ShipFilterWidget_K2Node_ComponentBoundEvent_0_OnFilterUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.BndEvt__ShipFilterWidget_K2Node_ComponentBoundEvent_0_OnFilterUpdated__DelegateSignature");
		
		UUI_Screen_AddShipToFleet_C_BndEvt__ShipFilterWidget_K2Node_ComponentBoundEvent_0_OnFilterUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.BndEvt__ShipDetailsPanel_K2Node_ComponentBoundEvent_2_ViewShipDetailsClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ShipId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_AddShipToFleet_C::BndEvt__ShipDetailsPanel_K2Node_ComponentBoundEvent_2_ViewShipDetailsClicked__DelegateSignature(int32_t ShipId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.BndEvt__ShipDetailsPanel_K2Node_ComponentBoundEvent_2_ViewShipDetailsClicked__DelegateSignature");
		
		UUI_Screen_AddShipToFleet_C_BndEvt__ShipDetailsPanel_K2Node_ComponentBoundEvent_2_ViewShipDetailsClicked__DelegateSignature_Params params {};
		params.ShipId = ShipId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_AddShipToFleet_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.OnNavigationEvent");
		
		UUI_Screen_AddShipToFleet_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.ExecuteUbergraph_UI_Screen_AddShipToFleet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_AddShipToFleet_C::ExecuteUbergraph_UI_Screen_AddShipToFleet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C.ExecuteUbergraph_UI_Screen_AddShipToFleet");
		
		UUI_Screen_AddShipToFleet_C_ExecuteUbergraph_UI_Screen_AddShipToFleet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_AddShipToFleet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_AddShipToFleet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_AddShipToFleet.UI_Screen_AddShipToFleet_C");
		return ptr;
	}

}


