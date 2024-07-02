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
	 * 		Name   -> Function UI_MarketBundleDetails_Stat.UI_MarketBundleDetails_Stat_C.SetItemStats
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYUIInformationPanelStatData>        stats                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_MarketBundleDetails_Stat_C::SetItemStats(TArray<struct FYUIInformationPanelStatData>* stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_Stat.UI_MarketBundleDetails_Stat_C.SetItemStats");
		
		UUI_MarketBundleDetails_Stat_C_SetItemStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (stats != nullptr)
			*stats = params.stats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketBundleDetails_Stat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketBundleDetails_Stat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MarketBundleDetails_Stat.UI_MarketBundleDetails_Stat_C");
		return ptr;
	}

}


