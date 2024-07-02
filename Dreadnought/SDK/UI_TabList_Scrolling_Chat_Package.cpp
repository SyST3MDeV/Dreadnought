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
	 * 		Name   -> Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.HandleMessageReceived
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            roomIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TabList_Scrolling_Chat_C::HandleMessageReceived(int32_t roomIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.HandleMessageReceived");
		
		UUI_TabList_Scrolling_Chat_C_HandleMessageReceived_Params params {};
		params.roomIndex = roomIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.TabCloseButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Tab_Chat_C*                       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TabList_Scrolling_Chat_C::TabCloseButtonClicked(class UUI_Button_Tab_Chat_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.TabCloseButtonClicked");
		
		UUI_TabList_Scrolling_Chat_C_TabCloseButtonClicked_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.TabClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TabList_Scrolling_Chat_C::TabClicked(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.TabClicked");
		
		UUI_TabList_Scrolling_Chat_C_TabClicked_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.SetTabs
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FUI_Struct_TabButtonData>            Tabs                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            selectedIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TabList_Scrolling_Chat_C::SetTabs(TArray<struct FUI_Struct_TabButtonData>* Tabs, int32_t selectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.SetTabs");
		
		UUI_TabList_Scrolling_Chat_C_SetTabs_Params params {};
		params.selectedIndex = selectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tabs != nullptr)
			*Tabs = params.Tabs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.OnTabCloseButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Tab_Chat_C*                       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TabList_Scrolling_Chat_C::OnTabCloseButtonClicked__DelegateSignature(class UUI_Button_Tab_Chat_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.OnTabCloseButtonClicked__DelegateSignature");
		
		UUI_TabList_Scrolling_Chat_C_OnTabCloseButtonClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.OnTabClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TabIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TabList_Scrolling_Chat_C::OnTabClicked__DelegateSignature(int32_t TabIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C.OnTabClicked__DelegateSignature");
		
		UUI_TabList_Scrolling_Chat_C_OnTabClicked__DelegateSignature_Params params {};
		params.TabIndex = TabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TabList_Scrolling_Chat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TabList_Scrolling_Chat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C");
		return ptr;
	}

}


