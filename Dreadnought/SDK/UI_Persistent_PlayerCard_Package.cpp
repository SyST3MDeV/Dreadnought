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
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.UpdateTimers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_PlayerCard_C::UpdateTimers(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.UpdateTimers");
		
		UUI_Persistent_PlayerCard_C_UpdateTimers_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetEliteIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsElite                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_PlayerCard_C::SetEliteIcon(bool IsElite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetEliteIcon");
		
		UUI_Persistent_PlayerCard_C_SetEliteIcon_Params params {};
		params.IsElite = IsElite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerUIData                               PlayerData                                                 (Parm)
	 */
	void UUI_Persistent_PlayerCard_C::SetData(const struct FPlayerUIData& PlayerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetData");
		
		UUI_Persistent_PlayerCard_C_SetData_Params params {};
		params.PlayerData = PlayerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetEliteStatusText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_PlayerCard_C::SetEliteStatusText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetEliteStatusText");
		
		UUI_Persistent_PlayerCard_C_SetEliteStatusText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetProgressBarColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsElite                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_PlayerCard_C::SetProgressBarColor(bool IsElite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetProgressBarColor");
		
		UUI_Persistent_PlayerCard_C_SetProgressBarColor_Params params {};
		params.IsElite = IsElite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetRankProgressVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsMaxRank                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_PlayerCard_C::SetRankProgressVisibility(bool IsMaxRank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetRankProgressVisibility");
		
		UUI_Persistent_PlayerCard_C_SetRankProgressVisibility_Params params {};
		params.IsMaxRank = IsMaxRank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetRankProgress
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              RankProgress                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_PlayerCard_C::SetRankProgress(float RankProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetRankProgress");
		
		UUI_Persistent_PlayerCard_C_SetRankProgress_Params params {};
		params.RankProgress = RankProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetRankTitle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        RankTitle                                                  (Parm)
	 */
	void UUI_Persistent_PlayerCard_C::SetRankTitle(const class FText& RankTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetRankTitle");
		
		UUI_Persistent_PlayerCard_C_SetRankTitle_Params params {};
		params.RankTitle = RankTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetRankValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RankValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_PlayerCard_C::SetRankValue(int32_t RankValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetRankValue");
		
		UUI_Persistent_PlayerCard_C_SetRankValue_Params params {};
		params.RankValue = RankValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetCaptainImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      imagePath                                                  (Parm, ZeroConstructor)
	 */
	void UUI_Persistent_PlayerCard_C::SetCaptainImage(const class FString& imagePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetCaptainImage");
		
		UUI_Persistent_PlayerCard_C_SetCaptainImage_Params params {};
		params.imagePath = imagePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetPlayerNumber
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlayerNumber                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_PlayerCard_C::SetPlayerNumber(int32_t PlayerNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetPlayerNumber");
		
		UUI_Persistent_PlayerCard_C_SetPlayerNumber_Params params {};
		params.PlayerNumber = PlayerNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetPlayerName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor)
	 */
	void UUI_Persistent_PlayerCard_C::SetPlayerName(const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetPlayerName");
		
		UUI_Persistent_PlayerCard_C_SetPlayerName_Params params {};
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetEliteButtonVisiblity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsElite                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_PlayerCard_C::SetEliteButtonVisiblity(bool IsElite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetEliteButtonVisiblity");
		
		UUI_Persistent_PlayerCard_C_SetEliteButtonVisiblity_Params params {};
		params.IsElite = IsElite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetRankVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_PlayerCard_C::SetRankVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.SetRankVisibility");
		
		UUI_Persistent_PlayerCard_C_SetRankVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.Setup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_PlayerCard_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.Setup");
		
		UUI_Persistent_PlayerCard_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Persistent_PlayerCard_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.Construct");
		
		UUI_Persistent_PlayerCard_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Persistent_PlayerCard_C::BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Persistent_PlayerCard_C_BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Persistent_PlayerCard_C::BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Persistent_PlayerCard_C_BndEvt__PlayerPortrait_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Persistent_PlayerCard_C::BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Persistent_PlayerCard_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Persistent_PlayerCard_C::BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Persistent_PlayerCard_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.BndEvt__BecomeEliteButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Persistent_PlayerCard_C::BndEvt__BecomeEliteButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.BndEvt__BecomeEliteButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Persistent_PlayerCard_C_BndEvt__BecomeEliteButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.ExecuteUbergraph_UI_Persistent_PlayerCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_PlayerCard_C::ExecuteUbergraph_UI_Persistent_PlayerCard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.ExecuteUbergraph_UI_Persistent_PlayerCard");
		
		UUI_Persistent_PlayerCard_C_ExecuteUbergraph_UI_Persistent_PlayerCard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.OnPlayerPortraitClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_PlayerCard_C::OnPlayerPortraitClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.OnPlayerPortraitClicked__DelegateSignature");
		
		UUI_Persistent_PlayerCard_C_OnPlayerPortraitClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.OnPlayerCardClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_PlayerCard_C::OnPlayerCardClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C.OnPlayerCardClicked__DelegateSignature");
		
		UUI_Persistent_PlayerCard_C_OnPlayerCardClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Persistent_PlayerCard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Persistent_PlayerCard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Persistent_PlayerCard.UI_Persistent_PlayerCard_C");
		return ptr;
	}

}


