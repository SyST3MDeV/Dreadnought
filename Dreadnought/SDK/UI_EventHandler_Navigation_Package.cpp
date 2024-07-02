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
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.CloseAllPopups
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EventHandler_Navigation_C::CloseAllPopups()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.CloseAllPopups");
		
		UUI_EventHandler_Navigation_C_CloseAllPopups_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.GotoTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         ScreenEnumIn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EventHandler_Navigation_C::GotoTab(EUI_Screen ScreenEnumIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.GotoTab");
		
		UUI_EventHandler_Navigation_C_GotoTab_Params params {};
		params.ScreenEnumIn = ScreenEnumIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.GetCurrentScreen
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_DreadScreen*                             CurrentScreen                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EventHandler_Navigation_C::GetCurrentScreen(class UUI_DreadScreen** CurrentScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.GetCurrentScreen");
		
		UUI_EventHandler_Navigation_C_GetCurrentScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentScreen != nullptr)
			*CurrentScreen = params.CurrentScreen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.HandlePopupDataAdded
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPopupStackData                             PopupStackData                                             (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UUI_EventHandler_Navigation_C::HandlePopupDataAdded(const struct FPopupStackData& PopupStackData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.HandlePopupDataAdded");
		
		UUI_EventHandler_Navigation_C_HandlePopupDataAdded_Params params {};
		params.PopupStackData = PopupStackData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.DestroyScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadScreen*                             screenToDestroy                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EventHandler_Navigation_C::DestroyScreen(class UUI_DreadScreen* screenToDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.DestroyScreen");
		
		UUI_EventHandler_Navigation_C_DestroyScreen_Params params {};
		params.screenToDestroy = screenToDestroy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.FindReturnPath
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         ScreenEnumIn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<EUI_Screen>                                 ReturnPathOut                                              (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_EventHandler_Navigation_C::FindReturnPath(EUI_Screen ScreenEnumIn, TArray<EUI_Screen>* ReturnPathOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.FindReturnPath");
		
		UUI_EventHandler_Navigation_C_FindReturnPath_Params params {};
		params.ScreenEnumIn = ScreenEnumIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnPathOut != nullptr)
			*ReturnPathOut = params.ReturnPathOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.FindScreenName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         ScreenEnumIn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        ScreenNameOut                                              (Parm, OutParm)
	 */
	void UUI_EventHandler_Navigation_C::FindScreenName(EUI_Screen ScreenEnumIn, class FText* ScreenNameOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.FindScreenName");
		
		UUI_EventHandler_Navigation_C_FindScreenName_Params params {};
		params.ScreenEnumIn = ScreenEnumIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScreenNameOut != nullptr)
			*ScreenNameOut = params.ScreenNameOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.GotoBreadcrumb
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BreadcrumbIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EventHandler_Navigation_C::GotoBreadcrumb(int32_t BreadcrumbIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.GotoBreadcrumb");
		
		UUI_EventHandler_Navigation_C_GotoBreadcrumb_Params params {};
		params.BreadcrumbIndex = BreadcrumbIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.UpdateReturnPath
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadScreen*                             CurrentScreen                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EventHandler_Navigation_C::UpdateReturnPath(class UUI_DreadScreen* CurrentScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.UpdateReturnPath");
		
		UUI_EventHandler_Navigation_C_UpdateReturnPath_Params params {};
		params.CurrentScreen = CurrentScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.FindScreenClass
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         ScreenEnumIn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      ScreenClassOut                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EventHandler_Navigation_C::FindScreenClass(EUI_Screen ScreenEnumIn, class UClass** ScreenClassOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.FindScreenClass");
		
		UUI_EventHandler_Navigation_C_FindScreenClass_Params params {};
		params.ScreenEnumIn = ScreenEnumIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScreenClassOut != nullptr)
			*ScreenClassOut = params.ScreenClassOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.ShowGenericPopupWithCustomButtons
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        titleText                                                  (Parm)
	 * 		class FText                                        bodyText                                                   (Parm)
	 * 		TArray<class UObject*>                             buttons                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UUI_Popup_Generic_C*                         GenericPopup                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EventHandler_Navigation_C::ShowGenericPopupWithCustomButtons(const class FText& titleText, const class FText& bodyText, TArray<class UObject*>* buttons, class UUI_Popup_Generic_C** GenericPopup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.ShowGenericPopupWithCustomButtons");
		
		UUI_EventHandler_Navigation_C_ShowGenericPopupWithCustomButtons_Params params {};
		params.titleText = titleText;
		params.bodyText = bodyText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (buttons != nullptr)
			*buttons = params.buttons;
		if (GenericPopup != nullptr)
			*GenericPopup = params.GenericPopup;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.HidePopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Popup_Generic_C*                         PopupReference                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EventHandler_Navigation_C::HidePopup(class UUI_Popup_Generic_C* PopupReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.HidePopup");
		
		UUI_EventHandler_Navigation_C_HidePopup_Params params {};
		params.PopupReference = PopupReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.ShowGenericPopup
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        titleText                                                  (Parm)
	 * 		class FText                                        bodyText                                                   (Parm)
	 * 		TArray<class FText>                                ButtonLabels                                               (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UUI_Popup_Generic_C*                         GenericPopup                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EventHandler_Navigation_C::ShowGenericPopup(const class FText& titleText, const class FText& bodyText, TArray<class FText>* ButtonLabels, class UUI_Popup_Generic_C** GenericPopup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.ShowGenericPopup");
		
		UUI_EventHandler_Navigation_C_ShowGenericPopup_Params params {};
		params.titleText = titleText;
		params.bodyText = bodyText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ButtonLabels != nullptr)
			*ButtonLabels = params.ButtonLabels;
		if (GenericPopup != nullptr)
			*GenericPopup = params.GenericPopup;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.HideScreen
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadScreen*                             screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EventHandler_Navigation_C::HideScreen(class UUI_DreadScreen* screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.HideScreen");
		
		UUI_EventHandler_Navigation_C_HideScreen_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.ShowScreen
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ScreenClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EUI_Screen                                         ScreenEnum                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EventHandler_Navigation_C::ShowScreen(class UClass* ScreenClass, EUI_Screen ScreenEnum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.ShowScreen");
		
		UUI_EventHandler_Navigation_C_ShowScreen_Params params {};
		params.ScreenClass = ScreenClass;
		params.ScreenEnum = ScreenEnum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.DestroyPreviousScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EventHandler_Navigation_C::DestroyPreviousScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.DestroyPreviousScreen");
		
		UUI_EventHandler_Navigation_C_DestroyPreviousScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.GoToScreen
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         ScreenEnumIn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EventHandler_Navigation_C::GoToScreen(EUI_Screen ScreenEnumIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.GoToScreen");
		
		UUI_EventHandler_Navigation_C_GoToScreen_Params params {};
		params.ScreenEnumIn = ScreenEnumIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_EventHandler_Navigation_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.Construct");
		
		UUI_EventHandler_Navigation_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.OnNavigateToScreenRequested
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EventHandler_Navigation_C::OnNavigateToScreenRequested(EUI_Screen screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.OnNavigateToScreenRequested");
		
		UUI_EventHandler_Navigation_C_OnNavigateToScreenRequested_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.OnPopupAdded
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FPopupStackData                             PopupData                                                  (Parm)
	 */
	void UUI_EventHandler_Navigation_C::OnPopupAdded(const struct FPopupStackData& PopupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.OnPopupAdded");
		
		UUI_EventHandler_Navigation_C_OnPopupAdded_Params params {};
		params.PopupData = PopupData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.OnNavigateToTabRequested
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EventHandler_Navigation_C::OnNavigateToTabRequested(EUI_Screen screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.OnNavigateToTabRequested");
		
		UUI_EventHandler_Navigation_C_OnNavigateToTabRequested_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.ExecuteUbergraph_UI_EventHandler_Navigation
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EventHandler_Navigation_C::ExecuteUbergraph_UI_EventHandler_Navigation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.ExecuteUbergraph_UI_EventHandler_Navigation");
		
		UUI_EventHandler_Navigation_C_ExecuteUbergraph_UI_EventHandler_Navigation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.ScreenChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EventHandler_Navigation_C::ScreenChanged__DelegateSignature(EUI_Screen screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.ScreenChanged__DelegateSignature");
		
		UUI_EventHandler_Navigation_C_ScreenChanged__DelegateSignature_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EventHandler_Navigation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EventHandler_Navigation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UI_EventHandler_Navigation.UI_EventHandler_Navigation_C");
		return ptr;
	}

}


