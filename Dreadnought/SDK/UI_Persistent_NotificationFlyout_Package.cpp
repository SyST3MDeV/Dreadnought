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
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.DismissCurrentNotification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_NotificationFlyout_C::DismissCurrentNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.DismissCurrentNotification");
		
		UUI_Persistent_NotificationFlyout_C_DismissCurrentNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.UpdateFocusedButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_NotificationFlyout_C::UpdateFocusedButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.UpdateFocusedButton");
		
		UUI_Persistent_NotificationFlyout_C_UpdateFocusedButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.HandleGamepadInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_NotificationFlyout_C::HandleGamepadInput(EUI_MenuActions GamePadInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.HandleGamepadInput");
		
		UUI_Persistent_NotificationFlyout_C_HandleGamepadInput_Params params {};
		params.GamePadInput = GamePadInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.ToggleOpen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_NotificationFlyout_C::ToggleOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.ToggleOpen");
		
		UUI_Persistent_NotificationFlyout_C_ToggleOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.IsOpen
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_NotificationFlyout_C::IsOpen(bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.IsOpen");
		
		UUI_Persistent_NotificationFlyout_C_IsOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOpen != nullptr)
			*IsOpen = params.IsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.HandleOnActionButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_NotificationFlyout_C::HandleOnActionButtonClicked(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.HandleOnActionButtonClicked");
		
		UUI_Persistent_NotificationFlyout_C_HandleOnActionButtonClicked_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.SetupNotificationActionButtons
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<ENotificationButtonType>                    ButtonTypeList                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Persistent_NotificationFlyout_C::SetupNotificationActionButtons(TArray<ENotificationButtonType>* ButtonTypeList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.SetupNotificationActionButtons");
		
		UUI_Persistent_NotificationFlyout_C_SetupNotificationActionButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ButtonTypeList != nullptr)
			*ButtonTypeList = params.ButtonTypeList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.ClearNotificationData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_NotificationFlyout_C::ClearNotificationData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.ClearNotificationData");
		
		UUI_Persistent_NotificationFlyout_C_ClearNotificationData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.SetCurrentNotification
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UNotificationData*                           Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_NotificationFlyout_C::SetCurrentNotification(class UNotificationData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.SetCurrentNotification");
		
		UUI_Persistent_NotificationFlyout_C_SetCurrentNotification_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.SetNumNotifications
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumberOfAnnouncements                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_NotificationFlyout_C::SetNumNotifications(int32_t NumberOfAnnouncements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.SetNumNotifications");
		
		UUI_Persistent_NotificationFlyout_C_SetNumNotifications_Params params {};
		params.NumberOfAnnouncements = NumberOfAnnouncements;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Persistent_NotificationFlyout_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.Construct");
		
		UUI_Persistent_NotificationFlyout_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Persistent_NotificationFlyout_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.OnSynchronizeProperties");
		
		UUI_Persistent_NotificationFlyout_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.BndEvt__CounterButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Persistent_NotificationFlyout_C::BndEvt__CounterButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.BndEvt__CounterButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Persistent_NotificationFlyout_C_BndEvt__CounterButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.BndEvt__CounterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Persistent_NotificationFlyout_C::BndEvt__CounterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.BndEvt__CounterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Persistent_NotificationFlyout_C_BndEvt__CounterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.BndEvt__CounterButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Persistent_NotificationFlyout_C::BndEvt__CounterButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.BndEvt__CounterButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Persistent_NotificationFlyout_C_BndEvt__CounterButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.ExecuteUbergraph_UI_Persistent_NotificationFlyout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_NotificationFlyout_C::ExecuteUbergraph_UI_Persistent_NotificationFlyout(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.ExecuteUbergraph_UI_Persistent_NotificationFlyout");
		
		UUI_Persistent_NotificationFlyout_C_ExecuteUbergraph_UI_Persistent_NotificationFlyout_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.OnNotificationClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Persistent_NotificationFlyout_C*         source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ENotificationButtonType                            Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_NotificationFlyout_C::OnNotificationClicked__DelegateSignature(class UUI_Persistent_NotificationFlyout_C* source, ENotificationButtonType Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.OnNotificationClicked__DelegateSignature");
		
		UUI_Persistent_NotificationFlyout_C_OnNotificationClicked__DelegateSignature_Params params {};
		params.source = source;
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Persistent_NotificationFlyout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Persistent_NotificationFlyout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C");
		return ptr;
	}

}


