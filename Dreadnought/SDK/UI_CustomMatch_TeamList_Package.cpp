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
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.GetButtonIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsHost                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ButtonIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::GetButtonIndex(int32_t index, bool IsHost, int32_t* ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.GetButtonIndex");
		
		UUI_CustomMatch_TeamList_C_GetButtonIndex_Params params {};
		params.index = index;
		params.IsHost = IsHost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ButtonIndex != nullptr)
			*ButtonIndex = params.ButtonIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.GetRowFromIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsHost                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_CustomMatch_TeamList_Row_C*              RowReference                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::GetRowFromIndex(int32_t index, bool IsHost, class UUI_CustomMatch_TeamList_Row_C** RowReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.GetRowFromIndex");
		
		UUI_CustomMatch_TeamList_C_GetRowFromIndex_Params params {};
		params.index = index;
		params.IsHost = IsHost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowReference != nullptr)
			*RowReference = params.RowReference;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.FindIndexFromRowAndButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RowIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ButtonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsHost                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::FindIndexFromRowAndButton(int32_t RowIndex, int32_t ButtonIndex, bool IsHost, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.FindIndexFromRowAndButton");
		
		UUI_CustomMatch_TeamList_C_FindIndexFromRowAndButton_Params params {};
		params.RowIndex = RowIndex;
		params.ButtonIndex = ButtonIndex;
		params.IsHost = IsHost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.FindRowAndButtonIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsHost                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RowIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ButtonIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::FindRowAndButtonIndex(int32_t index, bool IsHost, int32_t* RowIndex, int32_t* ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.FindRowAndButtonIndex");
		
		UUI_CustomMatch_TeamList_C_FindRowAndButtonIndex_Params params {};
		params.index = index;
		params.IsHost = IsHost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowIndex != nullptr)
			*RowIndex = params.RowIndex;
		if (ButtonIndex != nullptr)
			*ButtonIndex = params.ButtonIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.HandleOnPlayerCardClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_PlayerCard_C*                PlayerCard                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::HandleOnPlayerCardClicked(class UUI_CustomMatch_PlayerCard_C* PlayerCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.HandleOnPlayerCardClicked");
		
		UUI_CustomMatch_TeamList_C_HandleOnPlayerCardClicked_Params params {};
		params.PlayerCard = PlayerCard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.GetPlayerCard
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_CustomMatch_PlayerCard_C*                CurrentPlayerCard                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::GetPlayerCard(int32_t index, class UUI_CustomMatch_PlayerCard_C** CurrentPlayerCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.GetPlayerCard");
		
		UUI_CustomMatch_TeamList_C_GetPlayerCard_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentPlayerCard != nullptr)
			*CurrentPlayerCard = params.CurrentPlayerCard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.HandleOnPlayerSpeakingUpdated
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSquadVoiceData                             PlayerVoiceData                                            (Parm)
	 */
	void UUI_CustomMatch_TeamList_C::HandleOnPlayerSpeakingUpdated(const struct FSquadVoiceData& PlayerVoiceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.HandleOnPlayerSpeakingUpdated");
		
		UUI_CustomMatch_TeamList_C_HandleOnPlayerSpeakingUpdated_Params params {};
		params.PlayerVoiceData = PlayerVoiceData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.GetFocusableWidgets
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class UButton*>                             ItemList                                                   (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_CustomMatch_TeamList_C::GetFocusableWidgets(TArray<class UButton*>* ItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.GetFocusableWidgets");
		
		UUI_CustomMatch_TeamList_C_GetFocusableWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemList != nullptr)
			*ItemList = params.ItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.ClearTeamData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_TeamList_C::ClearTeamData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.ClearTeamData");
		
		UUI_CustomMatch_TeamList_C_ClearTeamData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.HandleOnSendPlayerToOtherTeamClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_PlayerCard_C*                PlayerCard                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::HandleOnSendPlayerToOtherTeamClicked(class UUI_CustomMatch_PlayerCard_C* PlayerCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.HandleOnSendPlayerToOtherTeamClicked");
		
		UUI_CustomMatch_TeamList_C_HandleOnSendPlayerToOtherTeamClicked_Params params {};
		params.PlayerCard = PlayerCard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.HandleOnRemovePlayerClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_PlayerCard_C*                PlayerCard                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::HandleOnRemovePlayerClicked(class UUI_CustomMatch_PlayerCard_C* PlayerCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.HandleOnRemovePlayerClicked");
		
		UUI_CustomMatch_TeamList_C_HandleOnRemovePlayerClicked_Params params {};
		params.PlayerCard = PlayerCard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.FillOpenSlotsWithAi
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFilling                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::FillOpenSlotsWithAi(bool IsFilling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.FillOpenSlotsWithAi");
		
		UUI_CustomMatch_TeamList_C_FillOpenSlotsWithAi_Params params {};
		params.IsFilling = IsFilling;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.AddPlayer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerUIData                               PlayerData                                                 (Parm)
	 * 		bool                                               IsHost                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanRemove                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanMove                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::AddPlayer(const struct FPlayerUIData& PlayerData, bool IsHost, bool CanRemove, bool CanMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.AddPlayer");
		
		UUI_CustomMatch_TeamList_C_AddPlayer_Params params {};
		params.PlayerData = PlayerData;
		params.IsHost = IsHost;
		params.CanRemove = CanRemove;
		params.CanMove = CanMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.FindClickedRowItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_PlayerCard_C*                SelectedRowItem                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_CustomMatch_TeamList_Row_C*              RowItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::FindClickedRowItem(class UUI_CustomMatch_PlayerCard_C* SelectedRowItem, int32_t* index, class UUI_CustomMatch_TeamList_Row_C** RowItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.FindClickedRowItem");
		
		UUI_CustomMatch_TeamList_C_FindClickedRowItem_Params params {};
		params.SelectedRowItem = SelectedRowItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
		if (RowItem != nullptr)
			*RowItem = params.RowItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.RemovePlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::RemovePlayer(int32_t PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.RemovePlayer");
		
		UUI_CustomMatch_TeamList_C_RemovePlayer_Params params {};
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.GetPlayerData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerUIData                               CurrentPlayerData                                          (Parm, OutParm)
	 */
	void UUI_CustomMatch_TeamList_C::GetPlayerData(int32_t index, struct FPlayerUIData* CurrentPlayerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.GetPlayerData");
		
		UUI_CustomMatch_TeamList_C_GetPlayerData_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentPlayerData != nullptr)
			*CurrentPlayerData = params.CurrentPlayerData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.Setup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_TeamList_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.Setup");
		
		UUI_CustomMatch_TeamList_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_CustomMatch_TeamList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.Construct");
		
		UUI_CustomMatch_TeamList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.PreConstruct");
		
		UUI_CustomMatch_TeamList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.ExecuteUbergraph_UI_CustomMatch_TeamList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::ExecuteUbergraph_UI_CustomMatch_TeamList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.ExecuteUbergraph_UI_CustomMatch_TeamList");
		
		UUI_CustomMatch_TeamList_C_ExecuteUbergraph_UI_CustomMatch_TeamList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.OnPlayerOptionsOpen__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_TeamList_C*                  TeamList                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::OnPlayerOptionsOpen__DelegateSignature(class UUI_CustomMatch_TeamList_C* TeamList, int32_t PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.OnPlayerOptionsOpen__DelegateSignature");
		
		UUI_CustomMatch_TeamList_C_OnPlayerOptionsOpen__DelegateSignature_Params params {};
		params.TeamList = TeamList;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.OnPlayerMoved__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_TeamList_C*                  TeamList                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::OnPlayerMoved__DelegateSignature(class UUI_CustomMatch_TeamList_C* TeamList, int32_t PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.OnPlayerMoved__DelegateSignature");
		
		UUI_CustomMatch_TeamList_C_OnPlayerMoved__DelegateSignature_Params params {};
		params.TeamList = TeamList;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.OnPlayerRemoved__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_TeamList_C*                  TeamList                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_TeamList_C::OnPlayerRemoved__DelegateSignature(class UUI_CustomMatch_TeamList_C* TeamList, int32_t PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C.OnPlayerRemoved__DelegateSignature");
		
		UUI_CustomMatch_TeamList_C_OnPlayerRemoved__DelegateSignature_Params params {};
		params.TeamList = TeamList;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CustomMatch_TeamList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomMatch_TeamList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C");
		return ptr;
	}

}


