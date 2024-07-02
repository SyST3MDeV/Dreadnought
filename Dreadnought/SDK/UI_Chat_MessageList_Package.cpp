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
	 * 		Name   -> Function UI_Chat_MessageList.UI_Chat_MessageList_C.HandleScrollToEndDelayFrames
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Chat_MessageList_C::HandleScrollToEndDelayFrames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Chat_MessageList.UI_Chat_MessageList_C.HandleScrollToEndDelayFrames");
		
		UUI_Chat_MessageList_C_HandleScrollToEndDelayFrames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Chat_MessageList.UI_Chat_MessageList_C.GetFontColorForChatType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EChatType                                          ChatType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                FontColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Chat_MessageList_C::GetFontColorForChatType(EChatType ChatType, struct FLinearColor* FontColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Chat_MessageList.UI_Chat_MessageList_C.GetFontColorForChatType");
		
		UUI_Chat_MessageList_C_GetFontColorForChatType_Params params {};
		params.ChatType = ChatType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FontColor != nullptr)
			*FontColor = params.FontColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Chat_MessageList.UI_Chat_MessageList_C.PopulateMessages
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Chat_MessageList_C::PopulateMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Chat_MessageList.UI_Chat_MessageList_C.PopulateMessages");
		
		UUI_Chat_MessageList_C_PopulateMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Chat_MessageList.UI_Chat_MessageList_C.UserNameClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Chat_Row_C*                              ChatRow                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Chat_MessageList_C::UserNameClicked(class UUI_Chat_Row_C* ChatRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Chat_MessageList.UI_Chat_MessageList_C.UserNameClicked");
		
		UUI_Chat_MessageList_C_UserNameClicked_Params params {};
		params.ChatRow = ChatRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Chat_MessageList.UI_Chat_MessageList_C.ClipListSize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Chat_MessageList_C::ClipListSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Chat_MessageList.UI_Chat_MessageList_C.ClipListSize");
		
		UUI_Chat_MessageList_C_ClipListSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Chat_MessageList.UI_Chat_MessageList_C.AddChatMessage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FChatMessageDefinition                      ChatMessage                                                (Parm)
	 */
	void UUI_Chat_MessageList_C::AddChatMessage(const struct FChatMessageDefinition& ChatMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Chat_MessageList.UI_Chat_MessageList_C.AddChatMessage");
		
		UUI_Chat_MessageList_C_AddChatMessage_Params params {};
		params.ChatMessage = ChatMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Chat_MessageList.UI_Chat_MessageList_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Chat_MessageList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Chat_MessageList.UI_Chat_MessageList_C.Construct");
		
		UUI_Chat_MessageList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Chat_MessageList.UI_Chat_MessageList_C.ChatMessagesChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Chat_MessageList_C::ChatMessagesChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Chat_MessageList.UI_Chat_MessageList_C.ChatMessagesChanged");
		
		UUI_Chat_MessageList_C_ChatMessagesChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Chat_MessageList.UI_Chat_MessageList_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Chat_MessageList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Chat_MessageList.UI_Chat_MessageList_C.Tick");
		
		UUI_Chat_MessageList_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Chat_MessageList.UI_Chat_MessageList_C.ExecuteUbergraph_UI_Chat_MessageList
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Chat_MessageList_C::ExecuteUbergraph_UI_Chat_MessageList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Chat_MessageList.UI_Chat_MessageList_C.ExecuteUbergraph_UI_Chat_MessageList");
		
		UUI_Chat_MessageList_C_ExecuteUbergraph_UI_Chat_MessageList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Chat_MessageList.UI_Chat_MessageList_C.OnUserNameClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Chat_Row_C*                              ChatRow                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Chat_MessageList_C::OnUserNameClicked__DelegateSignature(class UUI_Chat_Row_C* ChatRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Chat_MessageList.UI_Chat_MessageList_C.OnUserNameClicked__DelegateSignature");
		
		UUI_Chat_MessageList_C_OnUserNameClicked__DelegateSignature_Params params {};
		params.ChatRow = ChatRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Chat_MessageList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Chat_MessageList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Chat_MessageList.UI_Chat_MessageList_C");
		return ptr;
	}

}


