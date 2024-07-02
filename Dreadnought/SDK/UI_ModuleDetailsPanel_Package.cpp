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
	 * 		Name   -> Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.ShouldShowPurchaseButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ItemIsOwned                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UUI_ModuleDetailsPanel_C::ShouldShowPurchaseButton(bool ItemIsOwned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.ShouldShowPurchaseButton");
		
		UUI_ModuleDetailsPanel_C_ShouldShowPurchaseButton_Params params {};
		params.ItemIsOwned = ItemIsOwned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.SetVanityPurchaseCost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ItemPurchaseCost                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModuleDetailsPanel_C::SetVanityPurchaseCost(int32_t ItemPurchaseCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.SetVanityPurchaseCost");
		
		UUI_ModuleDetailsPanel_C_SetVanityPurchaseCost_Params params {};
		params.ItemPurchaseCost = ItemPurchaseCost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsItemModule                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsItemOfficerBriefing                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsOwned                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModuleDetailsPanel_C::Setup(bool IsItemModule, bool IsItemOfficerBriefing, bool IsOwned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.Setup");
		
		UUI_ModuleDetailsPanel_C_Setup_Params params {};
		params.IsItemModule = IsItemModule;
		params.IsItemOfficerBriefing = IsItemOfficerBriefing;
		params.IsOwned = IsOwned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.SetItemDescription
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ModuleDescText                                             (Parm)
	 */
	void UUI_ModuleDetailsPanel_C::SetItemDescription(const class FText& ModuleDescText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.SetItemDescription");
		
		UUI_ModuleDetailsPanel_C_SetItemDescription_Params params {};
		params.ModuleDescText = ModuleDescText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.SetStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYItemUIData                                UIData                                                     (Parm)
	 */
	void UUI_ModuleDetailsPanel_C::SetStats(const struct FYItemUIData& UIData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.SetStats");
		
		UUI_ModuleDetailsPanel_C_SetStats_Params params {};
		params.UIData = UIData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.SetItemTitle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUIGenericButtonModuleData                  moduleData                                                 (Parm)
	 */
	void UUI_ModuleDetailsPanel_C::SetItemTitle(const struct FUIGenericButtonModuleData& moduleData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.SetItemTitle");
		
		UUI_ModuleDetailsPanel_C_SetItemTitle_Params params {};
		params.moduleData = moduleData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_ModuleDetailsPanel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.Construct");
		
		UUI_ModuleDetailsPanel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.BndEvt__VanityPurchaseButton_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModuleDetailsPanel_C::BndEvt__VanityPurchaseButton_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.BndEvt__VanityPurchaseButton_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature");
		
		UUI_ModuleDetailsPanel_C_BndEvt__VanityPurchaseButton_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_ModuleDetailsPanel_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.OnActionReceived");
		
		UUI_ModuleDetailsPanel_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.ExecuteUbergraph_UI_ModuleDetailsPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModuleDetailsPanel_C::ExecuteUbergraph_UI_ModuleDetailsPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.ExecuteUbergraph_UI_ModuleDetailsPanel");
		
		UUI_ModuleDetailsPanel_C_ExecuteUbergraph_UI_ModuleDetailsPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.VanityPurchaseButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModuleDetailsPanel_C::VanityPurchaseButtonClicked__DelegateSignature(class UUserWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.VanityPurchaseButtonClicked__DelegateSignature");
		
		UUI_ModuleDetailsPanel_C_VanityPurchaseButtonClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ModuleDetailsPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ModuleDetailsPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C");
		return ptr;
	}

}


