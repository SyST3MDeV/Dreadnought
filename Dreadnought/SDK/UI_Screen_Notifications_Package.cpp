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
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.SelectNotificationInAccordion
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            filterIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Notifications_C::SelectNotificationInAccordion(int32_t filterIndex, int32_t categoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.SelectNotificationInAccordion");
		
		UUI_Screen_Notifications_C_SelectNotificationInAccordion_Params params {};
		params.filterIndex = filterIndex;
		params.categoryIndex = categoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.DisplayNoNotifications
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Notifications_C::DisplayNoNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.DisplayNoNotifications");
		
		UUI_Screen_Notifications_C_DisplayNoNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.DisplayCurrentNotification
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUIAccordionFilterData                      UIAccordionFilterData                                      (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Screen_Notifications_C::DisplayCurrentNotification(const struct FUIAccordionFilterData& UIAccordionFilterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.DisplayCurrentNotification");
		
		UUI_Screen_Notifications_C_DisplayCurrentNotification_Params params {};
		params.UIAccordionFilterData = UIAccordionFilterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.RefreshNotifications
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Notifications_C::RefreshNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.RefreshNotifications");
		
		UUI_Screen_Notifications_C_RefreshNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.DisplayFirstAvailableNotification
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUIAccordionFilterData                      UIAccordionFilterData                                      (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Screen_Notifications_C::DisplayFirstAvailableNotification(const struct FUIAccordionFilterData& UIAccordionFilterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.DisplayFirstAvailableNotification");
		
		UUI_Screen_Notifications_C_DisplayFirstAvailableNotification_Params params {};
		params.UIAccordionFilterData = UIAccordionFilterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.HandleOnActionButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Notifications_C::HandleOnActionButtonClicked(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.HandleOnActionButtonClicked");
		
		UUI_Screen_Notifications_C_HandleOnActionButtonClicked_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.SetupNotificationButtons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Notifications_C::SetupNotificationButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.SetupNotificationButtons");
		
		UUI_Screen_Notifications_C_SetupNotificationButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.SetCurrentPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_NotificationPanelWidget*                 CurrentNotificationPanel                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Notifications_C::SetCurrentPanel(class UUI_NotificationPanelWidget* CurrentNotificationPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.SetCurrentPanel");
		
		UUI_Screen_Notifications_C_SetCurrentPanel_Params params {};
		params.CurrentNotificationPanel = CurrentNotificationPanel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.RefreshSelectedNotification
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            filterIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Notifications_C::RefreshSelectedNotification(int32_t filterIndex, int32_t categoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.RefreshSelectedNotification");
		
		UUI_Screen_Notifications_C_RefreshSelectedNotification_Params params {};
		params.filterIndex = filterIndex;
		params.categoryIndex = categoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Notifications_C::HandleInput(EUI_MenuActions Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.HandleInput");
		
		UUI_Screen_Notifications_C_HandleInput_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.GetDebugAccordionData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUIAccordionFilterData                      UIAccordionFilterData                                      (Parm, OutParm)
	 */
	void UUI_Screen_Notifications_C::GetDebugAccordionData(struct FUIAccordionFilterData* UIAccordionFilterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.GetDebugAccordionData");
		
		UUI_Screen_Notifications_C_GetDebugAccordionData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UIAccordionFilterData != nullptr)
			*UIAccordionFilterData = params.UIAccordionFilterData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Notifications_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.OnTransitionIn");
		
		UUI_Screen_Notifications_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Notifications_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.OnTransitionOut");
		
		UUI_Screen_Notifications_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Notifications_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.TransitionInAnimationComplete");
		
		UUI_Screen_Notifications_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_Notifications_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.TransitionOutAnimationComplete");
		
		UUI_Screen_Notifications_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Notifications_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.Construct");
		
		UUI_Screen_Notifications_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Notifications_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.OnNavigationEvent");
		
		UUI_Screen_Notifications_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.BndEvt__AccordionFilter_K2Node_ComponentBoundEvent_0_OnCategoryFilterClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Checked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CheckBoxIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Notifications_C::BndEvt__AccordionFilter_K2Node_ComponentBoundEvent_0_OnCategoryFilterClicked__DelegateSignature(bool Checked, int32_t CheckBoxIndex, int32_t categoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.BndEvt__AccordionFilter_K2Node_ComponentBoundEvent_0_OnCategoryFilterClicked__DelegateSignature");
		
		UUI_Screen_Notifications_C_BndEvt__AccordionFilter_K2Node_ComponentBoundEvent_0_OnCategoryFilterClicked__DelegateSignature_Params params {};
		params.Checked = Checked;
		params.CheckBoxIndex = CheckBoxIndex;
		params.categoryIndex = categoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.HandleNotificationsChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_Notifications_C::HandleNotificationsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.HandleNotificationsChanged");
		
		UUI_Screen_Notifications_C_HandleNotificationsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_Notifications.UI_Screen_Notifications_C.ExecuteUbergraph_UI_Screen_Notifications
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_Notifications_C::ExecuteUbergraph_UI_Screen_Notifications(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_Notifications.UI_Screen_Notifications_C.ExecuteUbergraph_UI_Screen_Notifications");
		
		UUI_Screen_Notifications_C_ExecuteUbergraph_UI_Screen_Notifications_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_Notifications_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_Notifications_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_Notifications.UI_Screen_Notifications_C");
		return ptr;
	}

}


