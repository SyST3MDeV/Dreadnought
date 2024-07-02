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
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.HandleNavUpDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NextIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_Leaderboard_C::HandleNavUpDown(int32_t NextIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.HandleNavUpDown");
		
		UUI_Statistics_Leaderboard_C_HandleNavUpDown_Params params {};
		params.NextIndex = NextIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.SetPS4IconVisiblity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_Leaderboard_C::SetPS4IconVisiblity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.SetPS4IconVisiblity");
		
		UUI_Statistics_Leaderboard_C_SetPS4IconVisiblity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.CurrentPlayerLeaderboard
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_Leaderboard_C::CurrentPlayerLeaderboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.CurrentPlayerLeaderboard");
		
		UUI_Statistics_Leaderboard_C_CurrentPlayerLeaderboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.PreviousLeaderboardPage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_Leaderboard_C::PreviousLeaderboardPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.PreviousLeaderboardPage");
		
		UUI_Statistics_Leaderboard_C_PreviousLeaderboardPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.NextLeaderboardPage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_Leaderboard_C::NextLeaderboardPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.NextLeaderboardPage");
		
		UUI_Statistics_Leaderboard_C_NextLeaderboardPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.GetNextLeaderboardIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            startIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t UUI_Statistics_Leaderboard_C::GetNextLeaderboardIndex(int32_t startIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.GetNextLeaderboardIndex");
		
		UUI_Statistics_Leaderboard_C_GetNextLeaderboardIndex_Params params {};
		params.startIndex = startIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.GetPreviousLeaderboardIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            startIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t UUI_Statistics_Leaderboard_C::GetPreviousLeaderboardIndex(int32_t startIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.GetPreviousLeaderboardIndex");
		
		UUI_Statistics_Leaderboard_C_GetPreviousLeaderboardIndex_Params params {};
		params.startIndex = startIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.SetupLeaderboardFilter
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_Leaderboard_C::SetupLeaderboardFilter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.SetupLeaderboardFilter");
		
		UUI_Statistics_Leaderboard_C_SetupLeaderboardFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.ResetSelectedLeaderboardItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_Leaderboard_C::ResetSelectedLeaderboardItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.ResetSelectedLeaderboardItem");
		
		UUI_Statistics_Leaderboard_C_ResetSelectedLeaderboardItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.UpdateSelectedLeaderboardItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_Leaderboard_C::UpdateSelectedLeaderboardItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.UpdateSelectedLeaderboardItem");
		
		UUI_Statistics_Leaderboard_C_UpdateSelectedLeaderboardItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.RefreshNextPageButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_Leaderboard_C::RefreshNextPageButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.RefreshNextPageButtonVisibility");
		
		UUI_Statistics_Leaderboard_C_RefreshNextPageButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.RefreshPreviousPageButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_Leaderboard_C::RefreshPreviousPageButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.RefreshPreviousPageButtonVisibility");
		
		UUI_Statistics_Leaderboard_C_RefreshPreviousPageButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.RefreshPageButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_Leaderboard_C::RefreshPageButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.RefreshPageButtons");
		
		UUI_Statistics_Leaderboard_C_RefreshPageButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.SelectLeaderboardEntryAtIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_Leaderboard_C::SelectLeaderboardEntryAtIndex(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.SelectLeaderboardEntryAtIndex");
		
		UUI_Statistics_Leaderboard_C_SelectLeaderboardEntryAtIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.FocusOnSelectedLeaderboardItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_Leaderboard_C::FocusOnSelectedLeaderboardItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.FocusOnSelectedLeaderboardItem");
		
		UUI_Statistics_Leaderboard_C_FocusOnSelectedLeaderboardItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.Setup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_Leaderboard_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.Setup");
		
		UUI_Statistics_Leaderboard_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.HandleFriendFilterChange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            FirstIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            selectedIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_Leaderboard_C::HandleFriendFilterChange(int32_t FirstIndex, int32_t selectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.HandleFriendFilterChange");
		
		UUI_Statistics_Leaderboard_C_HandleFriendFilterChange_Params params {};
		params.FirstIndex = FirstIndex;
		params.selectedIndex = selectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.GetIndexRange
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            startIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            endIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_Leaderboard_C::GetIndexRange(int32_t* startIndex, int32_t* endIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.GetIndexRange");
		
		UUI_Statistics_Leaderboard_C_GetIndexRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (startIndex != nullptr)
			*startIndex = params.startIndex;
		if (endIndex != nullptr)
			*endIndex = params.endIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Statistics_Leaderboard_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.Construct");
		
		UUI_Statistics_Leaderboard_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.HandleLeaderboardItemClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Statistics_PlayerCard_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_Leaderboard_C::HandleLeaderboardItemClicked(class UUI_Statistics_PlayerCard_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.HandleLeaderboardItemClicked");
		
		UUI_Statistics_Leaderboard_C_HandleLeaderboardItemClicked_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.BndEvt__ButtonNextLeaderboardPage_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Statistics_Leaderboard_C::BndEvt__ButtonNextLeaderboardPage_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.BndEvt__ButtonNextLeaderboardPage_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Statistics_Leaderboard_C_BndEvt__ButtonNextLeaderboardPage_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.BndEvt__ButtonPreviousLeaderboardPage_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Statistics_Leaderboard_C::BndEvt__ButtonPreviousLeaderboardPage_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.BndEvt__ButtonPreviousLeaderboardPage_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Statistics_Leaderboard_C_BndEvt__ButtonPreviousLeaderboardPage_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.BndEvt__ButtonCurrentUserLeaderboard_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Statistics_Leaderboard_C::BndEvt__ButtonCurrentUserLeaderboard_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.BndEvt__ButtonCurrentUserLeaderboard_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Statistics_Leaderboard_C_BndEvt__ButtonCurrentUserLeaderboard_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.ExecuteUbergraph_UI_Statistics_Leaderboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_Leaderboard_C::ExecuteUbergraph_UI_Statistics_Leaderboard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.ExecuteUbergraph_UI_Statistics_Leaderboard");
		
		UUI_Statistics_Leaderboard_C_ExecuteUbergraph_UI_Statistics_Leaderboard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.OnRecievedFocused__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_Leaderboard_C::OnRecievedFocused__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C.OnRecievedFocused__DelegateSignature");
		
		UUI_Statistics_Leaderboard_C_OnRecievedFocused__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Statistics_Leaderboard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Statistics_Leaderboard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Statistics_Leaderboard.UI_Statistics_Leaderboard_C");
		return ptr;
	}

}


