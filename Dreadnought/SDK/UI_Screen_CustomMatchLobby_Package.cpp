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
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsTeamListFocused
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TeamFocused                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::IsTeamListFocused(bool* TeamFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsTeamListFocused");
		
		UUI_Screen_CustomMatchLobby_C_IsTeamListFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeamFocused != nullptr)
			*TeamFocused = params.TeamFocused;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetFocusedTeam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_TeamList_C*                  TeamList                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::GetFocusedTeam(class UUI_CustomMatch_TeamList_C** TeamList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetFocusedTeam");
		
		UUI_Screen_CustomMatchLobby_C_GetFocusedTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeamList != nullptr)
			*TeamList = params.TeamList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.RefreshAllUserData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::RefreshAllUserData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.RefreshAllUserData");
		
		UUI_Screen_CustomMatchLobby_C_RefreshAllUserData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleOptionInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleOptionInput(EUI_MenuActions GamePadInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleOptionInput");
		
		UUI_Screen_CustomMatchLobby_C_HandleOptionInput_Params params {};
		params.GamePadInput = GamePadInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HideOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::HideOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HideOptions");
		
		UUI_Screen_CustomMatchLobby_C_HideOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandlePlayerOptionClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EFriendOptionButton                                option                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandlePlayerOptionClicked(EFriendOptionButton option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandlePlayerOptionClicked");
		
		UUI_Screen_CustomMatchLobby_C_HandlePlayerOptionClicked_Params params {};
		params.option = option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.ShowOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::ShowOptions(ESlateVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.ShowOptions");
		
		UUI_Screen_CustomMatchLobby_C_ShowOptions_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleActionPlayerOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_TeamList_C*                  TeamList                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleActionPlayerOptions(class UUI_CustomMatch_TeamList_C* TeamList, int32_t PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleActionPlayerOptions");
		
		UUI_Screen_CustomMatchLobby_C_HandleActionPlayerOptions_Params params {};
		params.TeamList = TeamList;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.DisplayWelcomePopup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::DisplayWelcomePopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.DisplayWelcomePopup");
		
		UUI_Screen_CustomMatchLobby_C_DisplayWelcomePopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.SetBindingsOnScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::SetBindingsOnScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.SetBindingsOnScreen");
		
		UUI_Screen_CustomMatchLobby_C_SetBindingsOnScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetNewIndexFromRow
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_CustomMatch_TeamList_C*                  OtherTeam                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Row                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UpdatedIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::GetNewIndexFromRow(class UUI_CustomMatch_TeamList_C* OtherTeam, int32_t Row, int32_t* UpdatedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetNewIndexFromRow");
		
		UUI_Screen_CustomMatchLobby_C_GetNewIndexFromRow_Params params {};
		params.OtherTeam = OtherTeam;
		params.Row = Row;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpdatedIndex != nullptr)
			*UpdatedIndex = params.UpdatedIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetFriendInviteLength
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            listLength                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::GetFriendInviteLength(int32_t* listLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetFriendInviteLength");
		
		UUI_Screen_CustomMatchLobby_C_GetFriendInviteLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (listLength != nullptr)
			*listLength = params.listLength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFriendDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleFriendDown(int32_t newIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFriendDown");
		
		UUI_Screen_CustomMatchLobby_C_HandleFriendDown_Params params {};
		params.newIndex = newIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFriendUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleFriendUp(int32_t newIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFriendUp");
		
		UUI_Screen_CustomMatchLobby_C_HandleFriendUp_Params params {};
		params.newIndex = newIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFriendActionButtonLeftRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleFriendActionButtonLeftRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFriendActionButtonLeftRight");
		
		UUI_Screen_CustomMatchLobby_C_HandleFriendActionButtonLeftRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsFriendActionButtonFocused
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsButtonFocused                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::IsFriendActionButtonFocused(bool* IsButtonFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsFriendActionButtonFocused");
		
		UUI_Screen_CustomMatchLobby_C_IsFriendActionButtonFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsButtonFocused != nullptr)
			*IsButtonFocused = params.IsButtonFocused;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.FocusFriendItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::FocusFriendItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.FocusFriendItem");
		
		UUI_Screen_CustomMatchLobby_C_FocusFriendItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UnfocusFriendItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::UnfocusFriendItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UnfocusFriendItem");
		
		UUI_Screen_CustomMatchLobby_C_UnfocusFriendItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateFocusedInviteItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::UpdateFocusedInviteItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateFocusedInviteItem");
		
		UUI_Screen_CustomMatchLobby_C_UpdateFocusedInviteItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFriendLeftRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleFriendLeftRight(int32_t newIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFriendLeftRight");
		
		UUI_Screen_CustomMatchLobby_C_HandleFriendLeftRight_Params params {};
		params.newIndex = newIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFriendInvitesClosed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleFriendInvitesClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFriendInvitesClosed");
		
		UUI_Screen_CustomMatchLobby_C_HandleFriendInvitesClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleInviteInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleInviteInput(EUI_MenuActions GamePadInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleInviteInput");
		
		UUI_Screen_CustomMatchLobby_C_HandleInviteInput_Params params {};
		params.GamePadInput = GamePadInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsCurrentItemCheckbox
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UUI_Screen_CustomMatchLobby_C::IsCurrentItemCheckbox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsCurrentItemCheckbox");
		
		UUI_Screen_CustomMatchLobby_C_IsCurrentItemCheckbox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleDropdownDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleDropdownDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleDropdownDown");
		
		UUI_Screen_CustomMatchLobby_C_HandleDropdownDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleDropdownUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleDropdownUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleDropdownUp");
		
		UUI_Screen_CustomMatchLobby_C_HandleDropdownUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleDropDownAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleDropDownAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleDropDownAction");
		
		UUI_Screen_CustomMatchLobby_C_HandleDropDownAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsCurrentItemDropdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UUI_Screen_CustomMatchLobby_C::IsCurrentItemDropdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsCurrentItemDropdown");
		
		UUI_Screen_CustomMatchLobby_C_IsCurrentItemDropdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleBack");
		
		UUI_Screen_CustomMatchLobby_C_HandleBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsDropdownOpen
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsDropdownOpen                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::IsDropdownOpen(bool* IsDropdownOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsDropdownOpen");
		
		UUI_Screen_CustomMatchLobby_C_IsDropdownOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDropdownOpen != nullptr)
			*IsDropdownOpen = params.IsDropdownOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateCurrentIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            UpdatedListIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::UpdateCurrentIndex(int32_t UpdatedListIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateCurrentIndex");
		
		UUI_Screen_CustomMatchLobby_C_UpdateCurrentIndex_Params params {};
		params.UpdatedListIndex = UpdatedListIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsMovingBetweenTeamList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            NewListIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UUI_Screen_CustomMatchLobby_C::IsMovingBetweenTeamList(int32_t NewListIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsMovingBetweenTeamList");
		
		UUI_Screen_CustomMatchLobby_C_IsMovingBetweenTeamList_Params params {};
		params.NewListIndex = NewListIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetFocusedRow
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_CustomMatch_TeamList_C*                  Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            FocusedIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_CustomMatch_TeamList_Row_C*              Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::GetFocusedRow(class UUI_CustomMatch_TeamList_C* Team, int32_t FocusedIndex, class UUI_CustomMatch_TeamList_Row_C** Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetFocusedRow");
		
		UUI_Screen_CustomMatchLobby_C_GetFocusedRow_Params params {};
		params.Team = Team;
		params.FocusedIndex = FocusedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.CalcNumberOfNavigableItems
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_TeamList_C*                  Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t UUI_Screen_CustomMatchLobby_C::CalcNumberOfNavigableItems(class UUI_CustomMatch_TeamList_C* Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.CalcNumberOfNavigableItems");
		
		UUI_Screen_CustomMatchLobby_C_CalcNumberOfNavigableItems_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetListLength
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	int32_t UUI_Screen_CustomMatchLobby_C::GetListLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetListLength");
		
		UUI_Screen_CustomMatchLobby_C_GetListLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleGranularLeftRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewListIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleGranularLeftRight(int32_t NewListIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleGranularLeftRight");
		
		UUI_Screen_CustomMatchLobby_C_HandleGranularLeftRight_Params params {};
		params.NewListIndex = NewListIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateCurrentList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentListIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::UpdateCurrentList(int32_t CurrentListIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateCurrentList");
		
		UUI_Screen_CustomMatchLobby_C_UpdateCurrentList_Params params {};
		params.CurrentListIndex = CurrentListIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateCurrentlyFocusedItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::UpdateCurrentlyFocusedItem(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateCurrentlyFocusedItem");
		
		UUI_Screen_CustomMatchLobby_C_UpdateCurrentlyFocusedItem_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UnfocusCurrentItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::UnfocusCurrentItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UnfocusCurrentItem");
		
		UUI_Screen_CustomMatchLobby_C_UnfocusCurrentItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleGranularUpDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewCurrentIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleGranularUpDown(int32_t NewCurrentIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleGranularUpDown");
		
		UUI_Screen_CustomMatchLobby_C_HandleGranularUpDown_Params params {};
		params.NewCurrentIndex = NewCurrentIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.FocusCurrentItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::FocusCurrentItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.FocusCurrentItem");
		
		UUI_Screen_CustomMatchLobby_C_FocusCurrentItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.SetupGamepad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::SetupGamepad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.SetupGamepad");
		
		UUI_Screen_CustomMatchLobby_C_SetupGamepad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleInput(EUI_MenuActions GamePadInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleInput");
		
		UUI_Screen_CustomMatchLobby_C_HandleInput_Params params {};
		params.GamePadInput = GamePadInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleRoomStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYCustomRoomState                                  OldState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYCustomRoomState                                  NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleRoomStateChanged(EYCustomRoomState OldState, EYCustomRoomState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleRoomStateChanged");
		
		UUI_Screen_CustomMatchLobby_C_HandleRoomStateChanged_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleCloseScreen
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYCustomMatchScreenCloseReason                     CloseReason                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleCloseScreen(EYCustomMatchScreenCloseReason CloseReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleCloseScreen");
		
		UUI_Screen_CustomMatchLobby_C_HandleCloseScreen_Params params {};
		params.CloseReason = CloseReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetTeamEnumForList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_TeamList_C*                  TeamList                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYCustomMatchTeam                                  Team                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::GetTeamEnumForList(class UUI_CustomMatch_TeamList_C* TeamList, EYCustomMatchTeam* Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetTeamEnumForList");
		
		UUI_Screen_CustomMatchLobby_C_GetTeamEnumForList_Params params {};
		params.TeamList = TeamList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Team != nullptr)
			*Team = params.Team;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleOnPlayerMoved
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_TeamList_C*                  TeamList                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleOnPlayerMoved(class UUI_CustomMatch_TeamList_C* TeamList, int32_t PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleOnPlayerMoved");
		
		UUI_Screen_CustomMatchLobby_C_HandleOnPlayerMoved_Params params {};
		params.TeamList = TeamList;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleOnPlayerRemoved
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_TeamList_C*                  TeamList                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleOnPlayerRemoved(class UUI_CustomMatch_TeamList_C* TeamList, int32_t PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleOnPlayerRemoved");
		
		UUI_Screen_CustomMatchLobby_C_HandleOnPlayerRemoved_Params params {};
		params.TeamList = TeamList;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleOnInviteListCreated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_FriendList_C*                FriendsToInvite                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleOnInviteListCreated(class UUI_CustomMatch_FriendList_C* FriendsToInvite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleOnInviteListCreated");
		
		UUI_Screen_CustomMatchLobby_C_HandleOnInviteListCreated_Params params {};
		params.FriendsToInvite = FriendsToInvite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleAdvanceButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleAdvanceButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleAdvanceButtonClicked");
		
		UUI_Screen_CustomMatchLobby_C_HandleAdvanceButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.CloseFleetSelectionPopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StartMatchCountdown                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::CloseFleetSelectionPopup(bool StartMatchCountdown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.CloseFleetSelectionPopup");
		
		UUI_Screen_CustomMatchLobby_C_CloseFleetSelectionPopup_Params params {};
		params.StartMatchCountdown = StartMatchCountdown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateAllTeamSlots
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            StartingSlotIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::UpdateAllTeamSlots(int32_t StartingSlotIndex, unsigned char Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateAllTeamSlots");
		
		UUI_Screen_CustomMatchLobby_C_UpdateAllTeamSlots_Params params {};
		params.StartingSlotIndex = StartingSlotIndex;
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateTeamSlot
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RowIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        SlotName                                                   (Parm)
	 * 		EYCustomRoomSlotType                               SlotType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::UpdateTeamSlot(int32_t RowIndex, unsigned char Team, const class FText& SlotName, EYCustomRoomSlotType SlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateTeamSlot");
		
		UUI_Screen_CustomMatchLobby_C_UpdateTeamSlot_Params params {};
		params.RowIndex = RowIndex;
		params.Team = Team;
		params.SlotName = SlotName;
		params.SlotType = SlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFleetSelectionPopupResult
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleFleetSelectionPopupResult(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFleetSelectionPopupResult");
		
		UUI_Screen_CustomMatchLobby_C_HandleFleetSelectionPopupResult_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFleetSelectReady
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        maxFleetType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleFleetSelectReady(EYFleetType maxFleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFleetSelectReady");
		
		UUI_Screen_CustomMatchLobby_C_HandleFleetSelectReady_Params params {};
		params.maxFleetType = maxFleetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleUserDataRefreshed
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_TeamList_C*                  TeamUsers                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYCustomMatchTeam                                  Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleUserDataRefreshed(class UUI_CustomMatch_TeamList_C* TeamUsers, EYCustomMatchTeam Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleUserDataRefreshed");
		
		UUI_Screen_CustomMatchLobby_C_HandleUserDataRefreshed_Params params {};
		params.TeamUsers = TeamUsers;
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.FillRestOfTeamWithAi
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFilling                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TeamToFill                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::FillRestOfTeamWithAi(bool IsFilling, int32_t TeamToFill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.FillRestOfTeamWithAi");
		
		UUI_Screen_CustomMatchLobby_C_FillRestOfTeamWithAi_Params params {};
		params.IsFilling = IsFilling;
		params.TeamToFill = TeamToFill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.SetBindingsOnTeam
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_TeamList_C*                  Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::SetBindingsOnTeam(class UUI_CustomMatch_TeamList_C* Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.SetBindingsOnTeam");
		
		UUI_Screen_CustomMatchLobby_C_SetBindingsOnTeam_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleDataReady
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleDataReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleDataReady");
		
		UUI_Screen_CustomMatchLobby_C_HandleDataReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OpenFriendList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::OpenFriendList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OpenFriendList");
		
		UUI_Screen_CustomMatchLobby_C_OpenFriendList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OnTransitionIn");
		
		UUI_Screen_CustomMatchLobby_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OnTransitionOut");
		
		UUI_Screen_CustomMatchLobby_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.TransitionInAnimationComplete");
		
		UUI_Screen_CustomMatchLobby_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.TransitionOutAnimationComplete");
		
		UUI_Screen_CustomMatchLobby_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.BndEvt__ButtonTeamsPanel_K2Node_ComponentBoundEvent_592_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::BndEvt__ButtonTeamsPanel_K2Node_ComponentBoundEvent_592_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.BndEvt__ButtonTeamsPanel_K2Node_ComponentBoundEvent_592_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Screen_CustomMatchLobby_C_BndEvt__ButtonTeamsPanel_K2Node_ComponentBoundEvent_592_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.BndEvt__ButtonTeamsPanel_K2Node_ComponentBoundEvent_606_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::BndEvt__ButtonTeamsPanel_K2Node_ComponentBoundEvent_606_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.BndEvt__ButtonTeamsPanel_K2Node_ComponentBoundEvent_606_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Screen_CustomMatchLobby_C_BndEvt__ButtonTeamsPanel_K2Node_ComponentBoundEvent_606_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OnSettingsHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::OnSettingsHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OnSettingsHovered");
		
		UUI_Screen_CustomMatchLobby_C_OnSettingsHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OnSettingsUnhovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::OnSettingsUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OnSettingsUnhovered");
		
		UUI_Screen_CustomMatchLobby_C_OnSettingsUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.DataReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::DataReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.DataReady");
		
		UUI_Screen_CustomMatchLobby_C_DataReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.Construct");
		
		UUI_Screen_CustomMatchLobby_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UserDataRefreshed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::UserDataRefreshed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UserDataRefreshed");
		
		UUI_Screen_CustomMatchLobby_C_UserDataRefreshed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.BndEvt__UI_CustomMatch_Settings_K2Node_ComponentBoundEvent_0_OnAdvanceClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_CustomMatchLobby_C::BndEvt__UI_CustomMatch_Settings_K2Node_ComponentBoundEvent_0_OnAdvanceClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.BndEvt__UI_CustomMatch_Settings_K2Node_ComponentBoundEvent_0_OnAdvanceClicked__DelegateSignature");
		
		UUI_Screen_CustomMatchLobby_C_BndEvt__UI_CustomMatch_Settings_K2Node_ComponentBoundEvent_0_OnAdvanceClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.FleetSelectReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        maxFleetType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::FleetSelectReady(EYFleetType maxFleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.FleetSelectReady");
		
		UUI_Screen_CustomMatchLobby_C_FleetSelectReady_Params params {};
		params.maxFleetType = maxFleetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.CloseScreen
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EYCustomMatchScreenCloseReason                     reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::CloseScreen(EYCustomMatchScreenCloseReason reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.CloseScreen");
		
		UUI_Screen_CustomMatchLobby_C_CloseScreen_Params params {};
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.RoomStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EYCustomRoomState                                  oldRoomState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYCustomRoomState                                  newRoomState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::RoomStateChanged(EYCustomRoomState oldRoomState, EYCustomRoomState newRoomState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.RoomStateChanged");
		
		UUI_Screen_CustomMatchLobby_C_RoomStateChanged_Params params {};
		params.oldRoomState = oldRoomState;
		params.newRoomState = newRoomState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OnNavigationEvent");
		
		UUI_Screen_CustomMatchLobby_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleOnPlayerSpeakingUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FSquadVoiceData                             UpdateData                                                 (Parm)
	 */
	void UUI_Screen_CustomMatchLobby_C::HandleOnPlayerSpeakingUpdated(const struct FSquadVoiceData& UpdateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleOnPlayerSpeakingUpdated");
		
		UUI_Screen_CustomMatchLobby_C_HandleOnPlayerSpeakingUpdated_Params params {};
		params.UpdateData = UpdateData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.BndEvt__UI_Social_Player_Options_K2Node_ComponentBoundEvent_226_OnOptionClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EFriendOptionButton                                SelectedOption                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::BndEvt__UI_Social_Player_Options_K2Node_ComponentBoundEvent_226_OnOptionClicked__DelegateSignature(EFriendOptionButton SelectedOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.BndEvt__UI_Social_Player_Options_K2Node_ComponentBoundEvent_226_OnOptionClicked__DelegateSignature");
		
		UUI_Screen_CustomMatchLobby_C_BndEvt__UI_Social_Player_Options_K2Node_ComponentBoundEvent_226_OnOptionClicked__DelegateSignature_Params params {};
		params.SelectedOption = SelectedOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.ExecuteUbergraph_UI_Screen_CustomMatchLobby
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CustomMatchLobby_C::ExecuteUbergraph_UI_Screen_CustomMatchLobby(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.ExecuteUbergraph_UI_Screen_CustomMatchLobby");
		
		UUI_Screen_CustomMatchLobby_C_ExecuteUbergraph_UI_Screen_CustomMatchLobby_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_CustomMatchLobby_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_CustomMatchLobby_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C");
		return ptr;
	}

}


