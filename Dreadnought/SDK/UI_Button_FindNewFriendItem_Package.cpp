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
	 * 		Name   -> Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.IsPlayerAlreadyInvited
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isInvited                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_FindNewFriendItem_C::IsPlayerAlreadyInvited(bool* isInvited)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.IsPlayerAlreadyInvited");
		
		UUI_Button_FindNewFriendItem_C_IsPlayerAlreadyInvited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isInvited != nullptr)
			*isInvited = params.isInvited;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.ToggleCheckMark
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_FindNewFriendItem_C::ToggleCheckMark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.ToggleCheckMark");
		
		UUI_Button_FindNewFriendItem_C_ToggleCheckMark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.On_CheckMark_MouseButtonDown
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_Button_FindNewFriendItem_C::On_CheckMark_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.On_CheckMark_MouseButtonDown");
		
		UUI_Button_FindNewFriendItem_C_On_CheckMark_MouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.GetUserId
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_FindNewFriendItem_C::GetUserId(class FName* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.GetUserId");
		
		UUI_Button_FindNewFriendItem_C_GetUserId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.IsInviteButtonChecked
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_FindNewFriendItem_C::IsInviteButtonChecked(bool* IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.IsInviteButtonChecked");
		
		UUI_Button_FindNewFriendItem_C_IsInviteButtonChecked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsChecked != nullptr)
			*IsChecked = params.IsChecked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Button_FindNewFriendItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.Construct");
		
		UUI_Button_FindNewFriendItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.OnCheckBoxClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Button_FindNewFriendItem_C::OnCheckBoxClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.OnCheckBoxClicked");
		
		UUI_Button_FindNewFriendItem_C_OnCheckBoxClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.ExecuteUbergraph_UI_Button_FindNewFriendItem
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_FindNewFriendItem_C::ExecuteUbergraph_UI_Button_FindNewFriendItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C.ExecuteUbergraph_UI_Button_FindNewFriendItem");
		
		UUI_Button_FindNewFriendItem_C_ExecuteUbergraph_UI_Button_FindNewFriendItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Button_FindNewFriendItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Button_FindNewFriendItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Button_FindNewFriendItem.UI_Button_FindNewFriendItem_C");
		return ptr;
	}

}


