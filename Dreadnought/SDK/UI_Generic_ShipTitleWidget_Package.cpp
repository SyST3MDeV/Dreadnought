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
	 * 		Name   -> Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.SetShipXP
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            xp                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_ShipTitleWidget_C::SetShipXP(int32_t xp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.SetShipXP");
		
		UUI_Generic_ShipTitleWidget_C_SetShipXP_Params params {};
		params.xp = xp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.SetDataFromStruct
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (Parm)
	 */
	void UUI_Generic_ShipTitleWidget_C::SetDataFromStruct(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.SetDataFromStruct");
		
		UUI_Generic_ShipTitleWidget_C_SetDataFromStruct_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.SetData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  TierIcon                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  shipIcon                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      shipName                                                   (Parm, ZeroConstructor)
	 * 		int32_t                                            tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsHeroShip                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_ShipTitleWidget_C::SetData(class UTexture2D* TierIcon, class UTexture2D* shipIcon, const class FString& shipName, int32_t tier, bool IsHeroShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.SetData");
		
		UUI_Generic_ShipTitleWidget_C_SetData_Params params {};
		params.TierIcon = TierIcon;
		params.shipIcon = shipIcon;
		params.shipName = shipName;
		params.tier = tier;
		params.IsHeroShip = IsHeroShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Generic_ShipTitleWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.Construct");
		
		UUI_Generic_ShipTitleWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.UpdateIconsAndText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  TierIcon                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  shipIcon                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      shipName                                                   (Parm, ZeroConstructor)
	 * 		int32_t                                            shipTier                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_ShipTitleWidget_C::UpdateIconsAndText(class UTexture2D* TierIcon, class UTexture2D* shipIcon, const class FString& shipName, int32_t shipTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.UpdateIconsAndText");
		
		UUI_Generic_ShipTitleWidget_C_UpdateIconsAndText_Params params {};
		params.TierIcon = TierIcon;
		params.shipIcon = shipIcon;
		params.shipName = shipName;
		params.shipTier = shipTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.ExecuteUbergraph_UI_Generic_ShipTitleWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_ShipTitleWidget_C::ExecuteUbergraph_UI_Generic_ShipTitleWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.ExecuteUbergraph_UI_Generic_ShipTitleWidget");
		
		UUI_Generic_ShipTitleWidget_C_ExecuteUbergraph_UI_Generic_ShipTitleWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_ShipTitleWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_ShipTitleWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C");
		return ptr;
	}

}


