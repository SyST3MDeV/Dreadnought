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
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.GetPositionPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::GetPositionPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.GetPositionPanel");
		
		UUI_Screen_ShipTechTree_C_GetPositionPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.UpdateStatsPanelShip
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       Ship                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::UpdateStatsPanelShip(class UUI_Button_ManufacturerTechTreeItem_C* Ship)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.UpdateStatsPanelShip");
		
		UUI_Screen_ShipTechTree_C_UpdateStatsPanelShip_Params params {};
		params.Ship = Ship;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.UpdateStatsPanelButtonModule
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ButtonModule                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::UpdateStatsPanelButtonModule(class UUI_Generic_Button_Module_C* ButtonModule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.UpdateStatsPanelButtonModule");
		
		UUI_Screen_ShipTechTree_C_UpdateStatsPanelButtonModule_Params params {};
		params.ButtonModule = ButtonModule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.GetTopLeftBorderAbsolutePosition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector2D                                   TopLeftBorderAbsolutePosition                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::GetTopLeftBorderAbsolutePosition(struct FVector2D* TopLeftBorderAbsolutePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.GetTopLeftBorderAbsolutePosition");
		
		UUI_Screen_ShipTechTree_C_GetTopLeftBorderAbsolutePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TopLeftBorderAbsolutePosition != nullptr)
			*TopLeftBorderAbsolutePosition = params.TopLeftBorderAbsolutePosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.UnfocusCurrentItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::UnfocusCurrentItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.UnfocusCurrentItem");
		
		UUI_Screen_ShipTechTree_C_UnfocusCurrentItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleNavActionTertiary
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::HandleNavActionTertiary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleNavActionTertiary");
		
		UUI_Screen_ShipTechTree_C_HandleNavActionTertiary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.UpdateStatsPanelPosition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::UpdateStatsPanelPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.UpdateStatsPanelPosition");
		
		UUI_Screen_ShipTechTree_C_UpdateStatsPanelPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.SetProgressionWidgetFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::SetProgressionWidgetFocus(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.SetProgressionWidgetFocus");
		
		UUI_Screen_ShipTechTree_C_SetProgressionWidgetFocus_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.Action");
		
		UUI_Screen_ShipTechTree_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleNavUpGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::HandleNavUpGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleNavUpGranular");
		
		UUI_Screen_ShipTechTree_C_HandleNavUpGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleNavDownGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::HandleNavDownGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleNavDownGranular");
		
		UUI_Screen_ShipTechTree_C_HandleNavDownGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleNavLeftGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::HandleNavLeftGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleNavLeftGranular");
		
		UUI_Screen_ShipTechTree_C_HandleNavLeftGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleNavRightGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::HandleNavRightGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleNavRightGranular");
		
		UUI_Screen_ShipTechTree_C_HandleNavRightGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.SetModuleWidgetFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Row                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            column                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::SetModuleWidgetFocus(int32_t Row, int32_t column)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.SetModuleWidgetFocus");
		
		UUI_Screen_ShipTechTree_C_SetModuleWidgetFocus_Params params {};
		params.Row = Row;
		params.column = column;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ClearAll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::ClearAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ClearAll");
		
		UUI_Screen_ShipTechTree_C_ClearAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.SetShipDetails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            Data                                                       (Parm)
	 */
	void UUI_Screen_ShipTechTree_C::SetShipDetails(const struct FYUIShipManufacturerTechItemData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.SetShipDetails");
		
		UUI_Screen_ShipTechTree_C_SetShipDetails_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.SetupTechTreeRow
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FUIGenericButtonModuleData>          CategoryData                                               (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            Row                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::SetupTechTreeRow(TArray<struct FUIGenericButtonModuleData>* CategoryData, int32_t Row)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.SetupTechTreeRow");
		
		UUI_Screen_ShipTechTree_C_SetupTechTreeRow_Params params {};
		params.Row = Row;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryData != nullptr)
			*CategoryData = params.CategoryData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::HandleInput(EUI_MenuActions GamePadInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleInput");
		
		UUI_Screen_ShipTechTree_C_HandleInput_Params params {};
		params.GamePadInput = GamePadInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.Setup");
		
		UUI_Screen_ShipTechTree_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressionModuleClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::ProgressionModuleClicked(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressionModuleClicked");
		
		UUI_Screen_ShipTechTree_C_ProgressionModuleClicked_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressionModuleUnhovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::ProgressionModuleUnhovered(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressionModuleUnhovered");
		
		UUI_Screen_ShipTechTree_C_ProgressionModuleUnhovered_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressionModuleHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::ProgressionModuleHovered(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressionModuleHovered");
		
		UUI_Screen_ShipTechTree_C_ProgressionModuleHovered_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressiomShipClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::ProgressiomShipClicked(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressiomShipClicked");
		
		UUI_Screen_ShipTechTree_C_ProgressiomShipClicked_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressionShipUnhovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::ProgressionShipUnhovered(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressionShipUnhovered");
		
		UUI_Screen_ShipTechTree_C_ProgressionShipUnhovered_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressionShipHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::ProgressionShipHovered(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ProgressionShipHovered");
		
		UUI_Screen_ShipTechTree_C_ProgressionShipHovered_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ModuleItemClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::ModuleItemClicked(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ModuleItemClicked");
		
		UUI_Screen_ShipTechTree_C_ModuleItemClicked_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ModuleItemUnhovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::ModuleItemUnhovered(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ModuleItemUnhovered");
		
		UUI_Screen_ShipTechTree_C_ModuleItemUnhovered_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ModuleItemHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::ModuleItemHovered(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ModuleItemHovered");
		
		UUI_Screen_ShipTechTree_C_ModuleItemHovered_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.RegisterUnhoverListeners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::RegisterUnhoverListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.RegisterUnhoverListeners");
		
		UUI_Screen_ShipTechTree_C_RegisterUnhoverListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.RegisterHoverListeners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::RegisterHoverListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.RegisterHoverListeners");
		
		UUI_Screen_ShipTechTree_C_RegisterHoverListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.RegisterSelectedListeners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::RegisterSelectedListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.RegisterSelectedListeners");
		
		UUI_Screen_ShipTechTree_C_RegisterSelectedListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ShowStatsPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::ShowStatsPanel(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ShowStatsPanel");
		
		UUI_Screen_ShipTechTree_C_ShowStatsPanel_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.SetStatsPanel
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::SetStatsPanel(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.SetStatsPanel");
		
		UUI_Screen_ShipTechTree_C_SetStatsPanel_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.Construct");
		
		UUI_Screen_ShipTechTree_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.OnTransitionIn");
		
		UUI_Screen_ShipTechTree_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.OnTransitionOut");
		
		UUI_Screen_ShipTechTree_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.TransitionInAnimationComplete");
		
		UUI_Screen_ShipTechTree_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ShipTechTree_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.TransitionOutAnimationComplete");
		
		UUI_Screen_ShipTechTree_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleTechTreeDataReceived
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FUIGenericButtonModuleData>          moduleUiData                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            techTreeRow                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::HandleTechTreeDataReceived(TArray<struct FUIGenericButtonModuleData> moduleUiData, int32_t techTreeRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleTechTreeDataReceived");
		
		UUI_Screen_ShipTechTree_C_HandleTechTreeDataReceived_Params params {};
		params.moduleUiData = moduleUiData;
		params.techTreeRow = techTreeRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleShipDataReceived
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipUiData                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Screen_ShipTechTree_C::HandleShipDataReceived(const struct FYUIShipManufacturerTechItemData& shipUiData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleShipDataReceived");
		
		UUI_Screen_ShipTechTree_C_HandleShipDataReceived_Params params {};
		params.shipUiData = shipUiData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleShipProgressionDataReceived
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYUIShipManufacturerTechItemData>    shipProgressionUiData                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Screen_ShipTechTree_C::HandleShipProgressionDataReceived(TArray<struct FYUIShipManufacturerTechItemData> shipProgressionUiData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.HandleShipProgressionDataReceived");
		
		UUI_Screen_ShipTechTree_C_HandleShipProgressionDataReceived_Params params {};
		params.shipProgressionUiData = shipProgressionUiData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.OnNavigationEvent");
		
		UUI_Screen_ShipTechTree_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.UpdateCurrentlyFocusedRow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             FocusedItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::UpdateCurrentlyFocusedRow(class UUI_DreadWidget* FocusedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.UpdateCurrentlyFocusedRow");
		
		UUI_Screen_ShipTechTree_C_UpdateCurrentlyFocusedRow_Params params {};
		params.FocusedItem = FocusedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.OnShipXpUpdate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            shipXp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::OnShipXpUpdate(int32_t shipXp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.OnShipXpUpdate");
		
		UUI_Screen_ShipTechTree_C_OnShipXpUpdate_Params params {};
		params.shipXp = shipXp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ExecuteUbergraph_UI_Screen_ShipTechTree
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ShipTechTree_C::ExecuteUbergraph_UI_Screen_ShipTechTree(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C.ExecuteUbergraph_UI_Screen_ShipTechTree");
		
		UUI_Screen_ShipTechTree_C_ExecuteUbergraph_UI_Screen_ShipTechTree_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_ShipTechTree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_ShipTechTree_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_ShipTechTree.UI_Screen_ShipTechTree_C");
		return ptr;
	}

}


