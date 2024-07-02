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
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetOnlineStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewOnlineStatus                                            (Parm)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::SetOnlineStatus(const class FText& NewOnlineStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetOnlineStatus");
		
		UUI_CustomMatch_PlayerInviteCard_C_SetOnlineStatus_Params params {};
		params.NewOnlineStatus = NewOnlineStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetEliteIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsElite                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::SetEliteIcon(bool IsElite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetEliteIcon");
		
		UUI_CustomMatch_PlayerInviteCard_C_SetEliteIcon_Params params {};
		params.IsElite = IsElite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerUIData                               PlayerData                                                 (Parm)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::SetData(const struct FPlayerUIData& PlayerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetData");
		
		UUI_CustomMatch_PlayerInviteCard_C_SetData_Params params {};
		params.PlayerData = PlayerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetRankTitle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        RankTitle                                                  (Parm)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::SetRankTitle(const class FText& RankTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetRankTitle");
		
		UUI_CustomMatch_PlayerInviteCard_C_SetRankTitle_Params params {};
		params.RankTitle = RankTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetRankValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RankValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::SetRankValue(int32_t RankValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetRankValue");
		
		UUI_CustomMatch_PlayerInviteCard_C_SetRankValue_Params params {};
		params.RankValue = RankValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetCaptainImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      imagePath                                                  (Parm, ZeroConstructor)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::SetCaptainImage(const class FString& imagePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetCaptainImage");
		
		UUI_CustomMatch_PlayerInviteCard_C_SetCaptainImage_Params params {};
		params.imagePath = imagePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetPlayerNumber
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlayerNumber                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::SetPlayerNumber(int32_t PlayerNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetPlayerNumber");
		
		UUI_CustomMatch_PlayerInviteCard_C_SetPlayerNumber_Params params {};
		params.PlayerNumber = PlayerNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetPlayerName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::SetPlayerName(const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetPlayerName");
		
		UUI_CustomMatch_PlayerInviteCard_C_SetPlayerName_Params params {};
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetRankVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::SetRankVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.SetRankVisibility");
		
		UUI_CustomMatch_PlayerInviteCard_C_SetRankVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerUIData                               CurrentPlayerData                                          (Parm)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::Setup(const struct FPlayerUIData& CurrentPlayerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.Setup");
		
		UUI_CustomMatch_PlayerInviteCard_C_Setup_Params params {};
		params.CurrentPlayerData = CurrentPlayerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.Construct");
		
		UUI_CustomMatch_PlayerInviteCard_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUI_CustomMatch_PlayerInviteCard_C_BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CustomMatch_PlayerInviteCard_C_BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UUI_CustomMatch_PlayerInviteCard_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CustomMatch_PlayerInviteCard_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.ExecuteUbergraph_UI_CustomMatch_PlayerInviteCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::ExecuteUbergraph_UI_CustomMatch_PlayerInviteCard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.ExecuteUbergraph_UI_CustomMatch_PlayerInviteCard");
		
		UUI_CustomMatch_PlayerInviteCard_C_ExecuteUbergraph_UI_CustomMatch_PlayerInviteCard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.OnPlayerPortraitClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::OnPlayerPortraitClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.OnPlayerPortraitClicked__DelegateSignature");
		
		UUI_CustomMatch_PlayerInviteCard_C_OnPlayerPortraitClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.OnPlayerCardClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CustomMatch_PlayerInviteCard_C::OnPlayerCardClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C.OnPlayerCardClicked__DelegateSignature");
		
		UUI_CustomMatch_PlayerInviteCard_C_OnPlayerCardClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CustomMatch_PlayerInviteCard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomMatch_PlayerInviteCard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CustomMatch_PlayerInviteCard.UI_CustomMatch_PlayerInviteCard_C");
		return ptr;
	}

}


