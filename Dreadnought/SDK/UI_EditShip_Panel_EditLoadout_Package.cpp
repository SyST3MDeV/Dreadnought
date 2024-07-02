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
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.GetScrollBox
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UScrollBox*                                  ScrollBox                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::GetScrollBox(class UScrollBox** ScrollBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.GetScrollBox");
		
		UUI_EditShip_Panel_EditLoadout_C_GetScrollBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScrollBox != nullptr)
			*ScrollBox = params.ScrollBox;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.GetAvailableNumColumns
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            NumColumns                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::GetAvailableNumColumns(int32_t* NumColumns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.GetAvailableNumColumns");
		
		UUI_EditShip_Panel_EditLoadout_C_GetAvailableNumColumns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumColumns != nullptr)
			*NumColumns = params.NumColumns;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HandleModuleButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButton                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::HandleModuleButtonClicked(class UUI_Generic_Button_Module_C* ModuleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HandleModuleButtonClicked");
		
		UUI_EditShip_Panel_EditLoadout_C_HandleModuleButtonClicked_Params params {};
		params.ModuleButton = ModuleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.SetOfficerModuleVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsBriefingLocked                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYUILoadoutItemType                                index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UWidget*                                     LoadoutModule                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::SetOfficerModuleVisibility(bool IsBriefingLocked, EYUILoadoutItemType index, class UWidget* LoadoutModule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.SetOfficerModuleVisibility");
		
		UUI_EditShip_Panel_EditLoadout_C_SetOfficerModuleVisibility_Params params {};
		params.IsBriefingLocked = IsBriefingLocked;
		params.index = index;
		params.LoadoutModule = LoadoutModule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.GetAvailableModulesXPos
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UUI_EditShip_Panel_EditLoadout_C::GetAvailableModulesXPos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.GetAvailableModulesXPos");
		
		UUI_EditShip_Panel_EditLoadout_C_GetAvailableModulesXPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.GetListPosition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UUI_EditShip_Panel_EditLoadout_C::GetListPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.GetListPosition");
		
		UUI_EditShip_Panel_EditLoadout_C_GetListPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.InitStatsPanelPopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Stats_Panel_C*                   StatsPanel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::InitStatsPanelPopup(class UUI_Generic_Stats_Panel_C* StatsPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.InitStatsPanelPopup");
		
		UUI_EditShip_Panel_EditLoadout_C_InitStatsPanelPopup_Params params {};
		params.StatsPanel = StatsPanel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HandleLoadoutButtonUnfocused
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::HandleLoadoutButtonUnfocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HandleLoadoutButtonUnfocused");
		
		UUI_EditShip_Panel_EditLoadout_C_HandleLoadoutButtonUnfocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HandleLoadoutButtonFocused
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ButtonModule                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::HandleLoadoutButtonFocused(class UUI_Generic_Button_Module_C* ButtonModule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HandleLoadoutButtonFocused");
		
		UUI_EditShip_Panel_EditLoadout_C_HandleLoadoutButtonFocused_Params params {};
		params.ButtonModule = ButtonModule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.UpdateStatsPanelButtonModule
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ButtonModule                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::UpdateStatsPanelButtonModule(class UUI_Generic_Button_Module_C* ButtonModule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.UpdateStatsPanelButtonModule");
		
		UUI_EditShip_Panel_EditLoadout_C_UpdateStatsPanelButtonModule_Params params {};
		params.ButtonModule = ButtonModule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.UpdateStatsPanelPosition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::UpdateStatsPanelPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.UpdateStatsPanelPosition");
		
		UUI_EditShip_Panel_EditLoadout_C_UpdateStatsPanelPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.ShowStatsPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::ShowStatsPanel(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.ShowStatsPanel");
		
		UUI_EditShip_Panel_EditLoadout_C_ShowStatsPanel_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.SetStatsPanel
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::SetStatsPanel(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.SetStatsPanel");
		
		UUI_EditShip_Panel_EditLoadout_C_SetStatsPanel_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HandleModuleIndexClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::HandleModuleIndexClicked(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HandleModuleIndexClicked");
		
		UUI_EditShip_Panel_EditLoadout_C_HandleModuleIndexClicked_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.IsCurrentItemAnOfficerBriefing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               IsBriefing                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::IsCurrentItemAnOfficerBriefing(bool* IsBriefing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.IsCurrentItemAnOfficerBriefing");
		
		UUI_EditShip_Panel_EditLoadout_C_IsCurrentItemAnOfficerBriefing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBriefing != nullptr)
			*IsBriefing = params.IsBriefing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.GetItemSlotFromIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYUILoadoutItemType                                ItemSlotType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::GetItemSlotFromIndex(int32_t index, EYUILoadoutItemType* ItemSlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.GetItemSlotFromIndex");
		
		UUI_EditShip_Panel_EditLoadout_C_GetItemSlotFromIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemSlotType != nullptr)
			*ItemSlotType = params.ItemSlotType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.PopulateModule
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYUILoadoutItemType                                Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButton                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::PopulateModule(EYUILoadoutItemType Slot, class UUI_Generic_Button_Module_C* ModuleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.PopulateModule");
		
		UUI_EditShip_Panel_EditLoadout_C_PopulateModule_Params params {};
		params.Slot = Slot;
		params.ModuleButton = ModuleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.UpdateCurrentLoadout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::UpdateCurrentLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.UpdateCurrentLoadout");
		
		UUI_EditShip_Panel_EditLoadout_C_UpdateCurrentLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.FindSelectedModuleButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButtonToFind                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UUI_Generic_Button_Module_C*>         ModuleList                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButton                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::FindSelectedModuleButton(class UUI_Generic_Button_Module_C* ModuleButtonToFind, TArray<class UUI_Generic_Button_Module_C*>* ModuleList, class UUI_Generic_Button_Module_C** ModuleButton, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.FindSelectedModuleButton");
		
		UUI_EditShip_Panel_EditLoadout_C_FindSelectedModuleButton_Params params {};
		params.ModuleButtonToFind = ModuleButtonToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModuleList != nullptr)
			*ModuleList = params.ModuleList;
		if (ModuleButton != nullptr)
			*ModuleButton = params.ModuleButton;
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.UpdateSelectedLoadoutModule
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            selectedIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::UpdateSelectedLoadoutModule(int32_t selectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.UpdateSelectedLoadoutModule");
		
		UUI_EditShip_Panel_EditLoadout_C_UpdateSelectedLoadoutModule_Params params {};
		params.selectedIndex = selectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.SetDetailsPanelData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::SetDetailsPanelData(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.SetDetailsPanelData");
		
		UUI_EditShip_Panel_EditLoadout_C_SetDetailsPanelData_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.ShowModuleDetails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::ShowModuleDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.ShowModuleDetails");
		
		UUI_EditShip_Panel_EditLoadout_C_ShowModuleDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HideModuleList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::HideModuleList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HideModuleList");
		
		UUI_EditShip_Panel_EditLoadout_C_HideModuleList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.ShowModuleList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::ShowModuleList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.ShowModuleList");
		
		UUI_EditShip_Panel_EditLoadout_C_ShowModuleList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.AddHorizontalBoxChildrenToArray
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPanelWidget*                                TargetHBox                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::AddHorizontalBoxChildrenToArray(class UPanelWidget* TargetHBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.AddHorizontalBoxChildrenToArray");
		
		UUI_EditShip_Panel_EditLoadout_C_AddHorizontalBoxChildrenToArray_Params params {};
		params.TargetHBox = TargetHBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.SetupLoadoutModules
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::SetupLoadoutModules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.SetupLoadoutModules");
		
		UUI_EditShip_Panel_EditLoadout_C_SetupLoadoutModules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HideModuleDetails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::HideModuleDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HideModuleDetails");
		
		UUI_EditShip_Panel_EditLoadout_C_HideModuleDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.PopulateAvailableModulesForCurrentItem
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::PopulateAvailableModulesForCurrentItem(int32_t CurrentIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.PopulateAvailableModulesForCurrentItem");
		
		UUI_EditShip_Panel_EditLoadout_C_PopulateAvailableModulesForCurrentItem_Params params {};
		params.CurrentIndex = CurrentIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.SetOfficerLockVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::SetOfficerLockVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.SetOfficerLockVisibility");
		
		UUI_EditShip_Panel_EditLoadout_C_SetOfficerLockVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__WeaponContainerButton_K2Node_ComponentBoundEvent_305_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::BndEvt__WeaponContainerButton_K2Node_ComponentBoundEvent_305_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__WeaponContainerButton_K2Node_ComponentBoundEvent_305_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditShip_Panel_EditLoadout_C_BndEvt__WeaponContainerButton_K2Node_ComponentBoundEvent_305_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__WeaponContainerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::BndEvt__WeaponContainerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__WeaponContainerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditShip_Panel_EditLoadout_C_BndEvt__WeaponContainerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__ModuleContainerButton_K2Node_ComponentBoundEvent_970_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::BndEvt__ModuleContainerButton_K2Node_ComponentBoundEvent_970_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__ModuleContainerButton_K2Node_ComponentBoundEvent_970_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditShip_Panel_EditLoadout_C_BndEvt__ModuleContainerButton_K2Node_ComponentBoundEvent_970_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__ModuleContainerButton_K2Node_ComponentBoundEvent_987_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::BndEvt__ModuleContainerButton_K2Node_ComponentBoundEvent_987_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__ModuleContainerButton_K2Node_ComponentBoundEvent_987_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditShip_Panel_EditLoadout_C_BndEvt__ModuleContainerButton_K2Node_ComponentBoundEvent_987_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__OfficerBriefingButtonContainer_K2Node_ComponentBoundEvent_1338_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::BndEvt__OfficerBriefingButtonContainer_K2Node_ComponentBoundEvent_1338_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__OfficerBriefingButtonContainer_K2Node_ComponentBoundEvent_1338_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditShip_Panel_EditLoadout_C_BndEvt__OfficerBriefingButtonContainer_K2Node_ComponentBoundEvent_1338_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__OfficerBriefingButtonContainer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::BndEvt__OfficerBriefingButtonContainer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.BndEvt__OfficerBriefingButtonContainer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditShip_Panel_EditLoadout_C_BndEvt__OfficerBriefingButtonContainer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnLoadoutModuleButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ClickedModuleButton                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::OnLoadoutModuleButtonClicked(class UUI_Generic_Button_Module_C* ClickedModuleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnLoadoutModuleButtonClicked");
		
		UUI_EditShip_Panel_EditLoadout_C_OnLoadoutModuleButtonClicked_Params params {};
		params.ClickedModuleButton = ClickedModuleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnAvailableModuleHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButton                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::OnAvailableModuleHovered(class UUI_Generic_Button_Module_C* ModuleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnAvailableModuleHovered");
		
		UUI_EditShip_Panel_EditLoadout_C_OnAvailableModuleHovered_Params params {};
		params.ModuleButton = ModuleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnAvailableModuleClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 AvailableModuleClicked                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::OnAvailableModuleClicked(class UUI_Generic_Button_Module_C* AvailableModuleClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnAvailableModuleClicked");
		
		UUI_EditShip_Panel_EditLoadout_C_OnAvailableModuleClicked_Params params {};
		params.AvailableModuleClicked = AvailableModuleClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.Construct");
		
		UUI_EditShip_Panel_EditLoadout_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnShow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnShow");
		
		UUI_EditShip_Panel_EditLoadout_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnHide");
		
		UUI_EditShip_Panel_EditLoadout_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HideComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::HideComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.HideComplete");
		
		UUI_EditShip_Panel_EditLoadout_C_HideComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnLoadoutModuleButtonHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 HoveredModuleButton                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::OnLoadoutModuleButtonHovered(class UUI_Generic_Button_Module_C* HoveredModuleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnLoadoutModuleButtonHovered");
		
		UUI_EditShip_Panel_EditLoadout_C_OnLoadoutModuleButtonHovered_Params params {};
		params.HoveredModuleButton = HoveredModuleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnLoadoutModuleButtonUnhovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::OnLoadoutModuleButtonUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.OnLoadoutModuleButtonUnhovered");
		
		UUI_EditShip_Panel_EditLoadout_C_OnLoadoutModuleButtonUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.ExecuteUbergraph_UI_EditShip_Panel_EditLoadout
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_EditLoadout_C::ExecuteUbergraph_UI_EditShip_Panel_EditLoadout(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C.ExecuteUbergraph_UI_EditShip_Panel_EditLoadout");
		
		UUI_EditShip_Panel_EditLoadout_C_ExecuteUbergraph_UI_EditShip_Panel_EditLoadout_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EditShip_Panel_EditLoadout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditShip_Panel_EditLoadout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EditShip_Panel_EditLoadout.UI_EditShip_Panel_EditLoadout_C");
		return ptr;
	}

}


