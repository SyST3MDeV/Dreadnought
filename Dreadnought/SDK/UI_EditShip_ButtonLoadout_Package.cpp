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
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.EditLoadoutNameAction
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_ButtonLoadout_C::EditLoadoutNameAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.EditLoadoutNameAction");
		
		UUI_EditShip_ButtonLoadout_C_EditLoadoutNameAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_ButtonLoadout_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.Action");
		
		UUI_EditShip_ButtonLoadout_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.Deselect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_ButtonLoadout_C::Deselect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.Deselect");
		
		UUI_EditShip_ButtonLoadout_C_Deselect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.Select
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_ButtonLoadout_C::Select()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.Select");
		
		UUI_EditShip_ButtonLoadout_C_Select_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.UpdateLoadoutName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ButtonLabel                                                (Parm)
	 */
	void UUI_EditShip_ButtonLoadout_C::UpdateLoadoutName(const class FText& ButtonLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.UpdateLoadoutName");
		
		UUI_EditShip_ButtonLoadout_C_UpdateLoadoutName_Params params {};
		params.ButtonLabel = ButtonLabel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.ShowEditLoadoutNameButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_ButtonLoadout_C::ShowEditLoadoutNameButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.ShowEditLoadoutNameButton");
		
		UUI_EditShip_ButtonLoadout_C_ShowEditLoadoutNameButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.SetupWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_ButtonLoadout_C::SetupWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.SetupWidget");
		
		UUI_EditShip_ButtonLoadout_C_SetupWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.SetSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_ButtonLoadout_C::SetSelected(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.SetSelected");
		
		UUI_EditShip_ButtonLoadout_C_SetSelected_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.SetupIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_ButtonLoadout_C::SetupIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.SetupIcon");
		
		UUI_EditShip_ButtonLoadout_C_SetupIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_ButtonLoadout_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.HandleUnfocus");
		
		UUI_EditShip_ButtonLoadout_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_ButtonLoadout_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.HandleFocus");
		
		UUI_EditShip_ButtonLoadout_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_ButtonLoadout_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.Construct");
		
		UUI_EditShip_ButtonLoadout_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_ButtonLoadout_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditShip_ButtonLoadout_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_ButtonLoadout_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditShip_ButtonLoadout_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_ButtonLoadout_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature");
		
		UUI_EditShip_ButtonLoadout_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_ButtonLoadout_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.PreConstruct");
		
		UUI_EditShip_ButtonLoadout_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_386_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_ButtonLoadout_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_386_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_386_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UUI_EditShip_ButtonLoadout_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_386_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.BndEvt__ButtonEditName_K2Node_ComponentBoundEvent_420_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_ButtonLoadout_C::BndEvt__ButtonEditName_K2Node_ComponentBoundEvent_420_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.BndEvt__ButtonEditName_K2Node_ComponentBoundEvent_420_OnButtonClickedEvent__DelegateSignature");
		
		UUI_EditShip_ButtonLoadout_C_BndEvt__ButtonEditName_K2Node_ComponentBoundEvent_420_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_ButtonLoadout_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.OnActionReceived");
		
		UUI_EditShip_ButtonLoadout_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.ExecuteUbergraph_UI_EditShip_ButtonLoadout
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_ButtonLoadout_C::ExecuteUbergraph_UI_EditShip_ButtonLoadout(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.ExecuteUbergraph_UI_EditShip_ButtonLoadout");
		
		UUI_EditShip_ButtonLoadout_C_ExecuteUbergraph_UI_EditShip_ButtonLoadout_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.OnSaveLoadoutNameClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_EditShip_ButtonLoadout_C*                source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_ButtonLoadout_C::OnSaveLoadoutNameClicked__DelegateSignature(class UUI_EditShip_ButtonLoadout_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.OnSaveLoadoutNameClicked__DelegateSignature");
		
		UUI_EditShip_ButtonLoadout_C_OnSaveLoadoutNameClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.OnLoadoutButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_EditShip_ButtonLoadout_C*                source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_ButtonLoadout_C::OnLoadoutButtonClicked__DelegateSignature(class UUI_EditShip_ButtonLoadout_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.OnLoadoutButtonClicked__DelegateSignature");
		
		UUI_EditShip_ButtonLoadout_C_OnLoadoutButtonClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EditShip_ButtonLoadout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditShip_ButtonLoadout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C");
		return ptr;
	}

}


