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
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.GetIsSelected
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               isSelected                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_CategoryButton_C::GetIsSelected(bool* isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.GetIsSelected");
		
		UUI_Market_CategoryButton_C_GetIsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isSelected != nullptr)
			*isSelected = params.isSelected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.SetThemeColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_CategoryButton_C::SetThemeColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.SetThemeColor");
		
		UUI_Market_CategoryButton_C_SetThemeColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.UpdateLoadoutName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ButtonLabel                                                (Parm)
	 */
	void UUI_Market_CategoryButton_C::UpdateLoadoutName(const class FText& ButtonLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.UpdateLoadoutName");
		
		UUI_Market_CategoryButton_C_UpdateLoadoutName_Params params {};
		params.ButtonLabel = ButtonLabel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.ShowEditLoadoutNameButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_CategoryButton_C::ShowEditLoadoutNameButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.ShowEditLoadoutNameButton");
		
		UUI_Market_CategoryButton_C_ShowEditLoadoutNameButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.SetupWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_CategoryButton_C::SetupWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.SetupWidget");
		
		UUI_Market_CategoryButton_C_SetupWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.SetSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_CategoryButton_C::SetSelected(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.SetSelected");
		
		UUI_Market_CategoryButton_C_SetSelected_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.SetupIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_CategoryButton_C::SetupIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.SetupIcon");
		
		UUI_Market_CategoryButton_C_SetupIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_CategoryButton_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.HandleUnfocus");
		
		UUI_Market_CategoryButton_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_CategoryButton_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.HandleFocus");
		
		UUI_Market_CategoryButton_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Market_CategoryButton_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Market_CategoryButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Market_CategoryButton_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Market_CategoryButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Market_CategoryButton_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Market_CategoryButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_CategoryButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.PreConstruct");
		
		UUI_Market_CategoryButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_386_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_CategoryButton_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_386_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_386_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UUI_Market_CategoryButton_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_386_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.BndEvt__ButtonEditName_K2Node_ComponentBoundEvent_420_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Market_CategoryButton_C::BndEvt__ButtonEditName_K2Node_ComponentBoundEvent_420_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.BndEvt__ButtonEditName_K2Node_ComponentBoundEvent_420_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Market_CategoryButton_C_BndEvt__ButtonEditName_K2Node_ComponentBoundEvent_420_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Market_CategoryButton_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.OnActionReceived");
		
		UUI_Market_CategoryButton_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.ExecuteUbergraph_UI_Market_CategoryButton
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_CategoryButton_C::ExecuteUbergraph_UI_Market_CategoryButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.ExecuteUbergraph_UI_Market_CategoryButton");
		
		UUI_Market_CategoryButton_C_ExecuteUbergraph_UI_Market_CategoryButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.OnItemHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_CategoryButton_C::OnItemHovered__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.OnItemHovered__DelegateSignature");
		
		UUI_Market_CategoryButton_C_OnItemHovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.OnSaveLoadoutNameClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Market_CategoryButton_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_CategoryButton_C::OnSaveLoadoutNameClicked__DelegateSignature(class UUI_Market_CategoryButton_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.OnSaveLoadoutNameClicked__DelegateSignature");
		
		UUI_Market_CategoryButton_C_OnSaveLoadoutNameClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.OnLoadoutButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Market_CategoryButton_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_CategoryButton_C::OnLoadoutButtonClicked__DelegateSignature(class UUI_Market_CategoryButton_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.OnLoadoutButtonClicked__DelegateSignature");
		
		UUI_Market_CategoryButton_C_OnLoadoutButtonClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Market_CategoryButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Market_CategoryButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Market_CategoryButton.UI_Market_CategoryButton_C");
		return ptr;
	}

}


