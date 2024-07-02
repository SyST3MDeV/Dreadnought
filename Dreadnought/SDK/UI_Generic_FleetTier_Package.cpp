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
	 * 		Name   -> Function UI_Generic_FleetTier.UI_Generic_FleetTier_C.SetFleetType
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_FleetTier_C::SetFleetType(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_FleetTier.UI_Generic_FleetTier_C.SetFleetType");
		
		UUI_Generic_FleetTier_C_SetFleetType_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_FleetTier.UI_Generic_FleetTier_C.SetTierText
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTextBlock*                                  TextWidget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        TierText                                                   (Parm)
	 * 		struct FLinearColor                                TierColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_FleetTier_C::SetTierText(class UTextBlock* TextWidget, const class FText& TierText, const struct FLinearColor& TierColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_FleetTier.UI_Generic_FleetTier_C.SetTierText");
		
		UUI_Generic_FleetTier_C_SetTierText_Params params {};
		params.TextWidget = TextWidget;
		params.TierText = TierText;
		params.TierColor = TierColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_FleetTier.UI_Generic_FleetTier_C.SetTierTexts
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            FirstTier                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SecondTier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_FleetTier_C::SetTierTexts(int32_t FirstTier, int32_t SecondTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_FleetTier.UI_Generic_FleetTier_C.SetTierTexts");
		
		UUI_Generic_FleetTier_C_SetTierTexts_Params params {};
		params.FirstTier = FirstTier;
		params.SecondTier = SecondTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_FleetTier.UI_Generic_FleetTier_C.SetFleetText
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        FleetTitle                                                 (Parm)
	 */
	void UUI_Generic_FleetTier_C::SetFleetText(const class FText& FleetTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_FleetTier.UI_Generic_FleetTier_C.SetFleetText");
		
		UUI_Generic_FleetTier_C_SetFleetText_Params params {};
		params.FleetTitle = FleetTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_FleetTier.UI_Generic_FleetTier_C.SetTierImage
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_FleetTier_C::SetTierImage(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_FleetTier.UI_Generic_FleetTier_C.SetTierImage");
		
		UUI_Generic_FleetTier_C_SetTierImage_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_FleetTier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_FleetTier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_FleetTier.UI_Generic_FleetTier_C");
		return ptr;
	}

}


