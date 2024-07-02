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
	 * 		Name   -> Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetNumColumns
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumColumns                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Stats_Panel_C::SetNumColumns(int32_t NumColumns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetNumColumns");
		
		UUI_Generic_Stats_Panel_C_SetNumColumns_Params params {};
		params.NumColumns = NumColumns;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.GetDefaultPanelSize
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector2D                                   Size                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Stats_Panel_C::GetDefaultPanelSize(struct FVector2D* Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.GetDefaultPanelSize");
		
		UUI_Generic_Stats_Panel_C_GetDefaultPanelSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Size != nullptr)
			*Size = params.Size;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.GetWidePanelSize
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector2D                                   Size                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Stats_Panel_C::GetWidePanelSize(struct FVector2D* Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.GetWidePanelSize");
		
		UUI_Generic_Stats_Panel_C_GetWidePanelSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Size != nullptr)
			*Size = params.Size;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetCategoryIconVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Stats_Panel_C::SetCategoryIconVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetCategoryIconVisible");
		
		UUI_Generic_Stats_Panel_C_SetCategoryIconVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetCategoryIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Image                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Stats_Panel_C::SetCategoryIcon(class UTexture2D* Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetCategoryIcon");
		
		UUI_Generic_Stats_Panel_C_SetCategoryIcon_Params params {};
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetTier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Stats_Panel_C::SetTier(int32_t tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetTier");
		
		UUI_Generic_Stats_Panel_C_SetTier_Params params {};
		params.tier = tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetToWideSize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_Stats_Panel_C::SetToWideSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetToWideSize");
		
		UUI_Generic_Stats_Panel_C_SetToWideSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetToDefaultSize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_Stats_Panel_C::SetToDefaultSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetToDefaultSize");
		
		UUI_Generic_Stats_Panel_C_SetToDefaultSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FYItemUIData                                ItemUIData                                                 (Parm)
	 */
	void UUI_Generic_Stats_Panel_C::SetItem(int32_t itemID, const struct FYItemUIData& ItemUIData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetItem");
		
		UUI_Generic_Stats_Panel_C_SetItem_Params params {};
		params.itemID = itemID;
		params.ItemUIData = ItemUIData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Generic_Stats_Panel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.Construct");
		
		UUI_Generic_Stats_Panel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.ExecuteUbergraph_UI_Generic_Stats_Panel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Stats_Panel_C::ExecuteUbergraph_UI_Generic_Stats_Panel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.ExecuteUbergraph_UI_Generic_Stats_Panel");
		
		UUI_Generic_Stats_Panel_C_ExecuteUbergraph_UI_Generic_Stats_Panel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_Stats_Panel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_Stats_Panel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C");
		return ptr;
	}

}


