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
	 * 		Name   -> Function UI_MarketBundleDetails_ModuleList_2.UI_MarketBundleDetails_ModuleList_1_C.SetStats
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_ModuleList_1_C::SetStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_ModuleList_2.UI_MarketBundleDetails_ModuleList_1_C.SetStats");
		
		UUI_MarketBundleDetails_ModuleList_1_C_SetStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_ModuleList_2.UI_MarketBundleDetails_ModuleList_1_C.SetData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        label                                                      (Parm)
	 * 		class FString                                      iconPath                                                   (Parm, ZeroConstructor)
	 * 		int32_t                                            tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_ModuleList_1_C::SetData(const class FText& label, const class FString& iconPath, int32_t tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_ModuleList_2.UI_MarketBundleDetails_ModuleList_1_C.SetData");
		
		UUI_MarketBundleDetails_ModuleList_1_C_SetData_Params params {};
		params.label = label;
		params.iconPath = iconPath;
		params.tier = tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_ModuleList_2.UI_MarketBundleDetails_ModuleList_1_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_ModuleList_1_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_ModuleList_2.UI_MarketBundleDetails_ModuleList_1_C.Construct");
		
		UUI_MarketBundleDetails_ModuleList_1_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_ModuleList_2.UI_MarketBundleDetails_ModuleList_1_C.ExecuteUbergraph_UI_MarketBundleDetails_ModuleList_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_ModuleList_1_C::ExecuteUbergraph_UI_MarketBundleDetails_ModuleList_2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_ModuleList_2.UI_MarketBundleDetails_ModuleList_1_C.ExecuteUbergraph_UI_MarketBundleDetails_ModuleList_2");
		
		UUI_MarketBundleDetails_ModuleList_1_C_ExecuteUbergraph_UI_MarketBundleDetails_ModuleList_2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketBundleDetails_ModuleList_1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketBundleDetails_ModuleList_1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MarketBundleDetails_ModuleList_2.UI_MarketBundleDetails_ModuleList_1_C");
		return ptr;
	}

}


