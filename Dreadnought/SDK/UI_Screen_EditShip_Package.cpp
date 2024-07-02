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
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularDownAvailableLoadout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumColumns                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_EditShipSubPanel*                        CurrentPanel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::HandleGranularDownAvailableLoadout(int32_t NumColumns, class UUI_EditShipSubPanel* CurrentPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularDownAvailableLoadout");
		
		UUI_Screen_EditShip_C_HandleGranularDownAvailableLoadout_Params params {};
		params.NumColumns = NumColumns;
		params.CurrentPanel = CurrentPanel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularUpAvailableLoadout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumColumns                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_EditShipSubPanel*                        CurrentPanel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::HandleGranularUpAvailableLoadout(int32_t NumColumns, class UUI_EditShipSubPanel* CurrentPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularUpAvailableLoadout");
		
		UUI_Screen_EditShip_C_HandleGranularUpAvailableLoadout_Params params {};
		params.NumColumns = NumColumns;
		params.CurrentPanel = CurrentPanel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.ShowStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::ShowStats(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.ShowStats");
		
		UUI_Screen_EditShip_C_ShowStats_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleLeftStickClick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleLeftStickClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleLeftStickClick");
		
		UUI_Screen_EditShip_C_HandleLeftStickClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateCurrencies
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::UpdateCurrencies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateCurrencies");
		
		UUI_Screen_EditShip_C_UpdateCurrencies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.EditLoadoutName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::EditLoadoutName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.EditLoadoutName");
		
		UUI_Screen_EditShip_C_EditLoadoutName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.FocusInitialDetailsPanelItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::FocusInitialDetailsPanelItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.FocusInitialDetailsPanelItem");
		
		UUI_Screen_EditShip_C_FocusInitialDetailsPanelItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateFocusedItemAvailable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_EditShipSubPanel*                        CurrentPanel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::UpdateFocusedItemAvailable(class UUI_EditShipSubPanel* CurrentPanel, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateFocusedItemAvailable");
		
		UUI_Screen_EditShip_C_UpdateFocusedItemAvailable_Params params {};
		params.CurrentPanel = CurrentPanel;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateFocusedItemLoadout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_EditShipSubPanel*                        Panel                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            loadoutindex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::UpdateFocusedItemLoadout(class UUI_EditShipSubPanel* Panel, int32_t loadoutindex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateFocusedItemLoadout");
		
		UUI_Screen_EditShip_C_UpdateFocusedItemLoadout_Params params {};
		params.Panel = Panel;
		params.loadoutindex = loadoutindex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.SelectDetailsTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::SelectDetailsTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.SelectDetailsTab");
		
		UUI_Screen_EditShip_C_SelectDetailsTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.SelectAppearanceTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::SelectAppearanceTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.SelectAppearanceTab");
		
		UUI_Screen_EditShip_C_SelectAppearanceTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.SelectLoadoutTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::SelectLoadoutTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.SelectLoadoutTab");
		
		UUI_Screen_EditShip_C_SelectLoadoutTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.GetCurrentPanelTab
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_Button_Tab_Generic_C*                    Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::GetCurrentPanelTab(class UUI_Button_Tab_Generic_C** Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.GetCurrentPanelTab");
		
		UUI_Screen_EditShip_C_GetCurrentPanelTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.ShouldShowEditLoadoutNameButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_EditShip_ButtonLoadout_C*                LoadoutButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UUI_Screen_EditShip_C::ShouldShowEditLoadoutNameButton(class UUI_EditShip_ButtonLoadout_C* LoadoutButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.ShouldShowEditLoadoutNameButton");
		
		UUI_Screen_EditShip_C_ShouldShowEditLoadoutNameButton_Params params {};
		params.LoadoutButton = LoadoutButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.UnfocusCurrentLoadoutModuleContainer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::UnfocusCurrentLoadoutModuleContainer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.UnfocusCurrentLoadoutModuleContainer");
		
		UUI_Screen_EditShip_C_UnfocusCurrentLoadoutModuleContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandlePanelPostAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandlePanelPostAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandlePanelPostAction");
		
		UUI_Screen_EditShip_C_HandlePanelPostAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.SetButtonHints
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLegendPromptData>                   Hints                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Screen_EditShip_C::SetButtonHints(TArray<struct FLegendPromptData>* Hints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.SetButtonHints");
		
		UUI_Screen_EditShip_C_SetButtonHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hints != nullptr)
			*Hints = params.Hints;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftRightDetails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularLeftRightDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftRightDetails");
		
		UUI_Screen_EditShip_C_HandleGranularLeftRightDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.GetNavigableLoadoutModulesCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	int32_t UUI_Screen_EditShip_C::GetNavigableLoadoutModulesCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.GetNavigableLoadoutModulesCount");
		
		UUI_Screen_EditShip_C_GetNavigableLoadoutModulesCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularUpAvailableModules
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularUpAvailableModules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularUpAvailableModules");
		
		UUI_Screen_EditShip_C_HandleGranularUpAvailableModules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularUpLoadoutButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularUpLoadoutButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularUpLoadoutButton");
		
		UUI_Screen_EditShip_C_HandleGranularUpLoadoutButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularUp");
		
		UUI_Screen_EditShip_C_HandleGranularUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularDownAvailableModules
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularDownAvailableModules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularDownAvailableModules");
		
		UUI_Screen_EditShip_C_HandleGranularDownAvailableModules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.IsAvailableModuleButtonFocused
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsAvailableModule                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::IsAvailableModuleButtonFocused(bool* IsAvailableModule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.IsAvailableModuleButtonFocused");
		
		UUI_Screen_EditShip_C_IsAvailableModuleButtonFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAvailableModule != nullptr)
			*IsAvailableModule = params.IsAvailableModule;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularDownLoadoutButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularDownLoadoutButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularDownLoadoutButton");
		
		UUI_Screen_EditShip_C_HandleGranularDownLoadoutButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularDown");
		
		UUI_Screen_EditShip_C_HandleGranularDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftFromAppearanceLoadoutButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularLeftFromAppearanceLoadoutButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftFromAppearanceLoadoutButton");
		
		UUI_Screen_EditShip_C_HandleGranularLeftFromAppearanceLoadoutButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftFromCaptainCustomization
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularLeftFromCaptainCustomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftFromCaptainCustomization");
		
		UUI_Screen_EditShip_C_HandleGranularLeftFromCaptainCustomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.GetAvailableColumns
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            NumColumns                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::GetAvailableColumns(int32_t* NumColumns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.GetAvailableColumns");
		
		UUI_Screen_EditShip_C_GetAvailableColumns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumColumns != nullptr)
			*NumColumns = params.NumColumns;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightFromCaptainCustomization
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularRightFromCaptainCustomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightFromCaptainCustomization");
		
		UUI_Screen_EditShip_C_HandleGranularRightFromCaptainCustomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.IsCaptainCustomizationButtonFocused
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UUI_Screen_EditShip_C::IsCaptainCustomizationButtonFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.IsCaptainCustomizationButtonFocused");
		
		UUI_Screen_EditShip_C_IsCaptainCustomizationButtonFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightOnAvailableModules
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumberOfAvailableColumns                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_EditShipSubPanel*                        CurrentPanel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::HandleGranularRightOnAvailableModules(int32_t NumberOfAvailableColumns, class UUI_EditShipSubPanel* CurrentPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightOnAvailableModules");
		
		UUI_Screen_EditShip_C_HandleGranularRightOnAvailableModules_Params params {};
		params.NumberOfAvailableColumns = NumberOfAvailableColumns;
		params.CurrentPanel = CurrentPanel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightOnAppearanceModules
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularRightOnAppearanceModules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightOnAppearanceModules");
		
		UUI_Screen_EditShip_C_HandleGranularRightOnAppearanceModules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftOnAppearanceModules
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularLeftOnAppearanceModules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftOnAppearanceModules");
		
		UUI_Screen_EditShip_C_HandleGranularLeftOnAppearanceModules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightOnLoadoutModules
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularRightOnLoadoutModules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightOnLoadoutModules");
		
		UUI_Screen_EditShip_C_HandleGranularRightOnLoadoutModules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightFromLoadoutButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularRightFromLoadoutButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightFromLoadoutButton");
		
		UUI_Screen_EditShip_C_HandleGranularRightFromLoadoutButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightAppearance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularRightAppearance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightAppearance");
		
		UUI_Screen_EditShip_C_HandleGranularRightAppearance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightLoadout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularRightLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRightLoadout");
		
		UUI_Screen_EditShip_C_HandleGranularRightLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularRight");
		
		UUI_Screen_EditShip_C_HandleGranularRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftAppearance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularLeftAppearance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftAppearance");
		
		UUI_Screen_EditShip_C_HandleGranularLeftAppearance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftOnAvailableModules
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumberOfAvailableColumns                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_EditShipSubPanel*                        CurrentPanel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::HandleGranularLeftOnAvailableModules(int32_t NumberOfAvailableColumns, class UUI_EditShipSubPanel* CurrentPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftOnAvailableModules");
		
		UUI_Screen_EditShip_C_HandleGranularLeftOnAvailableModules_Params params {};
		params.NumberOfAvailableColumns = NumberOfAvailableColumns;
		params.CurrentPanel = CurrentPanel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftOnLoadoutModules
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularLeftOnLoadoutModules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftOnLoadoutModules");
		
		UUI_Screen_EditShip_C_HandleGranularLeftOnLoadoutModules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftFromLoadoutButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularLeftFromLoadoutButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftFromLoadoutButton");
		
		UUI_Screen_EditShip_C_HandleGranularLeftFromLoadoutButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftLoadout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularLeftLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeftLoadout");
		
		UUI_Screen_EditShip_C_HandleGranularLeftLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeft
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::HandleGranularLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleGranularLeft");
		
		UUI_Screen_EditShip_C_HandleGranularLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateBackFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::UpdateBackFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateBackFocus");
		
		UUI_Screen_EditShip_C_UpdateBackFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateLoadoutReferences
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UUI_EditShip_LoadoutButton_Container_C*> CurrentLoadoutModulesContainers                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class UUI_Generic_Button_Module_C*>         CurrentAvailableModules                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Screen_EditShip_C::UpdateLoadoutReferences(TArray<class UUI_EditShip_LoadoutButton_Container_C*>* CurrentLoadoutModulesContainers, TArray<class UUI_Generic_Button_Module_C*>* CurrentAvailableModules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateLoadoutReferences");
		
		UUI_Screen_EditShip_C_UpdateLoadoutReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentLoadoutModulesContainers != nullptr)
			*CurrentLoadoutModulesContainers = params.CurrentLoadoutModulesContainers;
		if (CurrentAvailableModules != nullptr)
			*CurrentAvailableModules = params.CurrentAvailableModules;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateFocusFromAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::UpdateFocusFromAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.UpdateFocusFromAction");
		
		UUI_Screen_EditShip_C_UpdateFocusFromAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.IsLoadoutButtonFocused
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               FoundLoadoutButtonTemp                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_EditShip_ButtonLoadout_C*                ButtonLoadout                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::IsLoadoutButtonFocused(bool* FoundLoadoutButtonTemp, class UUI_EditShip_ButtonLoadout_C** ButtonLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.IsLoadoutButtonFocused");
		
		UUI_Screen_EditShip_C_IsLoadoutButtonFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundLoadoutButtonTemp != nullptr)
			*FoundLoadoutButtonTemp = params.FoundLoadoutButtonTemp;
		if (ButtonLoadout != nullptr)
			*ButtonLoadout = params.ButtonLoadout;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.FocusInitialPanelItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::FocusInitialPanelItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.FocusInitialPanelItem");
		
		UUI_Screen_EditShip_C_FocusInitialPanelItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.IsLoadoutModuleButtonFocused
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_EditShip_LoadoutButton_Container_C*      LoadoutContainer                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLoadoutModuleButton                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::IsLoadoutModuleButtonFocused(class UUI_EditShip_LoadoutButton_Container_C** LoadoutContainer, bool* IsLoadoutModuleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.IsLoadoutModuleButtonFocused");
		
		UUI_Screen_EditShip_C_IsLoadoutModuleButtonFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LoadoutContainer != nullptr)
			*LoadoutContainer = params.LoadoutContainer;
		if (IsLoadoutModuleButton != nullptr)
			*IsLoadoutModuleButton = params.IsLoadoutModuleButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.TabLeft
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::TabLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.TabLeft");
		
		UUI_Screen_EditShip_C_TabLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.FocusNewTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::FocusNewTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.FocusNewTab");
		
		UUI_Screen_EditShip_C_FocusNewTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.UnfocusCurrentTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::UnfocusCurrentTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.UnfocusCurrentTab");
		
		UUI_Screen_EditShip_C_UnfocusCurrentTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.tabRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::tabRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.tabRight");
		
		UUI_Screen_EditShip_C_tabRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    Input                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::HandleInput(EUI_MenuActions Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleInput");
		
		UUI_Screen_EditShip_C_HandleInput_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.SetupLoadoutButtons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::SetupLoadoutButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.SetupLoadoutButtons");
		
		UUI_Screen_EditShip_C_SetupLoadoutButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleTabSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Tab_Generic_C*                    SelectedTab                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::HandleTabSelected(class UUI_Button_Tab_Generic_C* SelectedTab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleTabSelected");
		
		UUI_Screen_EditShip_C_HandleTabSelected_Params params {};
		params.SelectedTab = SelectedTab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.SetupNavigationTabs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::SetupNavigationTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.SetupNavigationTabs");
		
		UUI_Screen_EditShip_C_SetupNavigationTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.Setup");
		
		UUI_Screen_EditShip_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.SetLoadoutButtonContainerVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::SetLoadoutButtonContainerVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.SetLoadoutButtonContainerVisibility");
		
		UUI_Screen_EditShip_C_SetLoadoutButtonContainerVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.SelectInitialPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::SelectInitialPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.SelectInitialPanel");
		
		UUI_Screen_EditShip_C_SelectInitialPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleLoadoutSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_EditShip_ButtonLoadout_C*                SelectedLoadoutButton                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::HandleLoadoutSelection(class UUI_EditShip_ButtonLoadout_C* SelectedLoadoutButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleLoadoutSelection");
		
		UUI_Screen_EditShip_C_HandleLoadoutSelection_Params params {};
		params.SelectedLoadoutButton = SelectedLoadoutButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.ShowSubPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 PanelToShow                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::ShowSubPanel(class UUserWidget* PanelToShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.ShowSubPanel");
		
		UUI_Screen_EditShip_C_ShowSubPanel_Params params {};
		params.PanelToShow = PanelToShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.GetLoadoutData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::GetLoadoutData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.GetLoadoutData");
		
		UUI_Screen_EditShip_C_GetLoadoutData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.SetupShipTitleWidget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::SetupShipTitleWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.SetupShipTitleWidget");
		
		UUI_Screen_EditShip_C_SetupShipTitleWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.Construct");
		
		UUI_Screen_EditShip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnTransitionIn");
		
		UUI_Screen_EditShip_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnTransitionOut");
		
		UUI_Screen_EditShip_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.TransitionInAnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::TransitionInAnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.TransitionInAnimComplete");
		
		UUI_Screen_EditShip_C_TransitionInAnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.TransitionOutAnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_EditShip_C::TransitionOutAnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.TransitionOutAnimComplete");
		
		UUI_Screen_EditShip_C_TransitionOutAnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleResearchCompleted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::HandleResearchCompleted(bool wasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandleResearchCompleted");
		
		UUI_Screen_EditShip_C_HandleResearchCompleted_Params params {};
		params.wasSuccessful = wasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandlePurchaseCompleted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::HandlePurchaseCompleted(bool wasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.HandlePurchaseCompleted");
		
		UUI_Screen_EditShip_C_HandlePurchaseCompleted_Params params {};
		params.wasSuccessful = wasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnNavigationTabClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Tab_Generic_C*                    source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::OnNavigationTabClicked(class UUI_Button_Tab_Generic_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnNavigationTabClicked");
		
		UUI_Screen_EditShip_C_OnNavigationTabClicked_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnSaveLoadoutNameRequest
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_EditShip_ButtonLoadout_C*                source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::OnSaveLoadoutNameRequest(class UUI_EditShip_ButtonLoadout_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnSaveLoadoutNameRequest");
		
		UUI_Screen_EditShip_C_OnSaveLoadoutNameRequest_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnNavigationEvent");
		
		UUI_Screen_EditShip_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnChangeTab
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::OnChangeTab(EUI_Screen screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.OnChangeTab");
		
		UUI_Screen_EditShip_C_OnChangeTab_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_EditShip.UI_Screen_EditShip_C.ExecuteUbergraph_UI_Screen_EditShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_EditShip_C::ExecuteUbergraph_UI_Screen_EditShip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_EditShip.UI_Screen_EditShip_C.ExecuteUbergraph_UI_Screen_EditShip");
		
		UUI_Screen_EditShip_C_ExecuteUbergraph_UI_Screen_EditShip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_EditShip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_EditShip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_EditShip.UI_Screen_EditShip_C");
		return ptr;
	}

}


