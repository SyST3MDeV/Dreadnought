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
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnLeaderboardPlayerClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_C::OnLeaderboardPlayerClicked(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnLeaderboardPlayerClicked");
		
		UUI_Score_Leaderboard_C_OnLeaderboardPlayerClicked_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.UpdatePlayerData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerUIData                               PlayerData                                                 (Parm)
	 */
	void UUI_Score_Leaderboard_C::UpdatePlayerData(const struct FPlayerUIData& PlayerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.UpdatePlayerData");
		
		UUI_Score_Leaderboard_C_UpdatePlayerData_Params params {};
		params.PlayerData = PlayerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleNavRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Score_Leaderboard_C::HandleNavRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleNavRight");
		
		UUI_Score_Leaderboard_C_HandleNavRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleNavLeft
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Score_Leaderboard_C::HandleNavLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleNavLeft");
		
		UUI_Score_Leaderboard_C_HandleNavLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.IsDropdownOpen
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_C::IsDropdownOpen(bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.IsDropdownOpen");
		
		UUI_Score_Leaderboard_C_IsDropdownOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOpen != nullptr)
			*IsOpen = params.IsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Score_Leaderboard_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleFocus");
		
		UUI_Score_Leaderboard_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Score_Leaderboard_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleUnfocus");
		
		UUI_Score_Leaderboard_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.SetCurrentlySelectedWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Score_Leaderboard_C::SetCurrentlySelectedWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.SetCurrentlySelectedWidget");
		
		UUI_Score_Leaderboard_C_SetCurrentlySelectedWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleUIAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Score_Leaderboard_C::HandleUIAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleUIAction");
		
		UUI_Score_Leaderboard_C_HandleUIAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleNavDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Score_Leaderboard_C::HandleNavDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleNavDown");
		
		UUI_Score_Leaderboard_C_HandleNavDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleNavUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Score_Leaderboard_C::HandleNavUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HandleNavUp");
		
		UUI_Score_Leaderboard_C_HandleNavUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.InitiateProcessing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Score_Leaderboard_C::InitiateProcessing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.InitiateProcessing");
		
		UUI_Score_Leaderboard_C_InitiateProcessing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.SetupSettingOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Score_Leaderboard_C::SetupSettingOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.SetupSettingOptions");
		
		UUI_Score_Leaderboard_C_SetupSettingOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HideEntries
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHide                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_C::HideEntries(bool bHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.HideEntries");
		
		UUI_Score_Leaderboard_C_HideEntries_Params params {};
		params.bHide = bHide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.PopulatePlayerEntry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLeaderboardUIEntry                         playerentry                                                (Parm)
	 */
	void UUI_Score_Leaderboard_C::PopulatePlayerEntry(const struct FLeaderboardUIEntry& playerentry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.PopulatePlayerEntry");
		
		UUI_Score_Leaderboard_C_PopulatePlayerEntry_Params params {};
		params.playerentry = playerentry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.ClearCurrentLeaderboard
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Score_Leaderboard_C::ClearCurrentLeaderboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.ClearCurrentLeaderboard");
		
		UUI_Score_Leaderboard_C_ClearCurrentLeaderboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.SetupLeaderboardEntry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLeaderboardUIEntry                         LeaderboardEntry                                           (Parm)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_C::SetupLeaderboardEntry(const struct FLeaderboardUIEntry& LeaderboardEntry, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.SetupLeaderboardEntry");
		
		UUI_Score_Leaderboard_C_SetupLeaderboardEntry_Params params {};
		params.LeaderboardEntry = LeaderboardEntry;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.PopulateLeaderboard
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLeaderboardUIData                          LeaderboardData                                            (Parm)
	 */
	void UUI_Score_Leaderboard_C::PopulateLeaderboard(const struct FLeaderboardUIData& LeaderboardData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.PopulateLeaderboard");
		
		UUI_Score_Leaderboard_C_PopulateLeaderboard_Params params {};
		params.LeaderboardData = LeaderboardData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.BndEvt__GameModeDropdown_K2Node_ComponentBoundEvent_72_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            selectedIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_C::BndEvt__GameModeDropdown_K2Node_ComponentBoundEvent_72_OnSelectionChanged__DelegateSignature(int32_t categoryIndex, int32_t selectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.BndEvt__GameModeDropdown_K2Node_ComponentBoundEvent_72_OnSelectionChanged__DelegateSignature");
		
		UUI_Score_Leaderboard_C_BndEvt__GameModeDropdown_K2Node_ComponentBoundEvent_72_OnSelectionChanged__DelegateSignature_Params params {};
		params.categoryIndex = categoryIndex;
		params.selectedIndex = selectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.BndEvt__FleetTierDropdown_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            selectedIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_C::BndEvt__FleetTierDropdown_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(int32_t categoryIndex, int32_t selectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.BndEvt__FleetTierDropdown_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");
		
		UUI_Score_Leaderboard_C_BndEvt__FleetTierDropdown_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params params {};
		params.categoryIndex = categoryIndex;
		params.selectedIndex = selectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.BndEvt__TimeSpanDropDown_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            selectedIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_C::BndEvt__TimeSpanDropDown_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature(int32_t categoryIndex, int32_t selectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.BndEvt__TimeSpanDropDown_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature");
		
		UUI_Score_Leaderboard_C_BndEvt__TimeSpanDropDown_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature_Params params {};
		params.categoryIndex = categoryIndex;
		params.selectedIndex = selectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.ExecuteUbergraph_UI_Score_Leaderboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_C::ExecuteUbergraph_UI_Score_Leaderboard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.ExecuteUbergraph_UI_Score_Leaderboard");
		
		UUI_Score_Leaderboard_C_ExecuteUbergraph_UI_Score_Leaderboard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnPlayerOptionsOpen__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_C::OnPlayerOptionsOpen__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnPlayerOptionsOpen__DelegateSignature");
		
		UUI_Score_Leaderboard_C_OnPlayerOptionsOpen__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnSettingsChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Score_Leaderboard_C::OnSettingsChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnSettingsChanged__DelegateSignature");
		
		UUI_Score_Leaderboard_C_OnSettingsChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnGameModeChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYGameModeType                                     NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_C::OnGameModeChanged__DelegateSignature(EYGameModeType NewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnGameModeChanged__DelegateSignature");
		
		UUI_Score_Leaderboard_C_OnGameModeChanged__DelegateSignature_Params params {};
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnFleetTierChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        newFleet                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_C::OnFleetTierChanged__DelegateSignature(EYFleetType newFleet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnFleetTierChanged__DelegateSignature");
		
		UUI_Score_Leaderboard_C_OnFleetTierChanged__DelegateSignature_Params params {};
		params.newFleet = newFleet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnTimeSpanIndexChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_C::OnTimeSpanIndexChanged__DelegateSignature(int32_t newIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard.UI_Score_Leaderboard_C.OnTimeSpanIndexChanged__DelegateSignature");
		
		UUI_Score_Leaderboard_C_OnTimeSpanIndexChanged__DelegateSignature_Params params {};
		params.newIndex = newIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Score_Leaderboard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Score_Leaderboard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Score_Leaderboard.UI_Score_Leaderboard_C");
		return ptr;
	}

}


