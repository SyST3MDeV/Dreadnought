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
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.IsCurrentItemInFriendListLast
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_Social_FriendList_C*                     CurrentlyFocusedFriendList                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UUI_Screen_Social_C::IsCurrentItemInFriendListLast(class UUI_Social_FriendList_C* CurrentlyFocusedFriendList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.IsCurrentItemInFriendListLast");
		
		UUI_Screen_Social_C_IsCurrentItemInFriendListLast_Params params {};
		params.CurrentlyFocusedFriendList = CurrentlyFocusedFriendList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.IsCurrentColumnRightmost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_Social_FriendList_C*                     CurrentlyFocusedFriendList                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UUI_Screen_Social_C::IsCurrentColumnRightmost(class UUI_Social_FriendList_C* CurrentlyFocusedFriendList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.IsCurrentColumnRightmost");
		
		UUI_Screen_Social_C_IsCurrentColumnRightmost_Params params {};
		params.CurrentlyFocusedFriendList = CurrentlyFocusedFriendList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularDownSquad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadGranularDownSquad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularDownSquad");
		
		UUI_Screen_Social_C_HandleGamepadGranularDownSquad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularUpSquad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadGranularUpSquad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularUpSquad");
		
		UUI_Screen_Social_C_HandleGamepadGranularUpSquad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.LeaveSquad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Unused                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::LeaveSquad(int32_t Unused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.LeaveSquad");
		
		UUI_Screen_Social_C_LeaveSquad_Params params {};
		params.Unused = Unused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.IsValidSquadNavigation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UUI_Screen_Social_C::IsValidSquadNavigation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.IsValidSquadNavigation");
		
		UUI_Screen_Social_C_IsValidSquadNavigation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.IsLastSquadItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UUI_Screen_Social_C::IsLastSquadItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.IsLastSquadItem");
		
		UUI_Screen_Social_C_IsLastSquadItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularPlayButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadGranularPlayButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularPlayButton");
		
		UUI_Screen_Social_C_HandleGamepadGranularPlayButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.FocusNextSquadItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::FocusNextSquadItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.FocusNextSquadItem");
		
		UUI_Screen_Social_C_FocusNextSquadItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HideOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HideOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HideOptions");
		
		UUI_Screen_Social_C_HideOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleFriendOptionClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EFriendOptionButton                                FriendOption                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::HandleFriendOptionClicked(EFriendOptionButton FriendOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleFriendOptionClicked");
		
		UUI_Screen_Social_C_HandleFriendOptionClicked_Params params {};
		params.FriendOption = FriendOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadBack");
		
		UUI_Screen_Social_C_HandleGamepadBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.FocusNextFriendItemInNextFriendList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::FocusNextFriendItemInNextFriendList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.FocusNextFriendItemInNextFriendList");
		
		UUI_Screen_Social_C_FocusNextFriendItemInNextFriendList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.FocusNextFriendList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::FocusNextFriendList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.FocusNextFriendList");
		
		UUI_Screen_Social_C_FocusNextFriendList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.FocusCurrentFriendList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::FocusCurrentFriendList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.FocusCurrentFriendList");
		
		UUI_Screen_Social_C_FocusCurrentFriendList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.IsValidToFocusFriendItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UUI_Screen_Social_C::IsValidToFocusFriendItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.IsValidToFocusFriendItem");
		
		UUI_Screen_Social_C_IsValidToFocusFriendItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleFocusFriendListFriendItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleFocusFriendListFriendItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleFocusFriendListFriendItem");
		
		UUI_Screen_Social_C_HandleFocusFriendListFriendItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularDownFriendList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadGranularDownFriendList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularDownFriendList");
		
		UUI_Screen_Social_C_HandleGamepadGranularDownFriendList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularUpFriendList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadGranularUpFriendList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularUpFriendList");
		
		UUI_Screen_Social_C_HandleGamepadGranularUpFriendList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularRightFriendList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadGranularRightFriendList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularRightFriendList");
		
		UUI_Screen_Social_C_HandleGamepadGranularRightFriendList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularLeftFriendList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadGranularLeftFriendList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularLeftFriendList");
		
		UUI_Screen_Social_C_HandleGamepadGranularLeftFriendList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadAction");
		
		UUI_Screen_Social_C_HandleGamepadAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleUnfocusWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::HandleUnfocusWidget(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleUnfocusWidget");
		
		UUI_Screen_Social_C_HandleUnfocusWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleFocusWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::HandleFocusWidget(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleFocusWidget");
		
		UUI_Screen_Social_C_HandleFocusWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.OnFindNewFriendsCanceled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::OnFindNewFriendsCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.OnFindNewFriendsCanceled");
		
		UUI_Screen_Social_C_OnFindNewFriendsCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.SetFocusToFindNewFriendsFriendItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::SetFocusToFindNewFriendsFriendItem(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.SetFocusToFindNewFriendsFriendItem");
		
		UUI_Screen_Social_C_SetFocusToFindNewFriendsFriendItem_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularFindNewFriends
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadGranularFindNewFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularFindNewFriends");
		
		UUI_Screen_Social_C_HandleGamepadGranularFindNewFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularFriendOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadGranularFriendOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularFriendOptions");
		
		UUI_Screen_Social_C_HandleGamepadGranularFriendOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularSquad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadGranularSquad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularSquad");
		
		UUI_Screen_Social_C_HandleGamepadGranularSquad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadUpSection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadUpSection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadUpSection");
		
		UUI_Screen_Social_C_HandleGamepadUpSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadDownSection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadDownSection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadDownSection");
		
		UUI_Screen_Social_C_HandleGamepadDownSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranular");
		
		UUI_Screen_Social_C_HandleGamepadGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleFriendListUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleFriendListUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleFriendListUnfocus");
		
		UUI_Screen_Social_C_HandleFriendListUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleFriendListFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleFriendListFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleFriendListFocus");
		
		UUI_Screen_Social_C_HandleFriendListFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.UnfocusFriendItemOrFriendList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::UnfocusFriendItemOrFriendList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.UnfocusFriendItemOrFriendList");
		
		UUI_Screen_Social_C_UnfocusFriendItemOrFriendList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.GetNextFriendItemIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            listLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ColumnNum                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t UUI_Screen_Social_C::GetNextFriendItemIndex(EUI_MenuActions GamePadInput, int32_t listLength, int32_t CurrentIndex, int32_t ColumnNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.GetNextFriendItemIndex");
		
		UUI_Screen_Social_C_GetNextFriendItemIndex_Params params {};
		params.GamePadInput = GamePadInput;
		params.listLength = listLength;
		params.CurrentIndex = CurrentIndex;
		params.ColumnNum = ColumnNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.SetFocusToFriendListFriendItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Social_FriendList_C*                     CurrentlyFocusedFriendList                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::SetFocusToFriendListFriendItem(class UUI_Social_FriendList_C* CurrentlyFocusedFriendList, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.SetFocusToFriendListFriendItem");
		
		UUI_Screen_Social_C_SetFocusToFriendListFriendItem_Params params {};
		params.CurrentlyFocusedFriendList = CurrentlyFocusedFriendList;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.GetNextFriendItemInNextFriendList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            NextFriendItemIndex                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::GetNextFriendItemInNextFriendList(int32_t* NextFriendItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.GetNextFriendItemInNextFriendList");
		
		UUI_Screen_Social_C_GetNextFriendItemInNextFriendList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextFriendItemIndex != nullptr)
			*NextFriendItemIndex = params.NextFriendItemIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.GetNextFriendList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsEndOfFriendList                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_Social_FriendList_C*                     NextFriendList                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::GetNextFriendList(bool* IsEndOfFriendList, class UUI_Social_FriendList_C** NextFriendList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.GetNextFriendList");
		
		UUI_Screen_Social_C_GetNextFriendList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEndOfFriendList != nullptr)
			*IsEndOfFriendList = params.IsEndOfFriendList;
		if (NextFriendList != nullptr)
			*NextFriendList = params.NextFriendList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.WrappingIndexHelper
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            listLength                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumColumns                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::WrappingIndexHelper(int32_t* listLength, int32_t* CurrentIndex, int32_t* NumColumns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.WrappingIndexHelper");
		
		UUI_Screen_Social_C_WrappingIndexHelper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (listLength != nullptr)
			*listLength = params.listLength;
		if (CurrentIndex != nullptr)
			*CurrentIndex = params.CurrentIndex;
		if (NumColumns != nullptr)
			*NumColumns = params.NumColumns;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularFriendList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadGranularFriendList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularFriendList");
		
		UUI_Screen_Social_C_HandleGamepadGranularFriendList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadLeftSection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadLeftSection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadLeftSection");
		
		UUI_Screen_Social_C_HandleGamepadLeftSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadRightSection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::HandleGamepadRightSection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadRightSection");
		
		UUI_Screen_Social_C_HandleGamepadRightSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.BindButtonEvents
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UUI_DreadWidget*>                     Array                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Screen_Social_C::BindButtonEvents(TArray<class UUI_DreadWidget*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.BindButtonEvents");
		
		UUI_Screen_Social_C_BindButtonEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::HandleInput(EUI_MenuActions Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleInput");
		
		UUI_Screen_Social_C_HandleInput_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.GetOptionsForSelectedFriend
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_FriendItem_C*                     SelectedFriend                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<EFriendOptionButton>                        FriendOptions                                              (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_Screen_Social_C::GetOptionsForSelectedFriend(class UUI_Button_FriendItem_C* SelectedFriend, TArray<EFriendOptionButton>* FriendOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.GetOptionsForSelectedFriend");
		
		UUI_Screen_Social_C_GetOptionsForSelectedFriend_Params params {};
		params.SelectedFriend = SelectedFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FriendOptions != nullptr)
			*FriendOptions = params.FriendOptions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.ShowOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::ShowOptions(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.ShowOptions");
		
		UUI_Screen_Social_C_ShowOptions_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.Setup");
		
		UUI_Screen_Social_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.BindSectionHeaderEvents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::BindSectionHeaderEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.BindSectionHeaderEvents");
		
		UUI_Screen_Social_C_BindSectionHeaderEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.ScrollToSection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_FriendSectionHeader_C*            HeaderWidget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::ScrollToSection(class UUI_Button_FriendSectionHeader_C* HeaderWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.ScrollToSection");
		
		UUI_Screen_Social_C_ScrollToSection_Params params {};
		params.HeaderWidget = HeaderWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.ResetSectionHeaders
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::ResetSectionHeaders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.ResetSectionHeaders");
		
		UUI_Screen_Social_C_ResetSectionHeaders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.RemoveAllFriendsList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::RemoveAllFriendsList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.RemoveAllFriendsList");
		
		UUI_Screen_Social_C_RemoveAllFriendsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.StartSearch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SearchString                                               (Parm)
	 */
	void UUI_Screen_Social_C::StartSearch(const class FText& SearchString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.StartSearch");
		
		UUI_Screen_Social_C_StartSearch_Params params {};
		params.SearchString = SearchString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.AddFriendsListToArrayIfNotEmpty
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUI_Struct_FriendList                       NewFriendsList                                             (Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FUI_Struct_FriendList>               FriendsListArray                                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Screen_Social_C::AddFriendsListToArrayIfNotEmpty(struct FUI_Struct_FriendList* NewFriendsList, TArray<struct FUI_Struct_FriendList>* FriendsListArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.AddFriendsListToArrayIfNotEmpty");
		
		UUI_Screen_Social_C_AddFriendsListToArrayIfNotEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewFriendsList != nullptr)
			*NewFriendsList = params.NewFriendsList;
		if (FriendsListArray != nullptr)
			*FriendsListArray = params.FriendsListArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.AddToFriendsList
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUI_Struct_FriendData                       NewFriendData                                              (Parm, OutParm, ReferenceParm)
	 * 		struct FUI_Struct_FriendList                       friendsList                                                (Parm, OutParm, ReferenceParm)
	 */
	void UUI_Screen_Social_C::AddToFriendsList(struct FUI_Struct_FriendData* NewFriendData, struct FUI_Struct_FriendList* friendsList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.AddToFriendsList");
		
		UUI_Screen_Social_C_AddToFriendsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewFriendData != nullptr)
			*NewFriendData = params.NewFriendData;
		if (friendsList != nullptr)
			*friendsList = params.friendsList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.GetFriendsData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFriendsUserData>                    FriendsListData                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FUI_Struct_FriendList>               friendsList                                                (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_Screen_Social_C::GetFriendsData(TArray<struct FFriendsUserData>* FriendsListData, TArray<struct FUI_Struct_FriendList>* friendsList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.GetFriendsData");
		
		UUI_Screen_Social_C_GetFriendsData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FriendsListData != nullptr)
			*FriendsListData = params.FriendsListData;
		if (friendsList != nullptr)
			*friendsList = params.friendsList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.SetupFriendsList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFriendsUserData>                    FriendsListData                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Screen_Social_C::SetupFriendsList(TArray<struct FFriendsUserData>* FriendsListData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.SetupFriendsList");
		
		UUI_Screen_Social_C_SetupFriendsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FriendsListData != nullptr)
			*FriendsListData = params.FriendsListData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.OnTransitionIn");
		
		UUI_Screen_Social_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.OnTransitionOut");
		
		UUI_Screen_Social_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.TransitionInAnimationComplete");
		
		UUI_Screen_Social_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.TransitionOutAnimationComplete");
		
		UUI_Screen_Social_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UUI_Screen_Social_C_BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.SocialListUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::SocialListUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.SocialListUpdated");
		
		UUI_Screen_Social_C_SocialListUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.UpdateSquadPlayerCard
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::UpdateSquadPlayerCard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.UpdateSquadPlayerCard");
		
		UUI_Screen_Social_C_UpdateSquadPlayerCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Social_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.Construct");
		
		UUI_Screen_Social_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.OnStartSearch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SearchString                                               (Parm)
	 */
	void UUI_Screen_Social_C::OnStartSearch(const class FText& SearchString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.OnStartSearch");
		
		UUI_Screen_Social_C_OnStartSearch_Params params {};
		params.SearchString = SearchString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.OnHeaderSectionClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_FriendSectionHeader_C*            HeaderWidget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::OnHeaderSectionClicked(class UUI_Button_FriendSectionHeader_C* HeaderWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.OnHeaderSectionClicked");
		
		UUI_Screen_Social_C_OnHeaderSectionClicked_Params params {};
		params.HeaderWidget = HeaderWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.OnFriendItemClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_FriendItem_C*                     SourceFriendItem                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::OnFriendItemClicked(class UUI_Button_FriendItem_C* SourceFriendItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.OnFriendItemClicked");
		
		UUI_Screen_Social_C_OnFriendItemClicked_Params params {};
		params.SourceFriendItem = SourceFriendItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.SetUpWhisperChatFriendItemClickedEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Social_FriendList_C*                     List                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::SetUpWhisperChatFriendItemClickedEvent(class UUI_Social_FriendList_C* List)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.SetUpWhisperChatFriendItemClickedEvent");
		
		UUI_Screen_Social_C_SetUpWhisperChatFriendItemClickedEvent_Params params {};
		params.List = List;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.OnWhisperChatButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_FriendItem_C*                     source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::OnWhisperChatButtonClicked(class UUI_Button_FriendItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.OnWhisperChatButtonClicked");
		
		UUI_Screen_Social_C_OnWhisperChatButtonClicked_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.BndEvt__FindFriendsButton_K2Node_ComponentBoundEvent_123_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::BndEvt__FindFriendsButton_K2Node_ComponentBoundEvent_123_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.BndEvt__FindFriendsButton_K2Node_ComponentBoundEvent_123_OnButtonClicked__DelegateSignature");
		
		UUI_Screen_Social_C_BndEvt__FindFriendsButton_K2Node_ComponentBoundEvent_123_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.BndEvt__UI_Social_FriendOptions_K2Node_ComponentBoundEvent_1_OnOptionClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EFriendOptionButton                                SelectedOption                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::BndEvt__UI_Social_FriendOptions_K2Node_ComponentBoundEvent_1_OnOptionClicked__DelegateSignature(EFriendOptionButton SelectedOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.BndEvt__UI_Social_FriendOptions_K2Node_ComponentBoundEvent_1_OnOptionClicked__DelegateSignature");
		
		UUI_Screen_Social_C_BndEvt__UI_Social_FriendOptions_K2Node_ComponentBoundEvent_1_OnOptionClicked__DelegateSignature_Params params {};
		params.SelectedOption = SelectedOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.BndEvt__ButtonFriendsContainer_K2Node_ComponentBoundEvent_187_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_Social_C::BndEvt__ButtonFriendsContainer_K2Node_ComponentBoundEvent_187_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.BndEvt__ButtonFriendsContainer_K2Node_ComponentBoundEvent_187_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Screen_Social_C_BndEvt__ButtonFriendsContainer_K2Node_ComponentBoundEvent_187_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.BndEvt__ButtonFriendsContainer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_Social_C::BndEvt__ButtonFriendsContainer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.BndEvt__ButtonFriendsContainer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Screen_Social_C_BndEvt__ButtonFriendsContainer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.OnNavigationEvent");
		
		UUI_Screen_Social_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.OnFriendsSearchTextCommitted
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::OnFriendsSearchTextCommitted(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.OnFriendsSearchTextCommitted");
		
		UUI_Screen_Social_C_OnFriendsSearchTextCommitted_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.HandleOnPlayerSpeakingUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FSquadVoiceData                             UpdateData                                                 (Parm)
	 */
	void UUI_Screen_Social_C::HandleOnPlayerSpeakingUpdated(const struct FSquadVoiceData& UpdateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.HandleOnPlayerSpeakingUpdated");
		
		UUI_Screen_Social_C_HandleOnPlayerSpeakingUpdated_Params params {};
		params.UpdateData = UpdateData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Social.UI_Screen_Social_C.ExecuteUbergraph_UI_Screen_Social
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Social_C::ExecuteUbergraph_UI_Screen_Social(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Social.UI_Screen_Social_C.ExecuteUbergraph_UI_Screen_Social");
		
		UUI_Screen_Social_C_ExecuteUbergraph_UI_Screen_Social_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_Social_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_Social_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_Social.UI_Screen_Social_C");
		return ptr;
	}

}


