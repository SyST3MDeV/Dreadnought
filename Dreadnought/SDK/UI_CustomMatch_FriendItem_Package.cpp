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
	 * 		Name   -> Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.SetOnlineStatusImageVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_FriendItem_C::SetOnlineStatusImageVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.SetOnlineStatusImageVisibility");
		
		UUI_CustomMatch_FriendItem_C_SetOnlineStatusImageVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.SetOnlineStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewOnlineStatus                                            (Parm)
	 */
	void UUI_CustomMatch_FriendItem_C::SetOnlineStatus(const class FText& NewOnlineStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.SetOnlineStatus");
		
		UUI_CustomMatch_FriendItem_C_SetOnlineStatus_Params params {};
		params.NewOnlineStatus = NewOnlineStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.SetRankVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_FriendItem_C::SetRankVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.SetRankVisibility");
		
		UUI_CustomMatch_FriendItem_C_SetRankVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_FriendItem_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.HandleUnfocus");
		
		UUI_CustomMatch_FriendItem_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_FriendItem_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.HandleFocus");
		
		UUI_CustomMatch_FriendItem_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.HasUserData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasAUser                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_FriendItem_C::HasUserData(bool* HasAUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.HasUserData");
		
		UUI_CustomMatch_FriendItem_C_HasUserData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasAUser != nullptr)
			*HasAUser = params.HasAUser;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.SetUpOptions
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_FriendItem_C::SetUpOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.SetUpOptions");
		
		UUI_CustomMatch_FriendItem_C_SetUpOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.SetSquadPlayerCardData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_FriendItem_C::SetSquadPlayerCardData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.SetSquadPlayerCardData");
		
		UUI_CustomMatch_FriendItem_C_SetSquadPlayerCardData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_CustomMatch_FriendItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.Construct");
		
		UUI_CustomMatch_FriendItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_FriendItem_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CustomMatch_FriendItem_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_FriendItem_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_CustomMatch_FriendItem_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_73_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_FriendItem_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_73_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_73_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CustomMatch_FriendItem_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_73_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_CustomMatch_FriendItem_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.OnActionReceived");
		
		UUI_CustomMatch_FriendItem_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.ExecuteUbergraph_UI_CustomMatch_FriendItem
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_FriendItem_C::ExecuteUbergraph_UI_CustomMatch_FriendItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.ExecuteUbergraph_UI_CustomMatch_FriendItem");
		
		UUI_CustomMatch_FriendItem_C_ExecuteUbergraph_UI_CustomMatch_FriendItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.OnFriendItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_FriendItem_C::OnFriendItemClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C.OnFriendItemClicked__DelegateSignature");
		
		UUI_CustomMatch_FriendItem_C_OnFriendItemClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CustomMatch_FriendItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomMatch_FriendItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CustomMatch_FriendItem.UI_CustomMatch_FriendItem_C");
		return ptr;
	}

}


