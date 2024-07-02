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
	 * 		Name   -> Function UI_Social_SquadItem.UI_Social_SquadItem_C.GetPlayerId
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_SquadItem_C::GetPlayerId(class FName* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_SquadItem.UI_Social_SquadItem_C.GetPlayerId");
		
		UUI_Social_SquadItem_C_GetPlayerId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_SquadItem.UI_Social_SquadItem_C.UpdateVoiceChatStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSquadVoiceData                             VoiceData                                                  (Parm)
	 */
	void UUI_Social_SquadItem_C::UpdateVoiceChatStatus(const struct FSquadVoiceData& VoiceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_SquadItem.UI_Social_SquadItem_C.UpdateVoiceChatStatus");
		
		UUI_Social_SquadItem_C_UpdateVoiceChatStatus_Params params {};
		params.VoiceData = VoiceData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_SquadItem.UI_Social_SquadItem_C.HandleFriendItemClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_FriendItem_C*                     SourceFriendItem                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_SquadItem_C::HandleFriendItemClicked(class UUI_Button_FriendItem_C* SourceFriendItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_SquadItem.UI_Social_SquadItem_C.HandleFriendItemClicked");
		
		UUI_Social_SquadItem_C_HandleFriendItemClicked_Params params {};
		params.SourceFriendItem = SourceFriendItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_SquadItem.UI_Social_SquadItem_C.SetPlayerData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerUserData                             PlayerData                                                 (Parm)
	 */
	void UUI_Social_SquadItem_C::SetPlayerData(const struct FPlayerUserData& PlayerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_SquadItem.UI_Social_SquadItem_C.SetPlayerData");
		
		UUI_Social_SquadItem_C_SetPlayerData_Params params {};
		params.PlayerData = PlayerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_SquadItem.UI_Social_SquadItem_C.IsPlayerActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_SquadItem_C::IsPlayerActive(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_SquadItem.UI_Social_SquadItem_C.IsPlayerActive");
		
		UUI_Social_SquadItem_C_IsPlayerActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_SquadItem.UI_Social_SquadItem_C.GetPlayerItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_Button_FriendItem_C*                     UI_Button_FriendItem                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_SquadItem_C::GetPlayerItem(class UUI_Button_FriendItem_C** UI_Button_FriendItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_SquadItem.UI_Social_SquadItem_C.GetPlayerItem");
		
		UUI_Social_SquadItem_C_GetPlayerItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UI_Button_FriendItem != nullptr)
			*UI_Button_FriendItem = params.UI_Button_FriendItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_SquadItem.UI_Social_SquadItem_C.SetSquadMemberData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSquadUserData                              SquadMemberData                                            (Parm)
	 */
	void UUI_Social_SquadItem_C::SetSquadMemberData(const struct FSquadUserData& SquadMemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_SquadItem.UI_Social_SquadItem_C.SetSquadMemberData");
		
		UUI_Social_SquadItem_C_SetSquadMemberData_Params params {};
		params.SquadMemberData = SquadMemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_SquadItem.UI_Social_SquadItem_C.ShowEmpty
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_SquadItem_C::ShowEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_SquadItem.UI_Social_SquadItem_C.ShowEmpty");
		
		UUI_Social_SquadItem_C_ShowEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_SquadItem.UI_Social_SquadItem_C.ShowAddButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_SquadItem_C::ShowAddButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_SquadItem.UI_Social_SquadItem_C.ShowAddButton");
		
		UUI_Social_SquadItem_C_ShowAddButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_SquadItem.UI_Social_SquadItem_C.ShowPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_SquadItem_C::ShowPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_SquadItem.UI_Social_SquadItem_C.ShowPlayer");
		
		UUI_Social_SquadItem_C_ShowPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_SquadItem.UI_Social_SquadItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Social_SquadItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_SquadItem.UI_Social_SquadItem_C.Construct");
		
		UUI_Social_SquadItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_SquadItem.UI_Social_SquadItem_C.ExecuteUbergraph_UI_Social_SquadItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_SquadItem_C::ExecuteUbergraph_UI_Social_SquadItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_SquadItem.UI_Social_SquadItem_C.ExecuteUbergraph_UI_Social_SquadItem");
		
		UUI_Social_SquadItem_C_ExecuteUbergraph_UI_Social_SquadItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_SquadItem.UI_Social_SquadItem_C.OnPlayerItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_FriendItem_C*                     SourcePlayerItem                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_SquadItem_C::OnPlayerItemClicked__DelegateSignature(class UUI_Button_FriendItem_C* SourcePlayerItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_SquadItem.UI_Social_SquadItem_C.OnPlayerItemClicked__DelegateSignature");
		
		UUI_Social_SquadItem_C_OnPlayerItemClicked__DelegateSignature_Params params {};
		params.SourcePlayerItem = SourcePlayerItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Social_SquadItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Social_SquadItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Social_SquadItem.UI_Social_SquadItem_C");
		return ptr;
	}

}


