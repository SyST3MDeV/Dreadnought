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
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_Button_Module_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.Action");
		
		UUI_Generic_Button_Module_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetDataFromStruct
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUIGenericButtonModuleData                  Data                                                       (Parm)
	 */
	void UUI_Generic_Button_Module_C::SetDataFromStruct(const struct FUIGenericButtonModuleData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetDataFromStruct");
		
		UUI_Generic_Button_Module_C_SetDataFromStruct_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.ApplyItemState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_Button_Module_C::ApplyItemState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.ApplyItemState");
		
		UUI_Generic_Button_Module_C_ApplyItemState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetClassificationIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  ClassificationIcon                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Button_Module_C::SetClassificationIcon(class UTexture2D* ClassificationIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetClassificationIcon");
		
		UUI_Generic_Button_Module_C_SetClassificationIcon_Params params {};
		params.ClassificationIcon = ClassificationIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetClassificationTier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TierLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsHeroShip                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Button_Module_C::SetClassificationTier(int32_t TierLevel, bool IsHeroShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetClassificationTier");
		
		UUI_Generic_Button_Module_C_SetClassificationTier_Params params {};
		params.TierLevel = TierLevel;
		params.IsHeroShip = IsHeroShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Name                                                       (Parm)
	 */
	void UUI_Generic_Button_Module_C::SetName(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetName");
		
		UUI_Generic_Button_Module_C_SetName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  IconTexture                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Button_Module_C::SetIcon(class UTexture2D* IconTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetIcon");
		
		UUI_Generic_Button_Module_C_SetIcon_Params params {};
		params.IconTexture = IconTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_Button_Module_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.Setup");
		
		UUI_Generic_Button_Module_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_Button_Module_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.HandleUnfocus");
		
		UUI_Generic_Button_Module_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_Button_Module_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.HandleFocus");
		
		UUI_Generic_Button_Module_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.ShowModuleSlot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Button_Module_C::ShowModuleSlot(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.ShowModuleSlot");
		
		UUI_Generic_Button_Module_C_ShowModuleSlot_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  ModuleTexture                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        ModuleName                                                 (Parm)
	 * 		int32_t                                            tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  SlotIconTexture                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowTierIcon                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShowEquippedMark                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsOwned                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYTechTreeItemState                                ItemState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FYUIItemPriceData                           ResearchPrice                                              (Parm)
	 * 		struct FYUIItemPriceData                           PurchasePrice                                              (Parm)
	 */
	void UUI_Generic_Button_Module_C::SetData(class UTexture2D* ModuleTexture, const class FText& ModuleName, int32_t tier, class UTexture2D* SlotIconTexture, bool ShowTierIcon, int32_t index, bool ShowEquippedMark, bool IsOwned, EYTechTreeItemState ItemState, const struct FYUIItemPriceData& ResearchPrice, const struct FYUIItemPriceData& PurchasePrice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetData");
		
		UUI_Generic_Button_Module_C_SetData_Params params {};
		params.ModuleTexture = ModuleTexture;
		params.ModuleName = ModuleName;
		params.tier = tier;
		params.SlotIconTexture = SlotIconTexture;
		params.ShowTierIcon = ShowTierIcon;
		params.index = index;
		params.ShowEquippedMark = ShowEquippedMark;
		params.IsOwned = IsOwned;
		params.ItemState = ItemState;
		params.ResearchPrice = ResearchPrice;
		params.PurchasePrice = PurchasePrice;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Generic_Button_Module_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Generic_Button_Module_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Generic_Button_Module_C::BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Generic_Button_Module_C_BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Generic_Button_Module_C::BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Generic_Button_Module_C_BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Generic_Button_Module_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.Construct");
		
		UUI_Generic_Button_Module_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Button_Module_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.PreConstruct");
		
		UUI_Generic_Button_Module_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Generic_Button_Module_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnActionReceived");
		
		UUI_Generic_Button_Module_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.ExecuteUbergraph_UI_Generic_Button_Module
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Button_Module_C::ExecuteUbergraph_UI_Generic_Button_Module(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.ExecuteUbergraph_UI_Generic_Button_Module");
		
		UUI_Generic_Button_Module_C_ExecuteUbergraph_UI_Generic_Button_Module_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnGenericModuleButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButton                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Button_Module_C::OnGenericModuleButtonClicked__DelegateSignature(class UUI_Generic_Button_Module_C* ModuleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnGenericModuleButtonClicked__DelegateSignature");
		
		UUI_Generic_Button_Module_C_OnGenericModuleButtonClicked__DelegateSignature_Params params {};
		params.ModuleButton = ModuleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnOfficerButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYOfficerType                                      NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Button_Module_C::OnOfficerButtonClicked__DelegateSignature(EYOfficerType NewParam, int32_t CurrentIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnOfficerButtonClicked__DelegateSignature");
		
		UUI_Generic_Button_Module_C_OnOfficerButtonClicked__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		params.CurrentIndex = CurrentIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnModuleButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYAbilityCategory                                  NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Button_Module_C::OnModuleButtonClicked__DelegateSignature(EYAbilityCategory NewParam, int32_t CurrentIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnModuleButtonClicked__DelegateSignature");
		
		UUI_Generic_Button_Module_C_OnModuleButtonClicked__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		params.CurrentIndex = CurrentIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnWeaponButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYSlotType                                         NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Button_Module_C::OnWeaponButtonClicked__DelegateSignature(EYSlotType NewParam, int32_t CurrentIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnWeaponButtonClicked__DelegateSignature");
		
		UUI_Generic_Button_Module_C_OnWeaponButtonClicked__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		params.CurrentIndex = CurrentIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnDetailsButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Button_Module_C::OnDetailsButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnDetailsButtonClicked__DelegateSignature");
		
		UUI_Generic_Button_Module_C_OnDetailsButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnButtonUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Generic_Button_Module_C::OnButtonUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnButtonUnhovered__DelegateSignature");
		
		UUI_Generic_Button_Module_C_OnButtonUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButton                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Button_Module_C::OnButtonHovered__DelegateSignature(class UUI_Generic_Button_Module_C* ModuleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnButtonHovered__DelegateSignature");
		
		UUI_Generic_Button_Module_C_OnButtonHovered__DelegateSignature_Params params {};
		params.ModuleButton = ModuleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ClickedItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Button_Module_C::OnButtonClicked__DelegateSignature(class UUI_Generic_Button_Module_C* ClickedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnButtonClicked__DelegateSignature");
		
		UUI_Generic_Button_Module_C_OnButtonClicked__DelegateSignature_Params params {};
		params.ClickedItem = ClickedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_Button_Module_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_Button_Module_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_Button_Module.UI_Generic_Button_Module_C");
		return ptr;
	}

}


