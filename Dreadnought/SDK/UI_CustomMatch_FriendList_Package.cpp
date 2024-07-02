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
	 * 		Name   -> Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.CloseAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_FriendList_C::CloseAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.CloseAction");
		
		UUI_CustomMatch_FriendList_C_CloseAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.GetFriendListItems
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class UUI_CustomMatch_FriendItem_C*>        CurrentFriendList                                          (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_CustomMatch_FriendList_C::GetFriendListItems(TArray<class UUI_CustomMatch_FriendItem_C*>* CurrentFriendList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.GetFriendListItems");
		
		UUI_CustomMatch_FriendList_C_GetFriendListItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentFriendList != nullptr)
			*CurrentFriendList = params.CurrentFriendList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.UpdateInviteAmount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_FriendList_C::UpdateInviteAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.UpdateInviteAmount");
		
		UUI_CustomMatch_FriendList_C_UpdateInviteAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.GatherCheckedFriends
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_FriendList_C::GatherCheckedFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.GatherCheckedFriends");
		
		UUI_CustomMatch_FriendList_C_GatherCheckedFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.AddFriendItemsToList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFriendsUserData>                    Array                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_CustomMatch_FriendList_C::AddFriendItemsToList(TArray<struct FFriendsUserData>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.AddFriendItemsToList");
		
		UUI_CustomMatch_FriendList_C_AddFriendItemsToList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.SetFriends
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFriendsUserData>                    FriendList                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FFriendsUserData>                    FriendListData                                             (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_CustomMatch_FriendList_C::SetFriends(TArray<struct FFriendsUserData>* FriendList, TArray<struct FFriendsUserData>* FriendListData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.SetFriends");
		
		UUI_CustomMatch_FriendList_C_SetFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FriendList != nullptr)
			*FriendList = params.FriendList;
		if (FriendListData != nullptr)
			*FriendListData = params.FriendListData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.GetNumOfFriendsInThisList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_FriendList_C::GetNumOfFriendsInThisList(int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.GetNumOfFriendsInThisList");
		
		UUI_CustomMatch_FriendList_C_GetNumOfFriendsInThisList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.GetSocialSection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESocialSection                                     SocialSection                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_FriendList_C::GetSocialSection(ESocialSection* SocialSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.GetSocialSection");
		
		UUI_CustomMatch_FriendList_C_GetSocialSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SocialSection != nullptr)
			*SocialSection = params.SocialSection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_CustomMatch_FriendList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.Construct");
		
		UUI_CustomMatch_FriendList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_58_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_FriendList_C::BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_58_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_58_OnButtonClicked__DelegateSignature");
		
		UUI_CustomMatch_FriendList_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_58_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.BndEvt__ButtonSendInvites_K2Node_ComponentBoundEvent_113_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_FriendList_C::BndEvt__ButtonSendInvites_K2Node_ComponentBoundEvent_113_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.BndEvt__ButtonSendInvites_K2Node_ComponentBoundEvent_113_OnButtonClicked__DelegateSignature");
		
		UUI_CustomMatch_FriendList_C_BndEvt__ButtonSendInvites_K2Node_ComponentBoundEvent_113_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.ExecuteUbergraph_UI_CustomMatch_FriendList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_FriendList_C::ExecuteUbergraph_UI_CustomMatch_FriendList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.ExecuteUbergraph_UI_CustomMatch_FriendList");
		
		UUI_CustomMatch_FriendList_C_ExecuteUbergraph_UI_CustomMatch_FriendList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.OnFriendInviteListClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_FriendList_C::OnFriendInviteListClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.OnFriendInviteListClosed__DelegateSignature");
		
		UUI_CustomMatch_FriendList_C_OnFriendInviteListClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.OnInviteListCreated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_FriendList_C*                source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_FriendList_C::OnInviteListCreated__DelegateSignature(class UUI_CustomMatch_FriendList_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C.OnInviteListCreated__DelegateSignature");
		
		UUI_CustomMatch_FriendList_C_OnInviteListCreated__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CustomMatch_FriendList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomMatch_FriendList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CustomMatch_FriendList.UI_CustomMatch_FriendList_C");
		return ptr;
	}

}


