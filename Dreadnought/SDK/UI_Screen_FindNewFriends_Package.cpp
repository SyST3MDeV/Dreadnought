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
	 * 		Name   -> Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_FindNewFriends_C::HandleInput(EUI_MenuActions Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.HandleInput");
		
		UUI_Screen_FindNewFriends_C_HandleInput_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.GatherCheckedFriendsAndSendInvites
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_FindNewFriends_C::GatherCheckedFriendsAndSendInvites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.GatherCheckedFriendsAndSendInvites");
		
		UUI_Screen_FindNewFriends_C_GatherCheckedFriendsAndSendInvites_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.BuildSearchResults
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFindNewFriendUserData>              SearchResults                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Screen_FindNewFriends_C::BuildSearchResults(TArray<struct FFindNewFriendUserData>* SearchResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.BuildSearchResults");
		
		UUI_Screen_FindNewFriends_C_BuildSearchResults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SearchResults != nullptr)
			*SearchResults = params.SearchResults;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.ResetSearchLabel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_FindNewFriends_C::ResetSearchLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.ResetSearchLabel");
		
		UUI_Screen_FindNewFriends_C_ResetSearchLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.ResetSearchResults
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_FindNewFriends_C::ResetSearchResults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.ResetSearchResults");
		
		UUI_Screen_FindNewFriends_C_ResetSearchResults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_FindNewFriends_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.Construct");
		
		UUI_Screen_FindNewFriends_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_FindNewFriends_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnTransitionIn");
		
		UUI_Screen_FindNewFriends_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnStartSearch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        filterText                                                 (Parm)
	 */
	void UUI_Screen_FindNewFriends_C::OnStartSearch(const class FText& filterText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnStartSearch");
		
		UUI_Screen_FindNewFriends_C_OnStartSearch_Params params {};
		params.filterText = filterText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnSearchForUsersResult
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFindNewFriendUserData>              foundUsers                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Screen_FindNewFriends_C::OnSearchForUsersResult(TArray<struct FFindNewFriendUserData> foundUsers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnSearchForUsersResult");
		
		UUI_Screen_FindNewFriends_C_OnSearchForUsersResult_Params params {};
		params.foundUsers = foundUsers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnCloseButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_FindNewFriends_C::OnCloseButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnCloseButtonClicked");
		
		UUI_Screen_FindNewFriends_C_OnCloseButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnSendFriendInvitesButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_FindNewFriends_C::OnSendFriendInvitesButtonClicked(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnSendFriendInvitesButtonClicked");
		
		UUI_Screen_FindNewFriends_C_OnSendFriendInvitesButtonClicked_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_FindNewFriends_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnTransitionOut");
		
		UUI_Screen_FindNewFriends_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_FindNewFriends_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnNavigationEvent");
		
		UUI_Screen_FindNewFriends_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.ExecuteUbergraph_UI_Screen_FindNewFriends
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_FindNewFriends_C::ExecuteUbergraph_UI_Screen_FindNewFriends(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.ExecuteUbergraph_UI_Screen_FindNewFriends");
		
		UUI_Screen_FindNewFriends_C_ExecuteUbergraph_UI_Screen_FindNewFriends_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_FindNewFriends_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_FindNewFriends_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C");
		return ptr;
	}

}


