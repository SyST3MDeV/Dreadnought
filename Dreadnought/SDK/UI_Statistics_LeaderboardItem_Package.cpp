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
	 * 		Name   -> Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.SetEmphasized
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEmphasized                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_LeaderboardItem_C::SetEmphasized(bool IsEmphasized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.SetEmphasized");
		
		UUI_Statistics_LeaderboardItem_C_SetEmphasized_Params params {};
		params.IsEmphasized = IsEmphasized;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.SetData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatisticsUIListPlayerData                 PlayerData                                                 (Parm)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        StatLabel                                                  (Parm)
	 * 		int32_t                                            LeaderboardIndexIn                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_LeaderboardItem_C::SetData(const struct FStatisticsUIListPlayerData& PlayerData, int32_t index, const class FText& StatLabel, int32_t LeaderboardIndexIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.SetData");
		
		UUI_Statistics_LeaderboardItem_C_SetData_Params params {};
		params.PlayerData = PlayerData;
		params.index = index;
		params.StatLabel = StatLabel;
		params.LeaderboardIndexIn = LeaderboardIndexIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Statistics_LeaderboardItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.Construct");
		
		UUI_Statistics_LeaderboardItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Statistics_LeaderboardItem_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.OnSynchronizeProperties");
		
		UUI_Statistics_LeaderboardItem_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.BndEvt__LeaderboardItemButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Statistics_LeaderboardItem_C::BndEvt__LeaderboardItemButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.BndEvt__LeaderboardItemButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Statistics_LeaderboardItem_C_BndEvt__LeaderboardItemButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.ExecuteUbergraph_UI_Statistics_LeaderboardItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_LeaderboardItem_C::ExecuteUbergraph_UI_Statistics_LeaderboardItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.ExecuteUbergraph_UI_Statistics_LeaderboardItem");
		
		UUI_Statistics_LeaderboardItem_C_ExecuteUbergraph_UI_Statistics_LeaderboardItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.OnLeaderboardItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Statistics_LeaderboardItem_C::OnLeaderboardItemClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.OnLeaderboardItemClicked__DelegateSignature");
		
		UUI_Statistics_LeaderboardItem_C_OnLeaderboardItemClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Statistics_LeaderboardItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Statistics_LeaderboardItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C");
		return ptr;
	}

}


