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
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.SaveFavoritesSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_SelectGameMode_C::SaveFavoritesSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.SaveFavoritesSettings");
		
		UUI_Screen_SelectGameMode_C_SaveFavoritesSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.GameModeFavoriteClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFavorite                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FYMenuGameModeDefinition                    GameMode                                                   (Parm)
	 */
	void UUI_Screen_SelectGameMode_C::GameModeFavoriteClicked(bool isFavorite, const struct FYMenuGameModeDefinition& GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.GameModeFavoriteClicked");
		
		UUI_Screen_SelectGameMode_C_GameModeFavoriteClicked_Params params {};
		params.isFavorite = isFavorite;
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.AttemptWidgetFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_Button_SelectGameMode_C*                 GameModeButton                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_SelectGameMode_C::AttemptWidgetFocus(int32_t index, class UUI_Button_SelectGameMode_C* GameModeButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.AttemptWidgetFocus");
		
		UUI_Screen_SelectGameMode_C_AttemptWidgetFocus_Params params {};
		params.index = index;
		params.GameModeButton = GameModeButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.SetWidgetFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             NewFocusWidget                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_SelectGameMode_C::SetWidgetFocus(class UUI_DreadWidget* NewFocusWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.SetWidgetFocus");
		
		UUI_Screen_SelectGameMode_C_SetWidgetFocus_Params params {};
		params.NewFocusWidget = NewFocusWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.HandleRightGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_SelectGameMode_C::HandleRightGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.HandleRightGranular");
		
		UUI_Screen_SelectGameMode_C_HandleRightGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.HandleDownGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_SelectGameMode_C::HandleDownGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.HandleDownGranular");
		
		UUI_Screen_SelectGameMode_C_HandleDownGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.HandleUpGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_SelectGameMode_C::HandleUpGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.HandleUpGranular");
		
		UUI_Screen_SelectGameMode_C_HandleUpGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.HandleLeftGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_SelectGameMode_C::HandleLeftGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.HandleLeftGranular");
		
		UUI_Screen_SelectGameMode_C_HandleLeftGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_SelectGameMode_C::HandleInput(EUI_MenuActions GamePadInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.HandleInput");
		
		UUI_Screen_SelectGameMode_C_HandleInput_Params params {};
		params.GamePadInput = GamePadInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.GameModeButtonClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYMenuGameModeDefinition                    GameMode                                                   (Parm)
	 */
	void UUI_Screen_SelectGameMode_C::GameModeButtonClicked(const struct FYMenuGameModeDefinition& GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.GameModeButtonClicked");
		
		UUI_Screen_SelectGameMode_C_GameModeButtonClicked_Params params {};
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.BuildGameModeList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_SelectGameMode_C::BuildGameModeList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.BuildGameModeList");
		
		UUI_Screen_SelectGameMode_C_BuildGameModeList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_SelectGameMode_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.Construct");
		
		UUI_Screen_SelectGameMode_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_SelectGameMode_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.OnTransitionIn");
		
		UUI_Screen_SelectGameMode_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_SelectGameMode_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.OnTransitionOut");
		
		UUI_Screen_SelectGameMode_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.TransitionInAnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_SelectGameMode_C::TransitionInAnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.TransitionInAnimComplete");
		
		UUI_Screen_SelectGameMode_C_TransitionInAnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.TransitionOutAnimComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_SelectGameMode_C::TransitionOutAnimComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.TransitionOutAnimComplete");
		
		UUI_Screen_SelectGameMode_C_TransitionOutAnimComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.UpdateCurrentlyFocusedItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             FocusedItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_SelectGameMode_C::UpdateCurrentlyFocusedItem(class UUI_DreadWidget* FocusedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.UpdateCurrentlyFocusedItem");
		
		UUI_Screen_SelectGameMode_C_UpdateCurrentlyFocusedItem_Params params {};
		params.FocusedItem = FocusedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_SelectGameMode_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.OnNavigationEvent");
		
		UUI_Screen_SelectGameMode_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.ExecuteUbergraph_UI_Screen_SelectGameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_SelectGameMode_C::ExecuteUbergraph_UI_Screen_SelectGameMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C.ExecuteUbergraph_UI_Screen_SelectGameMode");
		
		UUI_Screen_SelectGameMode_C_ExecuteUbergraph_UI_Screen_SelectGameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_SelectGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_SelectGameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C");
		return ptr;
	}

}


