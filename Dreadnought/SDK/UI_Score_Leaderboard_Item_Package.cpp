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
	 * 		Name   -> Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.UpdateUserData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerUIData                               PlayerData                                                 (Parm)
	 */
	void UUI_Score_Leaderboard_Item_C::UpdateUserData(const struct FPlayerUIData& PlayerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.UpdateUserData");
		
		UUI_Score_Leaderboard_Item_C_UpdateUserData_Params params {};
		params.PlayerData = PlayerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.SetSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Selected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_Item_C::SetSelected(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.SetSelected");
		
		UUI_Score_Leaderboard_Item_C_SetSelected_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.ClearData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Score_Leaderboard_Item_C::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.ClearData");
		
		UUI_Score_Leaderboard_Item_C_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.SetEmphasized
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEmphasized                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_Item_C::SetEmphasized(bool IsEmphasized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.SetEmphasized");
		
		UUI_Score_Leaderboard_Item_C_SetEmphasized_Params params {};
		params.IsEmphasized = IsEmphasized;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.SetData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            rank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        PlayerName                                                 (Parm)
	 * 		int32_t                                            highscore                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PlayerNumber                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_Item_C::SetData(int32_t rank, const class FText& PlayerName, int32_t highscore, const class FName& PlayerId, int32_t PlayerNumber, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.SetData");
		
		UUI_Score_Leaderboard_Item_C_SetData_Params params {};
		params.rank = rank;
		params.PlayerName = PlayerName;
		params.highscore = highscore;
		params.PlayerId = PlayerId;
		params.PlayerNumber = PlayerNumber;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Score_Leaderboard_Item_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.Construct");
		
		UUI_Score_Leaderboard_Item_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Score_Leaderboard_Item_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.OnSynchronizeProperties");
		
		UUI_Score_Leaderboard_Item_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.BndEvt__LeaderboardItemButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Score_Leaderboard_Item_C::BndEvt__LeaderboardItemButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.BndEvt__LeaderboardItemButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Score_Leaderboard_Item_C_BndEvt__LeaderboardItemButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.ExecuteUbergraph_UI_Score_Leaderboard_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_Item_C::ExecuteUbergraph_UI_Score_Leaderboard_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.ExecuteUbergraph_UI_Score_Leaderboard_Item");
		
		UUI_Score_Leaderboard_Item_C_ExecuteUbergraph_UI_Score_Leaderboard_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.OnLeaderboardItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Score_Leaderboard_Item_C::OnLeaderboardItemClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C.OnLeaderboardItemClicked__DelegateSignature");
		
		UUI_Score_Leaderboard_Item_C_OnLeaderboardItemClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Score_Leaderboard_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Score_Leaderboard_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Score_Leaderboard_Item.UI_Score_Leaderboard_Item_C");
		return ptr;
	}

}


