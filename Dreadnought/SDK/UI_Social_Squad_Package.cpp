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
	 * 		Name   -> Function UI_Social_Squad.UI_Social_Squad_C.UpdateVoiceChatStatus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSquadVoiceData                             VoiceData                                                  (Parm)
	 */
	void UUI_Social_Squad_C::UpdateVoiceChatStatus(const struct FSquadVoiceData& VoiceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_Squad.UI_Social_Squad_C.UpdateVoiceChatStatus");
		
		UUI_Social_Squad_C_UpdateVoiceChatStatus_Params params {};
		params.VoiceData = VoiceData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_Squad.UI_Social_Squad_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_Squad_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_Squad.UI_Social_Squad_C.HandleFocus");
		
		UUI_Social_Squad_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_Squad.UI_Social_Squad_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_Squad_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_Squad.UI_Social_Squad_C.HandleUnfocus");
		
		UUI_Social_Squad_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_Squad.UI_Social_Squad_C.HandlePlayerItemClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_FriendItem_C*                     SourcePlayerItem                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_Squad_C::HandlePlayerItemClicked(class UUI_Button_FriendItem_C* SourcePlayerItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_Squad.UI_Social_Squad_C.HandlePlayerItemClicked");
		
		UUI_Social_Squad_C_HandlePlayerItemClicked_Params params {};
		params.SourcePlayerItem = SourcePlayerItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_Squad.UI_Social_Squad_C.ClearSquadList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_Squad_C::ClearSquadList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_Squad.UI_Social_Squad_C.ClearSquadList");
		
		UUI_Social_Squad_C_ClearSquadList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_Squad.UI_Social_Squad_C.PopulateLocalPlayerCard
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerUserData                             PlayerData                                                 (Parm)
	 */
	void UUI_Social_Squad_C::PopulateLocalPlayerCard(const struct FPlayerUserData& PlayerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_Squad.UI_Social_Squad_C.PopulateLocalPlayerCard");
		
		UUI_Social_Squad_C_PopulateLocalPlayerCard_Params params {};
		params.PlayerData = PlayerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_Squad.UI_Social_Squad_C.GetFirstInactivePlayerIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            LastPlayerIndex                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               WasItemFound                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_Squad_C::GetFirstInactivePlayerIndex(int32_t* LastPlayerIndex, bool* WasItemFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_Squad.UI_Social_Squad_C.GetFirstInactivePlayerIndex");
		
		UUI_Social_Squad_C_GetFirstInactivePlayerIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LastPlayerIndex != nullptr)
			*LastPlayerIndex = params.LastPlayerIndex;
		if (WasItemFound != nullptr)
			*WasItemFound = params.WasItemFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_Squad.UI_Social_Squad_C.UpdateSquadListData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FSquadUserData>                      SquadDataIn                                                (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		struct FPlayerUserData                             PlayerData                                                 (Parm)
	 */
	void UUI_Social_Squad_C::UpdateSquadListData(TArray<struct FSquadUserData>* SquadDataIn, const struct FPlayerUserData& PlayerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_Squad.UI_Social_Squad_C.UpdateSquadListData");
		
		UUI_Social_Squad_C_UpdateSquadListData_Params params {};
		params.PlayerData = PlayerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SquadDataIn != nullptr)
			*SquadDataIn = params.SquadDataIn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_Squad.UI_Social_Squad_C.RefreshSquadDisplay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_Squad_C::RefreshSquadDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_Squad.UI_Social_Squad_C.RefreshSquadDisplay");
		
		UUI_Social_Squad_C_RefreshSquadDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_Squad.UI_Social_Squad_C.PopulateSquadMemberCard
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSquadUserData                              SquadUserData                                              (Parm)
	 */
	void UUI_Social_Squad_C::PopulateSquadMemberCard(const struct FSquadUserData& SquadUserData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_Squad.UI_Social_Squad_C.PopulateSquadMemberCard");
		
		UUI_Social_Squad_C_PopulateSquadMemberCard_Params params {};
		params.SquadUserData = SquadUserData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_Squad.UI_Social_Squad_C.SetupSquad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_Squad_C::SetupSquad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_Squad.UI_Social_Squad_C.SetupSquad");
		
		UUI_Social_Squad_C_SetupSquad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_Squad.UI_Social_Squad_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Social_Squad_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_Squad.UI_Social_Squad_C.Construct");
		
		UUI_Social_Squad_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_Squad.UI_Social_Squad_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Social_Squad_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_Squad.UI_Social_Squad_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Social_Squad_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_Squad.UI_Social_Squad_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Social_Squad_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_Squad.UI_Social_Squad_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Social_Squad_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_Squad.UI_Social_Squad_C.ExecuteUbergraph_UI_Social_Squad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_Squad_C::ExecuteUbergraph_UI_Social_Squad(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_Squad.UI_Social_Squad_C.ExecuteUbergraph_UI_Social_Squad");
		
		UUI_Social_Squad_C_ExecuteUbergraph_UI_Social_Squad_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_Squad.UI_Social_Squad_C.OnPlayerItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_FriendItem_C*                     SourceFriendItem                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_Squad_C::OnPlayerItemClicked__DelegateSignature(class UUI_Button_FriendItem_C* SourceFriendItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_Squad.UI_Social_Squad_C.OnPlayerItemClicked__DelegateSignature");
		
		UUI_Social_Squad_C_OnPlayerItemClicked__DelegateSignature_Params params {};
		params.SourceFriendItem = SourceFriendItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Social_Squad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Social_Squad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Social_Squad.UI_Social_Squad_C");
		return ptr;
	}

}


