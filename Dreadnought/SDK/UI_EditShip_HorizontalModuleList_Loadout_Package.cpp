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
	 * 		Name   -> Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.GetScrollBox
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UScrollBox*                                  ScrollBox                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_HorizontalModuleList_Loadout_C::GetScrollBox(class UScrollBox** ScrollBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.GetScrollBox");
		
		UUI_EditShip_HorizontalModuleList_Loadout_C_GetScrollBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScrollBox != nullptr)
			*ScrollBox = params.ScrollBox;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.GetColumnCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            NumColumns                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_HorizontalModuleList_Loadout_C::GetColumnCount(int32_t* NumColumns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.GetColumnCount");
		
		UUI_EditShip_HorizontalModuleList_Loadout_C_GetColumnCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumColumns != nullptr)
			*NumColumns = params.NumColumns;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.ClearGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_HorizontalModuleList_Loadout_C::ClearGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.ClearGrid");
		
		UUI_EditShip_HorizontalModuleList_Loadout_C_ClearGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.AddWidgetToGrid
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 GenericModuleButton                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_Generic_Button_Module_C*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_HorizontalModuleList_Loadout_C::AddWidgetToGrid(class UUI_Generic_Button_Module_C* GenericModuleButton, class UUI_Generic_Button_Module_C** ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.AddWidgetToGrid");
		
		UUI_EditShip_HorizontalModuleList_Loadout_C_AddWidgetToGrid_Params params {};
		params.GenericModuleButton = GenericModuleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.SetOwnerPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_EditShip_Panel_EditLoadout_C*            Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_HorizontalModuleList_Loadout_C::SetOwnerPanel(class UUI_EditShip_Panel_EditLoadout_C* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.SetOwnerPanel");
		
		UUI_EditShip_HorizontalModuleList_Loadout_C_SetOwnerPanel_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.ShowLoadoutDetails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_HorizontalModuleList_Loadout_C::ShowLoadoutDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.ShowLoadoutDetails");
		
		UUI_EditShip_HorizontalModuleList_Loadout_C_ShowLoadoutDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.HideDetails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_HorizontalModuleList_Loadout_C::HideDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.HideDetails");
		
		UUI_EditShip_HorizontalModuleList_Loadout_C_HideDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.SetDetails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYItemUIData                                itemData                                                   (Parm)
	 * 		int32_t                                            tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      CategoryIcon                                               (Parm, ZeroConstructor)
	 */
	void UUI_EditShip_HorizontalModuleList_Loadout_C::SetDetails(const struct FYItemUIData& itemData, int32_t tier, const class FString& CategoryIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.SetDetails");
		
		UUI_EditShip_HorizontalModuleList_Loadout_C_SetDetails_Params params {};
		params.itemData = itemData;
		params.tier = tier;
		params.CategoryIcon = CategoryIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.AddModule
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUIGenericButtonModuleData                  Data                                                       (Parm)
	 * 		class UUI_Generic_Button_Module_C*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_HorizontalModuleList_Loadout_C::AddModule(const struct FUIGenericButtonModuleData& Data, class UUI_Generic_Button_Module_C** ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.AddModule");
		
		UUI_EditShip_HorizontalModuleList_Loadout_C_AddModule_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_HorizontalModuleList_Loadout_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.Construct");
		
		UUI_EditShip_HorizontalModuleList_Loadout_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.ExecuteUbergraph_UI_EditShip_HorizontalModuleList_Loadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_HorizontalModuleList_Loadout_C::ExecuteUbergraph_UI_EditShip_HorizontalModuleList_Loadout(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.ExecuteUbergraph_UI_EditShip_HorizontalModuleList_Loadout");
		
		UUI_EditShip_HorizontalModuleList_Loadout_C_ExecuteUbergraph_UI_EditShip_HorizontalModuleList_Loadout_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EditShip_HorizontalModuleList_Loadout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditShip_HorizontalModuleList_Loadout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C");
		return ptr;
	}

}


