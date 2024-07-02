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
	 * 		Name   -> Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_EliteStatus_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.Setup");
		
		UUI_MarketPanel_EliteStatus_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.SetBonusInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_EliteStatus_C::SetBonusInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.SetBonusInfo");
		
		UUI_MarketPanel_EliteStatus_C_SetBonusInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.HandleInfoPanelUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_EliteStatus_C::HandleInfoPanelUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.HandleInfoPanelUnfocus");
		
		UUI_MarketPanel_EliteStatus_C_HandleInfoPanelUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.HandleInfoPanelFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_EliteStatus_C::HandleInfoPanelFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.HandleInfoPanelFocus");
		
		UUI_MarketPanel_EliteStatus_C_HandleInfoPanelFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.GetDebugGridData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYUIItemPurchaseData>                Array                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_MarketPanel_EliteStatus_C::GetDebugGridData(TArray<struct FYUIItemPurchaseData>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.GetDebugGridData");
		
		UUI_MarketPanel_EliteStatus_C_GetDebugGridData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_EliteStatus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.Construct");
		
		UUI_MarketPanel_EliteStatus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.OnShow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_EliteStatus_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.OnShow");
		
		UUI_MarketPanel_EliteStatus_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.OnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_EliteStatus_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.OnHide");
		
		UUI_MarketPanel_EliteStatus_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.HideComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_EliteStatus_C::HideComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.HideComplete");
		
		UUI_MarketPanel_EliteStatus_C_HideComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.MarketDataUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_EliteStatus_C::MarketDataUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.MarketDataUpdated");
		
		UUI_MarketPanel_EliteStatus_C_MarketDataUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.ExecuteUbergraph_UI_MarketPanel_EliteStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_EliteStatus_C::ExecuteUbergraph_UI_MarketPanel_EliteStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C.ExecuteUbergraph_UI_MarketPanel_EliteStatus");
		
		UUI_MarketPanel_EliteStatus_C_ExecuteUbergraph_UI_MarketPanel_EliteStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketPanel_EliteStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketPanel_EliteStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MarketPanel_EliteStatus.UI_MarketPanel_EliteStatus_C");
		return ptr;
	}

}


