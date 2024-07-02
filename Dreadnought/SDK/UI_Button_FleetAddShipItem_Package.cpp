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
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.GetIsAcquireMore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsAcquireMoreButton                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_FleetAddShipItem_C::GetIsAcquireMore(bool* IsAcquireMoreButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.GetIsAcquireMore");
		
		UUI_Button_FleetAddShipItem_C_GetIsAcquireMore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAcquireMoreButton != nullptr)
			*IsAcquireMoreButton = params.IsAcquireMoreButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.SetButtonVersion
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAddMoreButton                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_FleetAddShipItem_C::SetButtonVersion(bool IsAddMoreButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.SetButtonVersion");
		
		UUI_Button_FleetAddShipItem_C_SetButtonVersion_Params params {};
		params.IsAddMoreButton = IsAddMoreButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_FleetAddShipItem_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.Action");
		
		UUI_Button_FleetAddShipItem_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (Parm)
	 */
	struct FEventReply UUI_Button_FleetAddShipItem_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnFocusReceived");
		
		UUI_Button_FleetAddShipItem_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_FleetAddShipItem_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.HandleUnfocus");
		
		UUI_Button_FleetAddShipItem_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_FleetAddShipItem_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.HandleFocus");
		
		UUI_Button_FleetAddShipItem_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.SetTierColoring
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_FleetAddShipItem_C::SetTierColoring(int32_t tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.SetTierColoring");
		
		UUI_Button_FleetAddShipItem_C_SetTierColoring_Params params {};
		params.tier = tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.Setup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_FleetAddShipItem_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.Setup");
		
		UUI_Button_FleetAddShipItem_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Button_FleetAddShipItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.Construct");
		
		UUI_Button_FleetAddShipItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_FleetAddShipItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Button_FleetAddShipItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.BndEvt__FleetAddShipItemButton_K2Node_ComponentBoundEvent_175_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_FleetAddShipItem_C::BndEvt__FleetAddShipItemButton_K2Node_ComponentBoundEvent_175_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.BndEvt__FleetAddShipItemButton_K2Node_ComponentBoundEvent_175_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Button_FleetAddShipItem_C_BndEvt__FleetAddShipItemButton_K2Node_ComponentBoundEvent_175_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.BndEvt__FleetAddShipItemButton_K2Node_ComponentBoundEvent_187_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_FleetAddShipItem_C::BndEvt__FleetAddShipItemButton_K2Node_ComponentBoundEvent_187_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.BndEvt__FleetAddShipItemButton_K2Node_ComponentBoundEvent_187_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Button_FleetAddShipItem_C_BndEvt__FleetAddShipItemButton_K2Node_ComponentBoundEvent_187_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Button_FleetAddShipItem_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnActionReceived");
		
		UUI_Button_FleetAddShipItem_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnFocusLost
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (Parm)
	 */
	void UUI_Button_FleetAddShipItem_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnFocusLost");
		
		UUI_Button_FleetAddShipItem_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.ExecuteUbergraph_UI_Button_FleetAddShipItem
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_FleetAddShipItem_C::ExecuteUbergraph_UI_Button_FleetAddShipItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.ExecuteUbergraph_UI_Button_FleetAddShipItem");
		
		UUI_Button_FleetAddShipItem_C_ExecuteUbergraph_UI_Button_FleetAddShipItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_FleetAddShipItem_C*               source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_FleetAddShipItem_C::OnButtonHovered__DelegateSignature(class UUI_Button_FleetAddShipItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnButtonHovered__DelegateSignature");
		
		UUI_Button_FleetAddShipItem_C_OnButtonHovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_FleetAddShipItem_C::OnClicked__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnClicked__DelegateSignature");
		
		UUI_Button_FleetAddShipItem_C_OnClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnReceivedFocus__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_FleetAddShipItem_C::OnReceivedFocus__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnReceivedFocus__DelegateSignature");
		
		UUI_Button_FleetAddShipItem_C_OnReceivedFocus__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnFleetAddShipItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (Parm)
	 * 		class UUI_Button_FleetAddShipItem_C*               source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_FleetAddShipItem_C::OnFleetAddShipItemClicked__DelegateSignature(const struct FYUIShipManufacturerTechItemData& shipData, class UUI_Button_FleetAddShipItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C.OnFleetAddShipItemClicked__DelegateSignature");
		
		UUI_Button_FleetAddShipItem_C_OnFleetAddShipItemClicked__DelegateSignature_Params params {};
		params.shipData = shipData;
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Button_FleetAddShipItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Button_FleetAddShipItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Button_FleetAddShipItem.UI_Button_FleetAddShipItem_C");
		return ptr;
	}

}


