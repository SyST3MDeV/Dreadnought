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
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleResetSwap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::HandleResetSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleResetSwap");
		
		UUI_CustomMatch_PlayerCard_C_HandleResetSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleResetOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::HandleResetOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleResetOptions");
		
		UUI_CustomMatch_PlayerCard_C_HandleResetOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.ActionPlayerOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::ActionPlayerOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.ActionPlayerOptions");
		
		UUI_CustomMatch_PlayerCard_C_ActionPlayerOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.ClearVoiceChatStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::ClearVoiceChatStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.ClearVoiceChatStatus");
		
		UUI_CustomMatch_PlayerCard_C_ClearVoiceChatStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.UpdateVoiceChatStatus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSquadVoiceData                             VoiceData                                                  (Parm)
	 */
	void UUI_CustomMatch_PlayerCard_C::UpdateVoiceChatStatus(const struct FSquadVoiceData& VoiceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.UpdateVoiceChatStatus");
		
		UUI_CustomMatch_PlayerCard_C_UpdateVoiceChatStatus_Params params {};
		params.VoiceData = VoiceData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.Action");
		
		UUI_CustomMatch_PlayerCard_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleUnfocusSwap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::HandleUnfocusSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleUnfocusSwap");
		
		UUI_CustomMatch_PlayerCard_C_HandleUnfocusSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleFocusSwap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::HandleFocusSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleFocusSwap");
		
		UUI_CustomMatch_PlayerCard_C_HandleFocusSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleUnfocusKick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::HandleUnfocusKick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleUnfocusKick");
		
		UUI_CustomMatch_PlayerCard_C_HandleUnfocusKick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleFocusKick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::HandleFocusKick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.HandleFocusKick");
		
		UUI_CustomMatch_PlayerCard_C_HandleFocusKick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.ActionSwitchTeams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::ActionSwitchTeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.ActionSwitchTeams");
		
		UUI_CustomMatch_PlayerCard_C_ActionSwitchTeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.ActionRemovePlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::ActionRemovePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.ActionRemovePlayer");
		
		UUI_CustomMatch_PlayerCard_C_ActionRemovePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetCanMove
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanMove                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_PlayerCard_C::SetCanMove(bool CanMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetCanMove");
		
		UUI_CustomMatch_PlayerCard_C_SetCanMove_Params params {};
		params.CanMove = CanMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetCanRemove
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanRemove                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_PlayerCard_C::SetCanRemove(bool CanRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetCanRemove");
		
		UUI_CustomMatch_PlayerCard_C_SetCanRemove_Params params {};
		params.CanRemove = CanRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetIsHost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHost                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_PlayerCard_C::SetIsHost(bool IsHost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetIsHost");
		
		UUI_CustomMatch_PlayerCard_C_SetIsHost_Params params {};
		params.IsHost = IsHost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetEliteIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsElite                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_PlayerCard_C::SetEliteIcon(bool IsElite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetEliteIcon");
		
		UUI_CustomMatch_PlayerCard_C_SetEliteIcon_Params params {};
		params.IsElite = IsElite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.GetData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FPlayerUIData                               CurrentPlayerData                                          (Parm, OutParm)
	 */
	void UUI_CustomMatch_PlayerCard_C::GetData(struct FPlayerUIData* CurrentPlayerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.GetData");
		
		UUI_CustomMatch_PlayerCard_C_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentPlayerData != nullptr)
			*CurrentPlayerData = params.CurrentPlayerData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerUIData                               PlayerData                                                 (Parm)
	 */
	void UUI_CustomMatch_PlayerCard_C::SetData(const struct FPlayerUIData& PlayerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetData");
		
		UUI_CustomMatch_PlayerCard_C_SetData_Params params {};
		params.PlayerData = PlayerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetRankTitle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        RankTitle                                                  (Parm)
	 */
	void UUI_CustomMatch_PlayerCard_C::SetRankTitle(const class FText& RankTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetRankTitle");
		
		UUI_CustomMatch_PlayerCard_C_SetRankTitle_Params params {};
		params.RankTitle = RankTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetRankValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RankValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_PlayerCard_C::SetRankValue(int32_t RankValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetRankValue");
		
		UUI_CustomMatch_PlayerCard_C_SetRankValue_Params params {};
		params.RankValue = RankValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetCaptainImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      imagePath                                                  (Parm, ZeroConstructor)
	 */
	void UUI_CustomMatch_PlayerCard_C::SetCaptainImage(const class FString& imagePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetCaptainImage");
		
		UUI_CustomMatch_PlayerCard_C_SetCaptainImage_Params params {};
		params.imagePath = imagePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetPlayerNumber
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlayerNumber                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_PlayerCard_C::SetPlayerNumber(int32_t PlayerNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetPlayerNumber");
		
		UUI_CustomMatch_PlayerCard_C_SetPlayerNumber_Params params {};
		params.PlayerNumber = PlayerNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetPlayerName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor)
	 */
	void UUI_CustomMatch_PlayerCard_C::SetPlayerName(const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetPlayerName");
		
		UUI_CustomMatch_PlayerCard_C_SetPlayerName_Params params {};
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetRankVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_PlayerCard_C::SetRankVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.SetRankVisibility");
		
		UUI_CustomMatch_PlayerCard_C_SetRankVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.Setup");
		
		UUI_CustomMatch_PlayerCard_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.Construct");
		
		UUI_CustomMatch_PlayerCard_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_118_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_249_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_249_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_249_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_249_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_301_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_301_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_301_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_BndEvt__ButtonRemovePlayer_K2Node_ComponentBoundEvent_301_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_317_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_317_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_317_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_BndEvt__ButtonSwitchTeams_K2Node_ComponentBoundEvent_317_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_243_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_243_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_243_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_243_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_426_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_426_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_426_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_426_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnActionReceived");
		
		UUI_CustomMatch_PlayerCard_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_830_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_830_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_830_OnButtonClickedEvent__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_830_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__PlayerPortraitButton_K2Node_ComponentBoundEvent_891_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::BndEvt__PlayerPortraitButton_K2Node_ComponentBoundEvent_891_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.BndEvt__PlayerPortraitButton_K2Node_ComponentBoundEvent_891_OnButtonClickedEvent__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_BndEvt__PlayerPortraitButton_K2Node_ComponentBoundEvent_891_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.ExecuteUbergraph_UI_CustomMatch_PlayerCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_PlayerCard_C::ExecuteUbergraph_UI_CustomMatch_PlayerCard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.ExecuteUbergraph_UI_CustomMatch_PlayerCard");
		
		UUI_CustomMatch_PlayerCard_C_ExecuteUbergraph_UI_CustomMatch_PlayerCard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnUnhover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::OnUnhover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnUnhover__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_OnUnhover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnHover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerCard_C::OnHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnHover__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_OnHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnSendPlayerToOtherTeamClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_PlayerCard_C*                TeamPlayerCard                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_PlayerCard_C::OnSendPlayerToOtherTeamClicked__DelegateSignature(class UUI_CustomMatch_PlayerCard_C* TeamPlayerCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnSendPlayerToOtherTeamClicked__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_OnSendPlayerToOtherTeamClicked__DelegateSignature_Params params {};
		params.TeamPlayerCard = TeamPlayerCard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnPlayerClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_PlayerCard_C*                PlayerCard                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_PlayerCard_C::OnPlayerClicked__DelegateSignature(class UUI_CustomMatch_PlayerCard_C* PlayerCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnPlayerClicked__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_OnPlayerClicked__DelegateSignature_Params params {};
		params.PlayerCard = PlayerCard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnRemovePlayerClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_PlayerCard_C*                TeamPlayerItem                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_PlayerCard_C::OnRemovePlayerClicked__DelegateSignature(class UUI_CustomMatch_PlayerCard_C* TeamPlayerItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C.OnRemovePlayerClicked__DelegateSignature");
		
		UUI_CustomMatch_PlayerCard_C_OnRemovePlayerClicked__DelegateSignature_Params params {};
		params.TeamPlayerItem = TeamPlayerItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CustomMatch_PlayerCard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomMatch_PlayerCard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CustomMatch_PlayerCard.UI_CustomMatch_PlayerCard_C");
		return ptr;
	}

}


