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
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.SetTextSearchLengthWarning
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_FindNewFriends_C::SetTextSearchLengthWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.SetTextSearchLengthWarning");
		
		UUI_Social_FindNewFriends_C_SetTextSearchLengthWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.SetTextNoResults
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_FindNewFriends_C::SetTextNoResults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.SetTextNoResults");
		
		UUI_Social_FindNewFriends_C_SetTextNoResults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.BuildSearchResult
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFindNewFriendUserData>              friendData                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Social_FindNewFriends_C::BuildSearchResult(TArray<struct FFindNewFriendUserData>* friendData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.BuildSearchResult");
		
		UUI_Social_FindNewFriends_C_BuildSearchResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (friendData != nullptr)
			*friendData = params.friendData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.ResetSearchResults
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_FindNewFriends_C::ResetSearchResults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.ResetSearchResults");
		
		UUI_Social_FindNewFriends_C_ResetSearchResults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.SearchForFriends
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Social_FindNewFriends_C::SearchForFriends(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.SearchForFriends");
		
		UUI_Social_FindNewFriends_C_SearchForFriends_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_FindNewFriends_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.Setup");
		
		UUI_Social_FindNewFriends_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.Show
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_FindNewFriends_C::Show(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.Show");
		
		UUI_Social_FindNewFriends_C_Show_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.UpdateInviteAmount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_FindNewFriends_C::UpdateInviteAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.UpdateInviteAmount");
		
		UUI_Social_FindNewFriends_C_UpdateInviteAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.GatherInvitedFriends
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_FindNewFriends_C::GatherInvitedFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.GatherInvitedFriends");
		
		UUI_Social_FindNewFriends_C_GatherInvitedFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.GetNumOfFriendsInThisList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_FindNewFriends_C::GetNumOfFriendsInThisList(int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.GetNumOfFriendsInThisList");
		
		UUI_Social_FindNewFriends_C_GetNumOfFriendsInThisList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.GetSocialSection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESocialSection                                     SocialSection                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_FindNewFriends_C::GetSocialSection(ESocialSection* SocialSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.GetSocialSection");
		
		UUI_Social_FindNewFriends_C_GetSocialSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SocialSection != nullptr)
			*SocialSection = params.SocialSection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Social_FindNewFriends_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.Construct");
		
		UUI_Social_FindNewFriends_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_58_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_FindNewFriends_C::BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_58_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_58_OnButtonClicked__DelegateSignature");
		
		UUI_Social_FindNewFriends_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_58_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.BndEvt__ButtonSendInvites_K2Node_ComponentBoundEvent_113_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_FindNewFriends_C::BndEvt__ButtonSendInvites_K2Node_ComponentBoundEvent_113_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.BndEvt__ButtonSendInvites_K2Node_ComponentBoundEvent_113_OnButtonClicked__DelegateSignature");
		
		UUI_Social_FindNewFriends_C_BndEvt__ButtonSendInvites_K2Node_ComponentBoundEvent_113_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.OnStartSearch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        filterText                                                 (Parm)
	 */
	void UUI_Social_FindNewFriends_C::OnStartSearch(const class FText& filterText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.OnStartSearch");
		
		UUI_Social_FindNewFriends_C_OnStartSearch_Params params {};
		params.filterText = filterText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.OnSearchForUsersResult
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFindNewFriendUserData>              foundUsers                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Social_FindNewFriends_C::OnSearchForUsersResult(TArray<struct FFindNewFriendUserData> foundUsers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.OnSearchForUsersResult");
		
		UUI_Social_FindNewFriends_C_OnSearchForUsersResult_Params params {};
		params.foundUsers = foundUsers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.ExecuteUbergraph_UI_Social_FindNewFriends
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_FindNewFriends_C::ExecuteUbergraph_UI_Social_FindNewFriends(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.ExecuteUbergraph_UI_Social_FindNewFriends");
		
		UUI_Social_FindNewFriends_C_ExecuteUbergraph_UI_Social_FindNewFriends_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.FindNewFriendsCanceled__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_FindNewFriends_C::FindNewFriendsCanceled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.FindNewFriendsCanceled__DelegateSignature");
		
		UUI_Social_FindNewFriends_C_FindNewFriendsCanceled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.SearchResultsBuilt__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_FindNewFriends_C::SearchResultsBuilt__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.SearchResultsBuilt__DelegateSignature");
		
		UUI_Social_FindNewFriends_C_SearchResultsBuilt__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Social_FindNewFriends_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Social_FindNewFriends_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Social_FindNewFriends.UI_Social_FindNewFriends_C");
		return ptr;
	}

}


