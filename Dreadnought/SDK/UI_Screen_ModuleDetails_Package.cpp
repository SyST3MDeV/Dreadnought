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
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetScreenSpecificComponents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::SetScreenSpecificComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetScreenSpecificComponents");
		
		UUI_Screen_ModuleDetails_C_SetScreenSpecificComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.CanAffordModuleAndApplyToShip
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               CanPurchase                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::CanAffordModuleAndApplyToShip(bool* CanPurchase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.CanAffordModuleAndApplyToShip");
		
		UUI_Screen_ModuleDetails_C_CanAffordModuleAndApplyToShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanPurchase != nullptr)
			*CanPurchase = params.CanPurchase;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleNotEnoughXP
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::HandleNotEnoughXP(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleNotEnoughXP");
		
		UUI_Screen_ModuleDetails_C_HandleNotEnoughXP_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.GetPopupDataResearch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        PopupTitleInsufficientXP                                   (Parm, OutParm)
	 * 		class FText                                        PopupBodyInsufficientXP                                    (Parm, OutParm)
	 * 		TArray<class FText>                                Array                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_Screen_ModuleDetails_C::GetPopupDataResearch(class FText* PopupTitleInsufficientXP, class FText* PopupBodyInsufficientXP, TArray<class FText>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.GetPopupDataResearch");
		
		UUI_Screen_ModuleDetails_C_GetPopupDataResearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PopupTitleInsufficientXP != nullptr)
			*PopupTitleInsufficientXP = params.PopupTitleInsufficientXP;
		if (PopupBodyInsufficientXP != nullptr)
			*PopupBodyInsufficientXP = params.PopupBodyInsufficientXP;
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.GetPopupDataPurchase
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        PopupTitleInsufficientCredits                              (Parm, OutParm)
	 * 		class FText                                        PopupBodyInsufficientCredits                               (Parm, OutParm)
	 * 		TArray<class FText>                                Array                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_Screen_ModuleDetails_C::GetPopupDataPurchase(class FText* PopupTitleInsufficientCredits, class FText* PopupBodyInsufficientCredits, TArray<class FText>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.GetPopupDataPurchase");
		
		UUI_Screen_ModuleDetails_C_GetPopupDataPurchase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PopupTitleInsufficientCredits != nullptr)
			*PopupTitleInsufficientCredits = params.PopupTitleInsufficientCredits;
		if (PopupBodyInsufficientCredits != nullptr)
			*PopupBodyInsufficientCredits = params.PopupBodyInsufficientCredits;
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleUnownedPurchase
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::HandleUnownedPurchase(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleUnownedPurchase");
		
		UUI_Screen_ModuleDetails_C_HandleUnownedPurchase_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.RefreshPlayerCurrencies
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::RefreshPlayerCurrencies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.RefreshPlayerCurrencies");
		
		UUI_Screen_ModuleDetails_C_RefreshPlayerCurrencies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleNotEnoughCredits
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::HandleNotEnoughCredits(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleNotEnoughCredits");
		
		UUI_Screen_ModuleDetails_C_HandleNotEnoughCredits_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.RefreshDetailsPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::RefreshDetailsPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.RefreshDetailsPanel");
		
		UUI_Screen_ModuleDetails_C_RefreshDetailsPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleResearchPurchase
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::HandleResearchPurchase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleResearchPurchase");
		
		UUI_Screen_ModuleDetails_C_HandleResearchPurchase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.UnbindMediaEvents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::UnbindMediaEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.UnbindMediaEvents");
		
		UUI_Screen_ModuleDetails_C_UnbindMediaEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleAsyncVideoLoaded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFileMediaSource*                            Video                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::HandleAsyncVideoLoaded(class UFileMediaSource* Video)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleAsyncVideoLoaded");
		
		UUI_Screen_ModuleDetails_C_HandleAsyncVideoLoaded_Params params {};
		params.Video = Video;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.IsVideoPlaying
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               IsPlaying                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::IsVideoPlaying(bool* IsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.IsVideoPlaying");
		
		UUI_Screen_ModuleDetails_C_IsVideoPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPlaying != nullptr)
			*IsPlaying = params.IsPlaying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleVideoEndReached
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::HandleVideoEndReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleVideoEndReached");
		
		UUI_Screen_ModuleDetails_C_HandleVideoEndReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleModulePurchase
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::HandleModulePurchase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleModulePurchase");
		
		UUI_Screen_ModuleDetails_C_HandleModulePurchase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleCarouselPageLeftRight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PageLeft                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::HandleCarouselPageLeftRight(bool PageLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleCarouselPageLeftRight");
		
		UUI_Screen_ModuleDetails_C_HandleCarouselPageLeftRight_Params params {};
		params.PageLeft = PageLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetWidgetFocus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IndexToFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DidPageTurn                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::SetWidgetFocus(int32_t IndexToFocus, bool* DidPageTurn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetWidgetFocus");
		
		UUI_Screen_ModuleDetails_C_SetWidgetFocus_Params params {};
		params.IndexToFocus = IndexToFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DidPageTurn != nullptr)
			*DidPageTurn = params.DidPageTurn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.UpdateIndexToFirstModuleShown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::UpdateIndexToFirstModuleShown(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.UpdateIndexToFirstModuleShown");
		
		UUI_Screen_ModuleDetails_C_UpdateIndexToFirstModuleShown_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.UpdateFocusedItemOnHover
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 ModuleButton                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::UpdateFocusedItemOnHover(class UUI_Generic_Button_Module_C* ModuleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.UpdateFocusedItemOnHover");
		
		UUI_Screen_ModuleDetails_C_UpdateFocusedItemOnHover_Params params {};
		params.ModuleButton = ModuleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.CallModuleButtonClick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::CallModuleButtonClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.CallModuleButtonClick");
		
		UUI_Screen_ModuleDetails_C_CallModuleButtonClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.StartPageUpdateTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::StartPageUpdateTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.StartPageUpdateTimer");
		
		UUI_Screen_ModuleDetails_C_StartPageUpdateTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleRightGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::HandleRightGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleRightGranular");
		
		UUI_Screen_ModuleDetails_C_HandleRightGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleLeftGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::HandleLeftGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleLeftGranular");
		
		UUI_Screen_ModuleDetails_C_HandleLeftGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.PlayVideo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::PlayVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.PlayVideo");
		
		UUI_Screen_ModuleDetails_C_PlayVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.UpdatePersistentLegend
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::UpdatePersistentLegend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.UpdatePersistentLegend");
		
		UUI_Screen_ModuleDetails_C_UpdatePersistentLegend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::HandleInput(EUI_MenuActions GamePadInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleInput");
		
		UUI_Screen_ModuleDetails_C_HandleInput_Params params {};
		params.GamePadInput = GamePadInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.Setup");
		
		UUI_Screen_ModuleDetails_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetItemTitleAndDesc
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::SetItemTitleAndDesc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetItemTitleAndDesc");
		
		UUI_Screen_ModuleDetails_C_SetItemTitleAndDesc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetVanitySpecificComponents
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::SetVanitySpecificComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetVanitySpecificComponents");
		
		UUI_Screen_ModuleDetails_C_SetVanitySpecificComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetModuleSpecificComponents
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::SetModuleSpecificComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetModuleSpecificComponents");
		
		UUI_Screen_ModuleDetails_C_SetModuleSpecificComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetSharedComponents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::SetSharedComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetSharedComponents");
		
		UUI_Screen_ModuleDetails_C_SetSharedComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.CheckItemType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::CheckItemType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.CheckItemType");
		
		UUI_Screen_ModuleDetails_C_CheckItemType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleCarouselButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_Module_C*                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::HandleCarouselButtonClicked(class UUI_Generic_Button_Module_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleCarouselButtonClicked");
		
		UUI_Screen_ModuleDetails_C_HandleCarouselButtonClicked_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleSharedButtonPress
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::HandleSharedButtonPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleSharedButtonPress");
		
		UUI_Screen_ModuleDetails_C_HandleSharedButtonPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetupItemCarouselData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::SetupItemCarouselData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetupItemCarouselData");
		
		UUI_Screen_ModuleDetails_C_SetupItemCarouselData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.InitShipTitleData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::InitShipTitleData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.InitShipTitleData");
		
		UUI_Screen_ModuleDetails_C_InitShipTitleData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.InitModulePurchaseData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::InitModulePurchaseData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.InitModulePurchaseData");
		
		UUI_Screen_ModuleDetails_C_InitModulePurchaseData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.ShouldAutoPlayVideo
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldAutoplay                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::ShouldAutoPlayVideo(bool* ShouldAutoplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.ShouldAutoPlayVideo");
		
		UUI_Screen_ModuleDetails_C_ShouldAutoPlayVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldAutoplay != nullptr)
			*ShouldAutoplay = params.ShouldAutoplay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.OpenModuleVideoSource
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFileMediaSource*                            MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Autoplay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::OpenModuleVideoSource(class UFileMediaSource* MediaSource, bool Autoplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.OpenModuleVideoSource");
		
		UUI_Screen_ModuleDetails_C_OpenModuleVideoSource_Params params {};
		params.MediaSource = MediaSource;
		params.Autoplay = Autoplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetupStill
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Image                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::SetupStill(class UTexture2D* Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetupStill");
		
		UUI_Screen_ModuleDetails_C_SetupStill_Params params {};
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetupVideoAndStill
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::SetupVideoAndStill(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SetupVideoAndStill");
		
		UUI_Screen_ModuleDetails_C_SetupVideoAndStill_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.Construct");
		
		UUI_Screen_ModuleDetails_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.OnTransitionIn");
		
		UUI_Screen_ModuleDetails_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.OnTransitionOut");
		
		UUI_Screen_ModuleDetails_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.TransitionInAnimationComplete");
		
		UUI_Screen_ModuleDetails_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.TransitionOutAnimationComplete");
		
		UUI_Screen_ModuleDetails_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_0_OnMediaPlayerMediaOpened__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      OpenedUrl                                                  (Parm, ZeroConstructor)
	 */
	void UUI_Screen_ModuleDetails_C::BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_0_OnMediaPlayerMediaOpened__DelegateSignature(const class FString& OpenedUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_0_OnMediaPlayerMediaOpened__DelegateSignature");
		
		UUI_Screen_ModuleDetails_C_BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_0_OnMediaPlayerMediaOpened__DelegateSignature_Params params {};
		params.OpenedUrl = OpenedUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Screen_ModuleDetails_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SharedActionButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::SharedActionButtonClicked(class UUserWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.SharedActionButtonClicked");
		
		UUI_Screen_ModuleDetails_C_SharedActionButtonClicked_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleEquipCompleted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::HandleEquipCompleted(bool wasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleEquipCompleted");
		
		UUI_Screen_ModuleDetails_C_HandleEquipCompleted_Params params {};
		params.wasSuccessful = wasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandlePurchaseCompleted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::HandlePurchaseCompleted(bool wasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandlePurchaseCompleted");
		
		UUI_Screen_ModuleDetails_C_HandlePurchaseCompleted_Params params {};
		params.wasSuccessful = wasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleResearchCompleted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::HandleResearchCompleted(bool wasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.HandleResearchCompleted");
		
		UUI_Screen_ModuleDetails_C_HandleResearchCompleted_Params params {};
		params.wasSuccessful = wasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.VanityPurchaseButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::VanityPurchaseButtonClicked(class UUserWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.VanityPurchaseButtonClicked");
		
		UUI_Screen_ModuleDetails_C_VanityPurchaseButtonClicked_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.OnNavigationEvent");
		
		UUI_Screen_ModuleDetails_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_0_OnMediaPlayerMediaEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_0_OnMediaPlayerMediaEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_0_OnMediaPlayerMediaEvent__DelegateSignature");
		
		UUI_Screen_ModuleDetails_C_BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_0_OnMediaPlayerMediaEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_2_OnMediaPlayerMediaEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Screen_ModuleDetails_C::BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_2_OnMediaPlayerMediaEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_2_OnMediaPlayerMediaEvent__DelegateSignature");
		
		UUI_Screen_ModuleDetails_C_BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_2_OnMediaPlayerMediaEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.OnShipXpUpdate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            shipXp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::OnShipXpUpdate(int32_t shipXp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.OnShipXpUpdate");
		
		UUI_Screen_ModuleDetails_C_OnShipXpUpdate_Params params {};
		params.shipXp = shipXp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.ExecuteUbergraph_UI_Screen_ModuleDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ModuleDetails_C::ExecuteUbergraph_UI_Screen_ModuleDetails(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C.ExecuteUbergraph_UI_Screen_ModuleDetails");
		
		UUI_Screen_ModuleDetails_C_ExecuteUbergraph_UI_Screen_ModuleDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_ModuleDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_ModuleDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_ModuleDetails.UI_Screen_ModuleDetails_C");
		return ptr;
	}

}


