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
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.EnableFavoriteButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               enableFavorite                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_SelectGameMode_C::EnableFavoriteButton(bool enableFavorite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.EnableFavoriteButton");
		
		UUI_Button_SelectGameMode_C_EnableFavoriteButton_Params params {};
		params.enableFavorite = enableFavorite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.ToggleIsFavorited
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectGameMode_C::ToggleIsFavorited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.ToggleIsFavorited");
		
		UUI_Button_SelectGameMode_C_ToggleIsFavorited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.UpdateIsFavorited
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFavorited                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_SelectGameMode_C::UpdateIsFavorited(bool isFavorited)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.UpdateIsFavorited");
		
		UUI_Button_SelectGameMode_C_UpdateIsFavorited_Params params {};
		params.isFavorited = isFavorited;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectGameMode_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.Action");
		
		UUI_Button_SelectGameMode_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectGameMode_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.HandleUnfocus");
		
		UUI_Button_SelectGameMode_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_SelectGameMode_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.HandleFocus");
		
		UUI_Button_SelectGameMode_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.InitializeButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYMenuGameModeDefinition                    GM                                                         (Parm)
	 */
	void UUI_Button_SelectGameMode_C::InitializeButton(const struct FYMenuGameModeDefinition& GM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.InitializeButton");
		
		UUI_Button_SelectGameMode_C_InitializeButton_Params params {};
		params.GM = GM;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Button_SelectGameMode_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.Construct");
		
		UUI_Button_SelectGameMode_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_SelectGameMode_C::BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Button_SelectGameMode_C_BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_SelectGameMode_C::BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Button_SelectGameMode_C_BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_SelectGameMode_C::BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Button_SelectGameMode_C_BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Button_SelectGameMode_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.OnActionReceived");
		
		UUI_Button_SelectGameMode_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_SelectGameMode_C::BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Button_SelectGameMode_C_BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.ExecuteUbergraph_UI_Button_SelectGameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_SelectGameMode_C::ExecuteUbergraph_UI_Button_SelectGameMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.ExecuteUbergraph_UI_Button_SelectGameMode");
		
		UUI_Button_SelectGameMode_C_ExecuteUbergraph_UI_Button_SelectGameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.OnFavoriteClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFavorite                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FYMenuGameModeDefinition                    GameMode                                                   (Parm)
	 */
	void UUI_Button_SelectGameMode_C::OnFavoriteClicked__DelegateSignature(bool isFavorite, const struct FYMenuGameModeDefinition& GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.OnFavoriteClicked__DelegateSignature");
		
		UUI_Button_SelectGameMode_C_OnFavoriteClicked__DelegateSignature_Params params {};
		params.isFavorite = isFavorite;
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.OnReceivedFocus__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_SelectGameMode_C::OnReceivedFocus__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.OnReceivedFocus__DelegateSignature");
		
		UUI_Button_SelectGameMode_C_OnReceivedFocus__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.OnClick__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYMenuGameModeDefinition                    GameMode                                                   (Parm)
	 */
	void UUI_Button_SelectGameMode_C::OnClick__DelegateSignature(const struct FYMenuGameModeDefinition& GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.OnClick__DelegateSignature");
		
		UUI_Button_SelectGameMode_C_OnClick__DelegateSignature_Params params {};
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Button_SelectGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Button_SelectGameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Button_SelectGameMode.UI_Button_SelectGameMode_C");
		return ptr;
	}

}


