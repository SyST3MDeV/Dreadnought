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
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.UpdateAvailableItemsHeader
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InputPin                                                   (Parm)
	 */
	void UUI_EditShip_Panel_Appearance_C::UpdateAvailableItemsHeader(const class FText& InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.UpdateAvailableItemsHeader");
		
		UUI_EditShip_Panel_Appearance_C_UpdateAvailableItemsHeader_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.HandleModuleButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButton                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_Appearance_C::HandleModuleButtonClicked(class UUI_Generic_Button_Module_C* ModuleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.HandleModuleButtonClicked");
		
		UUI_EditShip_Panel_Appearance_C_HandleModuleButtonClicked_Params params {};
		params.ModuleButton = ModuleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.GetAvailableScrollBox
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UScrollBox*                                  ScrollBox_1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_Appearance_C::GetAvailableScrollBox(class UScrollBox** ScrollBox_1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.GetAvailableScrollBox");
		
		UUI_EditShip_Panel_Appearance_C_GetAvailableScrollBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScrollBox_1 != nullptr)
			*ScrollBox_1 = params.ScrollBox_1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.HandleModuleIndexClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_Appearance_C::HandleModuleIndexClicked(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.HandleModuleIndexClicked");
		
		UUI_EditShip_Panel_Appearance_C_HandleModuleIndexClicked_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.PopulateModule
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYUILoadoutItemType                                Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButton                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_Appearance_C::PopulateModule(EYUILoadoutItemType Slot, class UUI_Generic_Button_Module_C* ModuleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.PopulateModule");
		
		UUI_EditShip_Panel_Appearance_C_PopulateModule_Params params {};
		params.Slot = Slot;
		params.ModuleButton = ModuleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.GetItemSlotFromIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYUILoadoutItemType                                ItemSlotType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_Appearance_C::GetItemSlotFromIndex(int32_t index, EYUILoadoutItemType* ItemSlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.GetItemSlotFromIndex");
		
		UUI_EditShip_Panel_Appearance_C_GetItemSlotFromIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemSlotType != nullptr)
			*ItemSlotType = params.ItemSlotType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.UpdateSelectedAppearanceModule
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            selectedIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_Appearance_C::UpdateSelectedAppearanceModule(int32_t selectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.UpdateSelectedAppearanceModule");
		
		UUI_EditShip_Panel_Appearance_C_UpdateSelectedAppearanceModule_Params params {};
		params.selectedIndex = selectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.ShowModuleList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_Appearance_C::ShowModuleList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.ShowModuleList");
		
		UUI_EditShip_Panel_Appearance_C_ShowModuleList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.PopulateAvailableModulesForCurrentItem
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_Appearance_C::PopulateAvailableModulesForCurrentItem(int32_t CurrentIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.PopulateAvailableModulesForCurrentItem");
		
		UUI_EditShip_Panel_Appearance_C_PopulateAvailableModulesForCurrentItem_Params params {};
		params.CurrentIndex = CurrentIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.HideModuleList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_Appearance_C::HideModuleList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.HideModuleList");
		
		UUI_EditShip_Panel_Appearance_C_HideModuleList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.GetAvailableModules
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButton                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FUIGenericButtonModuleData>          AvailableModules                                           (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_EditShip_Panel_Appearance_C::GetAvailableModules(class UUI_Generic_Button_Module_C* ModuleButton, TArray<struct FUIGenericButtonModuleData>* AvailableModules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.GetAvailableModules");
		
		UUI_EditShip_Panel_Appearance_C_GetAvailableModules_Params params {};
		params.ModuleButton = ModuleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableModules != nullptr)
			*AvailableModules = params.AvailableModules;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.FindSelectedModuleButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButtonToFind                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UUI_Generic_Button_Module_C*>         ModuleList                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButton                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_Appearance_C::FindSelectedModuleButton(class UUI_Generic_Button_Module_C* ModuleButtonToFind, TArray<class UUI_Generic_Button_Module_C*>* ModuleList, class UUI_Generic_Button_Module_C** ModuleButton, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.FindSelectedModuleButton");
		
		UUI_EditShip_Panel_Appearance_C_FindSelectedModuleButton_Params params {};
		params.ModuleButtonToFind = ModuleButtonToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModuleList != nullptr)
			*ModuleList = params.ModuleList;
		if (ModuleButton != nullptr)
			*ModuleButton = params.ModuleButton;
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.AddHorizontalBoxChildrenToArray
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPanelWidget*                                TargetHBox                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_Appearance_C::AddHorizontalBoxChildrenToArray(class UPanelWidget* TargetHBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.AddHorizontalBoxChildrenToArray");
		
		UUI_EditShip_Panel_Appearance_C_AddHorizontalBoxChildrenToArray_Params params {};
		params.TargetHBox = TargetHBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.SetupAppearanceModules
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_Appearance_C::SetupAppearanceModules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.SetupAppearanceModules");
		
		UUI_EditShip_Panel_Appearance_C_SetupAppearanceModules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.UpdateCurrentAppearance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_Appearance_C::UpdateCurrentAppearance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.UpdateCurrentAppearance");
		
		UUI_EditShip_Panel_Appearance_C_UpdateCurrentAppearance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_Appearance_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.Construct");
		
		UUI_EditShip_Panel_Appearance_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.OnAppearanceModuleButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButton                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_Appearance_C::OnAppearanceModuleButtonClicked(class UUI_Generic_Button_Module_C* ModuleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.OnAppearanceModuleButtonClicked");
		
		UUI_EditShip_Panel_Appearance_C_OnAppearanceModuleButtonClicked_Params params {};
		params.ModuleButton = ModuleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.OnAvailableModuleClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButton                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_Appearance_C::OnAvailableModuleClicked(class UUI_Generic_Button_Module_C* ModuleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.OnAvailableModuleClicked");
		
		UUI_EditShip_Panel_Appearance_C_OnAvailableModuleClicked_Params params {};
		params.ModuleButton = ModuleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.OnAvailableModuleHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButton                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_Appearance_C::OnAvailableModuleHovered(class UUI_Generic_Button_Module_C* ModuleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.OnAvailableModuleHovered");
		
		UUI_EditShip_Panel_Appearance_C_OnAvailableModuleHovered_Params params {};
		params.ModuleButton = ModuleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.BndEvt__VanityContainerButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_Panel_Appearance_C::BndEvt__VanityContainerButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.BndEvt__VanityContainerButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditShip_Panel_Appearance_C_BndEvt__VanityContainerButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.BndEvt__VanityContainerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_Panel_Appearance_C::BndEvt__VanityContainerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.BndEvt__VanityContainerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditShip_Panel_Appearance_C_BndEvt__VanityContainerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.BndEvt__ShipComponentsButtonContainer_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_Panel_Appearance_C::BndEvt__ShipComponentsButtonContainer_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.BndEvt__ShipComponentsButtonContainer_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditShip_Panel_Appearance_C_BndEvt__ShipComponentsButtonContainer_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.BndEvt__ShipComponentsButtonContainer_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_Panel_Appearance_C::BndEvt__ShipComponentsButtonContainer_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.BndEvt__ShipComponentsButtonContainer_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditShip_Panel_Appearance_C_BndEvt__ShipComponentsButtonContainer_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.OnShow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_Appearance_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.OnShow");
		
		UUI_EditShip_Panel_Appearance_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.OnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_Appearance_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.OnHide");
		
		UUI_EditShip_Panel_Appearance_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.HideComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Panel_Appearance_C::HideComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.HideComplete");
		
		UUI_EditShip_Panel_Appearance_C_HideComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.ExecuteUbergraph_UI_EditShip_Panel_Appearance
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Panel_Appearance_C::ExecuteUbergraph_UI_EditShip_Panel_Appearance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.ExecuteUbergraph_UI_EditShip_Panel_Appearance");
		
		UUI_EditShip_Panel_Appearance_C_ExecuteUbergraph_UI_EditShip_Panel_Appearance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EditShip_Panel_Appearance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditShip_Panel_Appearance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C");
		return ptr;
	}

}


