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
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleSetFlagshipID
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            flagshipID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::HandleSetFlagshipID(int32_t flagshipID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleSetFlagshipID");
		
		UUI_Screen_ManageFleet_C_HandleSetFlagshipID_Params params {};
		params.flagshipID = flagshipID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleSetFlagship
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::HandleSetFlagship()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleSetFlagship");
		
		UUI_Screen_ManageFleet_C_HandleSetFlagship_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetInitialFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::SetInitialFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetInitialFocus");
		
		UUI_Screen_ManageFleet_C_SetInitialFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetGamepadSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::SetGamepadSelection(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetGamepadSelection");
		
		UUI_Screen_ManageFleet_C_SetGamepadSelection_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.GetHeaderItemToFocus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             HeaderItemToFocus                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::GetHeaderItemToFocus(class UUI_DreadWidget** HeaderItemToFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.GetHeaderItemToFocus");
		
		UUI_Screen_ManageFleet_C_GetHeaderItemToFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeaderItemToFocus != nullptr)
			*HeaderItemToFocus = params.HeaderItemToFocus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleLeftRightInHeader
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::HandleLeftRightInHeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleLeftRightInHeader");
		
		UUI_Screen_ManageFleet_C_HandleLeftRightInHeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.IsHeaderFocused
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsHeaderFocused                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::IsHeaderFocused(bool* IsHeaderFocused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.IsHeaderFocused");
		
		UUI_Screen_ManageFleet_C_IsHeaderFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsHeaderFocused != nullptr)
			*IsHeaderFocused = params.IsHeaderFocused;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.ShowPlayButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldShow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::ShowPlayButton(bool shouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.ShowPlayButton");
		
		UUI_Screen_ManageFleet_C_ShowPlayButton_Params params {};
		params.shouldShow = shouldShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetupBattleBonus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::SetupBattleBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetupBattleBonus");
		
		UUI_Screen_ManageFleet_C_SetupBattleBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleToFromFleetItems
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::HandleToFromFleetItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleToFromFleetItems");
		
		UUI_Screen_ManageFleet_C_HandleToFromFleetItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.RemoveAddShipButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::RemoveAddShipButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.RemoveAddShipButton");
		
		UUI_Screen_ManageFleet_C_RemoveAddShipButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.BindShipMenuButtonHover
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManageFleet_Ship_C*               ShipItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::BindShipMenuButtonHover(class UUI_Button_ManageFleet_Ship_C* ShipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.BindShipMenuButtonHover");
		
		UUI_Screen_ManageFleet_C_BindShipMenuButtonHover_Params params {};
		params.ShipItem = ShipItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleFleetItemClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             FleetItem                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::HandleFleetItemClicked(class UUI_DreadWidget* FleetItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleFleetItemClicked");
		
		UUI_Screen_ManageFleet_C_HandleFleetItemClicked_Params params {};
		params.FleetItem = FleetItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleShipMenuButtonHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        MenuButton                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::HandleShipMenuButtonHovered(class UUI_Button_Generic_C* MenuButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleShipMenuButtonHovered");
		
		UUI_Screen_ManageFleet_C_HandleShipMenuButtonHovered_Params params {};
		params.MenuButton = MenuButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleShipItemUnhovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManageFleet_Ship_C*               FleetItem                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::HandleShipItemUnhovered(class UUI_Button_ManageFleet_Ship_C* FleetItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleShipItemUnhovered");
		
		UUI_Screen_ManageFleet_C_HandleShipItemUnhovered_Params params {};
		params.FleetItem = FleetItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleFleetItemHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             FleetItem                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::HandleFleetItemHovered(class UUI_DreadWidget* FleetItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleFleetItemHovered");
		
		UUI_Screen_ManageFleet_C_HandleFleetItemHovered_Params params {};
		params.FleetItem = FleetItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::HandleBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleBack");
		
		UUI_Screen_ManageFleet_C_HandleBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleFleetItemAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::HandleFleetItemAction(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleFleetItemAction");
		
		UUI_Screen_ManageFleet_C_HandleFleetItemAction_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleShipMenuButtonAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::HandleShipMenuButtonAction(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleShipMenuButtonAction");
		
		UUI_Screen_ManageFleet_C_HandleShipMenuButtonAction_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleShipItemAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManageFleet_Ship_C*               source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::HandleShipItemAction(class UUI_Button_ManageFleet_Ship_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleShipItemAction");
		
		UUI_Screen_ManageFleet_C_HandleShipItemAction_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.GetShipMenuButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UUI_Button_Generic_C* UUI_Screen_ManageFleet_C::GetShipMenuButton(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.GetShipMenuButton");
		
		UUI_Screen_ManageFleet_C_GetShipMenuButton_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.GetFleetItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UUI_DreadWidget* UUI_Screen_ManageFleet_C::GetFleetItem(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.GetFleetItem");
		
		UUI_Screen_ManageFleet_C_GetFleetItem_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.UnfocusShipMenuButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::UnfocusShipMenuButton(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.UnfocusShipMenuButton");
		
		UUI_Screen_ManageFleet_C_UnfocusShipMenuButton_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.FocusShipMenuButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::FocusShipMenuButton(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.FocusShipMenuButton");
		
		UUI_Screen_ManageFleet_C_FocusShipMenuButton_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.UnfocusFleetItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::UnfocusFleetItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.UnfocusFleetItem");
		
		UUI_Screen_ManageFleet_C_UnfocusFleetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.FocusFleetItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::FocusFleetItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.FocusFleetItem");
		
		UUI_Screen_ManageFleet_C_FocusFleetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.GetShipMenuIndexWrappingValues
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            CurrentIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumColumns                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            listLength                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::GetShipMenuIndexWrappingValues(int32_t* CurrentIndex, int32_t* NumColumns, int32_t* listLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.GetShipMenuIndexWrappingValues");
		
		UUI_Screen_ManageFleet_C_GetShipMenuIndexWrappingValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentIndex != nullptr)
			*CurrentIndex = params.CurrentIndex;
		if (NumColumns != nullptr)
			*NumColumns = params.NumColumns;
		if (listLength != nullptr)
			*listLength = params.listLength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.GetFleetItemIndexWrappingValues
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            CurrentIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumColumns                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            listLength                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::GetFleetItemIndexWrappingValues(int32_t* CurrentIndex, int32_t* NumColumns, int32_t* listLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.GetFleetItemIndexWrappingValues");
		
		UUI_Screen_ManageFleet_C_GetFleetItemIndexWrappingValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentIndex != nullptr)
			*CurrentIndex = params.CurrentIndex;
		if (NumColumns != nullptr)
			*NumColumns = params.NumColumns;
		if (listLength != nullptr)
			*listLength = params.listLength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.IsInShipMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::IsInShipMenu(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.IsInShipMenu");
		
		UUI_Screen_ManageFleet_C_IsInShipMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleDownGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::HandleDownGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleDownGranular");
		
		UUI_Screen_ManageFleet_C_HandleDownGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleUpGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::HandleUpGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleUpGranular");
		
		UUI_Screen_ManageFleet_C_HandleUpGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleRightGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::HandleRightGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleRightGranular");
		
		UUI_Screen_ManageFleet_C_HandleRightGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleLeftGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::HandleLeftGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleLeftGranular");
		
		UUI_Screen_ManageFleet_C_HandleLeftGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.Action");
		
		UUI_Screen_ManageFleet_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.Setup");
		
		UUI_Screen_ManageFleet_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::HandleInput(EUI_MenuActions Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleInput");
		
		UUI_Screen_ManageFleet_C_HandleInput_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleViewTechTreeAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ShipId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::HandleViewTechTreeAction(int32_t ShipId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleViewTechTreeAction");
		
		UUI_Screen_ManageFleet_C_HandleViewTechTreeAction_Params params {};
		params.ShipId = ShipId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandlePurchaseHeroShipAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManageFleet_HeroShip_C*           source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::HandlePurchaseHeroShipAction(class UUI_Button_ManageFleet_HeroShip_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandlePurchaseHeroShipAction");
		
		UUI_Screen_ManageFleet_C_HandlePurchaseHeroShipAction_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetupPurchaseHeroShipItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::SetupPurchaseHeroShipItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetupPurchaseHeroShipItem");
		
		UUI_Screen_ManageFleet_C_SetupPurchaseHeroShipItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleAddShipAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::HandleAddShipAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleAddShipAction");
		
		UUI_Screen_ManageFleet_C_HandleAddShipAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetupAddShipItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::SetupAddShipItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetupAddShipItem");
		
		UUI_Screen_ManageFleet_C_SetupAddShipItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetupDebugFleetData
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::SetupDebugFleetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetupDebugFleetData");
		
		UUI_Screen_ManageFleet_C_SetupDebugFleetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleRemoveFromFleetAction
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ShipId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::HandleRemoveFromFleetAction(int32_t ShipId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleRemoveFromFleetAction");
		
		UUI_Screen_ManageFleet_C_HandleRemoveFromFleetAction_Params params {};
		params.ShipId = ShipId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleEditLoadoutAction
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ShipId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::HandleEditLoadoutAction(int32_t ShipId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleEditLoadoutAction");
		
		UUI_Screen_ManageFleet_C_HandleEditLoadoutAction_Params params {};
		params.ShipId = ShipId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleEditAppearanceAction
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ShipId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::HandleEditAppearanceAction(int32_t ShipId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleEditAppearanceAction");
		
		UUI_Screen_ManageFleet_C_HandleEditAppearanceAction_Params params {};
		params.ShipId = ShipId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetupShipItem
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUIShipData                                 ShipLoadout                                                (Parm)
	 */
	void UUI_Screen_ManageFleet_C::SetupShipItem(const struct FUIShipData& ShipLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetupShipItem");
		
		UUI_Screen_ManageFleet_C_SetupShipItem_Params params {};
		params.ShipLoadout = ShipLoadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.PopulateFleetItems
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::PopulateFleetItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.PopulateFleetItems");
		
		UUI_Screen_ManageFleet_C_PopulateFleetItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.Construct");
		
		UUI_Screen_ManageFleet_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnTransitionIn");
		
		UUI_Screen_ManageFleet_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnTransitionOut");
		
		UUI_Screen_ManageFleet_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.TransitionInAnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::TransitionInAnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.TransitionInAnimComplete");
		
		UUI_Screen_ManageFleet_C_TransitionInAnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.TransitionOutAnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::TransitionOutAnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.TransitionOutAnimComplete");
		
		UUI_Screen_ManageFleet_C_TransitionOutAnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnLoadoutRemovedFromFleet
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::OnLoadoutRemovedFromFleet(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnLoadoutRemovedFromFleet");
		
		UUI_Screen_ManageFleet_C_OnLoadoutRemovedFromFleet_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnLoadoutAddedToFleet
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::OnLoadoutAddedToFleet(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnLoadoutAddedToFleet");
		
		UUI_Screen_ManageFleet_C_OnLoadoutAddedToFleet_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnNavigationEvent");
		
		UUI_Screen_ManageFleet_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnMatchmakingStopped
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::OnMatchmakingStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnMatchmakingStopped");
		
		UUI_Screen_ManageFleet_C_OnMatchmakingStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnMatchmakingStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::OnMatchmakingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnMatchmakingStarted");
		
		UUI_Screen_ManageFleet_C_OnMatchmakingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_12_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_12_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_12_OnButtonClicked__DelegateSignature");
		
		UUI_Screen_ManageFleet_C_BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_12_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnFleetUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_ManageFleet_C::OnFleetUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnFleetUpdated");
		
		UUI_Screen_ManageFleet_C_OnFleetUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.ExecuteUbergraph_UI_Screen_ManageFleet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManageFleet_C::ExecuteUbergraph_UI_Screen_ManageFleet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.ExecuteUbergraph_UI_Screen_ManageFleet");
		
		UUI_Screen_ManageFleet_C_ExecuteUbergraph_UI_Screen_ManageFleet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_ManageFleet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_ManageFleet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_ManageFleet.UI_Screen_ManageFleet_C");
		return ptr;
	}

}


