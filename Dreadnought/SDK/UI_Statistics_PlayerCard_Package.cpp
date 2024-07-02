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
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_PlayerCard_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.HandleFocus");
		
		UUI_Statistics_PlayerCard_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.SetDataFromPlayerData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_PlayerCard_C::SetDataFromPlayerData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.SetDataFromPlayerData");
		
		UUI_Statistics_PlayerCard_C_SetDataFromPlayerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.SetHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_PlayerCard_C::SetHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.SetHovered");
		
		UUI_Statistics_PlayerCard_C_SetHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.SetData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatisticsUIListPlayerData                 UIListPlayerData                                           (Parm)
	 * 		class FText                                        Stat                                                       (Parm)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            LeaderboardIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_PlayerCard_C::SetData(const struct FStatisticsUIListPlayerData& UIListPlayerData, const class FText& Stat, int32_t index, int32_t LeaderboardIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.SetData");
		
		UUI_Statistics_PlayerCard_C_SetData_Params params {};
		params.UIListPlayerData = UIListPlayerData;
		params.Stat = Stat;
		params.index = index;
		params.LeaderboardIndex = LeaderboardIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.SetEmphasized
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEmphasized                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_PlayerCard_C::SetEmphasized(bool IsEmphasized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.SetEmphasized");
		
		UUI_Statistics_PlayerCard_C_SetEmphasized_Params params {};
		params.IsEmphasized = IsEmphasized;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.GetData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FPlayerUIData                               CurrentPlayerData                                          (Parm, OutParm)
	 */
	void UUI_Statistics_PlayerCard_C::GetData(struct FPlayerUIData* CurrentPlayerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.GetData");
		
		UUI_Statistics_PlayerCard_C_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentPlayerData != nullptr)
			*CurrentPlayerData = params.CurrentPlayerData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Statistics_PlayerCard_C::BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Statistics_PlayerCard_C_BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Statistics_PlayerCard_C::BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Statistics_PlayerCard_C_BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Statistics_PlayerCard_C::BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Statistics_PlayerCard_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Statistics_PlayerCard_C::BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Statistics_PlayerCard_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Statistics_PlayerCard_C::BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Statistics_PlayerCard_C_BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Statistics_PlayerCard_C::BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Statistics_PlayerCard_C_BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Statistics_PlayerCard_C::BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Statistics_PlayerCard_C_BndEvt__ButtonPlayerCard_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnFocusLost
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (Parm)
	 */
	void UUI_Statistics_PlayerCard_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnFocusLost");
		
		UUI_Statistics_PlayerCard_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.ExecuteUbergraph_UI_Statistics_PlayerCard
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_PlayerCard_C::ExecuteUbergraph_UI_Statistics_PlayerCard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.ExecuteUbergraph_UI_Statistics_PlayerCard");
		
		UUI_Statistics_PlayerCard_C_ExecuteUbergraph_UI_Statistics_PlayerCard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnRecievedFocused__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_PlayerCard_C::OnRecievedFocused__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnRecievedFocused__DelegateSignature");
		
		UUI_Statistics_PlayerCard_C_OnRecievedFocused__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnLeaderboardItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Statistics_PlayerCard_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_PlayerCard_C::OnLeaderboardItemClicked__DelegateSignature(class UUI_Statistics_PlayerCard_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnLeaderboardItemClicked__DelegateSignature");
		
		UUI_Statistics_PlayerCard_C_OnLeaderboardItemClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnSendPlayerToOtherTeamClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_PlayerCard_C*                TeamPlayerCard                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_PlayerCard_C::OnSendPlayerToOtherTeamClicked__DelegateSignature(class UUI_CustomMatch_PlayerCard_C* TeamPlayerCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnSendPlayerToOtherTeamClicked__DelegateSignature");
		
		UUI_Statistics_PlayerCard_C_OnSendPlayerToOtherTeamClicked__DelegateSignature_Params params {};
		params.TeamPlayerCard = TeamPlayerCard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnPlayerPortraitClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Statistics_PlayerCard_C::OnPlayerPortraitClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnPlayerPortraitClicked__DelegateSignature");
		
		UUI_Statistics_PlayerCard_C_OnPlayerPortraitClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnRemovePlayerClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CustomMatch_PlayerCard_C*                TeamPlayerItem                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_PlayerCard_C::OnRemovePlayerClicked__DelegateSignature(class UUI_CustomMatch_PlayerCard_C* TeamPlayerItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C.OnRemovePlayerClicked__DelegateSignature");
		
		UUI_Statistics_PlayerCard_C_OnRemovePlayerClicked__DelegateSignature_Params params {};
		params.TeamPlayerItem = TeamPlayerItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Statistics_PlayerCard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Statistics_PlayerCard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Statistics_PlayerCard.UI_Statistics_PlayerCard_C");
		return ptr;
	}

}


