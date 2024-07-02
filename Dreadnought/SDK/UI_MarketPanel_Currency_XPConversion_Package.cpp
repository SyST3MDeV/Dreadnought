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
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ShowNotEnoughGPPopup
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsCustomXpConversion                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPopupStackData                             PopupStackData                                             (Parm, OutParm)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::ShowNotEnoughGPPopup(bool IsCustomXpConversion, struct FPopupStackData* PopupStackData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ShowNotEnoughGPPopup");
		
		UUI_MarketPanel_Currency_XPConversion_C_ShowNotEnoughGPPopup_Params params {};
		params.IsCustomXpConversion = IsCustomXpConversion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PopupStackData != nullptr)
			*PopupStackData = params.PopupStackData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ShowInvalidCustomXpAmountPopup
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPopupStackData                             PopupStackData                                             (Parm, OutParm)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::ShowInvalidCustomXpAmountPopup(struct FPopupStackData* PopupStackData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ShowInvalidCustomXpAmountPopup");
		
		UUI_MarketPanel_Currency_XPConversion_C_ShowInvalidCustomXpAmountPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PopupStackData != nullptr)
			*PopupStackData = params.PopupStackData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleConvertCustomConfirmationPopupResult
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::HandleConvertCustomConfirmationPopupResult(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleConvertCustomConfirmationPopupResult");
		
		UUI_MarketPanel_Currency_XPConversion_C_HandleConvertCustomConfirmationPopupResult_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleConvertAllConfirmationPopupResult
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::HandleConvertAllConfirmationPopupResult(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleConvertAllConfirmationPopupResult");
		
		UUI_MarketPanel_Currency_XPConversion_C_HandleConvertAllConfirmationPopupResult_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ShowConfirmationPopup
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PurchaseAmountGP                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_Popup_Generic_C*                         GenericPopup                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::ShowConfirmationPopup(int32_t PurchaseAmountGP, class UUI_Popup_Generic_C** GenericPopup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ShowConfirmationPopup");
		
		UUI_MarketPanel_Currency_XPConversion_C_ShowConfirmationPopup_Params params {};
		params.PurchaseAmountGP = PurchaseAmountGP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GenericPopup != nullptr)
			*GenericPopup = params.GenericPopup;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ConstructConfirmationPopupButtons
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFrontendHUD*                                FrontendHUD                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PurchaseAmountGP                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UPopupButtonData*>                    PopupButtons                                               (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::ConstructConfirmationPopupButtons(class AFrontendHUD* FrontendHUD, int32_t PurchaseAmountGP, TArray<class UPopupButtonData*>* PopupButtons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ConstructConfirmationPopupButtons");
		
		UUI_MarketPanel_Currency_XPConversion_C_ConstructConfirmationPopupButtons_Params params {};
		params.FrontendHUD = FrontendHUD;
		params.PurchaseAmountGP = PurchaseAmountGP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PopupButtons != nullptr)
			*PopupButtons = params.PopupButtons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ScrollCustomXpWidgetIntoView
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::ScrollCustomXpWidgetIntoView(class UUI_DreadWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ScrollCustomXpWidgetIntoView");
		
		UUI_MarketPanel_Currency_XPConversion_C_ScrollCustomXpWidgetIntoView_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleCustomXpUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::HandleCustomXpUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleCustomXpUnfocus");
		
		UUI_MarketPanel_Currency_XPConversion_C_HandleCustomXpUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleCustomXpFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::HandleCustomXpFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleCustomXpFocus");
		
		UUI_MarketPanel_Currency_XPConversion_C_HandleCustomXpFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleAllXpUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::HandleAllXpUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleAllXpUnfocus");
		
		UUI_MarketPanel_Currency_XPConversion_C_HandleAllXpUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleAllXpFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::HandleAllXpFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleAllXpFocus");
		
		UUI_MarketPanel_Currency_XPConversion_C_HandleAllXpFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.GetWidgets
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_MarketPanel_Currency_ConvertAllButton_C* ConvertAllButton                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UUI_MarketPanel_Currency_ShipXPConversionItem_C*> ShipWidgets                                                (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::GetWidgets(class UUI_MarketPanel_Currency_ConvertAllButton_C** ConvertAllButton, TArray<class UUI_MarketPanel_Currency_ShipXPConversionItem_C*>* ShipWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.GetWidgets");
		
		UUI_MarketPanel_Currency_XPConversion_C_GetWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConvertAllButton != nullptr)
			*ConvertAllButton = params.ConvertAllButton;
		if (ShipWidgets != nullptr)
			*ShipWidgets = params.ShipWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.Setup");
		
		UUI_MarketPanel_Currency_XPConversion_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleConvertXpCustomButtonClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Unused                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::HandleConvertXpCustomButtonClicked(int32_t Unused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleConvertXpCustomButtonClicked");
		
		UUI_MarketPanel_Currency_XPConversion_C_HandleConvertXpCustomButtonClicked_Params params {};
		params.Unused = Unused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleConvertAllButtonClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::HandleConvertAllButtonClicked(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleConvertAllButtonClicked");
		
		UUI_MarketPanel_Currency_XPConversion_C_HandleConvertAllButtonClicked_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleCustomXPConversionFromShipItemUpdated
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRequestXpConversionShip                    RequestData                                                (Parm)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::HandleCustomXPConversionFromShipItemUpdated(const struct FRequestXpConversionShip& RequestData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.HandleCustomXPConversionFromShipItemUpdated");
		
		UUI_MarketPanel_Currency_XPConversion_C_HandleCustomXPConversionFromShipItemUpdated_Params params {};
		params.RequestData = RequestData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.CalculateTotalCustomXPConversion
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::CalculateTotalCustomXPConversion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.CalculateTotalCustomXPConversion");
		
		UUI_MarketPanel_Currency_XPConversion_C_CalculateTotalCustomXPConversion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.CheckForPlayerCurrency
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUiXpConversionData                         XpConversionData                                           (Parm)
	 * 		bool                                               ShowConversionError                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::CheckForPlayerCurrency(const struct FUiXpConversionData& XpConversionData, bool* ShowConversionError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.CheckForPlayerCurrency");
		
		UUI_MarketPanel_Currency_XPConversion_C_CheckForPlayerCurrency_Params params {};
		params.XpConversionData = XpConversionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowConversionError != nullptr)
			*ShowConversionError = params.ShowConversionError;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.SetData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUiXpConversionData                         XpConversionData                                           (Parm)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::SetData(const struct FUiXpConversionData& XpConversionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.SetData");
		
		UUI_MarketPanel_Currency_XPConversion_C_SetData_Params params {};
		params.XpConversionData = XpConversionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.BndEvt__ConvertAllShipXPButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::BndEvt__ConvertAllShipXPButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.BndEvt__ConvertAllShipXPButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");
		
		UUI_MarketPanel_Currency_XPConversion_C_BndEvt__ConvertAllShipXPButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.BndEvt__ConvertAllShipXPButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::BndEvt__ConvertAllShipXPButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.BndEvt__ConvertAllShipXPButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature");
		
		UUI_MarketPanel_Currency_XPConversion_C_BndEvt__ConvertAllShipXPButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.BndEvt__CustomConversionButton_K2Node_ComponentBoundEvent_129_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::BndEvt__CustomConversionButton_K2Node_ComponentBoundEvent_129_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.BndEvt__CustomConversionButton_K2Node_ComponentBoundEvent_129_OnButtonHoverEvent__DelegateSignature");
		
		UUI_MarketPanel_Currency_XPConversion_C_BndEvt__CustomConversionButton_K2Node_ComponentBoundEvent_129_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.BndEvt__CustomConversionButton_K2Node_ComponentBoundEvent_154_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::BndEvt__CustomConversionButton_K2Node_ComponentBoundEvent_154_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.BndEvt__CustomConversionButton_K2Node_ComponentBoundEvent_154_OnButtonHoverEvent__DelegateSignature");
		
		UUI_MarketPanel_Currency_XPConversion_C_BndEvt__CustomConversionButton_K2Node_ComponentBoundEvent_154_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.Construct");
		
		UUI_MarketPanel_Currency_XPConversion_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.AllXpChildButtonFocused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::AllXpChildButtonFocused(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.AllXpChildButtonFocused");
		
		UUI_MarketPanel_Currency_XPConversion_C_AllXpChildButtonFocused_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.AllXpChildButtonUnfocused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::AllXpChildButtonUnfocused(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.AllXpChildButtonUnfocused");
		
		UUI_MarketPanel_Currency_XPConversion_C_AllXpChildButtonUnfocused_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.CustomXpChildButtonFocused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::CustomXpChildButtonFocused(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.CustomXpChildButtonFocused");
		
		UUI_MarketPanel_Currency_XPConversion_C_CustomXpChildButtonFocused_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.CustomXpChildButtonUnfocused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::CustomXpChildButtonUnfocused(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.CustomXpChildButtonUnfocused");
		
		UUI_MarketPanel_Currency_XPConversion_C_CustomXpChildButtonUnfocused_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ExecuteUbergraph_UI_MarketPanel_Currency_XPConversion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::ExecuteUbergraph_UI_MarketPanel_Currency_XPConversion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.ExecuteUbergraph_UI_MarketPanel_Currency_XPConversion");
		
		UUI_MarketPanel_Currency_XPConversion_C_ExecuteUbergraph_UI_MarketPanel_Currency_XPConversion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.RequestXpConversion__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FRequestXpConversionShip>            shipsToConvertXpFrom                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::RequestXpConversion__DelegateSignature(TArray<struct FRequestXpConversionShip>* shipsToConvertXpFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.RequestXpConversion__DelegateSignature");
		
		UUI_MarketPanel_Currency_XPConversion_C_RequestXpConversion__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shipsToConvertXpFrom != nullptr)
			*shipsToConvertXpFrom = params.shipsToConvertXpFrom;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.RequestXpConvertAllShips__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketPanel_Currency_XPConversion_C::RequestXpConvertAllShips__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C.RequestXpConvertAllShips__DelegateSignature");
		
		UUI_MarketPanel_Currency_XPConversion_C_RequestXpConvertAllShips__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketPanel_Currency_XPConversion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketPanel_Currency_XPConversion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C");
		return ptr;
	}

}


