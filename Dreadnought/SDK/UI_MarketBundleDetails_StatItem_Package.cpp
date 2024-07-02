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
	 * 		Name   -> Function UI_MarketBundleDetails_StatItem.UI_MarketBundleDetails_StatItem_C.SetNonCompareStat
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIInformationPanelStatData                Stat                                                       (Parm)
	 */
	void UUI_MarketBundleDetails_StatItem_C::SetNonCompareStat(const struct FYUIInformationPanelStatData& Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_StatItem.UI_MarketBundleDetails_StatItem_C.SetNonCompareStat");
		
		UUI_MarketBundleDetails_StatItem_C_SetNonCompareStat_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketBundleDetails_StatItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketBundleDetails_StatItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MarketBundleDetails_StatItem.UI_MarketBundleDetails_StatItem_C");
		return ptr;
	}

}


