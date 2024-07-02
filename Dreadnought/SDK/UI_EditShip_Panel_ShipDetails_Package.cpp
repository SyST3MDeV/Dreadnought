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
	 * 		Name   -> Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.HandlePurchaseCompleted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_ShipDetails_C::HandlePurchaseCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.HandlePurchaseCompleted");
		
		UUI_EditShip_Panel_ShipDetails_C_HandlePurchaseCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.SetupData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_ShipDetails_C::SetupData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.SetupData");
		
		UUI_EditShip_Panel_ShipDetails_C_SetupData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnResearchShip
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_ShipDetails_C::OnResearchShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnResearchShip");
		
		UUI_EditShip_Panel_ShipDetails_C_OnResearchShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnPurchaseShip
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_ShipDetails_C::OnPurchaseShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnPurchaseShip");
		
		UUI_EditShip_Panel_ShipDetails_C_OnPurchaseShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.SetShipDescription
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ShipDescription                                            (Parm)
	 */
	void UUI_EditShip_Panel_ShipDetails_C::SetShipDescription(const class FText& ShipDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.SetShipDescription");
		
		UUI_EditShip_Panel_ShipDetails_C_SetShipDescription_Params params {};
		params.ShipDescription = ShipDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_ShipDetails_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.Setup");
		
		UUI_EditShip_Panel_ShipDetails_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.SetManufacturerLogo
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      manufacturerIconPath                                       (Parm, ZeroConstructor)
	 */
	void UUI_EditShip_Panel_ShipDetails_C::SetManufacturerLogo(const class FString& manufacturerIconPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.SetManufacturerLogo");
		
		UUI_EditShip_Panel_ShipDetails_C_SetManufacturerLogo_Params params {};
		params.manufacturerIconPath = manufacturerIconPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_ShipDetails_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.Construct");
		
		UUI_EditShip_Panel_ShipDetails_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnShow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_ShipDetails_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnShow");
		
		UUI_EditShip_Panel_ShipDetails_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_ShipDetails_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnHide");
		
		UUI_EditShip_Panel_ShipDetails_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.HideComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_ShipDetails_C::HideComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.HideComplete");
		
		UUI_EditShip_Panel_ShipDetails_C_HideComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnButtonTechTreeClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_ShipDetails_C::OnButtonTechTreeClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnButtonTechTreeClicked");
		
		UUI_EditShip_Panel_ShipDetails_C_OnButtonTechTreeClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnButtonResearchClaimButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_EditShip_Details_ResearchClaimButton_C*  Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_ShipDetails_C::OnButtonResearchClaimButtonClicked(class UUI_EditShip_Details_ResearchClaimButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnButtonResearchClaimButtonClicked");
		
		UUI_EditShip_Panel_ShipDetails_C_OnButtonResearchClaimButtonClicked_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.HandleInventoryUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_ShipDetails_C::HandleInventoryUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.HandleInventoryUpdated");
		
		UUI_EditShip_Panel_ShipDetails_C_HandleInventoryUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.ExecuteUbergraph_UI_EditShip_Panel_ShipDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_ShipDetails_C::ExecuteUbergraph_UI_EditShip_Panel_ShipDetails(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.ExecuteUbergraph_UI_EditShip_Panel_ShipDetails");
		
		UUI_EditShip_Panel_ShipDetails_C_ExecuteUbergraph_UI_EditShip_Panel_ShipDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EditShip_Panel_ShipDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditShip_Panel_ShipDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C");
		return ptr;
	}

}


