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
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.CheckAndShowHiddenUI
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    MenuAction                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldPerformFurtherActions                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::CheckAndShowHiddenUI(EUI_MenuActions MenuAction, bool* ShouldPerformFurtherActions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.CheckAndShowHiddenUI");
		
		AVH_YPlayerCtrl_Outpost_BP_C_CheckAndShowHiddenUI_Params params {};
		params.MenuAction = MenuAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldPerformFurtherActions != nullptr)
			*ShouldPerformFurtherActions = params.ShouldPerformFurtherActions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.ToggleUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::ToggleUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.ToggleUI");
		
		AVH_YPlayerCtrl_Outpost_BP_C_ToggleUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.CheckAndPerformAxisNavigationEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    MenuAction                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::CheckAndPerformAxisNavigationEvent(EUI_MenuActions MenuAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.CheckAndPerformAxisNavigationEvent");
		
		AVH_YPlayerCtrl_Outpost_BP_C_CheckAndPerformAxisNavigationEvent_Params params {};
		params.MenuAction = MenuAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.ForwardNavigationEvent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HandledByPersistentScreen                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HandledByCurrentScreen                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::ForwardNavigationEvent(EUI_MenuActions GamePadInput, bool* HandledByPersistentScreen, bool* HandledByCurrentScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.ForwardNavigationEvent");
		
		AVH_YPlayerCtrl_Outpost_BP_C_ForwardNavigationEvent_Params params {};
		params.GamePadInput = GamePadInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HandledByPersistentScreen != nullptr)
			*HandledByPersistentScreen = params.HandledByPersistentScreen;
		if (HandledByCurrentScreen != nullptr)
			*HandledByCurrentScreen = params.HandledByCurrentScreen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetPersistentScreen
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_Screen_Persistent_C*                     PersistentScreen                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::GetPersistentScreen(class UUI_Screen_Persistent_C** PersistentScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetPersistentScreen");
		
		AVH_YPlayerCtrl_Outpost_BP_C_GetPersistentScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PersistentScreen != nullptr)
			*PersistentScreen = params.PersistentScreen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetCurrentScreen
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_DreadScreen*                             CurrentScreen                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::GetCurrentScreen(class UUI_DreadScreen** CurrentScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetCurrentScreen");
		
		AVH_YPlayerCtrl_Outpost_BP_C_GetCurrentScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentScreen != nullptr)
			*CurrentScreen = params.CurrentScreen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.CheckWhetherToHighlightPlayButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::CheckWhetherToHighlightPlayButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.CheckWhetherToHighlightPlayButton");
		
		AVH_YPlayerCtrl_Outpost_BP_C_CheckWhetherToHighlightPlayButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.HighlightResearchPurchaseButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::HighlightResearchPurchaseButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.HighlightResearchPurchaseButton");
		
		AVH_YPlayerCtrl_Outpost_BP_C_HighlightResearchPurchaseButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetResearchedT1Items
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    items                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::GetResearchedT1Items(TArray<int32_t>* items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetResearchedT1Items");
		
		AVH_YPlayerCtrl_Outpost_BP_C_GetResearchedT1Items_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (items != nullptr)
			*items = params.items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetUnresearchedT1Items
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    items                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::GetUnresearchedT1Items(TArray<int32_t>* items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetUnresearchedT1Items");
		
		AVH_YPlayerCtrl_Outpost_BP_C_GetUnresearchedT1Items_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (items != nullptr)
			*items = params.items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetResearchedT1Modules
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    ItemIds                                                    (Parm, OutParm, ZeroConstructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::GetResearchedT1Modules(TArray<int32_t>* ItemIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetResearchedT1Modules");
		
		AVH_YPlayerCtrl_Outpost_BP_C_GetResearchedT1Modules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemIds != nullptr)
			*ItemIds = params.ItemIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetT1ShipsWithResearchedT2Ships
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    items                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::GetT1ShipsWithResearchedT2Ships(TArray<int32_t>* items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetT1ShipsWithResearchedT2Ships");
		
		AVH_YPlayerCtrl_Outpost_BP_C_GetT1ShipsWithResearchedT2Ships_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (items != nullptr)
			*items = params.items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetT1ShipsWithResearchedT1Modules
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    items                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::GetT1ShipsWithResearchedT1Modules(TArray<int32_t>* items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetT1ShipsWithResearchedT1Modules");
		
		AVH_YPlayerCtrl_Outpost_BP_C_GetT1ShipsWithResearchedT1Modules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (items != nullptr)
			*items = params.items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InitializeAssetIdArrays
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InitializeAssetIdArrays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InitializeAssetIdArrays");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InitializeAssetIdArrays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToPurchaseT2Ship
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::GuideToPurchaseT2Ship()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToPurchaseT2Ship");
		
		AVH_YPlayerCtrl_Outpost_BP_C_GuideToPurchaseT2Ship_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToPurchaseT1Module
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::GuideToPurchaseT1Module()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToPurchaseT1Module");
		
		AVH_YPlayerCtrl_Outpost_BP_C_GuideToPurchaseT1Module_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SyncronizeNewPlayerOnboardingState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::SyncronizeNewPlayerOnboardingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SyncronizeNewPlayerOnboardingState");
		
		AVH_YPlayerCtrl_Outpost_BP_C_SyncronizeNewPlayerOnboardingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SkipNewPlayerOnboarding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::SkipNewPlayerOnboarding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SkipNewPlayerOnboarding");
		
		AVH_YPlayerCtrl_Outpost_BP_C_SkipNewPlayerOnboarding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToResearchT2Ship
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::GuideToResearchT2Ship()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToResearchT2Ship");
		
		AVH_YPlayerCtrl_Outpost_BP_C_GuideToResearchT2Ship_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToFullyResearchT1Ship
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::GuideToFullyResearchT1Ship()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToFullyResearchT1Ship");
		
		AVH_YPlayerCtrl_Outpost_BP_C_GuideToFullyResearchT1Ship_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToShipTechTrees
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    ShipsToGuideToT1ItemID                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<int32_t>                                    PurchaseScreenNotGuideFromITemID                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<int32_t>                                    PurchaseScreenToGuideDirectlyFromItemID                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               InCorrectTechTreeAlready                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::GuideToShipTechTrees(TArray<int32_t>* ShipsToGuideToT1ItemID, TArray<int32_t>* PurchaseScreenNotGuideFromITemID, TArray<int32_t>* PurchaseScreenToGuideDirectlyFromItemID, bool* InCorrectTechTreeAlready)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToShipTechTrees");
		
		AVH_YPlayerCtrl_Outpost_BP_C_GuideToShipTechTrees_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShipsToGuideToT1ItemID != nullptr)
			*ShipsToGuideToT1ItemID = params.ShipsToGuideToT1ItemID;
		if (PurchaseScreenNotGuideFromITemID != nullptr)
			*PurchaseScreenNotGuideFromITemID = params.PurchaseScreenNotGuideFromITemID;
		if (PurchaseScreenToGuideDirectlyFromItemID != nullptr)
			*PurchaseScreenToGuideDirectlyFromItemID = params.PurchaseScreenToGuideDirectlyFromItemID;
		if (InCorrectTechTreeAlready != nullptr)
			*InCorrectTechTreeAlready = params.InCorrectTechTreeAlready;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToPlay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HighlightGameModeSelection                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HighlightFleetSelection                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      HighlightGameMode                                          (Parm, ZeroConstructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::GuideToPlay(bool HighlightGameModeSelection, bool HighlightFleetSelection, const class FString& HighlightGameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToPlay");
		
		AVH_YPlayerCtrl_Outpost_BP_C_GuideToPlay_Params params {};
		params.HighlightGameModeSelection = HighlightGameModeSelection;
		params.HighlightFleetSelection = HighlightFleetSelection;
		params.HighlightGameMode = HighlightGameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToResearchT1Module
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::GuideToResearchT1Module()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToResearchT1Module");
		
		AVH_YPlayerCtrl_Outpost_BP_C_GuideToResearchT1Module_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.RemoveAllGuideCallouts
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::RemoveAllGuideCallouts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.RemoveAllGuideCallouts");
		
		AVH_YPlayerCtrl_Outpost_BP_C_RemoveAllGuideCallouts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.UserConstructionScript");
		
		AVH_YPlayerCtrl_Outpost_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_84
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_84(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_84");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_84_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_83
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_83(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_83");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_83_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_82
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_82(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_82");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_82_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_81
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_81(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_81");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_81_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_80
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_80(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_80");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_80_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_79
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_79(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_79");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_79_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_78
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_78(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_78");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_78_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_77
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_77(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_77");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_77_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_76
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_76(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_76");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_76_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_75
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_75(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_75");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_75_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_74
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_74(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_74");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_74_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_73
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_73(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_73");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_73_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_72
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_72(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_72");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_72_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_F12_K2Node_InputKeyEvent_71
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_F12_K2Node_InputKeyEvent_71(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_F12_K2Node_InputKeyEvent_71");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_F12_K2Node_InputKeyEvent_71_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_70
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_70(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_70");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_70_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_69
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_69(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_69");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_69_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Escape_K2Node_InputKeyEvent_68
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Escape_K2Node_InputKeyEvent_68(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Escape_K2Node_InputKeyEvent_68");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Escape_K2Node_InputKeyEvent_68_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_67
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_BackSpace_K2Node_InputKeyEvent_67(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_67");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_67_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_66
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_66(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_66");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_66_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_65
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_65(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_65");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_65_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_64
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_64(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_64");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_64_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_63
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_63(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_63");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_63_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_62
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_62(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_62");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_62_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_61
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_61(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_61");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_61_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_60
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_60(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_60");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_60_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_59
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_59(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_59");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_59_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_58
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_58(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_58");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_58_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_57
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_57(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_57");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_57_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightStick_Down_K2Node_InputKeyEvent_56
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_RightStick_Down_K2Node_InputKeyEvent_56(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightStick_Down_K2Node_InputKeyEvent_56");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_RightStick_Down_K2Node_InputKeyEvent_56_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_55
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_55(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_55");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_55_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightStick_Up_K2Node_InputKeyEvent_54
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_RightStick_Up_K2Node_InputKeyEvent_54(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightStick_Up_K2Node_InputKeyEvent_54");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_RightStick_Up_K2Node_InputKeyEvent_54_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_53
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_53(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_53");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_53_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_52
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_52(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_52");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_52_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_51
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_51(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_51");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_51_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_50
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_50(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_50");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_50_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_49
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_49(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_49");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_49_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_48
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_48(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_48");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_48_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_47
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_47(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_47");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_47_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_46
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_46(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_46");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_46_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_45
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_45(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_45");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_45_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_44
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_44(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_44");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_44_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_43
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_43(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_43");
		
		AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_43_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnGoalUIGuideEvent_Implemented
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        goalId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::OnGoalUIGuideEvent_Implemented(const class FName& goalId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnGoalUIGuideEvent_Implemented");
		
		AVH_YPlayerCtrl_Outpost_BP_C_OnGoalUIGuideEvent_Implemented_Params params {};
		params.goalId = goalId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnGoalUIGuideEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        goalId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::OnGoalUIGuideEvent(const class FName& goalId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnGoalUIGuideEvent");
		
		AVH_YPlayerCtrl_Outpost_BP_C_OnGoalUIGuideEvent_Params params {};
		params.goalId = goalId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnGoalCategoryUnlockedEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EYGoalCategory                                     Category                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::OnGoalCategoryUnlockedEvent(EYGoalCategory Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnGoalCategoryUnlockedEvent");
		
		AVH_YPlayerCtrl_Outpost_BP_C_OnGoalCategoryUnlockedEvent_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnGoalReadyToBeClaimedEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        goalId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::OnGoalReadyToBeClaimedEvent(const class FName& goalId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnGoalReadyToBeClaimedEvent");
		
		AVH_YPlayerCtrl_Outpost_BP_C_OnGoalReadyToBeClaimedEvent_Params params {};
		params.goalId = goalId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.RefreshGoalGuideHighlights
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::RefreshGoalGuideHighlights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.RefreshGoalGuideHighlights");
		
		AVH_YPlayerCtrl_Outpost_BP_C_RefreshGoalGuideHighlights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.PlayVO_AllGamesModesUnlocked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::PlayVO_AllGamesModesUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.PlayVO_AllGamesModesUnlocked");
		
		AVH_YPlayerCtrl_Outpost_BP_C_PlayVO_AllGamesModesUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.CareerGoals_ReactOnMenuStateChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::CareerGoals_ReactOnMenuStateChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.CareerGoals_ReactOnMenuStateChange");
		
		AVH_YPlayerCtrl_Outpost_BP_C_CareerGoals_ReactOnMenuStateChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetNoGoalGuide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::SetNoGoalGuide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetNoGoalGuide");
		
		AVH_YPlayerCtrl_Outpost_BP_C_SetNoGoalGuide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.RestartTimeOutTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::RestartTimeOutTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.RestartTimeOutTimer");
		
		AVH_YPlayerCtrl_Outpost_BP_C_RestartTimeOutTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpCareerGoalsOnboardingRules
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::SetUpCareerGoalsOnboardingRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpCareerGoalsOnboardingRules");
		
		AVH_YPlayerCtrl_Outpost_BP_C_SetUpCareerGoalsOnboardingRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnOnboardingEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        trigeredRule                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::OnOnboardingEvent(const class FName& trigeredRule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnOnboardingEvent");
		
		AVH_YPlayerCtrl_Outpost_BP_C_OnOnboardingEvent_Params params {};
		params.trigeredRule = trigeredRule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnLocalPlayerSet
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::OnLocalPlayerSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnLocalPlayerSet");
		
		AVH_YPlayerCtrl_Outpost_BP_C_OnLocalPlayerSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpRankReachedOnBoardingRules
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::SetUpRankReachedOnBoardingRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpRankReachedOnBoardingRules");
		
		AVH_YPlayerCtrl_Outpost_BP_C_SetUpRankReachedOnBoardingRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Ob_RankedUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Rule                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::Ob_RankedUp(const class FName& Rule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Ob_RankedUp");
		
		AVH_YPlayerCtrl_Outpost_BP_C_Ob_RankedUp_Params params {};
		params.Rule = Rule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.MenuStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYMenuState                                        newMenuState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::MenuStateChanged(EYMenuState newMenuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.MenuStateChanged");
		
		AVH_YPlayerCtrl_Outpost_BP_C_MenuStateChanged_Params params {};
		params.newMenuState = newMenuState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnOnboardingInitialized
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::OnOnboardingInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnOnboardingInitialized");
		
		AVH_YPlayerCtrl_Outpost_BP_C_OnOnboardingInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnGoalManagerInitialized
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::OnGoalManagerInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnGoalManagerInitialized");
		
		AVH_YPlayerCtrl_Outpost_BP_C_OnGoalManagerInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnMatchmakingStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EYMenuMatchMakingState                             NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::OnMatchmakingStateChanged(EYMenuMatchMakingState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnMatchmakingStateChanged");
		
		AVH_YPlayerCtrl_Outpost_BP_C_OnMatchmakingStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Debug_Ob_CharacterFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::Debug_Ob_CharacterFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Debug_Ob_CharacterFinished");
		
		AVH_YPlayerCtrl_Outpost_BP_C_Debug_Ob_CharacterFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Debug_Ob_CreatingCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::Debug_Ob_CreatingCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Debug_Ob_CreatingCharacter");
		
		AVH_YPlayerCtrl_Outpost_BP_C_Debug_Ob_CreatingCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.CheckWhetherToStartTutorial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::CheckWhetherToStartTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.CheckWhetherToStartTutorial");
		
		AVH_YPlayerCtrl_Outpost_BP_C_CheckWhetherToStartTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Debug_Ob_BackAfterFirstMatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::Debug_Ob_BackAfterFirstMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Debug_Ob_BackAfterFirstMatch");
		
		AVH_YPlayerCtrl_Outpost_BP_C_Debug_Ob_BackAfterFirstMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Debug_Ob_TutorialFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::Debug_Ob_TutorialFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Debug_Ob_TutorialFinished");
		
		AVH_YPlayerCtrl_Outpost_BP_C_Debug_Ob_TutorialFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpNewPlayerOnboardingRules
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::SetUpNewPlayerOnboardingRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpNewPlayerOnboardingRules");
		
		AVH_YPlayerCtrl_Outpost_BP_C_SetUpNewPlayerOnboardingRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpShipIntroductionOnboardingRules
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::SetUpShipIntroductionOnboardingRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpShipIntroductionOnboardingRules");
		
		AVH_YPlayerCtrl_Outpost_BP_C_SetUpShipIntroductionOnboardingRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpNewPlayerOnboardingRules_Copy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::SetUpNewPlayerOnboardingRules_Copy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpNewPlayerOnboardingRules_Copy");
		
		AVH_YPlayerCtrl_Outpost_BP_C_SetUpNewPlayerOnboardingRules_Copy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Debug_Ob_LoadoutExplanation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::Debug_Ob_LoadoutExplanation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Debug_Ob_LoadoutExplanation");
		
		AVH_YPlayerCtrl_Outpost_BP_C_Debug_Ob_LoadoutExplanation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpCustomizationOnboardingRules
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::SetUpCustomizationOnboardingRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpCustomizationOnboardingRules");
		
		AVH_YPlayerCtrl_Outpost_BP_C_SetUpCustomizationOnboardingRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpAdvancedOnboardingRules
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::SetUpAdvancedOnboardingRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpAdvancedOnboardingRules");
		
		AVH_YPlayerCtrl_Outpost_BP_C_SetUpAdvancedOnboardingRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpSocialLayerOnboardingRules
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::SetUpSocialLayerOnboardingRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpSocialLayerOnboardingRules");
		
		AVH_YPlayerCtrl_Outpost_BP_C_SetUpSocialLayerOnboardingRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Ob_ActivateGenericModuleBoughtFeedback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::Ob_ActivateGenericModuleBoughtFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Ob_ActivateGenericModuleBoughtFeedback");
		
		AVH_YPlayerCtrl_Outpost_BP_C_Ob_ActivateGenericModuleBoughtFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Ob_ActivateGenericShipBoughtFeedback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::Ob_ActivateGenericShipBoughtFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Ob_ActivateGenericShipBoughtFeedback");
		
		AVH_YPlayerCtrl_Outpost_BP_C_Ob_ActivateGenericShipBoughtFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Ob_ActivateGenericVanityItemBoughtFeedback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::Ob_ActivateGenericVanityItemBoughtFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Ob_ActivateGenericVanityItemBoughtFeedback");
		
		AVH_YPlayerCtrl_Outpost_BP_C_Ob_ActivateGenericVanityItemBoughtFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetupPurchaseFeedbackOnboardingRules
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::SetupPurchaseFeedbackOnboardingRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetupPurchaseFeedbackOnboardingRules");
		
		AVH_YPlayerCtrl_Outpost_BP_C_SetupPurchaseFeedbackOnboardingRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.ReceiveTick");
		
		AVH_YPlayerCtrl_Outpost_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.ExecuteUbergraph_VH_YPlayerCtrl_Outpost_BP
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::ExecuteUbergraph_VH_YPlayerCtrl_Outpost_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.ExecuteUbergraph_VH_YPlayerCtrl_Outpost_BP");
		
		AVH_YPlayerCtrl_Outpost_BP_C_ExecuteUbergraph_VH_YPlayerCtrl_Outpost_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnMouseButtonReleased__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AVH_YPlayerCtrl_Outpost_BP_C::OnMouseButtonReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnMouseButtonReleased__DelegateSignature");
		
		AVH_YPlayerCtrl_Outpost_BP_C_OnMouseButtonReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVH_YPlayerCtrl_Outpost_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVH_YPlayerCtrl_Outpost_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C");
		return ptr;
	}

}


