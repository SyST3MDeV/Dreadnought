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
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetFlagshipStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFlagship                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::SetFlagshipStatus(bool IsFlagship)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetFlagshipStatus");
		
		UUI_Button_ManageFleet_Ship_C_SetFlagshipStatus_Params params {};
		params.IsFlagship = IsFlagship;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.InitializeShipWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ManageFleet_Ship_C::InitializeShipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.InitializeShipWidget");
		
		UUI_Button_ManageFleet_Ship_C_InitializeShipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.IsChildVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UPanelWidget*                                Container                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ChildIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UUI_Button_ManageFleet_Ship_C::IsChildVisible(class UPanelWidget* Container, int32_t ChildIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.IsChildVisible");
		
		UUI_Button_ManageFleet_Ship_C_IsChildVisible_Params params {};
		params.Container = Container;
		params.ChildIndex = ChildIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.GetVisibleButtonsArray
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UVerticalBox*                                ButtonContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UWidget*>                             VisibleButtons                                             (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::GetVisibleButtonsArray(class UVerticalBox* ButtonContainer, TArray<class UWidget*>* VisibleButtons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.GetVisibleButtonsArray");
		
		UUI_Button_ManageFleet_Ship_C_GetVisibleButtonsArray_Params params {};
		params.ButtonContainer = ButtonContainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VisibleButtons != nullptr)
			*VisibleButtons = params.VisibleButtons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Focused                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::SetFocus(bool Focused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetFocus");
		
		UUI_Button_ManageFleet_Ship_C_SetFocus_Params params {};
		params.Focused = Focused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.UnfocusAllMenuButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ManageFleet_Ship_C::UnfocusAllMenuButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.UnfocusAllMenuButtons");
		
		UUI_Button_ManageFleet_Ship_C_UnfocusAllMenuButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.GetMenuButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_Button_Generic_C*                        Button                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::GetMenuButton(int32_t index, class UUI_Button_Generic_C** Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.GetMenuButton");
		
		UUI_Button_ManageFleet_Ship_C_GetMenuButton_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Button != nullptr)
			*Button = params.Button;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.GetNumVisibleMenuButtons
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	int32_t UUI_Button_ManageFleet_Ship_C::GetNumVisibleMenuButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.GetNumVisibleMenuButtons");
		
		UUI_Button_ManageFleet_Ship_C_GetNumVisibleMenuButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.GetIsInMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsInMenu                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::GetIsInMenu(bool* IsInMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.GetIsInMenu");
		
		UUI_Button_ManageFleet_Ship_C_GetIsInMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInMenu != nullptr)
			*IsInMenu = params.IsInMenu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ManageFleet_Ship_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.Setup");
		
		UUI_Button_ManageFleet_Ship_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ManageFleet_Ship_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleFocus");
		
		UUI_Button_ManageFleet_Ship_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ManageFleet_Ship_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleUnfocus");
		
		UUI_Button_ManageFleet_Ship_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleActionTechTree
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ManageFleet_Ship_C::HandleActionTechTree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleActionTechTree");
		
		UUI_Button_ManageFleet_Ship_C_HandleActionTechTree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleActionRemove
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ManageFleet_Ship_C::HandleActionRemove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleActionRemove");
		
		UUI_Button_ManageFleet_Ship_C_HandleActionRemove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleActionEditLoadout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ManageFleet_Ship_C::HandleActionEditLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleActionEditLoadout");
		
		UUI_Button_ManageFleet_Ship_C_HandleActionEditLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleActionAppearance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ManageFleet_Ship_C::HandleActionAppearance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleActionAppearance");
		
		UUI_Button_ManageFleet_Ship_C_HandleActionAppearance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetModulesVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::SetModulesVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetModulesVisible");
		
		UUI_Button_ManageFleet_Ship_C_SetModulesVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetupLoadoutData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUILoadoutData                              LoadoutData                                                (Parm)
	 */
	void UUI_Button_ManageFleet_Ship_C::SetupLoadoutData(const struct FUILoadoutData& LoadoutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetupLoadoutData");
		
		UUI_Button_ManageFleet_Ship_C_SetupLoadoutData_Params params {};
		params.LoadoutData = LoadoutData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetupBriefings
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FUIOfficerBriefingsData>             Briefings                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Button_ManageFleet_Ship_C::SetupBriefings(TArray<struct FUIOfficerBriefingsData>* Briefings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetupBriefings");
		
		UUI_Button_ManageFleet_Ship_C_SetupBriefings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Briefings != nullptr)
			*Briefings = params.Briefings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetupModules
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FUIModuleData>                       moduleData                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Button_ManageFleet_Ship_C::SetupModules(TArray<struct FUIModuleData>* moduleData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetupModules");
		
		UUI_Button_ManageFleet_Ship_C_SetupModules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (moduleData != nullptr)
			*moduleData = params.moduleData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetupWeapons
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FUIWeaponData>                       WeaponData                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Button_ManageFleet_Ship_C::SetupWeapons(TArray<struct FUIWeaponData>* WeaponData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetupWeapons");
		
		UUI_Button_ManageFleet_Ship_C_SetupWeapons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponData != nullptr)
			*WeaponData = params.WeaponData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetupData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_ManageFleet_Ship_C::SetupData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetupData");
		
		UUI_Button_ManageFleet_Ship_C_SetupData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.ShowMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::ShowMenu(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.ShowMenu");
		
		UUI_Button_ManageFleet_Ship_C_ShowMenu_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Button_ManageFleet_Ship_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.Construct");
		
		UUI_Button_ManageFleet_Ship_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Button_ManageFleet_Ship_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.OnSynchronizeProperties");
		
		UUI_Button_ManageFleet_Ship_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_ManageFleet_Ship_C::BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Button_ManageFleet_Ship_C_BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_ManageFleet_Ship_C::BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Button_ManageFleet_Ship_C_BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__EditLoadoutButton_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::BndEvt__EditLoadoutButton_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__EditLoadoutButton_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature");
		
		UUI_Button_ManageFleet_Ship_C_BndEvt__EditLoadoutButton_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__RemoveFromFleetButton_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::BndEvt__RemoveFromFleetButton_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__RemoveFromFleetButton_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature");
		
		UUI_Button_ManageFleet_Ship_C_BndEvt__RemoveFromFleetButton_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__ViewDetailsButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::BndEvt__ViewDetailsButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__ViewDetailsButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");
		
		UUI_Button_ManageFleet_Ship_C_BndEvt__ViewDetailsButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_600_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_ManageFleet_Ship_C::BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_600_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_600_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Button_ManageFleet_Ship_C_BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_600_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__SetFlagshipButton_K2Node_ComponentBoundEvent_429_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::BndEvt__SetFlagshipButton_K2Node_ComponentBoundEvent_429_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__SetFlagshipButton_K2Node_ComponentBoundEvent_429_OnButtonClicked__DelegateSignature");
		
		UUI_Button_ManageFleet_Ship_C_BndEvt__SetFlagshipButton_K2Node_ComponentBoundEvent_429_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.ExecuteUbergraph_UI_Button_ManageFleet_Ship
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::ExecuteUbergraph_UI_Button_ManageFleet_Ship(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.ExecuteUbergraph_UI_Button_ManageFleet_Ship");
		
		UUI_Button_ManageFleet_Ship_C_ExecuteUbergraph_UI_Button_ManageFleet_Ship_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetAsFlagshipClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            flagshipID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::SetAsFlagshipClicked__DelegateSignature(int32_t flagshipID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetAsFlagshipClicked__DelegateSignature");
		
		UUI_Button_ManageFleet_Ship_C_SetAsFlagshipClicked__DelegateSignature_Params params {};
		params.flagshipID = flagshipID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.OnUnHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManageFleet_Ship_C*               source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::OnUnHovered__DelegateSignature(class UUI_Button_ManageFleet_Ship_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.OnUnHovered__DelegateSignature");
		
		UUI_Button_ManageFleet_Ship_C_OnUnHovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::OnClicked__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.OnClicked__DelegateSignature");
		
		UUI_Button_ManageFleet_Ship_C_OnClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.OnHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::OnHovered__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.OnHovered__DelegateSignature");
		
		UUI_Button_ManageFleet_Ship_C_OnHovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.ViewTechTreeClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ShipId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::ViewTechTreeClicked__DelegateSignature(int32_t ShipId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.ViewTechTreeClicked__DelegateSignature");
		
		UUI_Button_ManageFleet_Ship_C_ViewTechTreeClicked__DelegateSignature_Params params {};
		params.ShipId = ShipId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.RemoveFromFleetClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            shipID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::RemoveFromFleetClicked__DelegateSignature(int32_t shipID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.RemoveFromFleetClicked__DelegateSignature");
		
		UUI_Button_ManageFleet_Ship_C_RemoveFromFleetClicked__DelegateSignature_Params params {};
		params.shipID = shipID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.EditLoadoutClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ShipId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::EditLoadoutClicked__DelegateSignature(int32_t ShipId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.EditLoadoutClicked__DelegateSignature");
		
		UUI_Button_ManageFleet_Ship_C_EditLoadoutClicked__DelegateSignature_Params params {};
		params.ShipId = ShipId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.EditAppearanceClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ShipId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ManageFleet_Ship_C::EditAppearanceClicked__DelegateSignature(int32_t ShipId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.EditAppearanceClicked__DelegateSignature");
		
		UUI_Button_ManageFleet_Ship_C_EditAppearanceClicked__DelegateSignature_Params params {};
		params.ShipId = ShipId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Button_ManageFleet_Ship_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Button_ManageFleet_Ship_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C");
		return ptr;
	}

}


