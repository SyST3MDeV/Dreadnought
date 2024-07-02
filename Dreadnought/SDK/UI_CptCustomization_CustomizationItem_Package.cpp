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
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.SetEquipped
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEquipped                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CptCustomization_CustomizationItem_C::SetEquipped(bool IsEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.SetEquipped");
		
		UUI_CptCustomization_CustomizationItem_C_SetEquipped_Params params {};
		params.IsEquipped = IsEquipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CptCustomization_CustomizationItem_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.Action");
		
		UUI_CptCustomization_CustomizationItem_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CptCustomization_CustomizationItem_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.HandleUnfocus");
		
		UUI_CptCustomization_CustomizationItem_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CptCustomization_CustomizationItem_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.HandleFocus");
		
		UUI_CptCustomization_CustomizationItem_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.SetHighlightState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isHighlighted                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CptCustomization_CustomizationItem_C::SetHighlightState(bool isHighlighted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.SetHighlightState");
		
		UUI_CptCustomization_CustomizationItem_C_SetHighlightState_Params params {};
		params.isHighlighted = isHighlighted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.SetCampaignData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYMenuOfferCampaingData                     CampaignData                                               (Parm)
	 * 		bool                                               ShowPrice                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYUICurrency                                       currencyType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CptCustomization_CustomizationItem_C::SetCampaignData(const struct FYMenuOfferCampaingData& CampaignData, bool ShowPrice, EYUICurrency currencyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.SetCampaignData");
		
		UUI_CptCustomization_CustomizationItem_C_SetCampaignData_Params params {};
		params.CampaignData = CampaignData;
		params.ShowPrice = ShowPrice;
		params.currencyType = currencyType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.SetData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  ModuleTexture                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        ModuleName                                                 (Parm)
	 */
	void UUI_CptCustomization_CustomizationItem_C::SetData(class UTexture2D* ModuleTexture, const class FText& ModuleName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.SetData");
		
		UUI_CptCustomization_CustomizationItem_C_SetData_Params params {};
		params.ModuleTexture = ModuleTexture;
		params.ModuleName = ModuleName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CptCustomization_CustomizationItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature");
		
		UUI_CptCustomization_CustomizationItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CptCustomization_CustomizationItem_C::BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CptCustomization_CustomizationItem_C_BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CptCustomization_CustomizationItem_C::BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CptCustomization_CustomizationItem_C_BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_CptCustomization_CustomizationItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.Construct");
		
		UUI_CptCustomization_CustomizationItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_CptCustomization_CustomizationItem_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.OnActionReceived");
		
		UUI_CptCustomization_CustomizationItem_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.ExecuteUbergraph_UI_CptCustomization_CustomizationItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CptCustomization_CustomizationItem_C::ExecuteUbergraph_UI_CptCustomization_CustomizationItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.ExecuteUbergraph_UI_CptCustomization_CustomizationItem");
		
		UUI_CptCustomization_CustomizationItem_C_ExecuteUbergraph_UI_CptCustomization_CustomizationItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.OnReceivedFocus__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CptCustomization_CustomizationItem_C::OnReceivedFocus__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.OnReceivedFocus__DelegateSignature");
		
		UUI_CptCustomization_CustomizationItem_C_OnReceivedFocus__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.OnButtonUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CptCustomization_CustomizationItem_C::OnButtonUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.OnButtonUnhovered__DelegateSignature");
		
		UUI_CptCustomization_CustomizationItem_C_OnButtonUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CptCustomization_CustomizationItem_C::OnButtonHovered__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.OnButtonHovered__DelegateSignature");
		
		UUI_CptCustomization_CustomizationItem_C_OnButtonHovered__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CptCustomization_CustomizationItem_C*    ClickedItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CptCustomization_CustomizationItem_C::OnButtonClicked__DelegateSignature(class UUI_CptCustomization_CustomizationItem_C* ClickedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.OnButtonClicked__DelegateSignature");
		
		UUI_CptCustomization_CustomizationItem_C_OnButtonClicked__DelegateSignature_Params params {};
		params.ClickedItem = ClickedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CptCustomization_CustomizationItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CptCustomization_CustomizationItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C");
		return ptr;
	}

}


