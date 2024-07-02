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
	 * 		Name   -> Function UI_Generic_CampaignTags.UI_Generic_CampaignTags_C.SetCurrencyTag
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowCurrencyType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYUICurrency                                       currencyType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_CampaignTags_C::SetCurrencyTag(bool ShowCurrencyType, EYUICurrency currencyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_CampaignTags.UI_Generic_CampaignTags_C.SetCurrencyTag");
		
		UUI_Generic_CampaignTags_C_SetCurrencyTag_Params params {};
		params.ShowCurrencyType = ShowCurrencyType;
		params.currencyType = currencyType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_CampaignTags.UI_Generic_CampaignTags_C.SetCampaignTags
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYMenuOfferCampaingData                     CampaignData                                               (Parm)
	 */
	void UUI_Generic_CampaignTags_C::SetCampaignTags(const struct FYMenuOfferCampaingData& CampaignData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_CampaignTags.UI_Generic_CampaignTags_C.SetCampaignTags");
		
		UUI_Generic_CampaignTags_C_SetCampaignTags_Params params {};
		params.CampaignData = CampaignData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_CampaignTags.UI_Generic_CampaignTags_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Generic_CampaignTags_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_CampaignTags.UI_Generic_CampaignTags_C.Construct");
		
		UUI_Generic_CampaignTags_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_CampaignTags.UI_Generic_CampaignTags_C.ExecuteUbergraph_UI_Generic_CampaignTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_CampaignTags_C::ExecuteUbergraph_UI_Generic_CampaignTags(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_CampaignTags.UI_Generic_CampaignTags_C.ExecuteUbergraph_UI_Generic_CampaignTags");
		
		UUI_Generic_CampaignTags_C_ExecuteUbergraph_UI_Generic_CampaignTags_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_CampaignTags_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_CampaignTags_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_CampaignTags.UI_Generic_CampaignTags_C");
		return ptr;
	}

}


