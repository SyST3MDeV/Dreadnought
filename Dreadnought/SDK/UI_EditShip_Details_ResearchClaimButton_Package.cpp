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
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.Action");
		
		UUI_EditShip_Details_ResearchClaimButton_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetPurchaseCostVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_EditShip_Details_ResearchClaimState_C*   researchState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::SetPurchaseCostVisibility(class UUI_EditShip_Details_ResearchClaimState_C* researchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetPurchaseCostVisibility");
		
		UUI_EditShip_Details_ResearchClaimButton_C_SetPurchaseCostVisibility_Params params {};
		params.researchState = researchState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetSoftHardCurrencyWidgetVisibilities
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_EditShip_Details_ResearchClaimState_C*   Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FYShipPrice                                 ShipPurchaseCost                                           (Parm)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::SetSoftHardCurrencyWidgetVisibilities(class UUI_EditShip_Details_ResearchClaimState_C* Button, const struct FYShipPrice& ShipPurchaseCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetSoftHardCurrencyWidgetVisibilities");
		
		UUI_EditShip_Details_ResearchClaimButton_C_SetSoftHardCurrencyWidgetVisibilities_Params params {};
		params.Button = Button;
		params.ShipPurchaseCost = ShipPurchaseCost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.hasPurchaseCost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               hasPurchaseCost                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::hasPurchaseCost(bool* hasPurchaseCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.hasPurchaseCost");
		
		UUI_EditShip_Details_ResearchClaimButton_C_hasPurchaseCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hasPurchaseCost != nullptr)
			*hasPurchaseCost = params.hasPurchaseCost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetFreeXpShipXpCurrencyWidgetVisibilities
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_EditShip_Details_ResearchClaimState_C*   Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FYShipPrice                                 shipResearchCost                                           (Parm)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::SetFreeXpShipXpCurrencyWidgetVisibilities(class UUI_EditShip_Details_ResearchClaimState_C* Button, const struct FYShipPrice& shipResearchCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetFreeXpShipXpCurrencyWidgetVisibilities");
		
		UUI_EditShip_Details_ResearchClaimButton_C_SetFreeXpShipXpCurrencyWidgetVisibilities_Params params {};
		params.Button = Button;
		params.shipResearchCost = shipResearchCost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.ButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::ButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.ButtonClicked");
		
		UUI_EditShip_Details_ResearchClaimButton_C_ButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.ShowResearchedAndPurchasedButtonForHeroShip
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYResearchClaimButtonData                   ButtonData                                                 (Parm)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::ShowResearchedAndPurchasedButtonForHeroShip(const struct FYResearchClaimButtonData& ButtonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.ShowResearchedAndPurchasedButtonForHeroShip");
		
		UUI_EditShip_Details_ResearchClaimButton_C_ShowResearchedAndPurchasedButtonForHeroShip_Params params {};
		params.ButtonData = ButtonData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetButtonStateForHeroShip
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_EditShip_Details_ResearchClaimState_C*   Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FYResearchClaimButtonData                   ButtonData                                                 (Parm)
	 * 		struct FYShipPrice                                 ShipPurchaseCost                                           (Parm)
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::SetButtonStateForHeroShip(class UUI_EditShip_Details_ResearchClaimState_C* Button, const struct FYResearchClaimButtonData& ButtonData, const struct FYShipPrice& ShipPurchaseCost, bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetButtonStateForHeroShip");
		
		UUI_EditShip_Details_ResearchClaimButton_C_SetButtonStateForHeroShip_Params params {};
		params.Button = Button;
		params.ButtonData = ButtonData;
		params.ShipPurchaseCost = ShipPurchaseCost;
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetButtonStatesForHeroShip
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYShipResearchPurchaseState                        shipResearchPurchaseState                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::SetButtonStatesForHeroShip(EYShipResearchPurchaseState shipResearchPurchaseState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetButtonStatesForHeroShip");
		
		UUI_EditShip_Details_ResearchClaimButton_C_SetButtonStatesForHeroShip_Params params {};
		params.shipResearchPurchaseState = shipResearchPurchaseState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetButtonStatesForNonHeroShip
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYShipResearchPurchaseState                        shipResearchPurchaseState                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::SetButtonStatesForNonHeroShip(EYShipResearchPurchaseState shipResearchPurchaseState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetButtonStatesForNonHeroShip");
		
		UUI_EditShip_Details_ResearchClaimButton_C_SetButtonStatesForNonHeroShip_Params params {};
		params.shipResearchPurchaseState = shipResearchPurchaseState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetButtonStateForNonHeroShip
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_EditShip_Details_ResearchClaimState_C*   Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FYResearchClaimButtonData                   ButtonData                                                 (Parm)
	 * 		struct FYShipPrice                                 shipResearchCost                                           (Parm)
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FYShipPrice                                 ShipPurchaseCost                                           (Parm)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::SetButtonStateForNonHeroShip(class UUI_EditShip_Details_ResearchClaimState_C* Button, const struct FYResearchClaimButtonData& ButtonData, const struct FYShipPrice& shipResearchCost, bool IsEnabled, const struct FYShipPrice& ShipPurchaseCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetButtonStateForNonHeroShip");
		
		UUI_EditShip_Details_ResearchClaimButton_C_SetButtonStateForNonHeroShip_Params params {};
		params.Button = Button;
		params.ButtonData = ButtonData;
		params.shipResearchCost = shipResearchCost;
		params.IsEnabled = IsEnabled;
		params.ShipPurchaseCost = ShipPurchaseCost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetButtonActionText
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        buttonActionText                                           (Parm)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::SetButtonActionText(const class FText& buttonActionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetButtonActionText");
		
		UUI_EditShip_Details_ResearchClaimButton_C_SetButtonActionText_Params params {};
		params.buttonActionText = buttonActionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetIcon
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      iconPath                                                   (Parm, ZeroConstructor)
	 * 		class UImage*                                      Image                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::SetIcon(const class FString& iconPath, class UImage* Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetIcon");
		
		UUI_EditShip_Details_ResearchClaimButton_C_SetIcon_Params params {};
		params.iconPath = iconPath;
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.ShowResearchedAndPurchasedButtonForNonHeroShip
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYResearchClaimButtonData                   ButtonData                                                 (Parm)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::ShowResearchedAndPurchasedButtonForNonHeroShip(const struct FYResearchClaimButtonData& ButtonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.ShowResearchedAndPurchasedButtonForNonHeroShip");
		
		UUI_EditShip_Details_ResearchClaimButton_C_ShowResearchedAndPurchasedButtonForNonHeroShip_Params params {};
		params.ButtonData = ButtonData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.HideAllButtons
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::HideAllButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.HideAllButtons");
		
		UUI_EditShip_Details_ResearchClaimButton_C_HideAllButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.HandleUnfocus");
		
		UUI_EditShip_Details_ResearchClaimButton_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.HandleFocus");
		
		UUI_EditShip_Details_ResearchClaimButton_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetResearchClaimButtonData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ShipImagePath                                              (Parm, ZeroConstructor)
	 * 		struct FYShipPrice                                 ShipPurchaseCost                                           (Parm)
	 * 		struct FYShipPrice                                 shipResearchCost                                           (Parm)
	 * 		EYShipResearchPurchaseState                        shipResearchPurchaseState                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsHeroShip                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::SetResearchClaimButtonData(const class FString& ShipImagePath, const struct FYShipPrice& ShipPurchaseCost, const struct FYShipPrice& shipResearchCost, EYShipResearchPurchaseState shipResearchPurchaseState, bool IsHeroShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetResearchClaimButtonData");
		
		UUI_EditShip_Details_ResearchClaimButton_C_SetResearchClaimButtonData_Params params {};
		params.ShipImagePath = ShipImagePath;
		params.ShipPurchaseCost = ShipPurchaseCost;
		params.shipResearchCost = shipResearchCost;
		params.shipResearchPurchaseState = shipResearchPurchaseState;
		params.IsHeroShip = IsHeroShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.Setup
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.Setup");
		
		UUI_EditShip_Details_ResearchClaimButton_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.Construct");
		
		UUI_EditShip_Details_ResearchClaimButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.PreConstruct");
		
		UUI_EditShip_Details_ResearchClaimButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditShip_Details_ResearchClaimButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditShip_Details_ResearchClaimButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUI_EditShip_Details_ResearchClaimButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnActionReceived");
		
		UUI_EditShip_Details_ResearchClaimButton_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.ExecuteUbergraph_UI_EditShip_Details_ResearchClaimButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::ExecuteUbergraph_UI_EditShip_Details_ResearchClaimButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.ExecuteUbergraph_UI_EditShip_Details_ResearchClaimButton");
		
		UUI_EditShip_Details_ResearchClaimButton_C_ExecuteUbergraph_UI_EditShip_Details_ResearchClaimButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnPurchaseShip__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::OnPurchaseShip__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnPurchaseShip__DelegateSignature");
		
		UUI_EditShip_Details_ResearchClaimButton_C_OnPurchaseShip__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnResearchShip__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::OnResearchShip__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnResearchShip__DelegateSignature");
		
		UUI_EditShip_Details_ResearchClaimButton_C_OnResearchShip__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnButtonUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::OnButtonUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnButtonUnhovered__DelegateSignature");
		
		UUI_EditShip_Details_ResearchClaimButton_C_OnButtonUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::OnButtonHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnButtonHovered__DelegateSignature");
		
		UUI_EditShip_Details_ResearchClaimButton_C_OnButtonHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_EditShip_Details_ResearchClaimButton_C*  ResearchClaimButton                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Details_ResearchClaimButton_C::OnButtonClicked__DelegateSignature(class UUI_EditShip_Details_ResearchClaimButton_C* ResearchClaimButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnButtonClicked__DelegateSignature");
		
		UUI_EditShip_Details_ResearchClaimButton_C_OnButtonClicked__DelegateSignature_Params params {};
		params.ResearchClaimButton = ResearchClaimButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EditShip_Details_ResearchClaimButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditShip_Details_ResearchClaimButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C");
		return ptr;
	}

}


