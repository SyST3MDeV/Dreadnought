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
	 * 		Name   -> Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.Setup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UNotificationData*                           NotificationData                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Notifications_MessagePanel_FriendInvite_C::Setup(class UNotificationData* NotificationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.Setup");
		
		UUI_Notifications_MessagePanel_FriendInvite_C_Setup_Params params {};
		params.NotificationData = NotificationData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.FormatDateTimeString
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FDateTime                                   InDateTime                                                 (Parm, ZeroConstructor)
	 */
	class FText UUI_Notifications_MessagePanel_FriendInvite_C::FormatDateTimeString(const struct FDateTime& InDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.FormatDateTimeString");
		
		UUI_Notifications_MessagePanel_FriendInvite_C_FormatDateTimeString_Params params {};
		params.InDateTime = InDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.OnShow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Notifications_MessagePanel_FriendInvite_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.OnShow");
		
		UUI_Notifications_MessagePanel_FriendInvite_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.OnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Notifications_MessagePanel_FriendInvite_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.OnHide");
		
		UUI_Notifications_MessagePanel_FriendInvite_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.NotificationDataReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UNotificationData*                           NotificationData                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Notifications_MessagePanel_FriendInvite_C::NotificationDataReceived(class UNotificationData* NotificationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.NotificationDataReceived");
		
		UUI_Notifications_MessagePanel_FriendInvite_C_NotificationDataReceived_Params params {};
		params.NotificationData = NotificationData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.ExecuteUbergraph_UI_Notifications_MessagePanel_FriendInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Notifications_MessagePanel_FriendInvite_C::ExecuteUbergraph_UI_Notifications_MessagePanel_FriendInvite(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C.ExecuteUbergraph_UI_Notifications_MessagePanel_FriendInvite");
		
		UUI_Notifications_MessagePanel_FriendInvite_C_ExecuteUbergraph_UI_Notifications_MessagePanel_FriendInvite_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Notifications_MessagePanel_FriendInvite_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Notifications_MessagePanel_FriendInvite_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Notifications_MessagePanel_FriendInvite.UI_Notifications_MessagePanel_FriendInvite_C");
		return ptr;
	}

}


