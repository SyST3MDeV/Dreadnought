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
	 * 		Name   -> Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_BundleDetails_TabIcon_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.HandleUnfocus");
		
		UUI_Market_BundleDetails_TabIcon_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_BundleDetails_TabIcon_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.HandleFocus");
		
		UUI_Market_BundleDetails_TabIcon_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.GetTabType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EMarketBundleInfoTabs                              TabType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_BundleDetails_TabIcon_C::GetTabType(EMarketBundleInfoTabs* TabType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.GetTabType");
		
		UUI_Market_BundleDetails_TabIcon_C_GetTabType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TabType != nullptr)
			*TabType = params.TabType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.SetTabType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMarketBundleInfoTabs                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_BundleDetails_TabIcon_C::SetTabType(EMarketBundleInfoTabs Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.SetTabType");
		
		UUI_Market_BundleDetails_TabIcon_C_SetTabType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Market_BundleDetails_TabIcon_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Market_BundleDetails_TabIcon_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Market_BundleDetails_TabIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.Construct");
		
		UUI_Market_BundleDetails_TabIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.ExecuteUbergraph_UI_Market_BundleDetails_TabIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_BundleDetails_TabIcon_C::ExecuteUbergraph_UI_Market_BundleDetails_TabIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.ExecuteUbergraph_UI_Market_BundleDetails_TabIcon");
		
		UUI_Market_BundleDetails_TabIcon_C_ExecuteUbergraph_UI_Market_BundleDetails_TabIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.OnTabSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Market_BundleDetails_TabIcon_C*          source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_BundleDetails_TabIcon_C::OnTabSelected__DelegateSignature(class UUI_Market_BundleDetails_TabIcon_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.OnTabSelected__DelegateSignature");
		
		UUI_Market_BundleDetails_TabIcon_C_OnTabSelected__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Market_BundleDetails_TabIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Market_BundleDetails_TabIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C");
		return ptr;
	}

}


