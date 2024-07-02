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
	 * 		Name   -> Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.GetSocialSection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESocialSection                                     SocialSection                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_FriendSectionHeader_C::GetSocialSection(ESocialSection* SocialSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.GetSocialSection");
		
		UUI_Button_FriendSectionHeader_C_GetSocialSection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SocialSection != nullptr)
			*SocialSection = params.SocialSection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.SetSectionCount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_FriendSectionHeader_C::SetSectionCount(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.SetSectionCount");
		
		UUI_Button_FriendSectionHeader_C_SetSectionCount_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.BndEvt__HeaderButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Button_FriendSectionHeader_C::BndEvt__HeaderButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.BndEvt__HeaderButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Button_FriendSectionHeader_C_BndEvt__HeaderButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Button_FriendSectionHeader_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.Construct");
		
		UUI_Button_FriendSectionHeader_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.ExecuteUbergraph_UI_Button_FriendSectionHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_FriendSectionHeader_C::ExecuteUbergraph_UI_Button_FriendSectionHeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.ExecuteUbergraph_UI_Button_FriendSectionHeader");
		
		UUI_Button_FriendSectionHeader_C_ExecuteUbergraph_UI_Button_FriendSectionHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.OnHeaderClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_FriendSectionHeader_C*            HeaderWidget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_FriendSectionHeader_C::OnHeaderClicked__DelegateSignature(class UUI_Button_FriendSectionHeader_C* HeaderWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C.OnHeaderClicked__DelegateSignature");
		
		UUI_Button_FriendSectionHeader_C_OnHeaderClicked__DelegateSignature_Params params {};
		params.HeaderWidget = HeaderWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Button_FriendSectionHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Button_FriendSectionHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Button_FriendSectionHeader.UI_Button_FriendSectionHeader_C");
		return ptr;
	}

}


