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
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.HandleInputTextChanged
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::HandleInputTextChanged(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.HandleInputTextChanged");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_HandleInputTextChanged_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.XpToConvertTextFieldChanged
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, OutParm, ReferenceParm)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::XpToConvertTextFieldChanged(class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.XpToConvertTextFieldChanged");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_XpToConvertTextFieldChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.CapInputText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InputText                                                  (Parm)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::CapInputText(const class FText& InputText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.CapInputText");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_CapInputText_Params params {};
		params.InputText = InputText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.UpdateXpToConvert
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::UpdateXpToConvert(int32_t amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.UpdateXpToConvert");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_UpdateXpToConvert_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.Action");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.HandleUnfocus");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.HandleFocus");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.BroadcastAndSetTextForXp
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            XpToConvert                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::BroadcastAndSetTextForXp(int32_t XpToConvert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.BroadcastAndSetTextForXp");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_BroadcastAndSetTextForXp_Params params {};
		params.XpToConvert = XpToConvert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.XpToConvertTextFieldCommitted
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::XpToConvertTextFieldCommitted(class FText* Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.XpToConvertTextFieldCommitted");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_XpToConvertTextFieldCommitted_Params params {};
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.GetXpToConvert
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            XpToConvert                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::GetXpToConvert(int32_t* XpToConvert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.GetXpToConvert");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_GetXpToConvert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (XpToConvert != nullptr)
			*XpToConvert = params.XpToConvert;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.Setup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.Setup");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.Construct");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.BndEvt__RootButton_K2Node_ComponentBoundEvent_135_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::BndEvt__RootButton_K2Node_ComponentBoundEvent_135_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.BndEvt__RootButton_K2Node_ComponentBoundEvent_135_OnButtonHoverEvent__DelegateSignature");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_BndEvt__RootButton_K2Node_ComponentBoundEvent_135_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.BndEvt__RootButton_K2Node_ComponentBoundEvent_147_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::BndEvt__RootButton_K2Node_ComponentBoundEvent_147_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.BndEvt__RootButton_K2Node_ComponentBoundEvent_147_OnButtonHoverEvent__DelegateSignature");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_BndEvt__RootButton_K2Node_ComponentBoundEvent_147_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.OnActionReceived");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.BndEvt__CustomXpConversion_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::BndEvt__CustomXpConversion_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.BndEvt__CustomXpConversion_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_BndEvt__CustomXpConversion_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.ExecuteUbergraph_UI_MarketPanel_Currency_ShipXPConversionItem
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::ExecuteUbergraph_UI_MarketPanel_Currency_ShipXPConversionItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.ExecuteUbergraph_UI_MarketPanel_Currency_ShipXPConversionItem");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_ExecuteUbergraph_UI_MarketPanel_Currency_ShipXPConversionItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.OnItemUnfocused__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::OnItemUnfocused__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.OnItemUnfocused__DelegateSignature");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_OnItemUnfocused__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.OnItemFocused__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::OnItemFocused__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.OnItemFocused__DelegateSignature");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_OnItemFocused__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.OnItemHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::OnItemHovered__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.OnItemHovered__DelegateSignature");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_OnItemHovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.OnCustomShipXpToConvertUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRequestXpConversionShip                    RequestData                                                (Parm)
	 */
	void UUI_MarketPanel_Currency_ShipXPConversionItem_C::OnCustomShipXpToConvertUpdated__DelegateSignature(const struct FRequestXpConversionShip& RequestData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C.OnCustomShipXpToConvertUpdated__DelegateSignature");
		
		UUI_MarketPanel_Currency_ShipXPConversionItem_C_OnCustomShipXpToConvertUpdated__DelegateSignature_Params params {};
		params.RequestData = RequestData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketPanel_Currency_ShipXPConversionItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketPanel_Currency_ShipXPConversionItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C");
		return ptr;
	}

}


