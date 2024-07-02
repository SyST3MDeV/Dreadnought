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
	 * 		Name   -> Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.SetCategoryIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      CategoryIconPath                                           (Parm, ZeroConstructor)
	 */
	void UUI_EditLoadout_ModuleDetails_C::SetCategoryIcon(const class FString& CategoryIconPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.SetCategoryIcon");
		
		UUI_EditLoadout_ModuleDetails_C_SetCategoryIcon_Params params {};
		params.CategoryIconPath = CategoryIconPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.SetTier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditLoadout_ModuleDetails_C::SetTier(int32_t tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.SetTier");
		
		UUI_EditLoadout_ModuleDetails_C_SetTier_Params params {};
		params.tier = tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.SetStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYItemUIData                                itemData                                                   (Parm)
	 */
	void UUI_EditLoadout_ModuleDetails_C::SetStats(const struct FYItemUIData& itemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.SetStats");
		
		UUI_EditLoadout_ModuleDetails_C_SetStats_Params params {};
		params.itemData = itemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYItemUIData                                itemData                                                   (Parm)
	 */
	void UUI_EditLoadout_ModuleDetails_C::Setup(const struct FYItemUIData& itemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.Setup");
		
		UUI_EditLoadout_ModuleDetails_C_Setup_Params params {};
		params.itemData = itemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_EditLoadout_ModuleDetails_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.Construct");
		
		UUI_EditLoadout_ModuleDetails_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.ExecuteUbergraph_UI_EditLoadout_ModuleDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditLoadout_ModuleDetails_C::ExecuteUbergraph_UI_EditLoadout_ModuleDetails(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.ExecuteUbergraph_UI_EditLoadout_ModuleDetails");
		
		UUI_EditLoadout_ModuleDetails_C_ExecuteUbergraph_UI_EditLoadout_ModuleDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EditLoadout_ModuleDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditLoadout_ModuleDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C");
		return ptr;
	}

}


