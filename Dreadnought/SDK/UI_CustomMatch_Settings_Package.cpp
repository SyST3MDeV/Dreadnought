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
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IndexToFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_Settings_C::HandleUnfocus(int32_t IndexToFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleUnfocus");
		
		UUI_CustomMatch_Settings_C_HandleUnfocus_Params params {};
		params.IndexToFocus = IndexToFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IndexToFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_Settings_C::HandleFocus(int32_t IndexToFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleFocus");
		
		UUI_CustomMatch_Settings_C_HandleFocus_Params params {};
		params.IndexToFocus = IndexToFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.GetFocusableWidgets
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class UUI_DreadWidget*>                     WidgetList                                                 (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_CustomMatch_Settings_C::GetFocusableWidgets(TArray<class UUI_DreadWidget*>* WidgetList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.GetFocusableWidgets");
		
		UUI_CustomMatch_Settings_C_GetFocusableWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WidgetList != nullptr)
			*WidgetList = params.WidgetList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleDoRefresh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_Settings_C::HandleDoRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleDoRefresh");
		
		UUI_CustomMatch_Settings_C_HandleDoRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.RefreshDropdowns
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            gameModeIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            mapIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_Settings_C::RefreshDropdowns(int32_t gameModeIndex, int32_t mapIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.RefreshDropdowns");
		
		UUI_CustomMatch_Settings_C_RefreshDropdowns_Params params {};
		params.gameModeIndex = gameModeIndex;
		params.mapIndex = mapIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleRoomStateChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYCustomRoomState                                  OldScreenState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYCustomRoomState                                  NewScreenState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_Settings_C::HandleRoomStateChanged(EYCustomRoomState OldScreenState, EYCustomRoomState NewScreenState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleRoomStateChanged");
		
		UUI_CustomMatch_Settings_C_HandleRoomStateChanged_Params params {};
		params.OldScreenState = OldScreenState;
		params.NewScreenState = NewScreenState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleSettingsChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYCustomMatchScreenSettings                 ScreenSettings                                             (Parm)
	 */
	void UUI_CustomMatch_Settings_C::HandleSettingsChanged(const struct FYCustomMatchScreenSettings& ScreenSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleSettingsChanged");
		
		UUI_CustomMatch_Settings_C_HandleSettingsChanged_Params params {};
		params.ScreenSettings = ScreenSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleDataReady
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_Settings_C::HandleDataReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleDataReady");
		
		UUI_CustomMatch_Settings_C_HandleDataReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.BndEvt__ButtonStartMatch_K2Node_ComponentBoundEvent_435_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_Settings_C::BndEvt__ButtonStartMatch_K2Node_ComponentBoundEvent_435_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.BndEvt__ButtonStartMatch_K2Node_ComponentBoundEvent_435_OnButtonClicked__DelegateSignature");
		
		UUI_CustomMatch_Settings_C_BndEvt__ButtonStartMatch_K2Node_ComponentBoundEvent_435_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.DataReady
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_CustomMatch_Settings_C::DataReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.DataReady");
		
		UUI_CustomMatch_Settings_C_DataReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.BndEvt__GameModeDropdown_K2Node_ComponentBoundEvent_10_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            selectedIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_Settings_C::BndEvt__GameModeDropdown_K2Node_ComponentBoundEvent_10_OnSelectionChanged__DelegateSignature(int32_t categoryIndex, int32_t selectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.BndEvt__GameModeDropdown_K2Node_ComponentBoundEvent_10_OnSelectionChanged__DelegateSignature");
		
		UUI_CustomMatch_Settings_C_BndEvt__GameModeDropdown_K2Node_ComponentBoundEvent_10_OnSelectionChanged__DelegateSignature_Params params {};
		params.categoryIndex = categoryIndex;
		params.selectedIndex = selectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.BndEvt__MapDropdown_K2Node_ComponentBoundEvent_11_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            selectedIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_Settings_C::BndEvt__MapDropdown_K2Node_ComponentBoundEvent_11_OnSelectionChanged__DelegateSignature(int32_t categoryIndex, int32_t selectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.BndEvt__MapDropdown_K2Node_ComponentBoundEvent_11_OnSelectionChanged__DelegateSignature");
		
		UUI_CustomMatch_Settings_C_BndEvt__MapDropdown_K2Node_ComponentBoundEvent_11_OnSelectionChanged__DelegateSignature_Params params {};
		params.categoryIndex = categoryIndex;
		params.selectedIndex = selectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.SettingsChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FYCustomMatchScreenSettings                 Settings                                                   (Parm)
	 */
	void UUI_CustomMatch_Settings_C::SettingsChanged(const struct FYCustomMatchScreenSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.SettingsChanged");
		
		UUI_CustomMatch_Settings_C_SettingsChanged_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.RoomStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EYCustomRoomState                                  oldRoomState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYCustomRoomState                                  newRoomState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_Settings_C::RoomStateChanged(EYCustomRoomState oldRoomState, EYCustomRoomState newRoomState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.RoomStateChanged");
		
		UUI_CustomMatch_Settings_C_RoomStateChanged_Params params {};
		params.oldRoomState = oldRoomState;
		params.newRoomState = newRoomState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.DoRefresh
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_CustomMatch_Settings_C::DoRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.DoRefresh");
		
		UUI_CustomMatch_Settings_C_DoRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_CustomMatch_Settings_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.Construct");
		
		UUI_CustomMatch_Settings_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.BndEvt__CheckBoxTeam1Ai_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CheckBoxIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_Settings_C::BndEvt__CheckBoxTeam1Ai_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(bool IsChecked, int32_t CheckBoxIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.BndEvt__CheckBoxTeam1Ai_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature");
		
		UUI_CustomMatch_Settings_C_BndEvt__CheckBoxTeam1Ai_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.CheckBoxIndex = CheckBoxIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.BndEvt__CheckBoxTeam2Ai_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CheckBoxIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_Settings_C::BndEvt__CheckBoxTeam2Ai_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature(bool IsChecked, int32_t CheckBoxIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.BndEvt__CheckBoxTeam2Ai_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature");
		
		UUI_CustomMatch_Settings_C_BndEvt__CheckBoxTeam2Ai_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.CheckBoxIndex = CheckBoxIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.ExecuteUbergraph_UI_CustomMatch_Settings
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_Settings_C::ExecuteUbergraph_UI_CustomMatch_Settings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.ExecuteUbergraph_UI_CustomMatch_Settings");
		
		UUI_CustomMatch_Settings_C_ExecuteUbergraph_UI_CustomMatch_Settings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.OnMapSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SelectedMap                                                (Parm)
	 */
	void UUI_CustomMatch_Settings_C::OnMapSelected__DelegateSignature(const class FText& SelectedMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.OnMapSelected__DelegateSignature");
		
		UUI_CustomMatch_Settings_C_OnMapSelected__DelegateSignature_Params params {};
		params.SelectedMap = SelectedMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.OnGameModeSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SelectedGameMode                                           (Parm)
	 */
	void UUI_CustomMatch_Settings_C::OnGameModeSelected__DelegateSignature(const class FText& SelectedGameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.OnGameModeSelected__DelegateSignature");
		
		UUI_CustomMatch_Settings_C_OnGameModeSelected__DelegateSignature_Params params {};
		params.SelectedGameMode = SelectedGameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.OnAdvanceClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_Settings_C::OnAdvanceClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.OnAdvanceClicked__DelegateSignature");
		
		UUI_CustomMatch_Settings_C_OnAdvanceClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.OnFillTeamWithAIChecked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TeamNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_Settings_C::OnFillTeamWithAIChecked__DelegateSignature(bool IsChecked, int32_t TeamNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.OnFillTeamWithAIChecked__DelegateSignature");
		
		UUI_CustomMatch_Settings_C_OnFillTeamWithAIChecked__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.TeamNumber = TeamNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CustomMatch_Settings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomMatch_Settings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CustomMatch_Settings.UI_CustomMatch_Settings_C");
		return ptr;
	}

}


