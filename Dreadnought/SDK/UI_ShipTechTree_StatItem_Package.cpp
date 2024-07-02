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
	 * 		Name   -> Function UI_ShipTechTree_StatItem.UI_ShipTechTree_StatItem_C.FormatModifierText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ModifierValueIn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSlateColor                                 Color                                                      (Parm)
	 */
	void UUI_ShipTechTree_StatItem_C::FormatModifierText(float ModifierValueIn, const struct FSlateColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_StatItem.UI_ShipTechTree_StatItem_C.FormatModifierText");
		
		UUI_ShipTechTree_StatItem_C_FormatModifierText_Params params {};
		params.ModifierValueIn = ModifierValueIn;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_StatItem.UI_ShipTechTree_StatItem_C.SetModifierText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EComparisonType                                    ComparisonTypeIn                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ModifierValueIn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_StatItem_C::SetModifierText(EComparisonType ComparisonTypeIn, float ModifierValueIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_StatItem.UI_ShipTechTree_StatItem_C.SetModifierText");
		
		UUI_ShipTechTree_StatItem_C_SetModifierText_Params params {};
		params.ComparisonTypeIn = ComparisonTypeIn;
		params.ModifierValueIn = ModifierValueIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_StatItem.UI_ShipTechTree_StatItem_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYToolTipValue                              TooltipEntry                                               (Parm)
	 * 		bool                                               HideModifyText                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_StatItem_C::Initialize(const struct FYToolTipValue& TooltipEntry, bool HideModifyText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_StatItem.UI_ShipTechTree_StatItem_C.Initialize");
		
		UUI_ShipTechTree_StatItem_C_Initialize_Params params {};
		params.TooltipEntry = TooltipEntry;
		params.HideModifyText = HideModifyText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_StatItem.UI_ShipTechTree_StatItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_ShipTechTree_StatItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_StatItem.UI_ShipTechTree_StatItem_C.Construct");
		
		UUI_ShipTechTree_StatItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_ShipTechTree_StatItem.UI_ShipTechTree_StatItem_C.ExecuteUbergraph_UI_ShipTechTree_StatItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ShipTechTree_StatItem_C::ExecuteUbergraph_UI_ShipTechTree_StatItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShipTechTree_StatItem.UI_ShipTechTree_StatItem_C.ExecuteUbergraph_UI_ShipTechTree_StatItem");
		
		UUI_ShipTechTree_StatItem_C_ExecuteUbergraph_UI_ShipTechTree_StatItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ShipTechTree_StatItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ShipTechTree_StatItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ShipTechTree_StatItem.UI_ShipTechTree_StatItem_C");
		return ptr;
	}

}


