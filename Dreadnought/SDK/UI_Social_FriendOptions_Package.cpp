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
	 * 		Name   -> Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.NavOptionAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_FriendOptions_C::NavOptionAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.NavOptionAction");
		
		UUI_Social_FriendOptions_C_NavOptionAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.HandleOptionUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_FriendOptions_C::HandleOptionUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.HandleOptionUnfocus");
		
		UUI_Social_FriendOptions_C_HandleOptionUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.HandleOptionFocus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             FocusedWidget                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_FriendOptions_C::HandleOptionFocus(class UUI_DreadWidget** FocusedWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.HandleOptionFocus");
		
		UUI_Social_FriendOptions_C_HandleOptionFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FocusedWidget != nullptr)
			*FocusedWidget = params.FocusedWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.NavDownGranular
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             SelectedWidget                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_FriendOptions_C::NavDownGranular(class UUI_DreadWidget** SelectedWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.NavDownGranular");
		
		UUI_Social_FriendOptions_C_NavDownGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedWidget != nullptr)
			*SelectedWidget = params.SelectedWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.NavUpGranular
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             SelectedWidget                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_FriendOptions_C::NavUpGranular(class UUI_DreadWidget** SelectedWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.NavUpGranular");
		
		UUI_Social_FriendOptions_C_NavUpGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedWidget != nullptr)
			*SelectedWidget = params.SelectedWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Social_FriendOptions_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.HandleFocus");
		
		UUI_Social_FriendOptions_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.GetClickedOption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_IconText_C*               SelectedOption                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EFriendOptionButton                                FoundOption                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_FriendOptions_C::GetClickedOption(class UUI_Generic_Button_IconText_C* SelectedOption, EFriendOptionButton* FoundOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.GetClickedOption");
		
		UUI_Social_FriendOptions_C_GetClickedOption_Params params {};
		params.SelectedOption = SelectedOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundOption != nullptr)
			*FoundOption = params.FoundOption;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.SetOptionsData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        UserName                                                   (Parm)
	 * 		TArray<EFriendOptionButton>                        OptionList                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Social_FriendOptions_C::SetOptionsData(const class FText& UserName, TArray<EFriendOptionButton>* OptionList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.SetOptionsData");
		
		UUI_Social_FriendOptions_C_SetOptionsData_Params params {};
		params.UserName = UserName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OptionList != nullptr)
			*OptionList = params.OptionList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.OnClickedOption
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_IconText_C*               source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_FriendOptions_C::OnClickedOption(class UUI_Generic_Button_IconText_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.OnClickedOption");
		
		UUI_Social_FriendOptions_C_OnClickedOption_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Social_FriendOptions_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.Construct");
		
		UUI_Social_FriendOptions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.OnHoveredOption
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_IconText_C*               source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_FriendOptions_C::OnHoveredOption(class UUI_Generic_Button_IconText_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.OnHoveredOption");
		
		UUI_Social_FriendOptions_C_OnHoveredOption_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.OnUnHoveredOption
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Generic_Button_IconText_C*               source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_FriendOptions_C::OnUnHoveredOption(class UUI_Generic_Button_IconText_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.OnUnHoveredOption");
		
		UUI_Social_FriendOptions_C_OnUnHoveredOption_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.ExecuteUbergraph_UI_Social_FriendOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_FriendOptions_C::ExecuteUbergraph_UI_Social_FriendOptions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.ExecuteUbergraph_UI_Social_FriendOptions");
		
		UUI_Social_FriendOptions_C_ExecuteUbergraph_UI_Social_FriendOptions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.OnOptionClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EFriendOptionButton                                SelectedOption                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Social_FriendOptions_C::OnOptionClicked__DelegateSignature(EFriendOptionButton SelectedOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Social_FriendOptions.UI_Social_FriendOptions_C.OnOptionClicked__DelegateSignature");
		
		UUI_Social_FriendOptions_C_OnOptionClicked__DelegateSignature_Params params {};
		params.SelectedOption = SelectedOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Social_FriendOptions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Social_FriendOptions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Social_FriendOptions.UI_Social_FriendOptions_C");
		return ptr;
	}

}


