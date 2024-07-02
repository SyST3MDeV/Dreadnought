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
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.StopMessageAvailableAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_Chat_C::StopMessageAvailableAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.StopMessageAvailableAnim");
		
		UUI_Persistent_Chat_C_StopMessageAvailableAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.PlayMessageAvailableLoop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_Chat_C::PlayMessageAvailableLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.PlayMessageAvailableLoop");
		
		UUI_Persistent_Chat_C_PlayMessageAvailableLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.PlayMessageReceivedAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_Chat_C::PlayMessageReceivedAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.PlayMessageReceivedAnim");
		
		UUI_Persistent_Chat_C_PlayMessageReceivedAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.TruncateText 
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm)
	 * 		class FText                                        TruncatedText                                              (Parm, OutParm)
	 */
	void UUI_Persistent_Chat_C::TruncateText(const class FText& Text, class FText* TruncatedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.TruncateText ");
		
		UUI_Persistent_Chat_C_TruncateText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TruncatedText != nullptr)
			*TruncatedText = params.TruncatedText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.SetSelectedRoom
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Chat_C::SetSelectedRoom(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.SetSelectedRoom");
		
		UUI_Persistent_Chat_C_SetSelectedRoom_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.GetSlateColorFromTabIndex
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSlateColor                                 Color                                                      (Parm, OutParm)
	 */
	void UUI_Persistent_Chat_C::GetSlateColorFromTabIndex(int32_t index, struct FSlateColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.GetSlateColorFromTabIndex");
		
		UUI_Persistent_Chat_C_GetSlateColorFromTabIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.IsChatWindowClosable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ERoomType                                          RoomType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Chat_C::IsChatWindowClosable(ERoomType RoomType, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.IsChatWindowClosable");
		
		UUI_Persistent_Chat_C_IsChatWindowClosable_Params params {};
		params.RoomType = RoomType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.CloseTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Tab_Chat_C*                       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Chat_C::CloseTab(class UUI_Button_Tab_Chat_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.CloseTab");
		
		UUI_Persistent_Chat_C_CloseTab_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.SetupPersistentChat
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_Chat_C::SetupPersistentChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.SetupPersistentChat");
		
		UUI_Persistent_Chat_C_SetupPersistentChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.SetChatIconArrows
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_Chat_C::SetChatIconArrows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.SetChatIconArrows");
		
		UUI_Persistent_Chat_C_SetChatIconArrows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.ScrollTabs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsScrollLeft                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Chat_C::ScrollTabs(bool IsScrollLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.ScrollTabs");
		
		UUI_Persistent_Chat_C_ScrollTabs_Params params {};
		params.IsScrollLeft = IsScrollLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.SetTabScrollButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_Chat_C::SetTabScrollButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.SetTabScrollButtonVisibility");
		
		UUI_Persistent_Chat_C_SetTabScrollButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.SendChat
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_Chat_C::SendChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.SendChat");
		
		UUI_Persistent_Chat_C_SendChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.CreateMessageList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_Chat_C::CreateMessageList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.CreateMessageList");
		
		UUI_Persistent_Chat_C_CreateMessageList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.CreateSocialDropdown
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FUI_Struct_TabButtonData>            Options                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Persistent_Chat_C::CreateSocialDropdown(const struct FVector2D& Position, TArray<struct FUI_Struct_TabButtonData>* Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.CreateSocialDropdown");
		
		UUI_Persistent_Chat_C_CreateSocialDropdown_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Options != nullptr)
			*Options = params.Options;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.SocialDropdownOptionClicked
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Chat_C::SocialDropdownOptionClicked(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.SocialDropdownOptionClicked");
		
		UUI_Persistent_Chat_C_SocialDropdownOptionClicked_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.DestroySocialDropdown
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_Chat_C::DestroySocialDropdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.DestroySocialDropdown");
		
		UUI_Persistent_Chat_C_DestroySocialDropdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.UserNameClicked
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Chat_Row_C*                              ChatRow                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Chat_C::UserNameClicked(class UUI_Chat_Row_C* ChatRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.UserNameClicked");
		
		UUI_Persistent_Chat_C_UserNameClicked_Params params {};
		params.ChatRow = ChatRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.UpdateTabs
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FChatRoomDefinition>                 Rooms                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Persistent_Chat_C::UpdateTabs(TArray<struct FChatRoomDefinition>* Rooms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.UpdateTabs");
		
		UUI_Persistent_Chat_C_UpdateTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rooms != nullptr)
			*Rooms = params.Rooms;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.UpdateRooms
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_Chat_C::UpdateRooms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.UpdateRooms");
		
		UUI_Persistent_Chat_C_UpdateRooms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.Show
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Chat_C::Show(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.Show");
		
		UUI_Persistent_Chat_C_Show_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Persistent_Chat_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.Construct");
		
		UUI_Persistent_Chat_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__ChatToggle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Persistent_Chat_C::BndEvt__ChatToggle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__ChatToggle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Persistent_Chat_C_BndEvt__ChatToggle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__InputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Chat_C::BndEvt__InputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__InputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UUI_Persistent_Chat_C_BndEvt__InputBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.ChatRoomsChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Persistent_Chat_C::ChatRoomsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.ChatRoomsChanged");
		
		UUI_Persistent_Chat_C_ChatRoomsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Persistent_Chat_C::BndEvt__SendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Persistent_Chat_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__Button_Tabs_ScrollRight_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Persistent_Chat_C::BndEvt__Button_Tabs_ScrollRight_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__Button_Tabs_ScrollRight_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Persistent_Chat_C_BndEvt__Button_Tabs_ScrollRight_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__Button_Tabs_ScrollLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Persistent_Chat_C::BndEvt__Button_Tabs_ScrollLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__Button_Tabs_ScrollLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Persistent_Chat_C_BndEvt__Button_Tabs_ScrollLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__UI_TabList_Scrolling_Chat_K2Node_ComponentBoundEvent_96_OnTabClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TabIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Chat_C::BndEvt__UI_TabList_Scrolling_Chat_K2Node_ComponentBoundEvent_96_OnTabClicked__DelegateSignature(int32_t TabIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__UI_TabList_Scrolling_Chat_K2Node_ComponentBoundEvent_96_OnTabClicked__DelegateSignature");
		
		UUI_Persistent_Chat_C_BndEvt__UI_TabList_Scrolling_Chat_K2Node_ComponentBoundEvent_96_OnTabClicked__DelegateSignature_Params params {};
		params.TabIndex = TabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__UI_TabList_Scrolling_Chat_K2Node_ComponentBoundEvent_147_OnTabCloseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Tab_Chat_C*                       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Chat_C::BndEvt__UI_TabList_Scrolling_Chat_K2Node_ComponentBoundEvent_147_OnTabCloseButtonClicked__DelegateSignature(class UUI_Button_Tab_Chat_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.BndEvt__UI_TabList_Scrolling_Chat_K2Node_ComponentBoundEvent_147_OnTabCloseButtonClicked__DelegateSignature");
		
		UUI_Persistent_Chat_C_BndEvt__UI_TabList_Scrolling_Chat_K2Node_ComponentBoundEvent_147_OnTabCloseButtonClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.ShowChatWidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            roomIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Chat_C::ShowChatWidget(int32_t roomIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.ShowChatWidget");
		
		UUI_Persistent_Chat_C_ShowChatWidget_Params params {};
		params.roomIndex = roomIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.HandleChatMessageReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            roomIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Chat_C::HandleChatMessageReceived(int32_t roomIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.HandleChatMessageReceived");
		
		UUI_Persistent_Chat_C_HandleChatMessageReceived_Params params {};
		params.roomIndex = roomIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Chat.UI_Persistent_Chat_C.ExecuteUbergraph_UI_Persistent_Chat
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Chat_C::ExecuteUbergraph_UI_Persistent_Chat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Chat.UI_Persistent_Chat_C.ExecuteUbergraph_UI_Persistent_Chat");
		
		UUI_Persistent_Chat_C_ExecuteUbergraph_UI_Persistent_Chat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Persistent_Chat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Persistent_Chat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Persistent_Chat.UI_Persistent_Chat_C");
		return ptr;
	}

}


